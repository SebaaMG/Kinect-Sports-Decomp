// Export bounded C for a list of function addresses in one Ghidra process.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.database.SpecExtension;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.FlowOverride;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.data.FloatDataType;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.UnsignedIntegerDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.CharDataType;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.ParameterImpl;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.PcodeOpAST;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.SourceType;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;

record SwitchOverride(long branch, ArrayList<Address> targets) {}

public class DecompileBatch extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2 || args.length > 13) {
            throw new IllegalArgumentException("Usage: DecompileBatch.java <address-list> <output-dir> [--mask-save-helper-calls] [--type-known-floats] [--type-boxing-camera] [--type-known-crt] [--type-sport-selector] [--export-pcode] [--preserve-noreturn] [--clear-all-noreturn] [--switch-overrides=path]");
        }
        boolean maskSaveCalls = false;
        boolean maskFprCalls = false;
        boolean xenonStackAbi = false;
        boolean typeKnownFloats = false;
        boolean typeBoxingCamera = false;
        boolean typeKnownCrt = false;
        boolean typeSportSelector = false;
        boolean exportPcode = false;
        boolean preserveNoReturn = true;
        boolean clearKnownFalseNoReturn = true;
        Path switchManifest = null;
        for (int i = 2; i < args.length; i++) {
            if (args[i].equals("--mask-save-helper-calls")) maskSaveCalls = true;
            else if (args[i].equals("--mask-fpr-helper-calls")) maskFprCalls = true;
            else if (args[i].equals("--xenon-stack-abi")) xenonStackAbi = true;
            else if (args[i].equals("--type-known-floats")) typeKnownFloats = true;
            else if (args[i].equals("--type-boxing-camera")) typeBoxingCamera = true;
            else if (args[i].equals("--type-known-crt")) typeKnownCrt = true;
            else if (args[i].equals("--type-sport-selector")) typeSportSelector = true;
            else if (args[i].equals("--export-pcode")) exportPcode = true;
            else if (args[i].equals("--preserve-noreturn")) clearKnownFalseNoReturn = false;
            else if (args[i].equals("--clear-all-noreturn")) {
                preserveNoReturn = false;
                clearKnownFalseNoReturn = false;
            }
            else if (args[i].startsWith("--switch-overrides="))
                switchManifest = Path.of(args[i].substring("--switch-overrides=".length()));
            else throw new IllegalArgumentException("Unknown option: " + args[i]);
        }
        Map<Long, SwitchOverride> switchOverrides = new HashMap<>();
        if (switchManifest != null) {
            for (String line : Files.readAllLines(switchManifest, StandardCharsets.UTF_8)) {
                String[] fields = line.trim().split("\\s+", 4);
                if (fields.length != 4) throw new IllegalArgumentException("Bad switch override: " + line);
                long start = Long.decode(fields[0]);
                long branch = Long.decode(fields[2]);
                ArrayList<Address> targets = new ArrayList<>();
                for (String target : fields[3].split(",")) targets.add(toAddr(Long.decode(target)));
                if (targets.size() < 2 || switchOverrides.put(start, new SwitchOverride(branch, targets)) != null)
                    throw new IllegalArgumentException("Duplicate or short switch override at " + fields[0]);
            }
        }
        Path output = Path.of(args[1]);
        Files.createDirectories(output);
        Files.deleteIfExists(output.resolve("failures.txt"));
        if (xenonStackAbi) {
            // Preserve the existing scalar register model, but put overflow
            // arguments in Xenon's 8-byte slots starting at entry SP+0x50.
            StringBuilder xml = new StringBuilder(
                "<prototype name=\"__xenon_stack\" extrapop=\"0\" stackshift=\"0\"><input>");
            for (int i = 1; i <= 13; i++) xml.append(
                "<pentry minsize=\"1\" maxsize=\"8\" metatype=\"float\" extension=\"float\"><register name=\"f" + i + "\"/></pentry>");
            for (int i = 3; i <= 10; i++) xml.append(
                "<pentry minsize=\"1\" maxsize=\"8\" extension=\"sign\"><register name=\"r" + i + "\"/></pentry>");
            xml.append("<pentry minsize=\"1\" maxsize=\"500\" align=\"8\"><addr offset=\"0x50\" space=\"stack\"/></pentry></input><output>");
            xml.append("<pentry minsize=\"1\" maxsize=\"8\" metatype=\"float\" extension=\"float\"><register name=\"f1\"/></pentry>");
            xml.append("<pentry minsize=\"1\" maxsize=\"8\" extension=\"sign\"><register name=\"r3\"/></pentry></output><unaffected>");
            for (int i = 14; i <= 31; i++) xml.append("<register name=\"r" + i + "\"/>");
            xml.append("<register name=\"r1\"/><register name=\"cr4\"/></unaffected></prototype>");
            new SpecExtension(currentProgram).addReplaceCompilerSpecExtension(xml.toString(), monitor);
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int done = 0;
        int failed = 0;
        int cleared = 0;
        int masked = 0;
        try {
            if (typeKnownFloats) {
                // Verified by Jeff symbols and lfs in the target function's assembly.
                for (long value : new long[] {0x821CC160L, 0x82195598L}) {
                    Address dataAddress = toAddr(value);
                    currentProgram.getListing().clearCodeUnits(dataAddress, dataAddress.add(3), false);
                    createData(dataAddress, new FloatDataType());
                }
            }
            if (typeKnownCrt) {
                // Jeff identifies these exact retail CRT entry points.
                PointerDataType charPtr = new PointerDataType(new CharDataType());
                PointerDataType voidPtr = new PointerDataType(new VoidDataType());
                UnsignedIntegerDataType size = new UnsignedIntegerDataType();
                IntegerDataType integer = new IntegerDataType();
                typeCrt(0x82F64C68L, "strstr", charPtr,
                    new String[] {"haystack", "needle"},
                    new ghidra.program.model.data.DataType[] {charPtr, charPtr});
                typeCrt(0x82F63CA0L, "memmove", voidPtr,
                    new String[] {"destination", "source", "count"},
                    new ghidra.program.model.data.DataType[] {voidPtr, voidPtr, size});
                typeCrt(0x82F68CC0L, "memcpy", voidPtr,
                    new String[] {"destination", "source", "count"},
                    new ghidra.program.model.data.DataType[] {voidPtr, voidPtr, size});
                typeCrt(0x82F691F0L, "memset", voidPtr,
                    new String[] {"destination", "value", "count"},
                    new ghidra.program.model.data.DataType[] {voidPtr, integer, size});
                typeCrt(0x82F6A080L, "memcmp", integer,
                    new String[] {"left", "right", "count"},
                    new ghidra.program.model.data.DataType[] {voidPtr, voidPtr, size});
                typeCrt(0x82F65390L, "strncmp", integer,
                    new String[] {"left", "right", "count"},
                    new ghidra.program.model.data.DataType[] {charPtr, charPtr, size});
                typeCrt(0x82F66570L, "strchr", charPtr,
                    new String[] {"text", "character"},
                    new ghidra.program.model.data.DataType[] {charPtr, integer});
                typeCrt(0x82F672D8L, "strncpy", charPtr,
                    new String[] {"destination", "source", "count"},
                    new ghidra.program.model.data.DataType[] {charPtr, charPtr, size});
                typeCrt(0x82F640B0L, "memchr", voidPtr,
                    new String[] {"buffer", "character", "count"},
                    new ghidra.program.model.data.DataType[] {voidPtr, integer, size});
                typeCrt(0x82F65AC0L, "stricmp", integer,
                    new String[] {"left", "right"},
                    new ghidra.program.model.data.DataType[] {charPtr, charPtr});
                typeCrt(0x82F6A4B0L, "strrchr", charPtr,
                    new String[] {"text", "character"},
                    new ghidra.program.model.data.DataType[] {charPtr, integer});
                for (long address : new long[] {0x82F66A40L, 0x82F66A60L,
                                               0x82F66A80L, 0x82F66AA0L,
                                               0x82F66AC0L, 0x82F66AE0L,
                                               0x82F6DF30L, 0x82F6EDF8L}) {
                    String name = switch ((int)address) {
                        case (int)0x82F66A40L -> "isalpha";
                        case (int)0x82F66A60L -> "isupper";
                        case (int)0x82F66A80L -> "isdigit";
                        case (int)0x82F66AA0L -> "isxdigit";
                        case (int)0x82F66AC0L -> "isspace";
                        case (int)0x82F66AE0L -> "isalnum";
                        case (int)0x82F6DF30L -> "tolower";
                        default -> "toupper";
                    };
                    typeCrt(address, name, integer,
                        new String[] {"character"},
                        new ghidra.program.model.data.DataType[] {integer});
                }
            }
            if (!preserveNoReturn) {
                FunctionIterator all = currentProgram.getFunctionManager().getFunctions(true);
                while (all.hasNext()) {
                    Function function = all.next();
                    if (function.hasNoReturn()) {
                        function.setNoReturn(false);
                        cleared++;
                    }
                }
            }
            if (clearKnownFalseNoReturn) {
                // These callees are followed by reachable instructions in the
                // sampled Kinect Sports callers. Clearing only these seven flags
                // reproduces the 111-function broad-clear export byte for byte.
                for (long value : new long[] {
                    0x82230300L, 0x822315A0L, 0x822ABA88L, 0x822C5B18L,
                    0x824B4298L, 0x8251F720L, 0x82A1DD38L, 0x82F68CC0L
                }) {
                    Function function = currentProgram.getFunctionManager().getFunctionAt(toAddr(value));
                    if (function != null && function.hasNoReturn()) {
                        function.setNoReturn(false);
                        cleared++;
                    }
                }
            }
            for (String line : Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8)) {
                String[] fields = line.trim().split("\\s+");
                String value = fields[0].replaceFirst("^(0x|0X)", "");
                if (value.isEmpty() || value.startsWith("#")) continue;
                try {
                    Address address = toAddr(Long.parseUnsignedLong(value, 16));
                    int size = Integer.parseInt(fields[1]);
                    for (int offset = 0; offset < size; offset += 4) {
                        Instruction instruction = currentProgram.getListing().getInstructionAt(address.add(offset));
                        if (instruction != null && instruction.getFlowOverride() == FlowOverride.CALL_RETURN)
                            instruction.setFlowOverride(FlowOverride.NONE);
                        if (maskSaveCalls || maskFprCalls) {
                            Address site = address.add(offset);
                            byte[] bytes = new byte[4];
                            currentProgram.getMemory().getBytes(site, bytes);
                            int word = (bytes[0] & 0xff) << 24 | (bytes[1] & 0xff) << 16 |
                                (bytes[2] & 0xff) << 8 | (bytes[3] & 0xff);
                            // PowerPC relative branch with link: opcode 18, AA=0, LK=1.
                            if ((word >>> 26) == 18 && (word & 2) == 0) {
                                int displacement = (word & 0x03fffffc) << 6 >> 6;
                                long target = site.getOffset() + displacement;
                                boolean gprSave = maskSaveCalls &&
                                    target >= 0x82F68B40L && target <= 0x82F68B84L &&
                                    (target - 0x82F68B40L) % 4 == 0;
                                boolean fprHelper = maskFprCalls &&
                                    ((target >= 0x82F6A510L && target <= 0x82F6A554L &&
                                      (target - 0x82F6A510L) % 4 == 0) ||
                                     (target >= 0x82F6A55CL && target <= 0x82F6A5A0L &&
                                      (target - 0x82F6A55CL) % 4 == 0));
                                if ((word & 1) == 1 && (gprSave || fprHelper)) {
                                    currentProgram.getListing().clearCodeUnits(site, site.add(3), false);
                                    Memory memory = currentProgram.getMemory();
                                    memory.setBytes(site, new byte[] {0x60, 0, 0, 0});
                                    if (!disassemble(site)) throw new IllegalStateException("Cannot disassemble masked helper at " + site);
                                    masked++;
                                }
                            }
                        }
                    }
                    AddressSet body = new AddressSet(address, address.add(size - 1));
                    ArrayList<Address> remove = new ArrayList<>();
                    FunctionIterator overlaps = currentProgram.getFunctionManager().getFunctions(body, true);
                    while (overlaps.hasNext()) remove.add(overlaps.next().getEntryPoint());
                    for (Address entry : remove) currentProgram.getFunctionManager().removeFunction(entry);
                    Function function = currentProgram.getListing().createFunction("Jeff_" + value,
                        address, body, SourceType.USER_DEFINED);
                    if (xenonStackAbi) function.setCallingConvention("__xenon_stack");
                    SwitchOverride override = switchOverrides.get(address.getOffset());
                    if (override != null) {
                        Address branch = toAddr(override.branch());
                        Instruction dispatch = currentProgram.getListing().getInstructionAt(branch);
                        if (dispatch == null && disassemble(branch))
                            dispatch = currentProgram.getListing().getInstructionAt(branch);
                        if (dispatch == null || !dispatch.getMnemonicString().equalsIgnoreCase("bctr") ||
                            !body.contains(branch))
                            throw new IllegalStateException("Invalid switch branch at " + branch);
                        LinkedHashSet<Address> unique = new LinkedHashSet<>(override.targets());
                        for (Address target : unique) {
                            if (!body.contains(target))
                                throw new IllegalStateException("Switch target outside Jeff body: " + target);
                            currentProgram.getReferenceManager().addMemoryReference(
                                branch, target, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED, 0);
                        }
                        new JumpTable(branch, override.targets(), true, 0).writeOverride(function);
                    }
                    if (typeBoxingCamera && address.getOffset() == 0x82400E48L) {
                        StructureDataType camera = new StructureDataType("BoxingCameraProbe", 0x360);
                        for (int field = 0; field < 0x360; field += 4) {
                            camera.replaceAtOffset(field, new UnsignedIntegerDataType(), 4,
                                "field_" + Integer.toHexString(field), null);
                        }
                        camera.replaceAtOffset(0x280, new FloatDataType(), 4, "field_280_float", null);
                        PointerDataType cameraPtr = new PointerDataType(camera);
                        Parameter[] parameters = new Parameter[] {
                            new ParameterImpl("self", cameraPtr, currentProgram),
                            new ParameterImpl("arg1", new UnsignedIntegerDataType(), currentProgram),
                            new ParameterImpl("arg2", new PointerDataType(new VoidDataType()), currentProgram),
                            new ParameterImpl("arg3", new PointerDataType(new UnsignedIntegerDataType()), currentProgram),
                        };
                        function.replaceParameters(FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                            true, SourceType.USER_DEFINED, parameters);
                        function.setReturnType(cameraPtr, SourceType.USER_DEFINED);
                    }
                    if (typeSportSelector && address.getOffset() == 0x82486A20L) {
                        PointerDataType charPtr = new PointerDataType(new CharDataType());
                        function.replaceParameters(FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                            true, SourceType.USER_DEFINED, new Parameter[] {
                                new ParameterImpl("self", charPtr, currentProgram),
                            });
                        function.setReturnType(charPtr, SourceType.USER_DEFINED);
                    }
                    // Large Jeff ranges can need more than the 45-second default.
                    // Keep small functions bounded so a single bad split cannot
                    // hold an entire full-game batch for minutes.
                    int timeout = size >= 8192 ? 120 : 45;
                    DecompileResults result = decompiler.decompileFunction(function, timeout, monitor);
                    if (!result.decompileCompleted()) throw new IllegalStateException(result.getErrorMessage());
                    String code = result.getDecompiledFunction().getC();
                    String name = String.format("0x%08X.c", function.getEntryPoint().getOffset());
                    Files.writeString(output.resolve(name), code, StandardCharsets.UTF_8);
                    if (exportPcode) {
                        StringBuilder listing = new StringBuilder();
                        listing.append("RAW P-code from the temporary Xenon/Ghidra instruction stream\n");
                        int rawCount = 0;
                        for (int offset = 0; offset < size; offset += 4) {
                            Instruction instruction = currentProgram.getListing().getInstructionAt(address.add(offset));
                            if (instruction == null) continue;
                            for (PcodeOp op : instruction.getPcode()) {
                                listing.append(instruction.getAddress()).append(' ').append(op).append('\n');
                                rawCount++;
                                if (rawCount >= 20000) break;
                            }
                            if (rawCount >= 20000) break;
                        }
                        listing.append("\nHIGH P-code from the decompiler\n");
                        if (result.getHighFunction() != null) {
                            Iterator<PcodeOpAST> ops = result.getHighFunction().getPcodeOps();
                            int highCount = 0;
                            while (ops.hasNext() && highCount < 20000) {
                                PcodeOpAST op = ops.next();
                                listing.append(op.getSeqnum().getTarget()).append(' ').append(op).append('\n');
                                highCount++;
                            }
                        }
                        Files.writeString(output.resolve(name.replace(".c", ".pcode.txt")),
                            listing.toString(), StandardCharsets.UTF_8);
                    }
                    done++;
                } catch (Exception error) {
                    Files.writeString(output.resolve("failures.txt"), line + ": " + error + "\n",
                        StandardCharsets.UTF_8, java.nio.file.StandardOpenOption.CREATE,
                        java.nio.file.StandardOpenOption.APPEND);
                    failed++;
                }
            }
        } finally {
            decompiler.dispose();
        }
        println("BATCH_DONE=" + done + " BATCH_FAILED=" + failed +
            " NORETURN_FLAGS_CLEARED=" + cleared + " SAVE_CALLS_MASKED=" + masked +
            " OUTPUT=" + output);
    }

    private void typeCrt(long address, String name,
                         ghidra.program.model.data.DataType result,
                         String[] names, ghidra.program.model.data.DataType[] types)
                         throws Exception {
        Function function = currentProgram.getFunctionManager().getFunctionAt(toAddr(address));
        // The persistent Ghidra analysis omitted a few tiny CRT routines.
        // Their callers keep the raw target until a bounded function repair is validated.
        if (function == null) return;
        Parameter[] parameters = new Parameter[names.length];
        for (int i = 0; i < names.length; i++)
            parameters[i] = new ParameterImpl(names[i], types[i], currentProgram);
        function.setName(name, SourceType.USER_DEFINED);
        function.replaceParameters(FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
            true, SourceType.USER_DEFINED, parameters);
        function.setReturnType(result, SourceType.USER_DEFINED);
    }
}

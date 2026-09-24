// Targeted, read-only-session probe of a validated Xbox MSVC byte switch.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.SourceType;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.Set;

public class RecoverByteSwitchTrial extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Usage: RecoverByteSwitchTrial.java <output-c>");
        Address branch = toAddr(0x8236FB90L);
        Address table = toAddr(0x82194BB8L);
        long anchor = 0x8236FB94L;
        long end = 0x8236FD8CL;
        Instruction instruction = currentProgram.getListing().getInstructionAt(branch);
        if (instruction == null || !instruction.getMnemonicString().equalsIgnoreCase("bctr"))
            throw new IllegalStateException("Expected bctr at " + branch);
        Set<Address> targets = new LinkedHashSet<>();
        ArrayList<Address> orderedTargets = new ArrayList<>();
        for (int i = 0; i < 0x30; i++) {
            int entry = currentProgram.getMemory().getByte(table.add(i)) & 0xff;
            long value = anchor + (long)entry * 4;
            if (value < anchor || value >= end || (value & 3) != 0)
                throw new IllegalStateException("Invalid target at table entry " + i);
            Address target = toAddr(value);
            orderedTargets.add(target);
            targets.add(target);
        }
        Address start = toAddr(0x8236FB68L);
        AddressSet body = new AddressSet(start, toAddr(end - 1));
        ArrayList<Address> overlaps = new ArrayList<>();
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(body, true);
        while (iterator.hasNext()) overlaps.add(iterator.next().getEntryPoint());
        for (Address entry : overlaps) currentProgram.getFunctionManager().removeFunction(entry);
        Function function = currentProgram.getListing().createFunction(
            "Jeff_8236FB68", start, body, SourceType.USER_DEFINED);
        for (Address target : targets)
            currentProgram.getReferenceManager().addMemoryReference(
                branch, target, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED, 0);
        new JumpTable(branch, orderedTargets, true, 0).writeOverride(function);
        println("BYTE_SWITCH_VALIDATED=48 UNIQUE_TARGETS=" + targets.size());
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            DecompileResults result = decompiler.decompileFunction(function, 90, monitor);
            if (!result.decompileCompleted()) throw new IllegalStateException(result.getErrorMessage());
            String code = result.getDecompiledFunction().getC();
            Files.writeString(Path.of(args[0]), code, StandardCharsets.UTF_8);
            println("BYTE_SWITCH_C_BYTES=" + code.length());
        } finally { decompiler.dispose(); }
    }
}

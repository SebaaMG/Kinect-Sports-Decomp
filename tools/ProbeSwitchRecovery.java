// Run community MSVC switch recovery on one selected bctr in a read-only project.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ProbeSwitchRecovery extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2 || args.length > 4) throw new IllegalArgumentException("Usage: ProbeSwitchRecovery.java <bctr-address> <function-address> [output-c] OR <bctr-address> <function-address> <address-list> <output-dir>");
        Address branch = toAddr(Long.parseUnsignedLong(args[0].replaceFirst("^(0x|0X)", ""), 16));
        Address entry = toAddr(Long.parseUnsignedLong(args[1].replaceFirst("^(0x|0X)", ""), 16));
        setCurrentLocation(branch);
        runScript("RecoverMSVCSwitchTables.java");
        if (args.length == 4) {
            runScript("DecompileBatch.java", new String[] {args[2], args[3], "--mask-save-helper-calls"});
            println("SWITCH_PROBE_BATCH_OUTPUT=" + args[3]);
            return;
        }
        Function function = currentProgram.getFunctionManager().getFunctionContaining(entry);
        println("SWITCH_PROBE_FUNCTION=" + (function == null ? "missing" : function.getEntryPoint()));
        if (function == null) return;
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            DecompileResults result = decompiler.decompileFunction(function, 45, monitor);
            println("SWITCH_PROBE_SUCCESS=" + result.decompileCompleted());
            if (result.decompileCompleted()) {
                String code = result.getDecompiledFunction().getC();
                if (args.length == 3) {
                    Files.writeString(Path.of(args[2]), code, StandardCharsets.UTF_8);
                    println("SWITCH_PROBE_C_PATH=" + args[2]);
                } else println("SWITCH_PROBE_C=\n" + code);
            }
            else println("SWITCH_PROBE_ERROR=" + result.getErrorMessage());
        } finally {
            decompiler.dispose();
        }
    }
}

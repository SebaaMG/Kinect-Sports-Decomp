// Headless Ghidra script: print bounded C and disassembly evidence for one address.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DecompileOne extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            throw new IllegalArgumentException("Usage: DecompileOne.java <hex-address>");
        }
        String addressText = args[0].replaceFirst("^(0x|0X)", "");
        Address address = toAddr(Long.parseUnsignedLong(addressText, 16));
        Function function = currentProgram.getFunctionManager().getFunctionContaining(address);
        if (function == null) {
            println("DECOMP_ERROR=no-function-at-address");
            return;
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            DecompileResults result = decompiler.decompileFunction(function, 45, monitor);
            println("DECOMP_ADDRESS=" + function.getEntryPoint());
            println("DECOMP_NAME=" + function.getName());
            println("DECOMP_SUCCESS=" + result.decompileCompleted());
            if (!result.decompileCompleted()) {
                println("DECOMP_ERROR=" + result.getErrorMessage());
                return;
            }
            String c = result.getDecompiledFunction().getC();
            int limit = Math.min(c.length(), 12000);
            println("DECOMP_C_START");
            println(c.substring(0, limit));
            if (c.length() > limit) {
                println("DECOMP_TRUNCATED=" + (c.length() - limit));
            }
            println("DECOMP_C_END");
        } finally {
            decompiler.dispose();
        }
    }
}

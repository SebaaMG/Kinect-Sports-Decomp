// Export existing Ghidra containing-function C for Jeff boundary conflicts.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ExportFallbackC extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) throw new IllegalArgumentException("Usage: ExportFallbackC.java <address-list> <out-dir>");
        Path out = Path.of(args[1]);
        Files.createDirectories(out);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int done = 0, missing = 0, failed = 0;
        try {
            for (String line : Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8)) {
                String value = line.trim();
                if (value.isEmpty() || value.startsWith("#")) continue;
                Address address = toAddr(Long.parseUnsignedLong(value.replaceFirst("^(0x|0X)", ""), 16));
                Function function = currentProgram.getFunctionManager().getFunctionContaining(address);
                if (function == null) { missing++; println("FALLBACK_MISSING=" + address); continue; }
                DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                if (!result.decompileCompleted()) {
                    failed++; println("FALLBACK_FAILED=" + address + " " + result.getErrorMessage()); continue;
                }
                String prefix = String.format("0x%08X", address.getOffset());
                Path c = out.resolve(prefix + ".c");
                Files.writeString(c, result.getDecompiledFunction().getC(), StandardCharsets.UTF_8);
                Files.writeString(out.resolve(prefix + ".meta.txt"),
                    "requested=" + address + " containing_function=" + function.getEntryPoint() + "\n");
                done++;
                println("FALLBACK_DONE=" + address + " CONTAINING=" + function.getEntryPoint());
            }
        } finally { decompiler.dispose(); }
        println("FALLBACK_SUMMARY=" + done + " MISSING=" + missing + " FAILED=" + failed);
    }
}

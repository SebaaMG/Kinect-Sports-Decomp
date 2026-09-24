// Correct false non-returning flags on Xbox 360 register save/restore helpers.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class FixNoReturnHelpers extends GhidraScript {
    private static final Pattern HELPER = Pattern.compile(
        "^__(?:save|rest)(?:gprlr|fpr|vmx)(?:_\\d+)? = \\.text:0x([0-9A-Fa-f]+);.*$");

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Pass Jeff symbols.txt path");
        int seen = 0;
        int changed = 0;
        for (String line : Files.readAllLines(Path.of(args[0]), StandardCharsets.UTF_8)) {
            Matcher match = HELPER.matcher(line);
            if (!match.matches()) continue;
            Address address = toAddr(Long.parseUnsignedLong(match.group(1), 16));
            Function function = currentProgram.getFunctionManager().getFunctionAt(address);
            if (function == null) continue;
            seen++;
            if (function.hasNoReturn()) {
                function.setNoReturn(false);
                changed++;
            }
        }
        println("HELPERS_SEEN=" + seen + " NORETURN_CORRECTED=" + changed);
    }
}

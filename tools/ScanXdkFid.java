// Scan the cloned project with the community XDK 9328 FIDB; do not rename code.
import ghidra.app.script.GhidraScript;
import ghidra.feature.fid.db.FidFileManager;
import ghidra.feature.fid.db.FidQueryService;
import ghidra.feature.fid.service.FidMatch;
import ghidra.feature.fid.service.FidProgramSeeker;
import ghidra.feature.fid.service.FidSearchResult;
import ghidra.feature.fid.service.FidService;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ScanXdkFid extends GhidraScript {
    private String clean(String value) {
        return value.replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) throw new IllegalArgumentException("Usage: ScanXdkFid.java <fidb-path> <output-tsv>");
        FidFileManager.getInstance().addUserFidFile(new File(args[0]));
        Path output = Path.of(args[1]);
        FidService service = new FidService();
        int scanned = 0, hashed = 0, matched = 0;
        try (FidQueryService query = service.openFidQueryService(currentProgram.getLanguage(), false);
             BufferedWriter writer = Files.newBufferedWriter(output, StandardCharsets.UTF_8)) {
            writer.write("address\tcurrent_name\tfid_name\tscore\tlibrary\tmatch_count\n");
            FidProgramSeeker seeker = service.getProgramSeeker(currentProgram, query, 10.0f);
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctionsNoStubs(true);
            while (functions.hasNext()) {
                Function function = functions.next();
                scanned++;
                FidSearchResult result = seeker.searchFunction(function, monitor);
                if (result == null) continue;
                hashed++;
                if (result.matches == null || result.matches.isEmpty()) continue;
                matched++;
                FidMatch best = result.matches.get(0);
                writer.write(String.format("0x%08X\t%s\t%s\t%.2f\t%s\t%d\n",
                    function.getEntryPoint().getOffset(), clean(function.getName()),
                    clean(best.getFunctionRecord().getName()), best.getOverallScore(),
                    clean(best.getLibraryRecord().getLibraryFamilyName()), result.matches.size()));
                if (scanned % 5000 == 0) writer.flush();
            }
        }
        println("FID_SCAN_DONE=" + scanned + " HASHED=" + hashed + " MATCHED=" + matched + " OUTPUT=" + output);
    }
}

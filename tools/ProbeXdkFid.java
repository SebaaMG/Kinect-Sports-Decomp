// Measure whether the community XDK 9328 FIDB identifies known Kinect Sports CRT.
import ghidra.app.script.GhidraScript;
import ghidra.feature.fid.db.FidFileManager;
import ghidra.feature.fid.db.FidQueryService;
import ghidra.feature.fid.service.FidMatch;
import ghidra.feature.fid.service.FidProgramSeeker;
import ghidra.feature.fid.service.FidSearchResult;
import ghidra.feature.fid.service.FidService;
import ghidra.program.model.listing.Function;
import java.io.File;

public class ProbeXdkFid extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Usage: ProbeXdkFid.java <fidb-path>");
        File fidb = new File(args[0]);
        FidFileManager.getInstance().addUserFidFile(fidb);
        FidService service = new FidService();
        try (FidQueryService query = service.openFidQueryService(currentProgram.getLanguage(), false)) {
            FidProgramSeeker seeker = service.getProgramSeeker(currentProgram, query, 10.0f);
            for (long value : new long[] {0x82F64C68L, 0x82F65390L, 0x82F68CC0L, 0x82F691F0L}) {
                Function function = currentProgram.getFunctionManager().getFunctionAt(toAddr(value));
                if (function == null) { println("FID_PROBE=0x" + Long.toHexString(value) + " no_function"); continue; }
                FidSearchResult result = seeker.searchFunction(function, monitor);
                if (result == null || result.matches == null || result.matches.isEmpty()) {
                    println("FID_PROBE=0x" + Long.toHexString(value) + " no_match");
                    continue;
                }
                FidMatch match = result.matches.get(0);
                println("FID_PROBE=0x" + Long.toHexString(value) + " name=" +
                    match.getFunctionRecord().getName() + " score=" + match.getOverallScore() +
                    " library=" + match.getLibraryRecord().getLibraryFamilyName());
            }
        }
    }
}

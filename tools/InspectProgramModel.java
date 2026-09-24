// Read-only report of the imported program's processor and ABI settings.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class InspectProgramModel extends GhidraScript {
    @Override
    protected void run() throws Exception {
        println("LANGUAGE=" + currentProgram.getLanguageID());
        println("COMPILER_SPEC=" + currentProgram.getCompilerSpec().getCompilerSpecID());
        println("DATA_POINTER_SIZE=" + currentProgram.getDataTypeManager().getDataOrganization().getPointerSize());
        println("DEFAULT_SPACE_SIZE=" + currentProgram.getAddressFactory().getDefaultAddressSpace().getSize());
        println("BIG_ENDIAN=" + currentProgram.getLanguage().isBigEndian());
        for (long value : new long[] {0x82400E48L, 0x82363840L, 0x82486278L}) {
            Function function = currentProgram.getFunctionManager().getFunctionAt(toAddr(value));
            println("FUNCTION=" + Long.toHexString(value) + " " +
                (function == null ? "missing" : function.getName() + " " + function.getPrototypeString(true, true)));
        }
    }
}

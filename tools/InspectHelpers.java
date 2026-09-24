import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class InspectHelpers extends GhidraScript {
    @Override
    protected void run() throws Exception {
        long[] helpers = {0x82F68B60L, 0x82F68B78L, 0x82F68B7CL};
        for (long value : helpers) {
            Address address = toAddr(value);
            Function f = currentProgram.getFunctionManager().getFunctionContaining(address);
            println("HELPER=" + address + " FUNCTION=" +
                (f == null ? "none" : f.getEntryPoint() + "," + f.getName() + ",noReturn=" + f.hasNoReturn()));
        }
        for (Reference ref : currentProgram.getReferenceManager().getReferencesFrom(toAddr(0x82363844L))) {
            println("CALL_REF=" + ref.getFromAddress() + "->" + ref.getToAddress() + "," + ref.getReferenceType());
        }
    }
}

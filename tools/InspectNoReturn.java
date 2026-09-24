import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class InspectNoReturn extends GhidraScript {
    @Override
    protected void run() throws Exception {
        int total = 0;
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (function.hasNoReturn()) {
                println("NORETURN=" + function.getEntryPoint() + " " + function.getName());
                total++;
            }
        }
        println("NORETURN_TOTAL=" + total);
    }
}

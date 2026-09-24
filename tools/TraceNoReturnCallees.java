// Find marked no-return callees inside known truncated function bodies.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;

public class TraceNoReturnCallees extends GhidraScript {
    @Override
    protected void run() throws Exception {
        long[][] ranges = {
            {0x82486278L, 0x3acL}, {0x82487840L, 0x1c0L},
            {0x82288040L, 0x1e4L}, {0x82363840L, 0x3acL},
            {0x823651B8L, 0x1a0L}, {0x82404150L, 0x210L},
            {0x82456BC0L, 0x180L}
        };
        for (long[] range : ranges) {
            for (long value = range[0]; value < range[0] + range[1]; value += 4) {
                Address site = toAddr(value);
                Instruction instruction = currentProgram.getListing().getInstructionAt(site);
                if (instruction == null) continue;
                for (Reference reference : currentProgram.getReferenceManager().getReferencesFrom(site)) {
                    Function callee = currentProgram.getFunctionManager().getFunctionContaining(reference.getToAddress());
                    if (callee != null && callee.hasNoReturn()) {
                        println(String.format("FALSE_NORETURN_CANDIDATE=0x%08X site=%s callee=%s %s",
                            range[0], site, callee.getEntryPoint(), callee.getName()));
                    }
                }
            }
        }
    }
}

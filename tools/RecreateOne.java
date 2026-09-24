import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.FlowOverride;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.SourceType;
import java.util.ArrayList;

public class RecreateOne extends GhidraScript {
    @Override
    protected void run() throws Exception {
        Address address = toAddr(Long.parseUnsignedLong(getScriptArgs()[0].replaceFirst("^(0x|0X)", ""), 16));
        int size = Integer.parseInt(getScriptArgs()[1]);
        FunctionIterator all = currentProgram.getFunctionManager().getFunctions(true);
        int flags = 0;
        while (all.hasNext()) {
            Function f = all.next();
            if (f.hasNoReturn()) { f.setNoReturn(false); flags++; }
        }
        println("NORETURN_FLAGS_CLEARED=" + flags);
        Function old = currentProgram.getFunctionManager().getFunctionAt(address);
        println("OLD_SIZE=" + (old == null ? -1 : old.getBody().getNumAddresses()));
        Instruction call = currentProgram.getListing().getInstructionAt(address.add(4));
        if (call != null) println("CALL_FLOW=" + call.getFlowType() + " OVERRIDE=" + call.getFlowOverride() + " FALLTHROUGH=" + call.getFallThrough());
        for (int offset = 0; offset < size; offset += 4) {
            Instruction instruction = currentProgram.getListing().getInstructionAt(address.add(offset));
            if (instruction != null && instruction.getFlowOverride() == FlowOverride.CALL_RETURN)
                instruction.setFlowOverride(FlowOverride.NONE);
        }
        AddressSet body = new AddressSet(address, address.add(size - 1));
        ArrayList<Address> remove = new ArrayList<>();
        FunctionIterator overlaps = currentProgram.getFunctionManager().getFunctions(body, true);
        while (overlaps.hasNext()) remove.add(overlaps.next().getEntryPoint());
        for (Address entry : remove) currentProgram.getFunctionManager().removeFunction(entry);
        Function fresh = currentProgram.getListing().createFunction("Recovered_" + address,
            address, body, SourceType.USER_DEFINED);
        println("NEW_SIZE=" + (fresh == null ? -1 : fresh.getBody().getNumAddresses()));
        if (fresh != null) {
            DecompInterface decompiler = new DecompInterface();
            decompiler.openProgram(currentProgram);
            try {
                DecompileResults result = decompiler.decompileFunction(fresh, 45, monitor);
                println("C_LENGTH=" + (result.decompileCompleted() ? result.getDecompiledFunction().getC().length() : -1));
                if (result.decompileCompleted()) println(result.getDecompiledFunction().getC().substring(0, Math.min(800, result.getDecompiledFunction().getC().length())));
            } finally {
                decompiler.dispose();
            }
        }
    }
}

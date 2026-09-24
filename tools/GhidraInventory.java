// Read-only Ghidra headless inventory for the imported Kinect Sports XEX.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;

public class GhidraInventory extends GhidraScript {
    @Override
    protected void run() throws Exception {
        println("PROGRAM=" + currentProgram.getName());
        println("LANGUAGE=" + currentProgram.getLanguageID());
        println("IMAGE_BASE=" + currentProgram.getImageBase());
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        long count = 0;
        while (functions.hasNext()) {
            functions.next();
            count++;
        }
        println("FUNCTIONS=" + count);
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            println("BLOCK=" + block.getName() + "," + block.getStart() + "," + block.getSize());
        }
        Address text = toAddr(0x82230000L);
        byte[] sample = new byte[32];
        currentProgram.getMemory().getBytes(text, sample);
        StringBuilder hex = new StringBuilder();
        for (byte value : sample) {
            hex.append(String.format("%02x", value & 0xff));
        }
        println("TEXT_SAMPLE=" + hex);
    }
}

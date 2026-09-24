// Compare imported memory and selected VMX128 opcode decoding across languages.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import java.security.MessageDigest;

public class ProbeXenonOpcodes extends GhidraScript {
    @Override
    protected void run() throws Exception {
        println("PROBE_LANGUAGE=" + currentProgram.getLanguageID());
        long[] addresses = {0x8236FB90L, 0x82401748L, 0x82401EE4L, 0x82401F20L, 0x82402184L};
        for (long value : addresses) {
            Address address = toAddr(value);
            byte[] bytes = new byte[4];
            currentProgram.getMemory().getBytes(address, bytes);
            Instruction instruction = currentProgram.getListing().getInstructionAt(address);
            if (instruction == null) {
                disassemble(address);
                instruction = currentProgram.getListing().getInstructionAt(address);
            }
            println(String.format("OPCODE=0x%08X bytes=%02X%02X%02X%02X mnemonic=%s",
                value, bytes[0], bytes[1], bytes[2], bytes[3],
                instruction == null ? "UNDECODED" : instruction.getMnemonicString()));
        }
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        for (long value : new long[] {0x8236FB68L, 0x82400E48L, 0x82401700L}) {
            byte[] bytes = new byte[256];
            currentProgram.getMemory().getBytes(toAddr(value), bytes);
            byte[] hash = digest.digest(bytes);
            StringBuilder hex = new StringBuilder();
            for (byte b : hash) hex.append(String.format("%02x", b & 0xff));
            println(String.format("RANGE_SHA256=0x%08X %s", value, hex));
        }
    }
}

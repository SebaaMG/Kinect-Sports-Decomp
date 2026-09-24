// Hash the loaded .text image for comparison with Jeff's extracted PE.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.security.MessageDigest;

public class HashText extends GhidraScript {
    @Override
    protected void run() throws Exception {
        long start = 0x82230000L;
        long size = 0xF1386CL;
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        byte[] bytes = new byte[65536];
        for (long offset = 0; offset < size; offset += bytes.length) {
            Address address = toAddr(start + offset);
            int count = (int)Math.min(bytes.length, size - offset);
            currentProgram.getMemory().getBytes(address, bytes, 0, count);
            digest.update(bytes, 0, count);
        }
        StringBuilder hex = new StringBuilder();
        for (byte b : digest.digest()) hex.append(String.format("%02x", b & 0xff));
        println("TEXT_SHA256=" + hex + " START=0x82230000 SIZE=0xF1386C");
    }
}

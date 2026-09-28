/*
 * 0x82F79484, 16 bytes -> "set_fsr" (the isolated object exports the XDK name
 * "_set_fsr").
 *
 * Target code, exactly as the original object stores it:
 *
 *     stw    r3,  -0x4(r1)      ; park the first argument in its home slot
 *     lfd    f1,  -0x8(r1)      ; load the FPSCR image handed over in memory
 *     mtfsf  255, f1            ; copy all eight FPSCR fields from f1
 *     blr
 *
 * There is no C spelling for this routine: mtfsf is not emitted by the
 * PowerPC back end for any construct, and the value it consumes is read from
 * a frame slot below the stack pointer rather than from an incoming
 * parameter, so the body has to be written as the four instructions above.
 * The parameter list only documents the ABI the callers were compiled with.
 */
__declspec(naked) void fn_82F79484(int param_1, double param_2)
{
    __asm {
        stw    r3,  -0x4(r1)
        lfd    fr1, -0x8(r1)
        mtfsf  0xFF, fr1
        blr
    }
}

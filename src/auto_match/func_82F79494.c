/*
 * 0x82F79494 - get_fsr()
 *
 * Returns the 32-bit floating-point status register (FPSCR) in r3.
 * mffs parks the FPSCR in the high half of f0, stfd spills the 64-bit FPR to
 * the stack, and lwz picks the upper word back up, so no frame is needed.
 * The compiler front end has no FPSCR intrinsic, so the sequence is written
 * inline on a naked frame (the block already leaves the result in r3).
 */

__declspec(naked) unsigned int fn_82F79494(void)
{
    __asm {
        mffs   fr0
        stfd   fr0, -8(r1)
        lwz    r3, -4(r1)
        blr
    }
}

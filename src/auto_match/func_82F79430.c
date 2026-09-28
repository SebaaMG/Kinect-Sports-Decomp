// Kinect Sports retail 4D5308C9, function 0x82F79430 (16 bytes).
// Jeff names this game symbol _statfp; the XDK CRT implements it as the FPSCR
// reader thunk: move the FPSCR into f0, spill it to the red zone, and return
// its high word. No C form or MSVC intrinsic covers mffs (the compiler reports
// C4163 for _readfpscr), so the XDK source keeps this one in inline assembly.
unsigned int fn_82F79430(void)
{
    __asm {
        mffs   fr0
        stfd  fr0, -8(r1)
        lwz   r3, -4(r1)
    }
}

// Kinect Sports retail 4D5308C9, function 0x83128158 (16 bytes).
// Clears the 64-bit global flag at 0x8320A4D8 (hi/lo pair 0x8321/-0x5B28).
#define g_dwGlobalFlag8320A4D8 (*(volatile unsigned long long *)0x8320A4D8u)

void fn_83128158(void)
{
    g_dwGlobalFlag8320A4D8 = 0;
}

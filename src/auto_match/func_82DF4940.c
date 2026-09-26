// Kinect Sports retail 4D5308C9, function 0x82DF4940 (16 bytes).
// Sets bit 1 of the flag byte at this+0xC and returns.
void fn_82DF4940(int param_1)
{
    *(unsigned char *)(param_1 + 0xc) |= 2;
}

// Kinect Sports retail 4D5308C9, function 0x826384E0 (20 bytes).
void fn_826384E0(int param_1, unsigned char param_2)
{
    *(volatile unsigned char *)(param_1 + 0x2901) = param_2;
    *(volatile unsigned long long *)(param_1 + 0x10) |= 0x10000000u;
}

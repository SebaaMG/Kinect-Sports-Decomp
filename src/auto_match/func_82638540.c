// Kinect Sports retail 4D5308C9, function 0x82638540 (20 bytes).
void fn_82638540(int param_1, unsigned char param_2)
{
    *(volatile unsigned char *)(param_1 + 0x28fd) = param_2;
    *(volatile unsigned long long *)(param_1 + 0x10) |= 0x20000000ULL;
}

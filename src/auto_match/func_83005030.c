// Kinect Sports retail 4D5308C9, function 0x83005030 (16 bytes).
void fn_83005030(int param_1, char param_2)
{
    *(unsigned char *)(param_1 + 0x3d) = (unsigned char)(param_2 << 7) | (*(unsigned char *)(param_1 + 0x3d) & 0x7f);
}

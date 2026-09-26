// Kinect Sports retail 4D5308C9, function 0x82FA5938 (16 bytes).
void fn_82FA5938(int param_1)
{
    unsigned int temp;

    temp = *(unsigned int *)(param_1 + 4);
    temp &= 0xfffffffdu;
    *(unsigned int *)(param_1 + 4) = temp;
}

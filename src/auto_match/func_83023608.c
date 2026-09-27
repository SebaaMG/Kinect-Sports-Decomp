// Kinect Sports retail 4D5308C9, function 0x83023608 (16 bytes).
// Matches with /O2 (the /O1 build coalesces the subfic destination into r11).
unsigned short fn_83023608(int param_1)
{
    return 2 - *(unsigned short *)(param_1 + 0x48);
}

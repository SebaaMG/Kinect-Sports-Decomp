// Kinect Sports retail 4D5308C9, function 0x8301B338 (16 bytes).
// Increments the unsigned byte counter at offset 0x30 of the second argument.
void fn_8301B338(int param_1, void *param_2)
{
    unsigned char *obj = (unsigned char *)param_2;
    obj[0x30] = obj[0x30] + 1;
}

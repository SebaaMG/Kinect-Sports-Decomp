// Kinect Sports retail 4D5308C9, function 0x8280CB20 (16 bytes).
void fn_8280CB20(void *object, float x, float y, float z)
{
    *(float *)((char *)object + 0x20) = x;
    *(float *)((char *)object + 0x24) = y;
    *(float *)((char *)object + 0x28) = z;
}

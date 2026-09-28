// Kinect Sports retail 4D5308C9, function 0x8226AB00 (20 bytes).
void fn_8226AB00(void *object, float scale)
{
    *(float *)((char *)object + 0x30) =
        *(float *)((char *)object + 0x24) * scale + *(float *)((char *)object + 0x30);
}

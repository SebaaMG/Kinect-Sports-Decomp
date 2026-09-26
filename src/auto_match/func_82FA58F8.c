// Kinect Sports retail 4D5308C9, function 0x82FA58F8 (16 bytes).
// Sets bit 0 of the flags word at offset 4 of the object.
void fn_82FA58F8(int object)
{
    *(unsigned int *)(object + 4) |= 1u;
}

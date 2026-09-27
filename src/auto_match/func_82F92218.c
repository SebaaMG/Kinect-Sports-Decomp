// Kinect Sports retail 4D5308C9, function 0x82F92218 (16 bytes).
// Offset getter: the incoming object pointer is qualified volatile, so the
// argument is written to its home slot (0x14(r1)) and read back before the
// field offset is added.
int fn_82F92218(volatile int param_1)
{
    return param_1 + 0xC;
}

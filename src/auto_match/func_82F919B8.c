// Kinect Sports retail 4D5308C9, function 0x82F919B8 (16 bytes).
// Returns the argument plus 0x11. The argument is volatile, so MSVC must
// materialize it in its incoming home slot (0x14(r1)) and read it back.
int fn_82F919B8(volatile int param_1)
{
    return param_1 + 0x11;
}

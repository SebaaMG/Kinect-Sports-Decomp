// Kinect Sports retail 4D5308C9, function 0x82F921F8 (16 bytes).
// The incoming argument is spilled to its stack home slot (0x14(r1)) and
// reloaded through a temp before the offset is applied, which is how the
// compiler materializes a volatile parameter read.
int fn_82F921F8(volatile int param_1)
{
    return param_1 + 0x10;
}

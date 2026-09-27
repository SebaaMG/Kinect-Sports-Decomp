// Kinect Sports retail 4D5308C9, function 0x82F8E340 (16 bytes).
//
// The routine is a no-op stub: it spills both incoming arguments into their
// parameter home slots (0x14/0x1c) and hands back a zero result.  The
// argument home stores are only emitted when the routine is emitted without
// the optimizer (identical to an /Od build of the same body), so the stub
// is pinned to an unoptimized code generation for this translation unit.
#pragma optimize("", off)

int fn_82F8E340(int param_1, int param_2)
{
    return 0;
}

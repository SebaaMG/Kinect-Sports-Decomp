// Kinect Sports retail 4D5308C9, function 0x82F953A8 (16 bytes).
// The argument is stored to the outgoing parameter slot and read back
// through a volatile lvalue, so the load has to stay after the store.
int fn_82F953A8(int param_1)
{
    return *(volatile int *)&param_1 + 0x15;
}

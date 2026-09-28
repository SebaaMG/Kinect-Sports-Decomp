// Kinect Sports retail 4D5308C9, function 0x82631AF0 (20 bytes).
// Stores a 32-bit value at +0x2ed8, then sets bit 0x80000 in the 64-bit
// field at +0x10. Field addresses are taken through local pointers so the
// emitted code keeps the store ahead of the reload, as in the original.
void fn_82631AF0(int object, unsigned int param_2)
{
    unsigned int *value_slot = (unsigned int *)(object + 0x2ed8);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *value_slot = param_2;
    *flags |= 0x80000u;
}

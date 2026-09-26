// Kinect Sports retail 4D5308C9, function 0x82FAC768 (16 bytes).
// Matches with /O2 (at /O1 the allocator chains the loads through r11
// instead of using r10 for the intermediate pointer).
int fn_82FAC768(int param_1)
{
    return *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x38) + 0x28);
}

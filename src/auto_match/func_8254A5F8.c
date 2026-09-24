int fn_8254A5F8(int object)
{
    int context = *(volatile int *)((unsigned char *)object + 0x1c0);
    int value = *(int *)((unsigned char *)context + 0x10);

    return *(int *)((unsigned char *)value + 0x28);
}

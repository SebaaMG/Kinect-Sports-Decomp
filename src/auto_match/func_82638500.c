/* fn_82638500: flag a sub-object and set the "dirty/ready" bit in the owner header. */
void fn_82638500(int object, unsigned char flag)
{
    *(volatile unsigned char *)(object + 0x28ff) = flag;
    *(volatile unsigned __int64 *)(object + 0x10) |= 0x20000000ULL;
}

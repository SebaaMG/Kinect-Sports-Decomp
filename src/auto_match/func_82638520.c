void fn_82638520(int param_1, unsigned char param_2)
{
    *(volatile unsigned char *)(param_1 + 0x28fe) = param_2;
    *(volatile unsigned long long *)(param_1 + 0x10) |= 0x20000000;
}

void fn_82639360(int param_1, unsigned int param_2)
{
    *(unsigned int *)(param_1 + 0x2efc) =
        ((param_2 & 0x7f) << 0x17) |
        (*(unsigned int *)(param_1 + 0x2efc) & 0xc07fffff);
}

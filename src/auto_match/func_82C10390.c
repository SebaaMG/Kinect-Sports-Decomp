unsigned int fn_82C10390(int param_1, unsigned int param_2)
{
    unsigned int value = *(unsigned int *)((char *)param_1 + 0x5c);

    *(unsigned int *)((char *)param_1 + 0x5c) = param_2;
    return value;
}

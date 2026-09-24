long long fn_8255C2D8(int param_1, int param_2)
{
    unsigned int first;
    unsigned int second;

    second = *(volatile unsigned int *)(param_2 + 4);
    first = *(volatile unsigned int *)(param_1 + 4);
    return (long long)second - (long long)first;
}

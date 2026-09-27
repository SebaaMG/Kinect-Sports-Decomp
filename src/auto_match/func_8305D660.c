void fn_8305D660(int *param_1, int param_2, int param_3)
{
    volatile int *array = (volatile int *)(*(int *)((char *)param_1 + 0x2c) + param_2 * 4);
    array[0] = param_3;
}

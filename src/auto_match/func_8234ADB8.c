int fn_8234ADB8(int param_1, int param_2)
{
    int state;
    int value;

    state = *(int *)(**(int **)(param_2 + 0x0c) + 0x1a0);
    if (*(unsigned int *)(state + 0x10) != 0) {
        value = 0x0b;
        if (*(int *)(state + 0x14) == 0) {
            goto choose_value;
        }
    }
    value = 0x0a;

choose_value:
    fn_8255E3A0(*(unsigned int *)(**(int **)(param_2 + 0x0c) + 0x14),
                 value, param_1);
    return param_1;
}

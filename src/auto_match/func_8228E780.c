extern void fn_82681FE0(int, int *, unsigned int);

int *fn_8228E780(int *param_1, int *param_2)
{
    *param_1 = 0;
    param_1[1] = param_2[1];
    *(long long *)(param_1 + 2) = *(long long *)(param_2 + 2);
    if (((unsigned int)param_2[1] >> 6 & 1) != 0) {
        int value = *param_2;
        *param_1 = value;
        fn_82681FE0(value, param_1, param_1[2]);
    }
    return param_1;
}

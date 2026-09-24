extern long long fn_828E9D90(long long param_1);
extern void fn_828E9D60(long long param_1, long long param_2);

long long fn_822413E8(int param_1, long long param_2)
{
    long long first;
    long long second;
    long long result;
    int *object;

    first = fn_828E9D90(param_2);
    object = *(int **)(param_1 + 0x68);
    ((void (*)(int *, long long, int))(*(int *)((char *)*object + 0x14)))(object, param_2, 0);
    second = fn_828E9D90(param_2);
    result = second - first;
    fn_828E9D60(param_2, first);
    return result;
}

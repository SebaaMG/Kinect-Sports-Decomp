typedef int (*func_ptr_825255A8)(int *self);

int *fn_825255A8(int *param_1)
{
    if (*(char *)((int *)param_1 + 0xC669) == 0 ||
        (*(func_ptr_825255A8)(*(int *)((int *)(*(int *)param_1) + 5)))(param_1) == 0) {
        return 0;
    }
    return param_1 + 0xC661;
}

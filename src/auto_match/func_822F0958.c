extern void fn_822B7068(int, int);
extern void fn_825275B0(int);
extern void fn_822F0028(int);

void fn_822F0958(int param_1)
{
    if (*(int *)(*(int *)(param_1 + 0x0c) + 0x24) != 0) {
        fn_822B7068(*(int *)(param_1 + 0x0c), *(int *)(*(int *)(param_1 + 0x24) + 0xa8));
    } else {
        fn_825275B0(*(int *)(*(int *)(param_1 + 0x24) + 0xa8));
    }
    *(int *)(*(int *)(param_1 + 0x24) + 0xb4) = 0;
    fn_822F0028(param_1);
}

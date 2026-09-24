void fn_8232BD40(int param_1)
{
    int value = *(int *)(param_1 - 0x4c);
    *(int *)(param_1 - 0x4c) = 2;
    (*(void (**)(int, int, int))(*(int *)(param_1 - 0x54) + 0x14))(
        param_1 - 0x54, value, 2);
    *(int *)(param_1 - 0x48) = 5;
    *(int *)(param_1 - 0x44) = 1;
    *(int *)(param_1 - 0x40) = 4;
}

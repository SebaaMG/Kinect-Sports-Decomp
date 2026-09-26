extern void fn_82230218(int object, unsigned int value, int index, int flag);

void fn_822E52D8(int param_1, int param_2)
{
    int data = *(int *)(param_1 + 0x114);

    fn_82230218(*(int *)(data + 0xc0) + 0x78, param_2, 0, -1);
    fn_82230218(*(int *)(data + 0xc8) + 0x78, param_2, 0, -1);
    fn_82230218(*(int *)(data + 0xd0) + 0x78, param_2, 0, -1);
}

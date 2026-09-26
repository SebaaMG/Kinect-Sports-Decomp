extern unsigned int fn_82359558(int param_1, int param_2);

void fn_82402C38(int param_1, unsigned int param_2)
{
    int value = *(int *)(param_1 + 0x10);
    int object = *(int *)(param_1 + 0x240);

    if (param_2 == fn_82359558(object, value)) {
        *(int *)(param_1 + 0x288) = 1;
    } else if (*(int *)(fn_82359558(object, value) + 0x7a0) == 0) {
        *(int *)(param_1 + 0x28c) = 1;
    }
}

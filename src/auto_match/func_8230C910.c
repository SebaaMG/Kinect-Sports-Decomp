extern unsigned int fn_822C5B18(void *param_1, unsigned int param_2);
extern void fn_823000E0(int param_1, unsigned int param_2);

void fn_8230C910(int *param_1)
{
    unsigned char local[32];
    unsigned int value;
    int object;

    (*(void (**)(void))(*param_1 + 0x1c))();
    value = param_1[4];
    object = param_1[3];
    *(int *)(*(int *)(object + 0x1e8) + 0x578) = 0x1ba;
    fn_823000E0(*(int *)(object + 0x1e8),
                fn_822C5B18(local, value + 0x978));
}

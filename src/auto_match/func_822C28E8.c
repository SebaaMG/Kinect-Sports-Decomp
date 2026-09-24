extern void fn_823000E0(int object, int *out);
extern void fn_822B6858(int object);

void fn_822C28E8(int object)
{
    int temporary[6];

    temporary[4] = 0;
    *(int *)(*(int *)(object + 0x1e8) + 0x578) = 0;
    fn_823000E0(*(int *)(object + 0x1e8), temporary);
    fn_822B6858(object);
    *(int *)(*(int *)(object + 0x118) + 0x2f4) = 1;
    *(int *)(object + 0x25c) = 0;
}

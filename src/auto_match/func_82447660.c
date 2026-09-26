typedef void (*VtableFunction)(int *object, void *argument, unsigned char *result);

extern unsigned char *fn_824475E0(void *param);

void fn_82447660(int *param_1, void *param_2, void *param_3)
{
    unsigned char result[8];

    result[0] = *fn_824475E0(param_3);
    (*(VtableFunction *)(*param_1 + 0x10))(param_1, param_2, result);
}

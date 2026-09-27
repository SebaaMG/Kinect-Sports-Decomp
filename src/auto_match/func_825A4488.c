typedef unsigned int u32;

void *fn_82CE5410(void *param_1, u32 param_2);
void fn_82CEAB00(void *param_1, u32 param_2, u32 param_3);

void *fn_825A4488(void *param_1, u32 param_2)
{
    u32 *field = (u32 *)param_1;
    void *result;

    field[0] = 0;
    field[1] = 0;
    field[2] = -1;
    result = fn_82CE5410(param_1, param_2);
    fn_82CEAB00(param_1, *(u32 *)((unsigned char *)result + 0x10), param_2);
    return param_1;
}

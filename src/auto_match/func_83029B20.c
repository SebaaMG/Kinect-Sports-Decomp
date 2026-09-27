typedef unsigned int uint32;

void fn_83029B20(void *param_1, uint32 param_2)
{
    *(uint32 *)((char *)param_1 + 0x48) = param_2;
    *(uint32 *)((char *)param_1 + 4) = 2u;
}

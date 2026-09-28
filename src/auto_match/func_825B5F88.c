float fn_825B5F88(int param_1)
{
    char *base_1;
    char *base_2;
    char *base_3;

    base_1 = *(char **)((char *)param_1 + 4);
    base_2 = *(char **)(base_1 + 0x10);
    base_3 = *(char **)(base_2 + 4);
    return *(float *)(base_3 + 0x20);
}

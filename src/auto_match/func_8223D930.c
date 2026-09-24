int fn_8223D930(int *param_1)
{
    int result;
    unsigned char *current;

    result = (*(int (**)(void))(*param_1 + 0x18))();
    if (result != -1) {
        *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
        current = *(unsigned char **)param_1[8];
        *(unsigned char **)param_1[8] = current + 1;
        result = *current;
    }
    return result;
}

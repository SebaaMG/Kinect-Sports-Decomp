extern int fn_8245B168(void *param_1, void *param_2, int param_3);

unsigned int fn_8245B100(void *param_1)
{
    if (*(int *)((char *)param_1 + 0x14) == 0) {
        return 0x80004005;
    }
    fn_8245B168(param_1, (char *)param_1 + 0x19, 1);
    *(int *)((char *)param_1 + 0x14) = 0;
    *(char *)((char *)param_1 + 0x19) = 0;
    *(char *)((char *)param_1 + 0x18) = 0;
    return 0;
}

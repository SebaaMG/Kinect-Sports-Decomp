extern void fn_82A1DD38(void *dst, void *src, int count);

int fn_825DB6A8(int unused, void *param_1, void *param_2)
{
    int i;

    for (i = 0; i < 3; i++)
        fn_82A1DD38((char *)param_1 + 0x38 + i * 0xc, (char *)param_2 + 0xa0 + i * 0xc, 0xc);

    *(float *)((char *)param_1 + 0x94) = *(float *)((char *)param_2 + 0xc4);
    *(int *)((char *)param_1 + 0x98) = *(int *)((char *)param_2 + 0xc8);
    *(float *)((char *)param_1 + 0x34) = *(float *)((char *)param_2 + 0x9c);

    return 1;
}

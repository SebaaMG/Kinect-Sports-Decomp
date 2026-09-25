extern void *fn_8265C9E0(unsigned int size);
extern void fn_823A9C98(void *object, long long value);
extern int lbl_821B56B8;

unsigned int *fn_823A9DB8(long long param_1)
{
    unsigned int *object = (unsigned int *)fn_8265C9E0(0x60);

    if (object != 0) {
        *object = (unsigned int)&lbl_821B56B8;
        fn_823A9C98(object + 4, param_1 + 0x10);
        return object;
    } else {
        return 0;
    }
}

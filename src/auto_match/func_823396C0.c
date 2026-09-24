extern unsigned int *fn_8265C9E0(unsigned int size);
extern void fn_822C6310(void *object, void *param);
extern int lbl_821B0D04;

unsigned int *fn_823396C0(void *param_1)
{
    unsigned int *object = fn_8265C9E0(0x4c);

    if (object != 0) {
        fn_822C6310(object, param_1);
        *object = (unsigned int)&lbl_821B0D04;
        return object;
    }

    return 0;
}

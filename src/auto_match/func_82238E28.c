extern void *fn_8265C9E0(unsigned int size);
extern void fn_828A82B8(void *object, void *param_1, void *param_2, void *param_3);
extern int lbl_82196950;

void *fn_82238E28(void *param_1, void *param_2, void *param_3)
{
    void *object = fn_8265C9E0(0x310);

    if (object != 0) {
        fn_828A82B8(object, param_1, param_2, param_3);
        *(volatile unsigned int *)object = (unsigned int)&lbl_82196950;
        *(volatile unsigned int *)((char *)object + 0x308) = 0;
    } else {
        return 0;
    }
    return object;
}

extern void *fn_8265C9E0(unsigned int size);
extern void fn_824B4310(void *object, void *param_1);
extern int lbl_821C04D8;

void *fn_824B5ED0(void *param_1)
{
    void *object = fn_8265C9E0(0x48);

    if (object != 0) {
        fn_824B4310(object, param_1);
        *(volatile unsigned int *)object = (unsigned int)&lbl_821C04D8;
        return object;
    }
    return 0;
}

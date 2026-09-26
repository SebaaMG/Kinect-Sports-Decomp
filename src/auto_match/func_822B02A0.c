extern unsigned int *fn_8265C9E0(unsigned int size);
extern void fn_822AF0A8(unsigned int *object, unsigned long long param_1);
extern unsigned int lbl_821AC59C;

unsigned int *fn_822B02A0(unsigned long long param_1)
{
    unsigned int *object = fn_8265C9E0(0x50);
    if (object) {
        fn_822AF0A8(object, param_1);
        object[0] = (unsigned int)&lbl_821AC59C;
        return object;
    }
    return 0;
}

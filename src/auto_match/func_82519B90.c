extern void *fn_8265C9E0(unsigned int size);
extern void fn_8288B668(void *object, void *param_1);
extern unsigned int lbl_82197070;

unsigned int *fn_82519B90(void *param_1)
{
    unsigned int *object = fn_8265C9E0(0x48);

    if (object != 0) {
        fn_8288B668(object, param_1);
        *object = (unsigned int)&lbl_82197070;
    }

    return object;
}

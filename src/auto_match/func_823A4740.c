extern unsigned int lbl_821B5444;
extern void fn_822C16B8(void *object);
extern void fn_8265CA20(void *object);
extern unsigned int lbl_821AC5E0;

void fn_823A4740(volatile unsigned int *param_1)
{
    unsigned int *object;

    *param_1 = (unsigned int)&lbl_821B5444;
    object = (unsigned int *)param_1[3];
    if (object != 0) {
        fn_822C16B8((void *)(object + 2));
        fn_8265CA20(object);
    }
    *param_1 = (unsigned int)&lbl_821AC5E0;
}

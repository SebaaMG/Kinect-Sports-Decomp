extern unsigned int *fn_8265C9E0(unsigned int size);
extern void fn_822C6310(unsigned int *object, unsigned int param);
extern unsigned int lbl_821AD578;

unsigned int *fn_822D1C60(unsigned int param)
{
    unsigned int *object;

    object = fn_8265C9E0(0x4c);
    if (object != (unsigned int *)0) {
        fn_822C6310(object, param);
        *object = (unsigned int)&lbl_821AD578;
    }
    else {
        return (unsigned int *)0;
    }
    return object;
}

extern int lbl_82198024;
extern void fn_822332E8(void *object);
extern void fn_82232D38(void *object);
extern void fn_8265CA20(void *object);

int *fn_82250E60(int *object, unsigned int flags)
{
    *object = &lbl_82198024;
    fn_822332E8(object + 0x39);
    fn_82232D38(object);
    if (flags & 1)
        fn_8265CA20(object);
    return object;
}

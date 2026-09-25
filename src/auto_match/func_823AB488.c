extern void fn_82359BB0(void *object);
extern void fn_8265CA20(void *object);
extern int lbl_821B5748;

int fn_823AB488(int object, unsigned int flags)
{
    fn_82359BB0((void *)(object + 0x7c));
    fn_82359BB0((void *)(object + 0x6c));
    *(int **)object = &lbl_821B5748;
    if (flags & 1) {
        fn_8265CA20((void *)object);
    }
    return object;
}

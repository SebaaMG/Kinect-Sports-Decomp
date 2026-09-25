extern void fn_822CA390(void);
extern void fn_8265CA20(void *object);
extern int lbl_821B0AB8[];
extern int lbl_821B0B0C[];

void *fn_82333FE8(void *object, unsigned int flags)
{
    *(int **)object = lbl_821B0AB8;
    *(int **)((char *)object + 0x68) = lbl_821B0B0C;
    fn_822CA390();
    if (flags & 0xfffffffe != 0) {
        fn_8265CA20(object);
    }
    return object;
}

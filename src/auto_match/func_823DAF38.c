extern int lbl_821B6618;
extern int lbl_821B6658;
void fn_82517E78(void);
void fn_8265CA20(void *object);

void *fn_823DAF38(void *object, unsigned int flags)
{
    *(void **)object = &lbl_821B6618;
    *(void **)((char *)object + 0x68) = &lbl_821B6658;
    fn_82517E78();
    if (flags & 1)
        fn_8265CA20(object);
    return object;
}

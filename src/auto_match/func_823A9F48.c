extern int lbl_82197010;
extern void fn_822315A0(void);
extern void fn_8265CA20(void *object);

static __inline unsigned int get_field_58(void *object)
{
    return *(unsigned int *)((unsigned char *)object + 0x58);
}

unsigned int *fn_823A9F48(unsigned int *object, unsigned int flags)
{
    if (get_field_58(object) != 0) {
        fn_822315A0();
    }

    *object = (unsigned int)&lbl_82197010;

    if ((flags & 1u) != 0) {
        fn_8265CA20(object);
    }

    return object;
}

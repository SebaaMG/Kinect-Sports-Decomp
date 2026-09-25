extern void *fn_8265C9E0(unsigned int size);
extern void fn_823A9C98(void *object, void *source);
extern unsigned int lbl_821B56D4;

void *fn_823A9E78(void *source)
{
    void *object = fn_8265C9E0(0x60);

    if (object != 0) {
        *(unsigned int *)object = (unsigned int)&lbl_821B56D4;
        fn_823A9C98((void *)((unsigned int)object + 0x10),
                    (void *)((unsigned int)source + 0x10));
    }

    return object != 0 ? object : 0;
}

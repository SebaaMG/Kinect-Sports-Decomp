extern void *fn_82512C30(void);
extern void fn_82512E18(void *a, unsigned int *b);
extern void fn_82512CC8(void *a);

unsigned int fn_82512B08(unsigned int param_1, unsigned int param_2)
{
    void *object;
    unsigned int id;

    object = fn_82512C30();
    id = *(unsigned int *)((char *)object + 0xc) + 1;
    *(unsigned int *)((char *)object + 0xc) = id;
    if (id == 0) {
        id = id + 1;
        *(unsigned int *)((char *)object + 0xc) = id;
    }
    fn_82512E18((char *)object + 0x14, &id);
    fn_82512CC8(object);
    return id;
}

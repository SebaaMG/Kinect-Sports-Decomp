extern unsigned int lbl_8219693C;
extern void *fn_8265C9E0(int size);
extern void fn_82240C08(void *object, void *param_1);

void *fn_82516318(void *param_1)
{
    void *object = fn_8265C9E0(0xfc);

    if (object) {
        fn_82240C08(object, param_1);
        *(unsigned int *)object = (unsigned int)&lbl_8219693C;
        return object;
    }
    return 0;
}

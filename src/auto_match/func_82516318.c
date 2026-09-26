/* Factory: allocates a 0xFC-byte object, runs the base constructor and
   installs the class vtable at offset 0. Returns NULL when allocation fails. */
extern unsigned int lbl_8219693C;
extern void *fn_8265C9E0(int size);
extern void fn_82240C08(void *object, void *param_1);

void *fn_82516318(void *param_1)
{
    void *object;

    object = fn_8265C9E0(0xfc);
    if (object == 0) {
        object = 0;
    } else {
        fn_82240C08(object, param_1);
        *(unsigned int *)object = (unsigned int)&lbl_8219693C;
    }
    return object;
}

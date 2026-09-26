/* Destructor: tears down the resource held at offset 0x08 and installs the
   alternate vtable, optionally invoking the deleting destructor. */
extern void fn_822315A0(unsigned int *resource);
extern void fn_8265CA20(void *object);
extern unsigned int lbl_82197010;

typedef struct Object {
    unsigned int vtable;
    unsigned int field_04;
    unsigned int *field_08;
} Object;

static __forceinline Object *save_object(Object *object)
{
    return object;
}

Object *fn_82361FD0(Object *param_1, int param_2)
{
    Object *saved = save_object(param_1);

    if (saved->field_08) {
        fn_822315A0(saved->field_08);
    }
    saved->vtable = (unsigned int)&lbl_82197010;
    if (param_2 & 1) {
        fn_8265CA20(saved);
    }
    return saved;
}

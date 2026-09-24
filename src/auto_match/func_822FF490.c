extern int lbl_821AEC2C;

typedef struct Object {
    void *vtable;
    unsigned char padding[0x14];
    void *member;
} Object;

void fn_82359C18(void *member);
void fn_822FF888(void *object);
void fn_8265CA20(void *object);

Object *fn_822FF490(Object *object, int flags)
{
    object->vtable = &lbl_821AEC2C;
    fn_82359C18(&object->member);
    fn_822FF888(object);
    if (flags & 1) {
        fn_8265CA20(object);
    }
    return object;
}

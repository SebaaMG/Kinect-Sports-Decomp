extern void *lbl_821BEA60;

typedef unsigned long long u64;

typedef struct Object {
    void *vtable;
    unsigned char padding[0x14];
    void *member;
} Object;

void fn_822315A0(void *member);
void fn_8265CA20(void *object);

Object *fn_8248B778(Object *object, u64 flags)
{
    object->vtable = &lbl_821BEA60;
    if (object->member) {
        fn_822315A0(object->member);
    }
    if (flags & 1) {
        fn_8265CA20(object);
    }
    return object;
}

extern int lbl_82197C88;
extern int lbl_82197CDC;

typedef struct Object {
    void *vtable;
    unsigned char padding_04[0x6C];
    void *vtable_70;
    unsigned char padding_74[0xC];
    unsigned int field_80;
} Object;

void fn_8224BFA0(void *object);
void fn_828AABD0(Object *object);

void fn_8251C3C0(Object *object)
{
    unsigned int field_80 = object->field_80;

    object->vtable = &lbl_82197C88;
    object->vtable_70 = &lbl_82197CDC;
    if (field_80 != 0) {
        object->field_80 = 0;
    }
    fn_8224BFA0(&object->vtable_70);
    fn_828AABD0(object);
}

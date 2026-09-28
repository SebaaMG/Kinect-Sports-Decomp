typedef int vtable_entry;

extern vtable_entry lbl_821BBE70;
extern vtable_entry lbl_821BBE50;

typedef struct Object {
    vtable_entry *vtable;
    unsigned char padding[0x50];
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
} Object;

void fn_82464660(Object *object);
void fn_8265CA20(unsigned int object);

void fn_82463C40(Object *object)
{
    unsigned int *fields;

    object->vtable = &lbl_821BBE70;
    fn_82464660(object);
    fields = &object->field_54;
    if (fields[0] != 0) {
        fn_8265CA20(fields[0]);
    }
    fields[0] = 0;
    fields[1] = 0;
    fields[2] = 0;
    object->vtable = &lbl_821BBE50;
}

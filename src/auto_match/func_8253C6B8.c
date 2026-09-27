typedef void (*Fn)(void *self, void *param_1, unsigned short param_2);

typedef struct Vtable {
    void *reserved[2];
    Fn invoke;
} Vtable;

typedef struct Object {
    Vtable *vtable;
} Object;

typedef struct Manager {
    unsigned char padding[0x10];
    Object *object;
} Manager;

void fn_8253C630(void);
Manager *fn_82CE5410(void);

int fn_8253C6B8(int param_1, unsigned int param_2)
{
    fn_8253C630();
    if (param_2 & 1) {
        Object *object = fn_82CE5410()->object;

        object->vtable->invoke(object, (void *)param_1, *(unsigned short *)((unsigned char *)param_1 + 4));
    }
    return param_1;
}

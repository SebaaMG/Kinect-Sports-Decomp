typedef void (*code)();
typedef struct object {
    unsigned char pad[0x50];
    int *at50;
    int *at60;
    int *at68;
} object;

void fn_82234798(object *self, int param_2)
{
    char result[144];

    (*(code *)(**(int **)&self->at68 + 0x14))(
        *(int **)&self->at68, param_2, result);
    if (self->at60 != (int *)0) {
        int *piVar1 = (int *)((int)self->at60 & ~1);
        (*(code *)(*piVar1 + 4))(piVar1, result);
    }
}

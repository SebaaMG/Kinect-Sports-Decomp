typedef int (*vtable_entry_fn)();

int fn_824CCFC8(void *param_1)
{
    void *field_20;
    void **vtable;

    field_20 = *(void **)((char *)param_1 + 0x20);
    if (field_20 != 0) {
        vtable = *(void ***)field_20;
        if (((vtable_entry_fn)vtable[1])() != 0) {
            return *(int *)((char *)param_1 + 0xd4) != 0;
        }
    }
    return 0;
}

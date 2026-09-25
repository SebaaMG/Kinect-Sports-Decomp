typedef unsigned int uint32_t;

extern uint32_t lbl_821AC4A4[];

void fn_822315A0(uint32_t value);
void fn_8265CA20(void *object);

uint32_t *fn_82396E50(uint32_t *object, uint32_t flags)
{
    uint32_t value = object[3];
    if (value != 0) {
        fn_822315A0(value);
    }
    object[0] = (uint32_t)lbl_821AC4A4;
    if ((flags & 1u) != 0) {
        fn_8265CA20(object);
    }
    return object;
}

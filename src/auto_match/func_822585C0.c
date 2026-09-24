extern int lbl_821982C8;
extern int lbl_821968A4;

int *fn_822585C0(int *object, unsigned int flags)
{
    *object = (int)&lbl_821982C8;
    object[10] = (int)&lbl_821968A4;
    fn_828E3228();
    if ((flags & 1u) != 0u) {
        fn_8265CA20(object);
    }
    return object;
}

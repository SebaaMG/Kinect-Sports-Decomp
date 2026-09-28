// Kinect Sports retail 4D5308C9, function 0x82610DC8 (100 bytes).
//
// Publishes the object vtable, then runs the teardown tail: the member at
// +0x8 is released through fn_822315A0 when present, and fn_8265CA20 runs when
// bit 0 of the flags word is set. The vtable store and the member load touch the
// same object, so both are volatile to keep the retail order (store, then load).
extern unsigned int lbl_821CAC7C;
extern void fn_822315A0(unsigned int object);
extern void fn_8265CA20(void *object);

void *fn_82610DC8(unsigned int *param_1, unsigned int param_2)
{
    unsigned int object;

    *(volatile unsigned int *)param_1 = (unsigned int)&lbl_821CAC7C;
    object = *(volatile unsigned int *)&param_1[2];
    if (object != 0) {
        fn_822315A0(object);
    }
    if (param_2 & 1) {
        fn_8265CA20((void *)param_1);
    }
    return (void *)param_1;
}

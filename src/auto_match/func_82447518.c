// Kinect Sports retail 4D5308C9, function 0x82447518 (100 bytes).
// Swaps the pointer held in *param_1 with the one produced by fn_824474A8 and
// releases the old value through its virtual destructor slot.
typedef void code(int *self, int flag);
extern void *fn_824474A8(void *param);

int *fn_82447518(int *param_1)
{
    int *holder;
    int *slot;
    int old;

    slot = (int *)fn_824474A8(&holder);
    old = *slot;
    *slot = *param_1;
    *param_1 = old;
    if (holder != 0) {
        (*(code **)*holder)(holder, 1);
    }
    return param_1;
}

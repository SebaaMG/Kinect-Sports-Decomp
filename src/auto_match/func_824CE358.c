// Kinect Sports retail 4D5308C9, function 0x824CE358 (100 bytes).
typedef int (*vfunc_t)(int *self);

extern unsigned char fn_8288B760(void);
extern void fn_828AB870(int param_1, int param_2);

void fn_824CE358(int *param_1)
{
    int *player = *(int **)(param_1 + 0x20);

    if (fn_8288B760() != 0) {
        fn_828AB870((*(vfunc_t *)(*param_1 + 8))(param_1) + 0x87C, player[0xA]);
    }
}

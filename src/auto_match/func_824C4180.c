extern int fn_824C1440(unsigned int *param_1);
extern void fn_824C04E0(unsigned int *param_1, int param_2);

void fn_824C4180(unsigned int *param_1)
{
    if (fn_824C1440((unsigned int *)param_1[4]) == 0) {
        unsigned int *item = (unsigned int *)param_1[1];
        item[0x11] = 0;
        if (((unsigned int *)param_1[4])[6] != 0) {
            item[0x11] = 1;
        }
        fn_824C04E0(item, 1);
    }
}

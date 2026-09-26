extern int lbl_821AE780;
extern void fn_822315A0(void);
extern void fn_8265CA20(void *param_1);

int *fn_822F95A8(int *param_1, unsigned int param_2)
{
    *param_1 = (int)&lbl_821AE780;
    if (param_1[5] != 0) {
        fn_822315A0();
    }
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

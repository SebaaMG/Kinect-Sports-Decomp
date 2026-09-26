extern unsigned int lbl_821BE9E8;
extern void fn_8248A290(void);
extern void fn_8265CA20(void *param_1);

unsigned int *fn_8248A228(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821BE9E8;
    if (param_1[2] != 0) {
        fn_8248A290();
    }
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

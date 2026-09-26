extern void fn_827F38B0(unsigned int *param_1);
extern void fn_827F38B8(unsigned int *param_1);
extern void fn_8265CA20(unsigned int *param_1);
extern unsigned int lbl_821C2244;

unsigned int *fn_825013D0(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821C2244;
    fn_827F38B0(param_1 + 8);
    fn_827F38B8(param_1);
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

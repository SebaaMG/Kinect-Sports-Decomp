extern void fn_822315A0(unsigned int param_1);
extern void fn_8265CA20(void *param_1);
extern unsigned int lbl_82197048;

unsigned int *fn_823FBE68(unsigned int *param_1, unsigned int param_2)
{
    if (param_1[3] != 0) {
        fn_822315A0(param_1[3]);
    }
    param_1[0] = (unsigned int)&lbl_82197048;
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

extern void fn_8251C3C0(void);
extern void fn_8265CA20(void *param_1);
extern unsigned int lbl_82197D40;
extern unsigned int lbl_82197D94;

unsigned int *fn_8224E780(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_82197D40;
    param_1[0x1c] = (unsigned int)&lbl_82197D94;
    fn_8251C3C0();
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

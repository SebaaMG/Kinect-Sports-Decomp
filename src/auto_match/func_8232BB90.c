extern unsigned int lbl_821B069C;
extern unsigned int lbl_821B0684;

extern void fn_8232B8B0(unsigned int *param_1);
extern void fn_8265CA20(unsigned int *param_1);

unsigned int *fn_8232BB90(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821B069C;
    param_1[0x15] = (unsigned int)&lbl_821B0684;
    fn_8232B8B0(param_1);
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

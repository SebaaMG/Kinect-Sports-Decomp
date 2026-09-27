extern unsigned int lbl_821C2CCC;
extern void fn_82230300(void *param_1, unsigned int param_2, unsigned int param_3);
extern void fn_8265CA20(void *param_1);

unsigned int *fn_82520E00(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821C2CCC;
    fn_82230300(param_1 + 3, 1, 0);
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

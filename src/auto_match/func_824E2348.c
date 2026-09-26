extern unsigned int lbl_821C0DF8;
extern unsigned int lbl_821C112C;

extern void fn_824CDA40(void);
extern void fn_8265CA20(unsigned int *param_1);

unsigned int *fn_824E2348(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821C0DF8;
    param_1[0x1a] = (unsigned int)&lbl_821C112C;
    fn_824CDA40();
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

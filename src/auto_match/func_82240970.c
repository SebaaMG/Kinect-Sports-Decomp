extern unsigned int lbl_821B4200;
extern unsigned int lbl_82197158;

extern void fn_8289D4C0(void);
extern void fn_8265CA20(unsigned int *param_1);

unsigned int *fn_82240970(unsigned int *param_1, unsigned int param_2)
{
    param_1[0x15] = (unsigned int)&lbl_821B4200;
    *param_1 = (unsigned int)&lbl_82197158;
    fn_8289D4C0();
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

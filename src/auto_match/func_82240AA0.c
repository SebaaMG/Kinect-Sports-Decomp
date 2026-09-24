extern int lbl_821B4200;
extern int lbl_821971B0;
extern void fn_8289D4C0(void);
extern void fn_8265CA20(int *);

int *fn_82240AA0(int *param_1, unsigned int param_2)
{
    param_1[0x15] = (int)&lbl_821B4200;
    *param_1 = (int)&lbl_821971B0;
    fn_8289D4C0();
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

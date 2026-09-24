extern int lbl_821B9BC8;
extern int lbl_82197100;
extern void fn_8289D4C0(void);
extern void fn_8265CA20(void *param_1);

void *fn_82235DA0(void *param_1, unsigned int param_2)
{
    *(int *)((char *)param_1 + 0x54) = (int)&lbl_821B9BC8;
    *(int *)param_1 = (int)&lbl_82197100;
    fn_8289D4C0();
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

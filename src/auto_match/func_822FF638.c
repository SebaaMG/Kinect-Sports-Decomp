extern void fn_822CA390(void);
extern void fn_8265CA20(unsigned int *param_1);
extern unsigned int lbl_821AEC50;
extern unsigned int lbl_821AEC9C;

unsigned int *fn_822FF638(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821AEC50;
    param_1[0x1a] = (unsigned int)&lbl_821AEC9C;
    fn_822CA390();
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

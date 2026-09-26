extern unsigned int lbl_821B8558;
extern void fn_82381E58(void *);
extern void fn_82381CA8(void *);
extern void fn_8265CA20(void *);

unsigned int *fn_824202D8(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821B8558;
    fn_82381E58(param_1 + 0x3C);
    fn_82381CA8(param_1);
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

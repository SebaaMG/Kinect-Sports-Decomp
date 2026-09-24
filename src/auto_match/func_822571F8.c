extern void fn_822332E8(void *);
extern void fn_82232D38(void *);
extern void fn_8265CA20(void *);
extern int lbl_82198270;

void *fn_822571F8(void *param_1, unsigned int param_2)
{
    *((void **)param_1) = (void *)&lbl_82198270;
    fn_822332E8((unsigned char *)param_1 + 0xe4);
    fn_82232D38(param_1);
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

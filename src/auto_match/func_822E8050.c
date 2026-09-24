extern void fn_822CA390(void *param_1);
extern void fn_8265CA20(void *param_1);
extern int lbl_821AE018;
extern int lbl_821AE064;

void *fn_822E8050(void *param_1, unsigned int param_2)
{
    *(void **)param_1 = &lbl_821AE018;
    *(void **)((char *)param_1 + 0x68) = &lbl_821AE064;
    fn_822CA390(param_1);
    if (param_2 & 1)
        fn_8265CA20(param_1);
    return param_1;
}

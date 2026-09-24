extern unsigned int lbl_821AD878;
extern unsigned int lbl_821AD8CC;
extern void fn_822CA390(void);
extern void fn_8265CA20(void *param_1);

unsigned int *fn_822D5578(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)&lbl_821AD878;
    param_1[0x1a] = (unsigned int)&lbl_821AD8CC;
    fn_822CA390();
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

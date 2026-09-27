extern int lbl_821CA7D8;
extern void fn_827F38B0(void *);
extern void fn_827F38B8(void *);
extern void fn_8265CA20(void *);

int *fn_825FFCF0(int *param_1, unsigned int param_2)
{
    *param_1 = (int)&lbl_821CA7D8;
    fn_827F38B0((char *)param_1 + 0x20);
    fn_827F38B8(param_1);
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

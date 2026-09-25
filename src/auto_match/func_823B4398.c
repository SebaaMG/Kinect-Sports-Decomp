extern int lbl_821B5AD0;
extern int lbl_821B5B50;
extern void fn_828BDE70(void);
extern void fn_8265CA20(int *param_1);

unsigned int *fn_823B4398(unsigned int *param_1, int param_2)
{
    *param_1 = (unsigned int)&lbl_821B5AD0;
    param_1[0x14] = (unsigned int)&lbl_821B5B50;
    fn_828BDE70();
    if ((param_2 & 1) != 0) {
        fn_8265CA20((int *)param_1);
    }
    return param_1;
}

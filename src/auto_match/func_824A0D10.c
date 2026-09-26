extern unsigned int lbl_821BF170[];

typedef void (*VtblFunc)(void *self, int flag);

extern void fn_8265CA20(unsigned int *param_1);

unsigned int *fn_824A0D10(unsigned int *param_1, unsigned int param_2)
{
    *param_1 = (unsigned int)lbl_821BF170;
    ((VtblFunc)lbl_821BF170[3])(param_1, 0);
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

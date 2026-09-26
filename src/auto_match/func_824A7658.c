extern unsigned int lbl_821BF850;
extern void fn_8265CA20(void *param_1);

void fn_824A7658(unsigned int *param_1)
{
    unsigned int i;

    *param_1 = (unsigned int)&lbl_821BF850;
    for (i = 0; (int)param_1[5] > 0; i++) {
        param_1[3] += 0xa0;
        if (param_1[3] == param_1[2]) {
            param_1[3] = param_1[1];
        }
    }
    if (param_1[1] != 0) {
        fn_8265CA20((void *)param_1[1]);
    }
}

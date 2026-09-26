extern void fn_8265CA20(void *param_1);
extern unsigned int lbl_821BFFD0;

void fn_824ADD00(unsigned int *param_1)
{
    unsigned int count;
    unsigned int current;

    param_1[0] = (unsigned int)&lbl_821BFFD0;
    count = 0;
    if (param_1[5] != 0) {
        do {
            current = param_1[3];
            count = count + 1;
            param_1[3] = current + 0x60;
            if (current + 0x60 == param_1[2]) {
                param_1[3] = param_1[1];
            }
        } while (count < param_1[5]);
    }
    if (param_1[1] != 0) {
        fn_8265CA20(param_1[1]);
    }
}

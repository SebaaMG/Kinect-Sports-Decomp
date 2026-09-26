extern int lbl_821C01DC;
extern void fn_8265CA20(int param_1);

void fn_824B3E60(int *param_1)
{
    int count;

    count = 0;
    *param_1 = (int)&lbl_821C01DC;
    if (param_1[5] > 0) {
        do {
            int cur;

            cur = param_1[3];
            count = count + 1;
            param_1[3] = cur + 0x190;
            if (cur + 0x190 == param_1[2]) {
                param_1[3] = param_1[1];
            }
        } while (count < param_1[5]);
    }
    if (param_1[1] == 0) {
        return;
    }
    fn_8265CA20(param_1[1]);
}

extern int lbl_821C0198;
extern void fn_8265CA20(void *);

void fn_824B2768(int *param_1)
{
    int iVar1;
    int iVar2 = 0;

    *param_1 = (int)&lbl_821C0198;
    if (param_1[5] > 0) {
        do {
            iVar1 = param_1[3];
            iVar2 = iVar2 + 1;
            param_1[3] = iVar1 + 0x50;
            if (iVar1 + 0x50 == param_1[2]) {
                param_1[3] = param_1[1];
            }
        } while (iVar2 < param_1[5]);
    }
    if (param_1[1] == 0) {
        return;
    }
    fn_8265CA20((void *)param_1[1]);
}

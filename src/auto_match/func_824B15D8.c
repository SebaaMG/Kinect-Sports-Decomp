extern int lbl_821C00FC;
extern void fn_8265CA20(void *object);

void fn_824B15D8(int *param_1)
{
    int iVar1;
    unsigned int uVar3;

    uVar3 = 0;
    param_1[0] = (int)&lbl_821C00FC;
    if (param_1[5] > 0) {
        do {
            iVar1 = param_1[3];
            uVar3 = uVar3 + 1;
            param_1[3] = iVar1 + 0x20;
            if (iVar1 + 0x20 == param_1[2]) {
                param_1[3] = param_1[1];
            }
        } while (uVar3 < (unsigned int)param_1[5]);
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
        fn_8265CA20((void *)iVar1);
    }
}

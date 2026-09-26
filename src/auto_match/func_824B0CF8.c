extern int lbl_821C00B8;
extern void fn_8265CA20(void *param_1);

void fn_824B0CF8(unsigned int *param_1)
{
    int iVar1;
    unsigned int uVar2;
    unsigned int uVar3;

    *param_1 = (unsigned int)&lbl_821C00B8;
    iVar1 = 0;
    if ((int)param_1[5] > 0) {
        do {
            uVar2 = param_1[3] + 0xd0;
            uVar3 = param_1[2];
            iVar1 = iVar1 + 1;
            param_1[3] = uVar2;
            if (uVar2 == uVar3) {
                param_1[3] = param_1[1];
            }
        } while (iVar1 < (int)param_1[5]);
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
        fn_8265CA20((void *)uVar2);
    }
}

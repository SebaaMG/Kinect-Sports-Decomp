int fn_824AFFF0(int param_1)
{
    int *ptr;
    int iVar1;
    int iVar2;
    int iVar3;

    ptr = *(int **)(param_1 + 0x3c);
    iVar3 = 0;
    if (*(int *)(ptr + 0x14) > 0) {
        do {
            iVar3 = iVar3 + 1;
            iVar2 = *(int *)(ptr + 0xc) + 0xd0;
            *(int *)(ptr + 0xc) = iVar2;
            if (iVar2 == *(int *)(ptr + 8)) {
                *(int *)(ptr + 0xc) = *(int *)(ptr + 4);
            }
        } while (iVar3 < *(int *)(ptr + 0x14));
    }
    *(int *)(ptr + 0x14) = 0;
    *(int *)(*(int *)(param_1 + 0x3c) + 0x30) = 0;
    return 0;
}

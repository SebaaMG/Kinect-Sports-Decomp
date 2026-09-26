int fn_8307E4F8(int param_1, int param_2, unsigned int *param_3)
{
    unsigned int *puVar3;
    unsigned int uVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    unsigned char bVar5;
    unsigned char bVar6;
    unsigned char bVar7;
    
    puVar3 = (unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
    uVar1 = puVar3[0];
    uVar2 = puVar3[1];
    uVar3 = puVar3[3];
    uVar4 = puVar3[4];
    bVar5 = *(unsigned char *)((int)param_3 + 10);
    bVar6 = *(unsigned char *)((int)param_3 + 8);
    bVar7 = *(unsigned char *)((int)param_3 + 9);
    
    puVar3[0] = (bVar5 << 12) | (uVar1 & 0xfff00fff);
    uVar1 = ((*(unsigned char *)(param_3 + 2)) & 3) << 12;
    puVar3[1] = uVar1 | (uVar2 & 0xffffcfff);
    puVar3[1] = (bVar7 & 7) << 17 | uVar1 | (uVar2 & 0xfff1cfff);
    puVar3[3] = (param_3[0] & 0x3ffffff) | (uVar3 & 0xfc000000);
    puVar3[4] = (uVar4 & 0xfc000000) | (param_3[1] & 0x3ffffff);
    return 0;
}

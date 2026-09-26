void fn_82820FF0(volatile unsigned int *param_1)
{
    unsigned int uVar1;
    
    uVar1 = param_1[0];
    param_1[0] = ((uVar1 >> 16 | uVar1 & 0xFFFF0000) >> 8 & 0xFFFF) | (((uVar1 << 16 | uVar1 & 0xFFFF) & 0xFFFF00) << 8);
    
    uVar1 = param_1[1];
    param_1[1] = ((uVar1 >> 16 | uVar1 & 0xFFFF0000) >> 8 & 0xFFFF) | (((uVar1 << 16 | uVar1 & 0xFFFF) & 0xFFFF00) << 8);
    
    uVar1 = param_1[2];
    param_1[2] = ((uVar1 >> 16 | uVar1 & 0xFFFF0000) >> 8 & 0xFFFF) | (((uVar1 << 16 | uVar1 & 0xFFFF) & 0xFFFF00) << 8);
}

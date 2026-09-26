extern void fn_8289D7E8(void *param_1, unsigned int param_2);
extern unsigned int lbl_821B4200;
extern unsigned int lbl_821971F8;
extern unsigned int lbl_82197240;

unsigned int *fn_822409E0(volatile unsigned int *param_1)
{
    fn_8289D7E8(param_1, 1);
    param_1[0x17] = (unsigned int)param_1;
    param_1[0x15] = (unsigned int)&lbl_821B4200;
    param_1[0x16] = 0;
    param_1[0] = (unsigned int)&lbl_821971F8;
    param_1[0x15] = (unsigned int)&lbl_82197240;
    return param_1;
}

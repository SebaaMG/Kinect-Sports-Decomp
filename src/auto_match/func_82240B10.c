extern void fn_8289D7E8(void *, unsigned int);
extern unsigned int lbl_821B4200;
extern unsigned int lbl_82197248;
extern unsigned int lbl_82197290;

unsigned int * fn_82240B10(unsigned int *param_1)
{
    fn_8289D7E8(param_1, 0x19);
    param_1[0x17] = (unsigned int)param_1;
    param_1[0x15] = (unsigned int)&lbl_821B4200;
    param_1[0x16] = 0;
    *param_1 = (unsigned int)&lbl_82197248;
    param_1[0x15] = (unsigned int)&lbl_82197290;
    return param_1;
}

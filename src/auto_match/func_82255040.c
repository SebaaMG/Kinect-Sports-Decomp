extern int lbl_82198094;
extern int lbl_82197080;
extern void fn_8289D4C0(volatile int *param_1);
extern void fn_82232BC0(volatile int *param_1);

void fn_82255040(volatile int *param_1)
{
    *param_1 = (int)&lbl_82198094;
    param_1[0x288] = (int)&lbl_82197080;
    fn_8289D4C0(param_1 + 0x288);
    param_1[0x273] = (int)&lbl_82197080;
    fn_8289D4C0(param_1 + 0x273);
    fn_82232BC0(param_1);
}

extern int lbl_82197534;
extern int lbl_82196AFC;
extern void fn_82897D88(void *param_1);

void fn_822332E8(unsigned int *param_1)
{
    param_1[0x30] = (unsigned int)&lbl_82197534;
    fn_82897D88(param_1 + 0x30);
    param_1[0x1a] = (unsigned int)&lbl_82196AFC;
    fn_82897D88(param_1 + 0x1a);
    *param_1 = (unsigned int)&lbl_82197534;
    fn_82897D88(param_1);
}

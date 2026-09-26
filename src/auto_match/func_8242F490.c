extern void fn_825708F0(unsigned int param_1, unsigned int param_2);
extern void fn_8265CA20(unsigned int param_1);
extern void fn_82366A98(unsigned int param_1);
extern unsigned int lbl_821B90F0;

void fn_8242F490(unsigned int *param_1)
{
    unsigned int *param_2 = (unsigned int *)param_1[0x91];

    *param_1 = (unsigned int)&lbl_821B90F0;
    fn_825708F0(param_2[0x50], param_2[0x1D]);
    fn_825708F0(param_2[0x50], param_2[0x1D - 1]);
    fn_8265CA20(param_1[0x91]);
    fn_82366A98((unsigned int)param_1);
}

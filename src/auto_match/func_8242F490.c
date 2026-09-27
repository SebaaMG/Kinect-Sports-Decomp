extern void fn_825708F0(unsigned int param_1, unsigned int param_2);
extern void fn_8265CA20(unsigned int param_1);
extern void fn_82366A98(unsigned int param_1);
extern unsigned int lbl_821B90F0;

void fn_8242F490(unsigned int *param_1)
{
    *param_1 = (unsigned int)&lbl_821B90F0;
    fn_825708F0(*(unsigned int *)(param_1[0x91] + 0x140), *(unsigned int *)(param_1[0x91] + 0x78));
    fn_825708F0(*(unsigned int *)(param_1[0x91] + 0x140), *(unsigned int *)(param_1[0x91] + 0x74));
    fn_8265CA20(param_1[0x91]);
    fn_82366A98((unsigned int)param_1);
}

extern float lbl_821CA45C[2];
extern void fn_82359698(int param_1, int param_2);
extern void fn_8236B4F0(int param_1, float param_2);
extern void fn_823D6088(int param_1);

void fn_823D15A8(int param_1, int param_2, int param_3)
{
    *(int *)(param_1 + 0xee0) = param_2;
    *(int *)(param_1 + 0xee4) = param_3;
    fn_82359698(param_1, 10);
    if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
        fn_8236B4F0(param_1, lbl_821CA45C[1]);
    }
    fn_823D6088(param_1 + 0x9f8);
}

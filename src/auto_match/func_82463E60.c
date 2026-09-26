extern void fn_82529320(unsigned int param_1, int param_2);

void fn_82463E60(unsigned int *param_1)
{
    if (param_1[0x7] != 0) {
        fn_82529320(param_1[0x7], 0);
    }
    if (param_1[0x9] != 0) {
        fn_82529320(param_1[0x9], 0);
    }
    if (param_1[0x8] != 0) {
        fn_82529320(param_1[0x8], 0);
    }
}

extern unsigned int lbl_821AF1C8[];

unsigned int *fn_822E3F28(unsigned int *param_1, unsigned int param_2)
{
    if (param_1[7] != 0) {
        fn_822315A0(param_1[7]);
    }
    *param_1 = (unsigned int)lbl_821AF1C8;
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}

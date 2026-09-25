extern unsigned int *fn_8265C9E0(unsigned int size);
extern unsigned int lbl_821B7A2C;

unsigned int *fn_823FB4A8(int param_1)
{
    unsigned int *result = fn_8265C9E0(0x10);

    if (result != 0) {
        *result = (unsigned int)&lbl_821B7A2C;
        result[1] = *(unsigned int *)(param_1 + 4);
        result[2] = *(unsigned int *)(param_1 + 8);
        result[3] = *(unsigned int *)(param_1 + 0xc);
        return result;
    }

    return 0;
}

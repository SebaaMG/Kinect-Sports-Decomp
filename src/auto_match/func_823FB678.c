extern int *fn_8265C9E0(int size);
extern int lbl_821B7A5C[];

int *fn_823FB678(int *param_1)
{
    int *result = fn_8265C9E0(8);

    if (result == 0) {
        result = 0;
    } else {
        *result = (int)lbl_821B7A5C;
        *(unsigned char *)(result + 1) = *(unsigned char *)(param_1 + 1);
        *(unsigned char *)((char *)result + 5) = *(unsigned char *)(param_1 + 5);
    }
    return result;
}

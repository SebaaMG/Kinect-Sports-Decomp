extern int fn_824CD030(int unused);
extern float lbl_821CC160;

float fn_824E17D8(int param_1)
{
    int *node;

    if (fn_824CD030(0) == 0) {
        return lbl_821CC160;
    }

    node = *(int **)(*(int **)(param_1 + 0xfc) + 0x3c);

    if (*(char *)(node + 0x30) == 0) {
        return *(float *)(node + 0x1c);
    }

    return *(float *)(node + 0x34);
}

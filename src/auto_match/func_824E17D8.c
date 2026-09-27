extern int fn_824CD030(void);
extern float lbl_821CC160;

float fn_824E17D8(int param_1)
{
    char *node;

    if (fn_824CD030() != 0) {
        node = *(char **)(param_1 + 0xfc);
        node = *(char **)node;
        node = *(char **)(node + 0x3c);

        if (*(char *)(node + 0x30) != 0) {
            return *(float *)(node + 0x34);
        }

        return *(float *)(node + 0x1c);
    }

    return lbl_821CC160;
}

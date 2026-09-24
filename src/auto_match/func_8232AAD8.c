extern int lbl_821B05E4;
extern void *fn_8265C9E0(int size);
extern void fn_828B5580(void *dst, const void *src);

void *fn_8232AAD8(char *param_1)
{
    void *result = fn_8265C9E0(12);

    if (result != 0) {
        *(int *)result = (int)&lbl_821B05E4;
        fn_828B5580((char *)result + 4, param_1 + 4);
        return result;
    }
    return 0;
}

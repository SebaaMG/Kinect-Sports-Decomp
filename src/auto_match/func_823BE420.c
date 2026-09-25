extern void *fn_8265C9E0(int size);
extern void fn_823BE2A8(void *object, void *value);
extern int lbl_821B5F3C;

void *fn_823BE420(void *param_1)
{
    void *result = fn_8265C9E0(0x1b0);

    if (result != 0) {
        *(int *)result = (int)&lbl_821B5F3C;
        fn_823BE2A8((char *)result + 0x10, (char *)param_1 + 0x10);
        return result;
    }
    return 0;
}

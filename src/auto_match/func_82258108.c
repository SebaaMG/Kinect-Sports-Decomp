extern void *fn_8265C9E0(unsigned int size);
extern void fn_822337D0(void *object, void *source);
extern int lbl_821982B0;
void *fn_82258108(void *param_1)
{
    void *result = fn_8265C9E0(0x1ec);
    if (result) {
        fn_822337D0(result, param_1);
        *(int *)result = (int)&lbl_821982B0;
        return result;
    }
    return 0;
}

extern void *fn_8265C9E0(unsigned int size);
extern void fn_82232B50(void *object, void *param);
extern char lbl_82197EDC;

void *fn_82257DB8(void *param_1)
{
    void *object = fn_8265C9E0(0x9cc);

    if (object) {
        fn_82232B50(object, param_1);
        *(unsigned int *)object = (unsigned int)&lbl_82197EDC;
        return object;
    }
    return 0;
}

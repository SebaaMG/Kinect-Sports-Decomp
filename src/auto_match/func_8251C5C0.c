extern void *fn_8265C9E0(int size);
extern void fn_8223BBA0(void *object, void *param_1);
extern int lbl_82196A24;

void *fn_8251C5C0(void *param_1)
{
    void *object = fn_8265C9E0(0x2e8);

    if (object != 0) {
        fn_8223BBA0(object, param_1);
        *(volatile unsigned int *)object = (unsigned int)&lbl_82196A24;
    } else {
        return 0;
    }

    return object;
}

extern unsigned int lbl_8320A3E0;
extern void fn_8255F1E0(void);
extern void *fn_82811400(void *buffer, unsigned int size);
extern void fn_82811238(void *a, void *b, void *c);

void *fn_8255F178(void *param_1, unsigned int param_2)
{
    unsigned char buffer[24];
    void *temp;

    fn_8255F1E0();
    if ((param_2 & 1) != 0) {
        temp = fn_82811400(buffer, 8);
        fn_82811238(&lbl_8320A3E0, param_1, temp);
    }
    return param_1;
}

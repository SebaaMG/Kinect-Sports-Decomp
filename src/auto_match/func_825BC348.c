extern void fn_82A1BB18(void);
extern void fn_8259A230(void);

int fn_825BC348(char *param_1)
{
    int i;

    fn_82A1BB18();
    fn_8259A230();
    for (i = 0; i < 0x20; i++) {
        if (param_1[0x80 + i] == 0) {
            param_1[0x80 + i] = 1;
            return i;
        }
    }
    return 0;
}

void fn_82593180(int flags);
void fn_82A1BB18(void);
int fn_8259A230(void);
void fn_825269D0(int object, int value);

int fn_8259A340(void)
{
    int object;

    fn_82593180(1);
    fn_82A1BB18();
    fn_825269D0(fn_8259A230() + 0x1d, 0);
    fn_82A1BB18();
    object = fn_8259A230();
    if (object == 0) {
        return 0;
    }
    do {
        fn_825269D0(object + 0x23, 0);
    } while (1);
}

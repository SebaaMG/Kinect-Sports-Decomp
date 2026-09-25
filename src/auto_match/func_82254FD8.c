extern int lbl_821980A4;
extern int lbl_821970C0;

extern void fn_82897D88(int *object);
extern void fn_82232AE8(int *object);

void fn_82254FD8(int *object)
{
    *(volatile int *)object = (int *)&lbl_821980A4;
    *(volatile int *)&object[0x2B1] = (int *)&lbl_821970C0;
    fn_82897D88(&object[0x2B1]);

    object[0x29B] = (int *)&lbl_821970C0;
    fn_82897D88(&object[0x29B]);

    fn_82232AE8(object);
}

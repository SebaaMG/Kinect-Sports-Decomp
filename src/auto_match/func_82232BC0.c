/* Class constructor: installs the vtables and runs the base initialisers. */
extern unsigned int lbl_82196BC0;
extern unsigned int lbl_82197100;
extern void fn_8289D4C0(unsigned int *);
extern void fn_82232818(unsigned int *);

void fn_82232BC0(unsigned int *param_1)
{
    unsigned int *slot_25e = param_1 + 0x25e;

    *param_1 = &lbl_82196BC0;
    *slot_25e = &lbl_82197100;
    fn_8289D4C0(slot_25e);
    param_1[0x249] = &lbl_82197100;
    fn_8289D4C0(param_1 + 0x249);
    fn_82232818(param_1);
}

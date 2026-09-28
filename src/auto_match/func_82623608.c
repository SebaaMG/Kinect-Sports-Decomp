/* Class destructor: resets the vtables and releases the three extra slots. */
extern unsigned int lbl_821CAD88;
extern unsigned int lbl_82197010;
extern void fn_82522ED8(unsigned int);
extern void fn_82622BD8(unsigned int);

void fn_82623608(unsigned int *param_1)
{
    unsigned int *slot_14;
    int count;

    *param_1 = (unsigned int)&lbl_821CAD88;
    fn_82522ED8(param_1[4]);
    slot_14 = param_1 + 5;
    count = 3;
    do {
        if (*slot_14 != 0) {
            fn_82622BD8(*slot_14);
            *slot_14 = 0;
        }
        slot_14++;
    } while (--count != 0);
    *param_1 = (unsigned int)&lbl_82197010;
}

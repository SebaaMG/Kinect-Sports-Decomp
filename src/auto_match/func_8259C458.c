// Kinect Sports retail 4D5308C9, function 0x8259C458 (0x64 bytes).
// Returns the record field at +0x18 of element (param_1 * 0x38) in the
// lazily initialised global table, or 0 when the record's +0x3c field is 0.
extern unsigned int lbl_832767CC;
extern void fn_82522838(void);

int fn_8259C458(int param_1)
{
    unsigned int *entry;

    if (lbl_832767CC == 0) {
        fn_82522838();
    }
    entry = (unsigned int *)(lbl_832767CC + param_1 * 0x38);
    if (entry[15] != 0) {
        return (int)(entry + 6);
    }
    return 0;
}

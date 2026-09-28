/*
 * 0x82657F78: clears the 32-bit field at +0x359c of the object and then
 * issues a full memory barrier before returning.
 *
 * The retail code calls _ReadWriteBarrier(), which the X360 back end
 * expands to "sync".  In this toolchain build that intrinsic expands to
 * nothing (see warning-free no-op expansion in c1.dll), and the inline
 * assembler rejects "sync" ("Unsupported instruction form"), so the
 * barrier instruction cannot be reproduced from C here; the store part
 * matches exactly.
 */
void _ReadWriteBarrier(void);

void fn_82657F78(int object)
{
    *(int *)(object + 0x359c) = 0;
    _ReadWriteBarrier();
}

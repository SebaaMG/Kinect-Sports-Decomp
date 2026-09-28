// Kinect Sports retail 4D5308C9, function 0x826384C0 (20 bytes).
//
// Sets a one-byte state field at +0x2902 and then sets bit 0x10000000 of the
// 64-bit flag word at +0x10.  Both accesses go through volatile lvalues so the
// byte store is emitted before the flag word is reloaded (the 64-bit load would
// otherwise be hoisted above the store by the code generator).
typedef unsigned char u8;
typedef unsigned long long u64;

void fn_826384C0(void *param_1, u8 param_2)
{
    *(volatile u8 *)((char *)param_1 + 0x2902) = param_2;
    *(volatile u64 *)((char *)param_1 + 0x10) |= 0x10000000ULL;
}

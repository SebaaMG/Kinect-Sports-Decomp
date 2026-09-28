void fn_82639330(int object, char value)
{
    /* The flag update must be emitted after the byte store, so both accesses
       are volatile to stop the optimizer from hoisting the 64-bit load. */
    *(volatile char *)(object + 0x2942) = value;
    *(volatile long long *)(object + 0x10) |= 0x100;
}

void fn_82FFFF40(void *object, unsigned char value)
{
    unsigned char *field = (unsigned char *)object + 0x3e;

    *field = (unsigned char)((value << 7) | (*field & 0x7f));
}

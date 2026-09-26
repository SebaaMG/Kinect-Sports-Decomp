/* Returns the sign-extended 16-bit element at base[index] in a short array. */
int fn_82A6A3B8(int base, int unused1, int unused2, int index)
{
    return (short)*(unsigned short *)(base + (index * 2));
}

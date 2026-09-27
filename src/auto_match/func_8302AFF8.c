/* Returns the signed 4-bit field held in bits 20..23 of the word at +0x20. */
int fn_8302AFF8(int param_1)
{
    return (int)((int)(*(unsigned int *)((char *)param_1 + 0x20) << 8) >> 28);
}

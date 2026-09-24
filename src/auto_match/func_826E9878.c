unsigned int fn_826E9878(void *base)
{
    unsigned int value = *(unsigned int *)((unsigned char *)base + 8);

    return (value & ~3u) + 8u;
}

unsigned int fn_82ADD600(void *object, int index)
{
    unsigned int *table;

    table = *(unsigned int **)((unsigned char *)object + 0x2b0);
    return table[index];
}

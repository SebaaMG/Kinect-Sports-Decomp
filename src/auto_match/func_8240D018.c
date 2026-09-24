int fn_8240D018(int object, unsigned int value)
{
    if (*(int *)(object + 4) != value) {
        return *(int *)(object + 4);
    }

    return *(int *)(object + 0x1c);
}

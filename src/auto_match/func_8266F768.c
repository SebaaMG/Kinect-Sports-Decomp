void fn_8266F768(int object, int value)
{
    int old_value = *(int *)((char *)object + 0xfc);

    *(int *)((char *)object + 0x100) = value;
    if (old_value <= value) {
        return;
    }
    *(int *)((char *)object + 0xfc) = value;
}

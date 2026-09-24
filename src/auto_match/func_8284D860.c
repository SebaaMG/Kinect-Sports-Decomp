void fn_8284D860(int object, unsigned int value, unsigned int *out_value,
                  unsigned int *out_param)
{
    *out_value = *(unsigned int *)(object + 0x110);
    *out_param = value;
}

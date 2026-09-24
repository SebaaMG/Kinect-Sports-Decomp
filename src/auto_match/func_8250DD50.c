void fn_8250DD50(int object, int index, float value)
{
    *(float *)(*(int *)(object + 0xf8) + index * 4) = value;
}

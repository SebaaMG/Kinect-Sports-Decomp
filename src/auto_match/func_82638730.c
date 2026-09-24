int fn_82638730(int param_1)
{
    union
    {
        float f;
        int i;
    } value;

    value.f = *(float *)(param_1 + 0x2a54);
    return value.i;
}

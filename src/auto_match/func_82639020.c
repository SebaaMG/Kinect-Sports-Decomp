int fn_82639020(int param_1)
{
    union { float f; int i; } value;
    value.f = *(float *)(param_1 + 0x297c);
    return value.i;
}

extern float lbl_821CC160;
extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

void fn_8232D710(int param_1)
{
    union { unsigned int i; float f; } value;
    float base = *(float *)(param_1 + 0x3c);
    float current = *(float *)(param_1 + 0x40);
    float delta = current - base;
    *(float *)(param_1 + 0x44) = lbl_821CC160;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    value.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
    *(float *)(param_1 + 0x48) = delta * (value.f - lbl_821CA45C[1]) + base;
}

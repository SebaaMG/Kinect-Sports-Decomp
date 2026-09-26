void fn_8280D8E0(float *param_1, float *param_2, float *param_3)
{
    float f13 = param_1[3];
    float f12 = param_2[1];
    float f9 = param_2[2];
    float f10 = f12 * f13;
    float f11 = param_2[0];
    float f7 = f9 * f13;
    float f8 = param_1[0];
    float f0 = param_2[3];
    float f6 = f8 * f11;
    float f4 = f8 * f0;
    float f5 = param_1[2];
    float f3 = param_1[1];

    f10 = f11 * f5 + f10;
    f7 = f8 * f12 + f7;
    f6 = f13 * f0 - f6;
    f13 = f11 * f13 + f4;
    f10 = f0 * f3 + f10;
    f0 = f5 * f0 + f7;
    f7 = f6 - f12 * f3;
    f13 = f9 * f3 + f13;
    f10 = f10 - f8 * f9;
    param_3[1] = f10;
    f0 = f0 - f11 * f3;
    param_3[2] = f0;
    f0 = f7 - f9 * f5;
    param_3[3] = f0;
    f0 = f13 - f5 * f12;
    param_3[0] = f0;
}

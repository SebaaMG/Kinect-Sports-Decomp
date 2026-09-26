void fn_82810628(float *param_1, float *param_2, float *param_3, float *param_4)
{
    float dot12;
    float dot13;

    dot12 = param_1[2] * param_2[2] + param_2[1] * param_1[1] + param_2[0] * param_1[0];
    dot13 = param_3[0] * param_1[0] + param_3[1] * param_1[1] + param_3[2] * param_1[2];

    param_4[0] = param_2[0] * dot13 - param_3[0] * dot12;
    param_4[1] = param_2[1] * dot13 - param_3[1] * dot12;
    param_4[2] = param_2[2] * dot13 - param_3[2] * dot12;
}

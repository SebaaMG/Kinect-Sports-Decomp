void fn_82810628(float *param_1, float *param_2, float *param_3, float *param_4)
{
    float fVar1;
    float fVar2;
    float p1_0, p2_0, p1_2, p1_1;
    float p3_2, p2_1, p3_1, p2_2, p3_0;
    
    p1_0 = *param_1;
    p2_0 = *param_2;
    fVar2 = p2_0 * p1_0;
    
    p1_2 = param_1[2];
    p1_1 = param_1[1];
    
    p3_2 = param_3[2];
    p2_1 = param_2[1];
    p3_1 = param_3[1];
    p2_2 = param_2[2];
    p3_0 = param_3[0];
    
    fVar2 += p2_1 * p1_1;
    fVar2 += p1_2 * p2_2;
    
    fVar1 = p3_1 * p1_1;
    fVar1 += p3_2 * p1_2;
    fVar1 += p3_0 * p1_0;
    
    *param_4 = p2_0 * fVar1 - p3_0 * fVar2;
    param_4[1] = p2_1 * fVar1 - p3_1 * fVar2;
    param_4[2] = fVar1 * p2_2 - p3_2 * fVar2;
}

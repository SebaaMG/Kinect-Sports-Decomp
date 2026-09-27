void fn_8280D8E0(float *param_1, float *param_2, float *param_3)
{
    float fVar1 = param_1[3];
    float fVar2 = param_2[1];
    float fVar3 = param_2[2];
    float fVar4 = param_2[0];
    float fVar5 = param_1[0];
    float fVar6 = param_2[3];
    float fVar7 = param_1[2];
    float fVar8 = param_1[1];
    
    param_3[1] = -(fVar5 * fVar3 - (fVar6 * fVar8 + fVar4 * fVar7 + fVar2 * fVar1));
    param_3[2] = -(fVar4 * fVar8 - (fVar7 * fVar6 + fVar5 * fVar2 + fVar3 * fVar1));
    param_3[3] = -(fVar3 * fVar7 - -(fVar2 * fVar8 - (fVar1 * fVar6 - fVar5 * fVar4)));
    *param_3 = -(fVar7 * fVar2 - (fVar3 * fVar8 + fVar4 * fVar1 + fVar5 * fVar6));
}

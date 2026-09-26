typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
#define NAN(x) ((x) != (x))
extern int fn_82621800();
extern int fn_82621870();
extern unsigned int lbl_821954B0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CC160;


double fn_82621548(double param_1,float *param_2)

{
  float fVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = (double)(float)((double)param_2[4] - param_1);
  dVar6 = (double)(float)((double)param_2[5] - param_1);
  dVar5 = (double)*param_2;
  dVar9 = (double)lbl_821CC160;
  dVar8 = (double)param_2[1];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar3 < dVar9) << 2) | (uint)(NAN(dVar3) || NAN(dVar9)) << 2)) < 0.0)
  {
    dVar3 = dVar9;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar6 < dVar9) << 2) | (uint)(NAN(dVar6) || NAN(dVar9)) << 2)) < 0.0)
  {
    dVar6 = dVar9;
  }
  param_2[4] = (float)dVar3;
  param_2[5] = (float)dVar6;
  if (param_2[9] == 0.0) {
    if (dVar8 <= dVar5) {
      fVar1 = param_2[3];
    }
    else {
      fVar1 = param_2[2];
    }
    dVar4 = (double)(float)(dVar5 - (double)param_2[7]);
    puVar2 = &lbl_821954B0;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar9) << 2) | (uint)(NAN(dVar4) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar5 = (double)param_2[7];
    }
    dVar7 = (double)(float)(dVar5 - (double)param_2[8]);
    dVar4 = (double)param_2[8];
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar7 < dVar9) << 2) | (uint)(NAN(dVar7) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar4 = dVar5;
    }
    if (((dVar8 < dVar4) && (dVar6 == dVar9)) || ((dVar4 < dVar8 && (dVar3 == dVar9)))) {
      puVar2 = &lbl_821954B0;
      param_2 = (float *)fn_82621800(dVar8,dVar4,param_1,(double)fVar1);
      param_2[1] = (float)extraout_f1_00;
    }
    dVar3 = (double)(float)((double)param_2[1] - (double)param_2[7]);
    dVar5 = (double)param_2[1];
    if (*(float *)((int)puVar2 +
                  ((uint)(byte)((dVar3 < dVar9) << 2) | (uint)(NAN(dVar3) || NAN(dVar9)) << 2) +
                  0x28) < 0.0) {
      dVar5 = (double)param_2[7];
    }
    dVar6 = (double)(float)(dVar5 - (double)param_2[8]);
    dVar3 = (double)param_2[8];
    if (*(float *)((int)puVar2 +
                  ((uint)(byte)((dVar6 < dVar9) << 2) | (uint)(NAN(dVar6) || NAN(dVar9)) << 2) +
                  0x28) < 0.0) {
      dVar3 = dVar5;
    }
    dVar8 = dVar3 - dVar8;
  }
  else {
    dVar4 = (double)param_2[7];
    puVar2 = &lbl_821954B0;
    if ((double)lbl_821956BC < dVar4) {
      dVar7 = dVar5;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar5 - dVar4) < dVar9) << 2) |
                    (uint)(NAN((double)(float)(dVar5 - dVar4)) || NAN(dVar9)) << 2)) < 0.0) {
        dVar7 = dVar4;
      }
      dVar4 = (double)(float)(dVar7 - (double)param_2[8]);
      dVar5 = (double)param_2[8];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar4 < dVar9) << 2) | (uint)(NAN(dVar4) || NAN(dVar9)) << 2)) <
          0.0) {
        dVar5 = dVar7;
      }
    }
    if ((dVar3 == dVar9) && (dVar6 == dVar9)) {
      puVar2 = &lbl_821954B0;
      param_2 = (float *)fn_82621870(dVar8,dVar5,(double)param_2[3],param_1);
      param_2[1] = (float)extraout_f1;
    }
    dVar3 = (double)(float)((double)param_2[1] - (double)param_2[7]);
    dVar5 = (double)param_2[1];
    if (*(float *)((int)puVar2 +
                  ((uint)(byte)((dVar3 < dVar9) << 2) | (uint)(NAN(dVar3) || NAN(dVar9)) << 2) +
                  0x28) < 0.0) {
      dVar5 = (double)param_2[7];
    }
    dVar6 = (double)(float)(dVar5 - (double)param_2[8]);
    dVar3 = (double)param_2[8];
    if (*(float *)((int)puVar2 +
                  ((uint)(byte)((dVar6 < dVar9) << 2) | (uint)(NAN(dVar6) || NAN(dVar9)) << 2) +
                  0x28) < 0.0) {
      dVar3 = dVar5;
    }
    fVar1 = (float)(dVar3 - dVar8) * *(float *)(puVar2 + 0x1c);
    dVar8 = ((double)fVar1 - (double)(longlong)fVar1) * (double)puVar2[0x1e];
  }
  param_2[6] = (float)dVar8;
  param_2[1] = (float)dVar3;
  return dVar3;
}


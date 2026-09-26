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
extern unsigned int lbl_821AAD20;


undefined8 fn_82776158(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  undefined8 uVar16;
  
  fVar1 = param_1[3];
  fVar2 = param_2[1];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = *param_2;
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  if ((((fVar1 < fVar2) || (fVar8 < fVar4)) || (fVar7 < fVar3)) || (bVar15 = true, fVar5 < fVar6)) {
    bVar15 = false;
  }
  fVar10 = lbl_821AAD20;
  fVar11 = lbl_821AAD20;
  fVar12 = lbl_821AAD20;
  fVar9 = lbl_821AAD20;
  if (bVar15) {
    fVar11 = fVar3;
    if (fVar3 <= fVar6) {
      fVar11 = fVar6;
    }
    fVar12 = fVar5;
    if (fVar7 < fVar5) {
      fVar12 = fVar7;
    }
    fVar9 = fVar4;
    if (fVar4 <= fVar2) {
      fVar9 = fVar2;
    }
    fVar10 = fVar1;
    if (fVar8 < fVar1) {
      fVar10 = fVar8;
    }
    if ((fVar11 < fVar12) && (bVar15 = false, fVar9 < fVar10)) goto LAB_82776228;
  }
  bVar15 = true;
LAB_82776228:
  if (bVar15) {
    *param_1 = fVar6;
    uVar16 = 0;
    param_1[1] = fVar2;
    param_1[2] = fVar6;
    param_1[3] = fVar2;
    param_1[6] = param_1[4];
    param_1[7] = param_1[5];
  }
  else {
    if (((fVar11 != fVar3) || (fVar12 != fVar5)) ||
       ((fVar9 != fVar4 || (bVar15 = false, fVar10 != fVar1)))) {
      bVar15 = true;
    }
    if (bVar15) {
      fVar2 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      fVar13 = fVar2;
      if (fVar3 != fVar11) {
        fVar13 = ((fVar11 - fVar3) * (fVar7 - fVar2)) / (fVar5 - fVar3) + param_1[4];
      }
      fVar14 = fVar6;
      if (fVar4 != fVar9) {
        fVar14 = ((fVar9 - fVar4) * (fVar8 - fVar6)) / (fVar1 - fVar4) + param_1[5];
      }
      if (fVar5 != fVar12) {
        fVar7 = param_1[6] - ((fVar5 - fVar12) * (fVar7 - fVar2)) / (fVar5 - fVar3);
      }
      if (fVar1 != fVar10) {
        fVar8 = param_1[7] - ((fVar1 - fVar10) * (fVar8 - fVar6)) / (fVar1 - fVar4);
      }
      *param_1 = fVar11;
      param_1[1] = fVar9;
      param_1[2] = fVar12;
      param_1[3] = fVar10;
      param_1[4] = fVar13;
      param_1[5] = fVar14;
      param_1[6] = fVar7;
      param_1[7] = fVar8;
    }
    uVar16 = 1;
  }
  return uVar16;
}


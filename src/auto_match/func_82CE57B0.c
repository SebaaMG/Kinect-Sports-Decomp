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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82CE57B0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int in_r0;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float afStack_40 [16];
  
  fVar1 = param_2[5];
  fVar2 = *param_2;
  if (fVar2 + fVar1 + param_2[10] <= lbl_821AAD20) {
    afStack_40[2] = 0.0;
    afStack_40[0] = 1.4013e-45;
    afStack_40[1] = 2.8026e-45;
    uVar13 = (ulonglong)(fVar2 < fVar1);
    if (param_2[(uint)(fVar2 < fVar1) * 5] < param_2[10]) {
      uVar13 = 2;
    }
    lVar12 = uVar13 * 4;
    iVar11 = (int)uVar13;
    uVar5 = *(uint *)((int)afStack_40 + (int)lVar12);
    fVar6 = afStack_40[uVar5];
    fVar1 = param_2[uVar5 * 4 + iVar11];
    fVar2 = *(float *)((int)((lVar12 + (ulonglong)uVar5 & 0xffffffff) << 2) + (int)param_2);
    fVar3 = param_2[(int)fVar6 * 4 + iVar11];
    fVar4 = *(float *)((int)((lVar12 + (ulonglong)(uint)fVar6 & 0xffffffff) << 2) + (int)param_2);
    fVar10 = SQRT((param_2[iVar11 * 5] -
                  (*(float *)((int)(((ulonglong)(uint)fVar6 +
                                     ((ulonglong)(uint)fVar6 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                             (int)param_2) +
                  *(float *)((int)(((ulonglong)uVar5 + ((ulonglong)uVar5 & 0x3fffffff) * 4 &
                                   0xffffffff) << 2) + (int)param_2))) + lbl_82002AE0);
    fVar9 = lbl_82002C5C / fVar10;
    *(float *)((int)afStack_40 + (int)lVar12) = fVar10 * lbl_82002C5C;
    afStack_40[uVar5] = (fVar1 + fVar2) * fVar9;
    afStack_40[(int)fVar6] = (fVar3 + fVar4) * fVar9;
    puVar7 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    uVar16 = puVar7[3];
    puVar8 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar8 = *puVar7;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
  }
  else {
    puVar7 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    uVar16 = puVar7[3];
    puVar8 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar8 = *puVar7;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
  }
  return;
}


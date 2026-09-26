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
extern int fn_82F68B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82D50C18(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int in_r0;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float afStack_40 [16];
  
  pfVar13 = (float *)(param_1 + 0x30);
  puVar9 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar16 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar10 = (undefined4 *)(in_r0 + (int)pfVar13 & 0xfffffff0);
  *puVar10 = *puVar9;
  puVar10[1] = uVar16;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  puVar9 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar16 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar10 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
  *puVar10 = *puVar9;
  puVar10[1] = uVar16;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  puVar9 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar16 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar10 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar10 = *puVar9;
  puVar10[1] = uVar16;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  puVar9 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar16 = puVar9[1];
  uVar17 = puVar9[2];
  uVar18 = puVar9[3];
  puVar10 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
  *puVar10 = *puVar9;
  puVar10[1] = uVar16;
  puVar10[2] = uVar17;
  puVar10[3] = uVar18;
  iVar12 = fn_82F68B78(param_1 + 0x20);
  fVar1 = pfVar13[5];
  fVar2 = *pfVar13;
  if (fVar2 + fVar1 + pfVar13[10] <= lbl_821AAD20) {
    afStack_40[2] = 0.0;
    afStack_40[0] = 1.4013e-45;
    afStack_40[1] = 2.8026e-45;
    uVar15 = (ulonglong)(fVar2 < fVar1);
    if (pfVar13[(uint)(fVar2 < fVar1) * 5] < pfVar13[10]) {
      uVar15 = 2;
    }
    lVar14 = uVar15 * 4;
    iVar11 = (int)uVar15;
    uVar5 = *(uint *)((int)afStack_40 + (int)lVar14);
    fVar6 = afStack_40[uVar5];
    fVar1 = pfVar13[uVar5 * 4 + iVar11];
    fVar2 = *(float *)((int)((lVar14 + (ulonglong)uVar5 & 0xffffffff) << 2) + (int)pfVar13);
    fVar3 = pfVar13[(int)fVar6 * 4 + iVar11];
    fVar4 = *(float *)((int)((lVar14 + (ulonglong)(uint)fVar6 & 0xffffffff) << 2) + (int)pfVar13);
    fVar8 = SQRT((pfVar13[iVar11 * 5] -
                 (*(float *)((int)(((ulonglong)(uint)fVar6 +
                                    ((ulonglong)(uint)fVar6 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                            (int)pfVar13) +
                 *(float *)((int)(((ulonglong)uVar5 + ((ulonglong)uVar5 & 0x3fffffff) * 4 &
                                  0xffffffff) << 2) + (int)pfVar13))) + lbl_82002AE0);
    fVar7 = lbl_82002C5C / fVar8;
    *(float *)((int)afStack_40 + (int)lVar14) = fVar8 * lbl_82002C5C;
    afStack_40[uVar5] = (fVar1 + fVar2) * fVar7;
    afStack_40[(int)fVar6] = (fVar3 + fVar4) * fVar7;
    puVar9 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar16 = puVar9[1];
    uVar17 = puVar9[2];
    uVar18 = puVar9[3];
    puVar10 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar10 = *puVar9;
    puVar10[1] = uVar16;
    puVar10[2] = uVar17;
    puVar10[3] = uVar18;
  }
  else {
    puVar9 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar16 = puVar9[1];
    uVar17 = puVar9[2];
    uVar18 = puVar9[3];
    puVar10 = (undefined4 *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar10 = *puVar9;
    puVar10[1] = uVar16;
    puVar10[2] = uVar17;
    puVar10[3] = uVar18;
  }
  return;
}


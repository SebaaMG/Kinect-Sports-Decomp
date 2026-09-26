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
extern unsigned int *auStack_90;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_8307E9F8();
extern unsigned int lbl_82132D70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D3F450(int param_1,undefined4 *param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int in_r0;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int iVar19;
  int *piVar20;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  undefined1 auStack_90 [144];
  
  iVar9 = (int)param_4;
  *(int *)(param_1 + 0x4c) = iVar9;
  uVar6 = param_4 + 3U & 0xfffffffc;
  iVar19 = (int)uVar6;
  iVar16 = iVar19 >> 2;
  piVar20 = (int *)(param_1 + 0x40);
  iVar8 = fn_82CE5410();
  if ((int)(*(uint *)(param_1 + 0x48) & 0x3fffffff) < iVar16) {
    lVar10 = ((ulonglong)*(uint *)(param_1 + 0x48) & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar16) {
      lVar10 = (longlong)iVar16;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),piVar20,lVar10,0x30);
  }
  *(int *)(param_1 + 0x44) = iVar16;
  uVar17 = 0;
  puVar18 = param_2;
  if (3 < iVar9) {
    uVar15 = 1;
    lVar10 = ((param_4 - 4U & 0xffffffff) >> 2) + 1;
    do {
      uVar11 = (((uVar17 & 0xffffffff) >> 2) + ((uVar17 & 0xffffffff) >> 1)) * 4 & 0xfffffffc;
      *(undefined4 *)((int)(uVar11 << 2) + *piVar20) = *puVar18;
      lVar12 = ((((uVar15 & 0xffffffff) >> 2) + ((uVar15 & 0xffffffff) >> 1 & 0x7ffffffe)) * 4 &
               0xfffffffc) + (uVar15 & 3);
      lVar13 = (((uVar15 + 1 & 0xffffffff) >> 2) * 0xc & 0xfffffffc) + (uVar15 + 1 & 3);
      *(undefined4 *)((int)((uVar11 + 4 & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      *(undefined4 *)((int)((uVar11 + 8 & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar18 = (undefined4 *)((int)puVar18 + param_3);
      *(undefined4 *)((int)lVar12 * 4 + *piVar20) = *puVar18;
      *(undefined4 *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      lVar14 = (((uVar15 + 2 & 0xffffffff) >> 2) * 0xc & 0xfffffffc) + (uVar15 - 2 & 3);
      *(undefined4 *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar18 = (undefined4 *)((int)puVar18 + param_3);
      *(undefined4 *)((int)lVar13 * 4 + *piVar20) = *puVar18;
      *(undefined4 *)((int)((lVar13 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      *(undefined4 *)((int)((lVar13 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar1 = (undefined4 *)((int)puVar18 + param_3);
      *(undefined4 *)((int)lVar14 * 4 + *piVar20) = *puVar1;
      *(undefined4 *)((int)((lVar14 + 4U & 0xffffffff) << 2) + *piVar20) = puVar1[1];
      puVar18 = (undefined4 *)((int)puVar1 + param_3);
      uVar17 = uVar17 + 4;
      uVar15 = uVar15 + 4;
      *(undefined4 *)((int)((lVar14 + 8U & 0xffffffff) << 2) + *piVar20) = puVar1[2];
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((int)uVar17 < iVar9) {
    lVar10 = param_4 - uVar17;
    do {
      uVar15 = uVar17 & 0xffffffff;
      uVar11 = uVar17 & 0xffffffff;
      uVar7 = uVar17 & 3;
      uVar17 = uVar17 + 1;
      lVar12 = (((uVar11 >> 2) + (uVar15 >> 1 & 0x7ffffffe)) * 4 & 0xfffffffc) + uVar7;
      *(undefined4 *)((int)lVar12 * 4 + *piVar20) = *puVar18;
      *(undefined4 *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      puVar1 = puVar18 + 2;
      puVar18 = (undefined4 *)((int)puVar18 + param_3);
      *(undefined4 *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = *puVar1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar18 = (undefined4 *)((int)puVar18 - param_3);
  if ((int)uVar17 < iVar19) {
    if (3 < iVar19 - (int)uVar17) {
      uVar15 = uVar17 + 1;
      lVar10 = (((uVar6 - uVar17) - 4 & 0xffffffff) >> 2) + 1;
      do {
        uVar2 = (int)uVar17 >> 2;
        iVar16 = (int)uVar15;
        lVar12 = ((longlong)(int)uVar2 + ((ulonglong)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar17 & 3);
        lVar13 = ((longlong)(iVar16 >> 2) + ((ulonglong)(uint)(iVar16 >> 2) & 0x7fffffff) * 2 &
                 0x3fffffff) * 4 + (uVar15 & 3);
        *(undefined4 *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        uVar2 = iVar16 + 1 >> 2;
        uVar3 = iVar16 + 2 >> 2;
        lVar14 = ((longlong)(int)uVar2 + ((ulonglong)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar15 + 1 & 3);
        uVar17 = uVar17 + 4;
        *(undefined4 *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(undefined4 *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar12 = ((longlong)(int)uVar3 + ((ulonglong)uVar3 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar15 - 2 & 3);
        *(undefined4 *)((int)lVar13 * 4 + *piVar20) = *puVar18;
        *(undefined4 *)((int)((lVar13 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(undefined4 *)((int)((lVar13 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        *(undefined4 *)((int)lVar14 * 4 + *piVar20) = *puVar18;
        *(undefined4 *)((int)((lVar14 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(undefined4 *)((int)((lVar14 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        *(undefined4 *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        *(undefined4 *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        uVar15 = uVar15 + 4;
        *(undefined4 *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if ((int)uVar17 < iVar19) {
      lVar10 = uVar6 - uVar17;
      do {
        uVar2 = (int)uVar17 >> 2;
        uVar6 = uVar17 & 3;
        uVar17 = uVar17 + 1;
        lVar12 = ((longlong)(int)uVar2 + ((ulonglong)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 uVar6;
        *(undefined4 *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        *(undefined4 *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(undefined4 *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  fn_8307E9F8(param_2,param_4,param_3,auStack_90);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs45,in_vs32);
  pfVar4 = (float *)((uint)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar21 = pfVar4[1];
  fVar22 = pfVar4[2];
  fVar23 = pfVar4[3];
  pfVar5 = (float *)(param_1 + 0x20U & 0xfffffff0);
  *pfVar5 = *pfVar4 * in_register_000100b0;
  pfVar5[1] = fVar21 * in_register_000100b4;
  pfVar5[2] = fVar22 * in_register_000100b8;
  pfVar5[3] = fVar23 * in_vr11;
  pfVar4 = (float *)((uint)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar21 = pfVar4[1];
  fVar22 = pfVar4[2];
  fVar23 = pfVar4[3];
  pfVar5 = (float *)(param_1 + 0x30U & 0xfffffff0);
  *pfVar5 = *pfVar4 * in_register_000100a0;
  pfVar5[1] = fVar21 * in_register_000100a4;
  pfVar5[2] = fVar22 * in_register_000100a8;
  pfVar5[3] = fVar23 * in_vr10;
  return;
}


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
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


void fn_82E6D500(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8)

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
  int iVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  lVar27 = (param_8 - 1 & 0x3fffffff) << 2;
  dVar30 = (double)lbl_821AAD20;
  dVar31 = dVar30;
  fn_82F68CC0(param_1 + (param_8 & 0x3fffffff) * -4 + 4,param_5,lVar27);
  lVar26 = param_2 + (param_8 & 0x3fffffff) * -4 + 4;
  fn_82F68CC0(lVar26,param_6,lVar27);
  pfVar13 = (float *)param_2;
  *pfVar13 = (float)dVar30;
  lVar12 = 0;
  if (0 < (int)param_7) {
    uVar25 = param_8 - 1;
    pfVar24 = (float *)(in_stack_00000054 + -0x10);
    lVar11 = param_1;
    do {
      pfVar14 = (float *)param_3;
      fVar1 = *(float *)lVar11 * *pfVar14;
      uVar22 = uVar25;
      dVar28 = dVar30;
      dVar29 = dVar30;
      if (1 < (int)uVar25) {
        lVar20 = (uVar25 & 0x3fffffff) * 4;
        lVar18 = ((param_8 - 3 & 0xffffffff) >> 1) + 1;
        lVar16 = lVar20 + param_3 + 8;
        lVar19 = lVar20 + param_4 + -4;
        lVar20 = ((lVar12 - uVar25) - 1 & 0x3fffffff) * 4 + param_1;
        lVar21 = param_2 + (uVar25 & 0x3fffffff) * -4 + -4;
        lVar15 = param_2 + (uVar25 & 0x3fffffff) * -4;
        uVar22 = uVar25 - (lVar18 * 2 & 0xfffffffeU);
        do {
          pfVar17 = (float *)lVar19;
          fVar2 = pfVar17[1];
          fVar3 = *(float *)((int)lVar20 + 4);
          lVar16 = lVar16 + -8;
          fVar7 = *(float *)lVar16;
          iVar10 = (int)lVar21;
          fVar4 = *(float *)(iVar10 + 4);
          *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar10 + 8);
          fVar9 = *(float *)(((int)pfVar14 - (int)param_4) + (int)pfVar17);
          lVar20 = lVar20 + 8;
          fVar8 = *(float *)lVar20;
          fVar5 = *(float *)(iVar10 + 8);
          fVar6 = *pfVar17;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + 8;
          *(undefined4 *)lVar21 = *(undefined4 *)lVar15;
          dVar28 = (double)(float)((double)(fVar3 * fVar7 - fVar2 * fVar4) + dVar28);
          lVar19 = lVar19 + -8;
          dVar29 = (double)(float)((double)(fVar9 * fVar8 - fVar6 * fVar5) + dVar29);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar23 = (uint)uVar22;
      if (0 < (int)uVar23) {
        pfVar17 = pfVar13 + -(uVar23 & 0x3fffffff);
        fVar3 = *(float *)(uVar23 * 4 + (int)param_4);
        fVar4 = pfVar14[uVar23];
        fVar2 = *pfVar17;
        fVar5 = *(float *)((int)((lVar12 - uVar22 & 0xffffffff) << 2) + (int)param_1);
        *pfVar17 = pfVar17[1];
        fVar1 = (fVar5 * fVar4 - fVar3 * fVar2) + fVar1;
      }
      lVar12 = lVar12 + 1;
      fVar1 = (float)(dVar29 + dVar28) + fVar1;
      dVar28 = (double)fVar1;
      pfVar13[-1] = fVar1;
      fVar1 = (float)(dVar28 * dVar28 + dVar31);
      dVar31 = (double)fVar1;
      if (((uint)lVar12 & in_stack_0000005c - 1U) == 0) {
        pfVar24 = pfVar24 + 4;
        *pfVar24 = fVar1;
        dVar31 = dVar30;
      }
      lVar11 = lVar11 + 4;
    } while ((int)(uint)lVar12 < (int)param_7);
  }
  fn_82F68CC0(param_5,((param_7 - param_8) + 1 & 0x3fffffff) * 4 + param_1,lVar27);
  fn_82F68CC0(param_6,lVar26,lVar27);
  return;
}


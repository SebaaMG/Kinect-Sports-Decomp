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
extern unsigned int *auStack_c4;
extern int fn_82C3F530();
extern unsigned int iStack_110;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack_f8;


void fn_82C3F5D0(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar14;
  int *piVar15;
  longlong lVar13;
  char *pcVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  int iStack_110;
  undefined8 uStack_f8;
  float afStack_f0 [11];
  uint auStack_c4 [49];
  
  uStack00000030 = ((((U64)(uStack00000030)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_5)) & ((U64)0xFFFFFFFF)) << 32));
  uVar11 = (((U64)(uStack00000030) >> 32) & 0xFFFFFFFF);
  uVar18 = 0;
  puVar1 = *(undefined1 **)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar22 = *(int *)(param_2 + 4);
  if (((((U64)(uStack00000030) >> 32) & 0xFFFFFFFF) == 6) ||
     (((*(int *)(param_1 + 0x3c) != 1 && (31999 < *(int *)(param_1 + 0x50))) &&
      (*(int *)(param_1 + 0x50) < 0xac44)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  iVar19 = 0;
  iVar20 = 0;
  if (bVar9) {
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x100);
    trapWord(6,(ulonglong)uVar3,0);
    uVar12 = (((int)*(short *)(param_2 + 0x76) << ((((U64)(uStack00000030) >> 32) & 0xFFFFFFFF) & 0x3f)) >> 6) *
             *(int *)(param_1 + 0x114);
    iStack_110 = (int)uVar12 / (int)uVar3;
    trapWord(5,(ulonglong)uVar3 &
               ~((((ulonglong)uVar12 & 0x7fffffff) << 1 | (ulonglong)(uVar12 >> 0x1f)) - 1),0xffff);
  }
  iVar4 = *(int *)(param_1 + 0x194);
  iVar5 = *(int *)(param_1 + 0x10c);
  pcVar16 = puVar1 + *(int *)(param_1 + 400);
  piVar17 = (int *)(*(int *)(param_1 + 400) * 4 + param_3);
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  while( true ) {
    iVar6 = *piVar17;
    if (*piVar17 <= iVar4) {
      iVar6 = iVar4;
    }
    if (iVar5 <= iVar6) break;
    if (*pcVar16 == '\x01') {
      piVar15 = (int *)((iVar20 + 1) * 4 + param_4);
      iVar7 = *piVar15;
      while (iVar7 <= (iVar6 << (uVar11 & 0x3f)) >> 6) {
        piVar15 = piVar15 + 1;
        iVar20 = iVar20 + 1;
        iVar7 = *piVar15;
      }
      if (bVar9) {
        *(undefined4 *)((int)auStack_c4 + (int)(uVar18 << 2) + 4) =
             *(undefined4 *)(iVar20 * 4 + iVar22);
      }
      else {
        iVar7 = iVar5;
        if (piVar17[1] <= iVar5) {
          iVar7 = piVar17[1];
        }
        iVar10 = iVar20 * 4;
        iVar21 = *(int *)(iVar10 + param_4 + 4);
        if (iStack_110 <= iVar21) {
          iVar21 = iStack_110;
        }
        iVar14 = (iVar7 << (uVar11 & 0x3f)) >> 6;
        if (iStack_110 <= iVar14) {
          iVar14 = iStack_110;
        }
        piVar15 = (int *)((iVar19 + 1) * 4 + param_4);
        iVar8 = *piVar15;
        while (iVar8 <= iVar14 + -1) {
          piVar15 = piVar15 + 1;
          iVar19 = iVar19 + 1;
          iVar8 = *piVar15;
        }
        if (iVar19 == iVar20) {
          dVar23 = (double)fn_82C3F530(*(undefined4 *)(iVar10 + iVar22));
          *(float *)((int)afStack_f0 + (int)(uVar18 << 2)) = (float)(dVar23 * dVar23);
        }
        else {
          if ((int)uVar11 < 7) {
            iVar21 = iVar21 << (6 - uVar11 & 0x3f);
          }
          else {
            iVar21 = (1 << (uVar11 - 7 & 0x3f)) + iVar21 >> (uVar11 - 6 & 0x3f);
          }
          dVar23 = (double)fn_82C3F530(*(undefined4 *)(iVar10 + iVar22));
          dVar24 = (double)fn_82C3F530(*(undefined4 *)(iVar19 * 4 + iVar22));
          uStack_f8 = (longlong)iVar21;
          *(float *)((int)afStack_f0 + (int)(uVar18 << 2)) =
               (((float)uStack_f8 - (float)(longlong)iVar6) / (float)(uint)(iVar7 - iVar6)) *
               (float)(dVar23 * dVar23) +
               (((float)(longlong)iVar7 - (float)uStack_f8) / (float)(uint)(iVar7 - iVar6)) *
               (float)(dVar24 * dVar24);
        }
      }
      uVar18 = uVar18 + 1 & 0xff;
    }
    pcVar16 = pcVar16 + 1;
    piVar17 = piVar17 + 1;
  }
  lVar13 = uVar18 - 1;
  if (0 < lVar13) {
    iVar22 = 0;
    do {
      iVar20 = (int)(uVar18 << 2);
      if (bVar9) {
        dVar23 = (double)fn_82C3F530((ulonglong)*(uint *)((int)auStack_c4 + iVar22 + 4) -
                                       (ulonglong)*(uint *)((int)auStack_c4 + iVar20));
        *(float *)(iVar22 + iVar2) = (float)dVar23;
      }
      else {
        *(float *)(iVar22 + iVar2) =
             SQRT(*(float *)((int)afStack_f0 + iVar22) / *(float *)((int)afStack_f0 + iVar20 + -4));
      }
      lVar13 = lVar13 + -1;
      iVar22 = iVar22 + 4;
    } while (lVar13 != 0);
  }
  if (uVar18 != 0) {
    *(undefined4 *)((int)(uVar18 << 2) + iVar2 + -4) = lbl_82002AE0;
  }
  *puVar1 = (char)uVar18;
  return;
}


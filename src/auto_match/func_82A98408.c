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
extern unsigned int *auStack_b8;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A981D8();
extern int fn_82F68CC0();
extern unsigned int iStack0000003c;
extern unsigned int iStack_a4;
extern unsigned int uStack00000034;


void fn_82A98408(ulonglong param_1,int param_2,int param_3,uint *param_4,ulonglong param_5,
                  int param_6,uint *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar11;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uStack00000034;
  int iStack0000003c;
  uint auStack_b8 [5];
  int iStack_a4;
  
  uStack00000034 = (uint)param_5;
  uVar12 = 0;
  if (param_7 == (uint *)0x0) {
    param_7 = auStack_b8 + 2;
    auStack_b8[2] = 0;
    auStack_b8[3] = 0;
    auStack_b8[4] = param_2;
    iStack_a4 = param_3;
  }
  uVar1 = param_7[3];
  uVar2 = param_7[1];
  uVar15 = (ulonglong)param_7[2] - (ulonglong)*param_7;
  if (param_4 == (uint *)0x0) {
    auStack_b8[0] = 0;
    param_4 = auStack_b8;
    auStack_b8[1] = 0;
  }
  uVar6 = param_5;
  iStack0000003c = param_6;
  if ((param_5 & 0xffffffff) == (param_1 & 0xffffffff)) {
    uVar13 = (longlong)(int)((param_3 + 0x1fU & 0xffffffe0) * (param_2 + 0x1fU & 0xffffffe0)) *
             (longlong)(int)param_8 + 0xfffU & 0xfffff000;
    uVar6 = fn_8265C940(uVar13,0x24870000);
    fn_82A981D8(uVar6,param_5,uVar13);
  }
  uVar21 = param_8 >> 2;
  uVar22 = *param_4;
  uVar4 = 1 << (((param_8 >> 4) - uVar21) + 3 & 0x3f);
  uVar21 = ((param_8 >> 1) >> (uVar21 & 0x3f)) + uVar21;
  uVar13 = ((ulonglong)uVar22 + (ulonglong)uVar4 & ~((ulonglong)uVar4 - 1)) - (ulonglong)uVar22;
  iVar14 = (uVar22 + (int)uVar15 & ~(uVar4 - 1)) - uVar22;
  uVar22 = uVar21 + 6;
  iVar11 = (int)uVar15;
  if ((uVar13 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
    iVar11 = (int)uVar13;
  }
  if (uVar1 - uVar2 != 0) {
    uVar10 = uVar15;
    do {
      uVar3 = *param_4;
      uVar8 = uVar12 + param_4[1];
      iVar5 = (int)((uVar8 & 6) << 2);
      iVar20 = ((uint)uVar8 >> 5) * (param_2 + 0x1fU >> 5);
      uVar7 = (ulonglong)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
      uVar18 = (ulonglong)(((uint)uVar8 >> 3 & 1) << (uVar22 & 0x3f));
      uVar19 = (uVar8 & 0xffffffff) >> 2 & 2;
      lVar17 = (uVar8 & 1) * 0x10;
      uVar8 = (uVar8 & 0xffffffff) >> 4 & 1;
      uVar7 = (((ulonglong)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
              (uVar7 & 0x3fffff0)) * 2 + (uVar7 & 0xf) + uVar18 + lVar17;
      uVar9 = (((uVar3 >> 3) + uVar19) * 2 & 6) + uVar8;
      lVar16 = (longlong)(int)((int)uVar12 + param_7[1]) * (longlong)iStack0000003c;
      fn_82F68CC0((((((uVar9 * 8 & 8) + ((ulonglong)(uint)((int)uVar7 >> 6) & 7)) * 8 +
                     (uVar9 & 0xfffffffe)) * 4 + (uVar7 & 0xfffffe00)) * 8 & 0xfffffff8) +
                   (uVar7 & 0x3f) + param_1,
                   (ulonglong)(*param_7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                   iVar11 << (uVar21 & 0x3f));
      uVar7 = uVar13;
      if ((int)uVar13 < iVar14) {
        do {
          uVar3 = (uint)(*param_4 + uVar7);
          uVar10 = (ulonglong)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
          uVar9 = ((((*param_4 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
          uVar10 = (((ulonglong)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                   (uVar10 & 0x3fffff0)) * 2 + (uVar10 & 0xf) + uVar18 + lVar17;
          fn_82F68CC0((((((uVar9 * 8 & 8) + ((ulonglong)(uint)((int)uVar10 >> 6) & 7)) * 8 +
                         (uVar9 & 0xfffffffe)) * 4 + (uVar10 & 0xfffffe00)) * 8 & 0xfffffff8) +
                       (uVar10 & 0x3f) + param_1,
                       (ulonglong)(*param_7 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                       uVar4 << (uVar21 & 0x3f));
          uVar7 = uVar7 + uVar4;
        } while ((int)uVar7 < iVar14);
        uVar10 = uVar15 & 0xffffffff;
      }
      if ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff)) {
        uVar3 = (uint)(*param_4 + uVar7);
        uVar9 = (ulonglong)(((uVar3 & 7) + iVar5 << (uVar22 & 0x3f)) >> 6);
        uVar8 = ((((*param_4 + uVar7 & 0xffffffff) >> 3) + uVar19) * 2 & 6) + uVar8;
        uVar9 = (((ulonglong)((uVar3 >> 5) + iVar20 << (uVar22 & 0x3f)) & 0x1fffffff) +
                (uVar9 & 0x3fffff0)) * 2 + (uVar9 & 0xf) + uVar18 + lVar17;
        fn_82F68CC0((((((uVar8 * 8 & 8) + ((ulonglong)(uint)((int)uVar9 >> 6) & 7)) * 8 +
                       (uVar8 & 0xfffffffe)) * 4 + (uVar9 & 0xfffffe00)) * 8 & 0xfffffff8) +
                     (uVar9 & 0x3f) + param_1,
                     (ulonglong)(*param_7 + (int)uVar7 << (uVar21 & 0x3f)) + lVar16 + uVar6,
                     (int)uVar10 - (int)uVar7 << (uVar21 & 0x3f));
      }
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffffffff) < (ulonglong)(uVar1 - uVar2));
    param_5 = (ulonglong)uStack00000034;
  }
  if ((param_5 & 0xffffffff) == (param_1 & 0xffffffff)) {
    fn_8265C990(uVar6,0x24870000);
  }
  return;
}


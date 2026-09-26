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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A981D8();
extern int fn_82F68CC0();
extern unsigned int iStack00000044;
extern unsigned int iStack0000004c;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82AA5638(ulonglong param_1,int param_2,int param_3,int param_4,uint *param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uStack0000003c;
  int iStack00000044;
  int iStack0000004c;
  uint *in_stack_00000054;
  uint in_stack_0000005c;
  uint uStack_f0;
  uint uStack_ec;
  uint auStack_c0 [4];
  uint auStack_b0 [3];
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  
  uStack0000003c = (uint)param_6;
  if (in_stack_00000054 == (uint *)0x0) {
    in_stack_00000054 = auStack_b0;
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    uStack_a0 = 0;
    auStack_b0[2] = param_2;
    iStack_a4 = param_3;
    iStack_9c = param_4;
  }
  uVar1 = in_stack_00000054[3];
  uVar25 = (ulonglong)in_stack_00000054[2] - (ulonglong)*in_stack_00000054;
  uVar2 = in_stack_00000054[5];
  uVar3 = in_stack_00000054[1];
  uVar4 = in_stack_00000054[4];
  iVar26 = (int)uVar25;
  if (param_5 == (uint *)0x0) {
    auStack_c0[0] = 0;
    param_5 = auStack_c0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
  }
  uVar8 = param_3 + 0x1fU & 0xffffffe0;
  uVar10 = param_6;
  iStack00000044 = param_7;
  iStack0000004c = param_8;
  if ((param_6 & 0xffffffff) == (param_1 & 0xffffffff)) {
    uVar16 = (longlong)(int)((param_4 + 3U & 0xfffffffc) * uVar8 * (param_2 + 0x1fU & 0xffffffe0)) *
             (longlong)(int)in_stack_0000005c + 0xfffU & 0xfffff000;
    uVar10 = fn_8265C940(uVar16,0x24870000);
    fn_82A981D8(uVar10,param_6,uVar16);
  }
  uVar20 = in_stack_0000005c >> 2;
  uVar27 = *param_5;
  uVar6 = 1 << (((in_stack_0000005c >> 4) - uVar20) + 3 & 0x3f);
  uVar20 = ((in_stack_0000005c >> 1) >> (uVar20 & 0x3f)) + uVar20;
  uVar16 = ((ulonglong)uVar27 + (ulonglong)uVar6 & ~((ulonglong)uVar6 - 1)) - (ulonglong)uVar27;
  iVar17 = (uVar27 + iVar26 & ~(uVar6 - 1)) - uVar27;
  uVar27 = uVar20 + 6;
  iVar15 = iVar26;
  if ((uVar16 & 0xffffffff) <= (uVar25 & 0xffffffff)) {
    iVar15 = (int)uVar16;
  }
  uStack_ec = in_stack_00000054[4] * param_8;
  uStack_f0 = 0;
  if (uVar2 != uVar4) {
    do {
      uVar18 = 0;
      uVar9 = param_5[2] + uStack_f0 >> 2;
      if (uVar1 - uVar3 != 0) {
        uVar19 = (ulonglong)((param_5[2] + uStack_f0 & 3) << (uVar27 & 0x3f));
        do {
          uVar5 = *param_5;
          uVar14 = uVar18 + param_5[1];
          iVar7 = (int)((uVar14 & 6) << 2);
          iVar24 = (((uint)uVar14 >> 4) + (uVar8 >> 4) * uVar9) * (param_2 + 0x1fU >> 5);
          uVar11 = (ulonglong)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
          uVar13 = ((uVar14 & 0xffffffff) >> 3) + (ulonglong)uVar9 & 1;
          lVar23 = uVar13 * 2;
          lVar22 = (uVar14 & 1) * 0x10;
          uVar14 = (((ulonglong)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                   (uVar11 & 0x3fffff0)) * 2 + (uVar11 & 0xf) + uVar19 + lVar22;
          uVar11 = (((ulonglong)(uVar5 >> 3) + lVar23) * 2 & 6) + uVar13;
          lVar21 = (longlong)(int)((int)uVar18 + in_stack_00000054[1]) * (longlong)iStack00000044 +
                   (ulonglong)uStack_ec;
          fn_82F68CC0((((((uVar11 * 8 & 8) + ((ulonglong)(uint)((int)uVar14 >> 6) & 7)) * 8 +
                         (uVar11 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                       (uVar14 & 0x3f) + param_1,
                       (ulonglong)(*in_stack_00000054 << (uVar20 & 0x3f)) + lVar21 + uVar10,
                       iVar15 << (uVar20 & 0x3f));
          uVar11 = uVar16;
          if ((int)uVar16 < iVar17) {
            do {
              uVar5 = (uint)(*param_5 + uVar11);
              uVar14 = (ulonglong)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
              uVar12 = ((((*param_5 + uVar11 & 0xffffffff) >> 3) + lVar23) * 2 & 6) + uVar13;
              uVar14 = (((ulonglong)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                       (uVar14 & 0x3fffff0)) * 2 + (uVar14 & 0xf) + uVar19 + lVar22;
              fn_82F68CC0((((((uVar12 * 8 & 8) + ((ulonglong)(uint)((int)uVar14 >> 6) & 7)) * 8 +
                             (uVar12 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                           (uVar14 & 0x3f) + param_1,
                           (ulonglong)(*in_stack_00000054 + (int)uVar11 << (uVar20 & 0x3f)) + lVar21
                           + uVar10,uVar6 << (uVar20 & 0x3f));
              uVar11 = uVar11 + uVar6;
            } while ((int)uVar11 < iVar17);
          }
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar5 = (uint)(*param_5 + uVar11);
            uVar14 = (ulonglong)(((uVar5 & 7) + iVar7 << (uVar27 & 0x3f)) >> 6);
            uVar13 = ((((*param_5 + uVar11 & 0xffffffff) >> 3) + lVar23) * 2 & 6) + uVar13;
            uVar14 = (((ulonglong)((uVar5 >> 5) + iVar24 << (uVar27 & 0x3f)) & 0xfffffff) * 2 +
                     (uVar14 & 0x3fffff0)) * 2 + (uVar14 & 0xf) + uVar19 + lVar22;
            fn_82F68CC0((((((uVar13 * 8 & 8) + ((ulonglong)(uint)((int)uVar14 >> 6) & 7)) * 8 +
                           (uVar13 & 0xfffffffe)) * 4 + (uVar14 & 0xfffffe00)) * 8 & 0xfffffff8) +
                         (uVar14 & 0x3f) + param_1,
                         (ulonglong)(*in_stack_00000054 + (int)uVar11 << (uVar20 & 0x3f)) + lVar21 +
                         uVar10,iVar26 - (int)uVar11 << (uVar20 & 0x3f));
          }
          uVar18 = uVar18 + 1;
        } while ((uVar18 & 0xffffffff) < (ulonglong)(uVar1 - uVar3));
        param_6 = (ulonglong)uStack0000003c;
        param_8 = iStack0000004c;
      }
      uStack_f0 = uStack_f0 + 1;
      uStack_ec = uStack_ec + param_8;
    } while (uStack_f0 < uVar2 - uVar4);
  }
  if ((param_6 & 0xffffffff) == (param_1 & 0xffffffff)) {
    fn_8265C990(uVar10,0x24870000);
  }
  return;
}


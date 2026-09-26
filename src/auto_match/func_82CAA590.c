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
extern int fn_82F42F10();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_a0;


void fn_82CAA590(byte *param_1,uint param_2,uint param_3,ulonglong param_4,ulonglong param_5,
                  ulonglong param_6,ulonglong param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar7;
  ulonglong uVar6;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  uint *in_stack_0000005c;
  uint uStack_a0;
  
  uStack0000003c = (undefined4)param_6;
  uStack00000044 = (undefined4)param_7;
  uStack_a0 = (uint)param_4;
  uVar19 = param_6;
  uVar20 = param_7;
  if (0 < (int)uStack_a0) {
    uVar5 = param_8 & 0x7fffffff;
    iVar13 = param_8 * 2;
    iVar4 = (int)param_5;
    iVar10 = param_8 * 4 + uVar5 * -2;
    iVar17 = (int)(param_5 - 2) * param_8;
    iVar14 = (int)(param_5 - 4);
    iVar16 = iVar14 * param_8;
    iVar15 = (iVar4 + -6) * param_8;
    pbVar18 = param_1 + iVar13;
    do {
      pbVar7 = pbVar18 + iVar10;
      pbVar8 = pbVar18 + param_8 * 6 + uVar5 * -2;
      *in_stack_0000005c =
           (int)(((uint)*param_1 * 0x22 - ((uint)*pbVar18 + (uint)*pbVar18 * 2)) +
                 (uint)pbVar18[iVar10] + 0x10) >> 5;
      in_stack_0000005c[1] =
           (int)((uint)*param_1 * 0x19 + ((uint)*pbVar18 * 8 - (uint)*pbVar18) + 0x10) >> 5;
      in_stack_0000005c[2] =
           (int)(((uint)*param_1 * 2 - (uint)pbVar18[iVar10]) * 3 + (uint)*pbVar18 * 0x1c +
                 (uint)*pbVar8 + 0x10) >> 5;
      uVar11 = (((uint)pbVar18[iVar10] * 3 + (uint)*pbVar18 * 0xe) - (uint)*param_1) + 8;
      in_stack_0000005c[3] = (int)(uVar11 * 2 | uVar11 >> 0x1f) >> 5;
      if (4 < iVar14) {
        lVar23 = ((param_5 - 9 & 0xffffffff) >> 1) + 1;
        puVar9 = in_stack_0000005c + 3;
        pbVar21 = param_1 + uVar5 * -2;
        pbVar22 = param_1 + param_8 * 8 + uVar5 * -2;
        pbVar12 = pbVar18;
        do {
          pbVar22 = pbVar22 + iVar13;
          puVar9[1] = (int)(((uint)*pbVar12 * 2 - (uint)*pbVar8) * 3 + (uint)*pbVar7 * 0x1c +
                            (uint)*pbVar22 + 0x10) >> 5;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + iVar13;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + iVar13;
          pbVar21 = pbVar21 + iVar13;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + iVar13;
          puVar9 = puVar9 + 2;
          *puVar9 = (int)(((uint)bVar3 * 2 - (uint)bVar1) * 3 + (uint)bVar2 * 0x1c + (uint)*pbVar21
                         + 0x10) >> 5;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        param_4 = (ulonglong)uStack_a0;
        uVar19 = param_6 & 0xffffffff;
        uVar20 = param_7 & 0xffffffff;
      }
      uVar11 = (((uint)param_1[iVar15] * 3 + (uint)param_1[iVar16] * 0xe) - (uint)param_1[iVar17]) +
               8;
      *(int *)((int)((param_5 - 4 & 0xffffffff) << 2) + (int)in_stack_0000005c) =
           (int)(uVar11 * 2 | uVar11 >> 0x1f) >> 5;
      *(int *)((int)((param_5 - 3 & 0xffffffff) << 2) + (int)in_stack_0000005c) =
           (int)(((uint)param_1[iVar17] * 2 - (uint)param_1[iVar15]) * 3 +
                 (uint)param_1[(iVar4 + -8) * param_8] + (uint)param_1[iVar16] * 0x1c + 0x10) >> 5;
      *(int *)((int)((param_5 - 2 & 0xffffffff) << 2) + (int)in_stack_0000005c) =
           (int)((uint)param_1[iVar17] * 0x19 + ((uint)param_1[iVar16] * 8 - (uint)param_1[iVar16])
                + 0x10) >> 5;
      *(int *)((int)in_stack_0000005c + (int)((param_5 & 0xffffffff) << 2) + -4) =
           (int)(((uint)param_1[iVar17] * 0x22 - ((uint)param_1[iVar16] + (uint)param_1[iVar16] * 2)
                 ) + (uint)param_1[iVar15] + 0x10) >> 5;
      if (0 < iVar4) {
        pbVar7 = param_1 + -param_8;
        uVar24 = param_5;
        puVar9 = in_stack_0000005c;
        do {
          uVar11 = *puVar9;
          if (0xff < uVar11) {
            uVar11 = 0xffffffffU - ((int)uVar11 >> 0x1f) & 0xff;
          }
          puVar9 = puVar9 + 1;
          pbVar7 = pbVar7 + param_8;
          *pbVar7 = (byte)uVar11;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      param_4 = param_4 - 1;
      param_1 = param_1 + 1;
      uStack_a0 = (uint)param_4;
      pbVar18 = pbVar18 + 1;
    } while (param_4 != 0);
  }
  if (0 < (int)uVar19) {
    uVar6 = (ulonglong)param_2;
    uVar24 = uVar19;
    uStack0000001c = param_2;
    uStack00000024 = param_3;
    do {
      lVar23 = fn_82F42F10(uVar6,uVar6,in_stack_0000005c,uVar20);
      uVar24 = uVar24 - 1;
      uVar6 = lVar23 + 1;
    } while (uVar24 != 0);
    if (0 < (int)uVar19) {
      uVar24 = (ulonglong)uStack00000024;
      do {
        lVar23 = fn_82F42F10(uVar24,uVar24,in_stack_0000005c,uVar20);
        uVar19 = uVar19 - 1;
        uVar24 = lVar23 + 1;
      } while (uVar19 != 0);
    }
  }
  return;
}


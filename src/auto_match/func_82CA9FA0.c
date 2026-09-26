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
extern int fn_82F429B8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a0;


void fn_82CA9FA0(byte *param_1,uint param_2,uint param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar11;
  uint *puVar14;
  byte *pbVar16;
  ulonglong uVar15;
  byte *pbVar17;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  uint in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  uint *in_stack_00000074;
  uint uStack_a0;
  
  uStack00000034 = (undefined4)param_5;
  uStack0000003c = (undefined4)param_6;
  if (0 < (int)param_7) {
    iVar8 = param_8 + -2;
    iVar3 = in_stack_00000064 * 2;
    param_4 = param_4 - (int)param_1;
    uStack_a0 = param_7;
    do {
      pbVar13 = param_1 + param_4;
      pbVar12 = param_1 + in_stack_00000064 * 2;
      *in_stack_00000074 =
           (int)(((uint)*param_1 * 0xf + (uint)param_1[in_stack_00000064] * 0xe +
                 (uint)param_1[in_stack_00000064 * 2]) * 5 +
                 ((uint)param_1[in_stack_00000064 * 3] + (uint)param_1[in_stack_00000064]) * -0xb +
                0x3f) >> 7;
      if (2 < iVar8) {
        lVar7 = (ulonglong)(param_8 - 5U >> 1) + 1;
        pbVar16 = param_1 + in_stack_00000064 * 3;
        pbVar17 = param_1 + in_stack_00000064 * 2;
        pbVar9 = param_1;
        puVar14 = in_stack_00000074;
        do {
          pbVar4 = pbVar12 + in_stack_00000064;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + iVar3;
          pbVar5 = pbVar9 + in_stack_00000064;
          pbVar17 = pbVar17 + iVar3;
          pbVar16 = pbVar16 + iVar3;
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + iVar3;
          puVar14 = puVar14 + 2;
          *puVar14 = (int)((((uint)*pbVar4 + (uint)bVar1) * 0xe + (uint)*pbVar5 + (uint)*pbVar17) *
                           5 + ((uint)*pbVar16 + (uint)bVar2) * -0xb + 0x3f) >> 7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[iVar8] =
           (int)(((uint)param_1[(param_8 + -3) * in_stack_00000064] +
                 (uint)param_1[(param_8 + -1) * in_stack_00000064] * 0xf +
                 (uint)param_1[iVar8 * in_stack_00000064] * 0xe) * 5 +
                 ((uint)param_1[(param_8 + -4) * in_stack_00000064] +
                 (uint)param_1[iVar8 * in_stack_00000064]) * -0xb + 0x3f) >> 7;
      if (0 < param_8) {
        lVar7 = (ulonglong)(param_8 - 1U >> 1) + 1;
        puVar14 = in_stack_00000074;
        do {
          uVar10 = *puVar14;
          if (0xff < uVar10) {
            uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
          }
          *pbVar13 = (byte)uVar10;
          puVar14 = puVar14 + 2;
          pbVar13[in_stack_00000064] = 0;
          pbVar13 = pbVar13 + iVar3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar11 = (ulonglong)uStack_a0;
      param_1 = param_1 + 1;
      uStack_a0 = (uint)(uVar11 - 1);
    } while (uVar11 - 1 != 0);
    param_5 = param_5 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
  }
  uVar11 = (ulonglong)in_stack_00000054;
  if (0 < (int)in_stack_00000054) {
    lVar7 = param_2 - param_5;
    uVar15 = uVar11;
    uStack0000001c = param_2;
    uStack00000024 = param_3;
    do {
      lVar6 = fn_82F429B8(param_5,lVar7 + param_5,in_stack_00000074,in_stack_0000005c);
      uVar15 = uVar15 - 1;
      param_5 = lVar6 + 1;
    } while (uVar15 != 0);
    if (0 < (int)in_stack_00000054) {
      lVar7 = uStack00000024 - param_6;
      do {
        lVar6 = fn_82F429B8(param_6,lVar7 + param_6,in_stack_00000074,in_stack_0000005c);
        uVar11 = uVar11 - 1;
        param_6 = lVar6 + 1;
      } while (uVar11 != 0);
    }
  }
  return;
}


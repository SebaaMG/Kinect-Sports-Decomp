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
extern int fn_82F42B58();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


void fn_82F42CC8(int param_1,ulonglong param_2,ulonglong param_3,int param_4,uint param_5,
                  uint param_6,uint param_7,longlong param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  uint uStack00000034;
  uint uStack0000003c;
  uint in_stack_0000005c;
  int in_stack_00000064;
  uint in_stack_0000006c;
  uint *in_stack_00000074;
  
  uStack0000001c = (undefined4)param_2;
  uStack00000024 = (undefined4)param_3;
  if (0 < (int)param_8) {
    uVar12 = (ulonglong)param_7 - 2;
    pbVar8 = (byte *)(param_1 + 1);
    param_1 = param_4 - param_1;
    do {
      iVar11 = 2;
      *in_stack_00000074 =
           (int)(((uint)pbVar8[-1] * 0xf + (uint)*pbVar8 * 0xe + (uint)pbVar8[1]) * 5 +
                 ((uint)pbVar8[2] + (uint)*pbVar8) * -0xb + 0x40) >> 7;
      if (2 < (int)uVar12) {
        lVar9 = (((ulonglong)param_7 - 5 & 0xffffffff) >> 1) + 1;
        puVar7 = in_stack_00000074;
        do {
          pbVar1 = pbVar8 + iVar11;
          iVar2 = iVar11 + -1;
          iVar3 = iVar11 + 1;
          iVar5 = iVar11 + -2;
          iVar4 = iVar11 + 2;
          iVar6 = iVar11 + -3;
          iVar11 = iVar11 + 2;
          puVar7 = puVar7 + 2;
          *puVar7 = (int)((((uint)pbVar8[iVar2] + (uint)*pbVar1) * 0xe + (uint)pbVar8[iVar3] +
                          (uint)pbVar8[iVar5]) * 5 +
                          ((uint)pbVar8[iVar4] + (uint)pbVar8[iVar6]) * -0xb + 0x40) >> 7;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar11 = 0;
      *(int *)((int)((uVar12 & 0xffffffff) << 2) + (int)in_stack_00000074) =
           (int)(((uint)pbVar8[param_7 - 4] +
                 (uint)pbVar8[param_7 - 2] * 0xf + (uint)pbVar8[param_7 - 3] * 0xe) * 5 +
                 ((uint)pbVar8[param_7 - 5] + (uint)pbVar8[param_7 - 3]) * -0xb + 0x40) >> 7;
      if (0 < (int)param_7) {
        lVar9 = (((ulonglong)param_7 - 1 & 0xffffffff) >> 1) + 1;
        puVar7 = in_stack_00000074;
        do {
          uVar10 = *puVar7;
          if (0xff < uVar10) {
            uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
          }
          pbVar8[iVar11 + param_1] = 0;
          puVar7 = puVar7 + 2;
          *(char *)(param_4 + iVar11) = (char)uVar10;
          iVar11 = iVar11 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      param_8 = param_8 + -1;
      pbVar8 = pbVar8 + in_stack_00000064;
      param_4 = param_4 + in_stack_00000064;
    } while (param_8 != 0);
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
  }
  uVar12 = (ulonglong)in_stack_0000005c;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  if (0 < (int)in_stack_0000005c) {
    lVar9 = param_5 - param_2;
    uVar13 = uVar12;
    do {
      fn_82F42B58(lVar9 + param_2,param_2,in_stack_00000074);
      uVar13 = uVar13 - 1;
      param_2 = param_2 + in_stack_0000006c;
    } while (uVar13 != 0);
  }
  if (0 < (int)in_stack_0000005c) {
    lVar9 = uStack0000003c - param_3;
    do {
      fn_82F42B58(lVar9 + param_3,param_3,in_stack_00000074);
      uVar12 = uVar12 - 1;
      param_3 = param_3 + in_stack_0000006c;
    } while (uVar12 != 0);
  }
  return;
}


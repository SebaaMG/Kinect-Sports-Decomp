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
extern int fn_82F431F8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;


void fn_82CAA210(byte *param_1,uint param_2,uint param_3,int param_4,longlong param_5,int param_6,
                  ulonglong param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 uStack00000044;
  int in_stack_00000054;
  int in_stack_0000005c;
  uint *in_stack_00000064;
  
  iVar15 = (int)param_5;
  uStack00000044 = (undefined4)param_7;
  iVar9 = 0;
  uVar12 = param_7;
  if (0 < param_6) {
    iVar11 = iVar15 + -2;
    iVar10 = iVar15 + -6;
    do {
      iVar7 = 4;
      iVar13 = (int)(param_5 - 4U);
      *in_stack_00000064 =
           (int)((5 - (uint)param_1[2]) * 3 + (uint)*param_1 * 0x22 + (uint)param_1[4]) >> 5;
      in_stack_00000064[1] =
           (int)((uint)*param_1 * 0x19 + ((uint)param_1[2] * 8 - (uint)param_1[2]) + 0xf) >> 5;
      in_stack_00000064[2] =
           (int)((((uint)*param_1 * 2 - (uint)param_1[4]) + 5) * 3 + (uint)param_1[2] * 0x1c +
                (uint)param_1[6]) >> 5;
      in_stack_00000064[3] =
           (int)((((uint)param_1[2] * 0xe + (uint)param_1[4] * 3) - (uint)*param_1) * 2 + 0xf) >> 5;
      if (4 < iVar13) {
        lVar14 = ((param_5 - 9U & 0xffffffff) >> 1) + 1;
        puVar6 = in_stack_00000064 + 3;
        do {
          puVar6[1] = (int)((((uint)param_1[iVar7 + -2] * 2 - (uint)param_1[iVar7 + 2]) + 5) * 3 +
                            (uint)param_1[iVar7 + 4] + (uint)param_1[iVar7] * 0x1c) >> 5;
          iVar3 = iVar7 + -2;
          pbVar1 = param_1 + iVar7;
          iVar4 = iVar7 + -4;
          iVar2 = iVar7 + 2;
          iVar7 = iVar7 + 2;
          puVar6 = puVar6 + 2;
          *puVar6 = (int)((((uint)param_1[iVar2] * 2 - (uint)param_1[iVar3]) + 5) * 3 +
                          (uint)param_1[iVar4] + (uint)*pbVar1 * 0x1c) >> 5;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar12 = param_7 & 0xffffffff;
      }
      iVar7 = 0;
      *(int *)((int)((param_5 - 4U & 0xffffffff) << 2) + (int)in_stack_00000064) =
           (int)((((uint)param_1[iVar10] * 3 + (uint)param_1[iVar13] * 0xe) - (uint)param_1[iVar11])
                 * 2 + 0xf) >> 5;
      in_stack_00000064[iVar15 + -3] =
           (int)((((uint)param_1[iVar11] * 2 - (uint)param_1[iVar10]) + 5) * 3 +
                 (uint)param_1[iVar15 + -8] + (uint)param_1[iVar13] * 0x1c) >> 5;
      in_stack_00000064[iVar11] =
           (int)((uint)param_1[iVar11] * 0x19 + ((uint)param_1[iVar13] * 8 - (uint)param_1[iVar13])
                + 0xf) >> 5;
      in_stack_00000064[iVar15 + -1] =
           (int)((5 - (uint)param_1[iVar13]) * 3 + (uint)param_1[iVar11] * 0x22 +
                (uint)param_1[iVar10]) >> 5;
      lVar14 = param_5;
      puVar6 = in_stack_00000064;
      if (0 < iVar15) {
        do {
          uVar8 = *puVar6;
          if (0xff < uVar8) {
            uVar8 = 0xffffffffU - ((int)uVar8 >> 0x1f) & 0xff;
          }
          param_1[iVar7] = (byte)uVar8;
          iVar7 = iVar7 + 1;
          lVar14 = lVar14 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar14 != 0);
      }
      iVar9 = iVar9 + param_4;
      param_1 = param_1 + param_4 * in_stack_00000054;
    } while (iVar9 < param_6);
  }
  iVar15 = 0;
  uVar5 = (ulonglong)param_2;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  if (0 < param_8) {
    do {
      lVar14 = fn_82F431F8(uVar5,uVar5,in_stack_00000064,uVar12);
      iVar15 = iVar15 + param_4;
      uVar5 = (longlong)param_4 * (longlong)in_stack_0000005c + lVar14;
    } while (iVar15 < param_8);
  }
  uVar5 = (ulonglong)uStack00000024;
  iVar15 = 0;
  if (0 < param_8) {
    do {
      lVar14 = fn_82F431F8(uVar5,uVar5,in_stack_00000064,uVar12);
      iVar15 = iVar15 + param_4;
      uVar5 = (longlong)param_4 * (longlong)in_stack_0000005c + lVar14;
    } while (iVar15 < param_8);
  }
  return;
}


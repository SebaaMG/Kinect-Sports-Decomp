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
extern int fn_82CA8848();


void fn_82CA8B48(byte *param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6,uint param_7,longlong param_8)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar13;
  ulonglong uVar12;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  uint in_stack_0000006c;
  int *in_stack_00000074;
  
  if (0 < (int)param_8) {
    piVar13 = in_stack_00000074 + 1;
    param_4 = param_4 - (int)param_1;
    do {
      pbVar6 = param_1;
      if (1 < (int)(param_7 - 1)) {
        piVar10 = in_stack_00000074 + -1;
        lVar7 = (ulonglong)(param_7 - 3 >> 1) + 1;
        do {
          pbVar2 = pbVar6 + 2;
          bVar1 = *pbVar6;
          pbVar3 = pbVar6 + 1;
          pbVar6 = pbVar6 + 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((int)(((uint)bVar1 + (uint)*pbVar2) * -0x196) >> 4) + (uint)*pbVar3 * 0x10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[param_7 - 1] = ((int)((uint)*pbVar6 * -0x196) >> 3) + (uint)pbVar6[1] * 0x10
      ;
      *in_stack_00000074 = (uint)*param_1 * 0x20 + (*piVar13 * -0xd9 >> 10);
      if (2 < (int)param_7) {
        lVar7 = (((ulonglong)param_7 - 3 & 0xffffffff) >> 1) + 1;
        pbVar6 = param_1;
        piVar10 = in_stack_00000074;
        do {
          piVar4 = piVar10 + 3;
          piVar5 = piVar10 + 1;
          pbVar6 = pbVar6 + 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (uint)*pbVar6 * 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (1 < (int)(param_7 - 1)) {
        lVar7 = (ulonglong)(param_7 - 3 >> 1) + 1;
        piVar10 = piVar13;
        do {
          *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
          piVar10 = piVar10 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[param_7 - 1] =
           (in_stack_00000074[param_7 - 2] * 0xe2 >> 8) + in_stack_00000074[param_7 - 1];
      iVar8 = *piVar13;
      if (0 < (int)param_7) {
        pbVar6 = param_1 + param_4 + -1;
        lVar7 = (((ulonglong)param_7 - 1 & 0xffffffff) >> 1) + 1;
        piVar10 = in_stack_00000074 + -1;
        do {
          iVar8 = (((piVar10[2] + iVar8) * 0xe3 >> 8) + piVar10[1] + 0x14) * 0x1a;
          uVar9 = iVar8 >> 10;
          if (0xff < uVar9) {
            uVar9 = 0xffffffffU - (iVar8 >> 0x1f) & 0xff;
          }
          pbVar6[1] = (byte)uVar9;
          pbVar6 = pbVar6 + 2;
          *pbVar6 = 0;
          piVar10 = piVar10 + 2;
          iVar8 = *piVar10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + in_stack_00000064;
    } while (param_8 != 0);
  }
  uVar12 = (ulonglong)in_stack_0000005c;
  if (0 < (int)in_stack_0000005c) {
    param_5 = param_5 - param_2;
    uVar11 = uVar12;
    do {
      fn_82CA8848(param_5 + param_2,param_2,in_stack_00000074,in_stack_00000054,1);
      uVar11 = uVar11 - 1;
      param_2 = param_2 + (ulonglong)in_stack_0000006c;
    } while (uVar11 != 0);
  }
  if (0 < (int)in_stack_0000005c) {
    param_6 = param_6 - param_3;
    do {
      fn_82CA8848(param_6 + param_3,param_3,in_stack_00000074,in_stack_00000054,1);
      uVar12 = uVar12 - 1;
      param_3 = param_3 + (ulonglong)in_stack_0000006c;
    } while (uVar12 != 0);
  }
  return;
}


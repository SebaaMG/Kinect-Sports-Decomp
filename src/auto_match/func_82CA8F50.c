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


void fn_82CA8F50(byte *param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6,longlong param_7,uint param_8)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar13;
  ulonglong uVar12;
  uint in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  int *in_stack_00000074;
  
  if (0 < (int)param_7) {
    param_4 = param_4 - (int)param_1;
    piVar13 = in_stack_00000074 + 1;
    do {
      pbVar8 = param_1;
      if (1 < (int)(param_8 - 1)) {
        piVar10 = in_stack_00000074 + -1;
        lVar6 = (ulonglong)(param_8 - 3 >> 1) + 1;
        do {
          pbVar2 = pbVar8 + in_stack_00000064 * 2;
          bVar1 = *pbVar8;
          pbVar3 = pbVar8 + in_stack_00000064;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((int)(((uint)bVar1 + (uint)*pbVar2) * -0x196) >> 4) + (uint)*pbVar3 * 0x10;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      in_stack_00000074[param_8 - 1] =
           (uint)pbVar8[in_stack_00000064] * 0x10 + ((int)((uint)*pbVar8 * -0x196) >> 3);
      *in_stack_00000074 = (uint)*param_1 * 0x20 + (*piVar13 * -0xd9 >> 10);
      if (2 < (int)param_8) {
        lVar6 = (((ulonglong)param_8 - 3 & 0xffffffff) >> 1) + 1;
        pbVar8 = param_1;
        piVar10 = in_stack_00000074;
        do {
          piVar4 = piVar10 + 3;
          piVar5 = piVar10 + 1;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (uint)*pbVar8 * 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (1 < (int)(param_8 - 1)) {
        lVar6 = (ulonglong)(param_8 - 3 >> 1) + 1;
        piVar10 = piVar13;
        do {
          *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
          piVar10 = piVar10 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      pbVar8 = param_1 + param_4;
      in_stack_00000074[param_8 - 1] =
           (in_stack_00000074[param_8 - 2] * 0xe2 >> 8) + in_stack_00000074[param_8 - 1];
      iVar7 = *piVar13;
      if (0 < (int)param_8) {
        piVar10 = in_stack_00000074 + -1;
        lVar6 = (((ulonglong)param_8 - 1 & 0xffffffff) >> 1) + 1;
        do {
          iVar7 = (((piVar10[2] + iVar7) * 0xe3 >> 8) + piVar10[1] + 0x14) * 0x1a;
          uVar9 = iVar7 >> 10;
          if (0xff < uVar9) {
            uVar9 = 0xffffffffU - (iVar7 >> 0x1f) & 0xff;
          }
          *pbVar8 = (byte)uVar9;
          pbVar8[in_stack_00000064] = 0;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          iVar7 = *piVar10;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      param_7 = param_7 + -1;
      param_1 = param_1 + 1;
    } while (param_7 != 0);
  }
  uVar11 = (ulonglong)in_stack_00000054;
  if (0 < (int)in_stack_00000054) {
    param_2 = param_2 - param_5;
    uVar12 = uVar11;
    do {
      fn_82CA8848(param_5,param_5 + param_2,in_stack_00000074,in_stack_0000005c);
      uVar12 = uVar12 - 1;
      param_5 = param_5 + 1;
    } while (uVar12 != 0);
    if (0 < (int)in_stack_00000054) {
      param_3 = param_3 - param_6;
      do {
        fn_82CA8848(param_6,param_3 + param_6,in_stack_00000074,in_stack_0000005c);
        uVar11 = uVar11 - 1;
        param_6 = param_6 + 1;
      } while (uVar11 != 0);
    }
  }
  return;
}


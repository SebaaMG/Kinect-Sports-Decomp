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
extern int fn_82CA9540();


void fn_82CA96B8(int param_1,longlong param_2,longlong param_3,int param_4,ulonglong param_5,
                  int param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar9;
  int iVar13;
  ulonglong uVar14;
  int in_stack_00000054;
  int in_stack_0000005c;
  int *in_stack_00000064;
  
  iVar13 = 0;
  if (0 < param_6) {
    piVar7 = in_stack_00000064 + 1;
    iVar5 = (int)((param_5 - 2 & 0xffffffff) << 2);
    iVar6 = (int)((param_5 & 0xffffffff) << 2);
    iVar4 = (int)param_5;
    do {
      iVar10 = 0;
      if (0 < iVar4) {
        piVar11 = in_stack_00000064 + -1;
        lVar8 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        do {
          pbVar2 = (byte *)(iVar10 + param_1);
          iVar10 = iVar10 + 2;
          piVar11 = piVar11 + 2;
          *piVar11 = (int)((uint)*pbVar2 * 0x13b) >> 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(undefined4 *)(iVar6 + (int)piVar7) = *(undefined4 *)(iVar5 + (int)piVar7);
      if (1 < iVar4 + 1) {
        lVar8 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = in_stack_00000064;
        do {
          piVar12 = piVar11 + 3;
          piVar3 = piVar11 + 1;
          piVar11 = piVar11 + 2;
          *piVar11 = (*piVar12 + *piVar3) * 0xe2 >> 8;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *in_stack_00000064 = in_stack_00000064[2];
      if (0 < iVar4) {
        lVar8 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = piVar7;
        do {
          *piVar11 = *piVar11 - ((piVar11[-1] + piVar11[1]) * 0xd9 >> 0xc);
          piVar11 = piVar11 + 2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(undefined4 *)(iVar6 + (int)piVar7) = *(undefined4 *)(iVar5 + (int)piVar7);
      if (1 < iVar4 + 1) {
        lVar8 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = in_stack_00000064;
        do {
          piVar12 = piVar11 + 2;
          *piVar12 = ((piVar11[1] + piVar11[3]) * 0x196 >> 8) - *piVar12;
          lVar8 = lVar8 + -1;
          piVar11 = piVar12;
        } while (lVar8 != 0);
      }
      iVar10 = 0;
      uVar14 = param_5;
      piVar11 = piVar7;
      if (0 < iVar4) {
        do {
          uVar1 = *piVar11 >> 4;
          uVar9 = (ulonglong)(int)uVar1;
          if (0xff < uVar1) {
            uVar9 = ((ulonglong)(uVar1 >> 0x1f) - 1) + (ulonglong)(uVar9 == 0) & 0xff;
          }
          *(char *)(iVar10 + param_1) = (char)uVar9;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 - 1;
          piVar11 = piVar11 + 1;
        } while (uVar14 != 0);
      }
      iVar13 = iVar13 + param_4;
      param_1 = param_4 * in_stack_00000054 + param_1;
    } while (iVar13 < param_6);
  }
  iVar13 = 0;
  if (0 < param_8) {
    do {
      param_2 = fn_82CA9540(param_2,param_2,param_7,in_stack_00000064,1);
      iVar13 = iVar13 + param_4;
      param_2 = (longlong)param_4 * (longlong)in_stack_0000005c + param_2;
    } while (iVar13 < param_8);
  }
  iVar13 = 0;
  if (0 < param_8) {
    do {
      param_3 = fn_82CA9540(param_3,param_3,param_7,in_stack_00000064,1);
      iVar13 = iVar13 + param_4;
      param_3 = (longlong)param_4 * (longlong)in_stack_0000005c + param_3;
    } while (iVar13 < param_8);
  }
  return;
}


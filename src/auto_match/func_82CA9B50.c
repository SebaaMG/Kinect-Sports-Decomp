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


void fn_82CA9B50(int param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong param_5,
                  longlong param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar9;
  ulonglong uVar13;
  int *in_stack_0000005c;
  
  if (0 < (int)param_4) {
    piVar6 = in_stack_0000005c + 1;
    iVar4 = (int)((param_5 - 2 & 0xffffffff) << 2);
    iVar5 = (int)((param_5 & 0xffffffff) << 2);
    iVar3 = (int)param_5;
    do {
      if (0 < iVar3) {
        piVar11 = in_stack_0000005c + -1;
        lVar7 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        pbVar10 = (byte *)(param_1 + (param_8 & 0x7fffffff) * -2);
        do {
          pbVar10 = pbVar10 + param_8 * 2;
          piVar11 = piVar11 + 2;
          *piVar11 = (int)((uint)*pbVar10 * 0x13b) >> 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(undefined4 *)(iVar5 + (int)piVar6) = *(undefined4 *)(iVar4 + (int)piVar6);
      if (1 < iVar3 + 1) {
        lVar7 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = in_stack_0000005c;
        do {
          piVar12 = piVar11 + 3;
          piVar2 = piVar11 + 1;
          piVar11 = piVar11 + 2;
          *piVar11 = (*piVar12 + *piVar2) * 0xe2 >> 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *in_stack_0000005c = in_stack_0000005c[2];
      if (0 < iVar3) {
        lVar7 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = piVar6;
        do {
          *piVar11 = *piVar11 - ((piVar11[-1] + piVar11[1]) * 0xd9 >> 0xc);
          piVar11 = piVar11 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *(undefined4 *)(iVar5 + (int)piVar6) = *(undefined4 *)(iVar4 + (int)piVar6);
      if (1 < iVar3 + 1) {
        lVar7 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        piVar11 = in_stack_0000005c;
        do {
          piVar12 = piVar11 + 2;
          *piVar12 = ((piVar11[1] + piVar11[3]) * 0x196 >> 8) - *piVar12;
          lVar7 = lVar7 + -1;
          piVar11 = piVar12;
        } while (lVar7 != 0);
      }
      if (0 < iVar3) {
        puVar8 = (undefined1 *)(param_1 - param_8);
        uVar13 = param_5;
        piVar11 = piVar6;
        do {
          uVar1 = *piVar11 >> 4;
          uVar9 = (ulonglong)(int)uVar1;
          if (0xff < uVar1) {
            uVar9 = ((ulonglong)(uVar1 >> 0x1f) - 1) + (ulonglong)(uVar9 == 0) & 0xff;
          }
          piVar11 = piVar11 + 1;
          puVar8 = puVar8 + param_8;
          *puVar8 = (char)uVar9;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 1;
    } while (param_4 != 0);
  }
  lVar7 = param_6;
  if (0 < (int)param_6) {
    do {
      param_2 = fn_82CA9540(param_2,param_2,param_7,in_stack_0000005c);
      lVar7 = lVar7 + -1;
      param_2 = param_2 + 1;
    } while (lVar7 != 0);
    if (0 < (int)param_6) {
      do {
        param_3 = fn_82CA9540(param_3,param_3,param_7,in_stack_0000005c);
        param_6 = param_6 + -1;
        param_3 = param_3 + 1;
      } while (param_6 != 0);
    }
  }
  return;
}


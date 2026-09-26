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


void fn_82CA9540(int param_1,int param_2,ulonglong param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar12;
  ulonglong uVar11;
  
  piVar10 = param_4 + 1;
  iVar6 = (int)param_3;
  if (0 < iVar6) {
    piVar9 = param_4 + -1;
    lVar7 = ((param_3 - 1 & 0xffffffff) >> 1) + 1;
    pbVar12 = (byte *)(param_2 + (param_5 & 0x7fffffff) * -2);
    do {
      pbVar12 = pbVar12 + param_5 * 2;
      piVar9 = piVar9 + 2;
      *piVar9 = (int)((uint)*pbVar12 * 0x13b) >> 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar5 = (int)((param_3 & 0xffffffff) << 2);
  iVar4 = (int)((param_3 - 2 & 0xffffffff) << 2);
  *(undefined4 *)(iVar5 + (int)piVar10) = *(undefined4 *)(iVar4 + (int)piVar10);
  if (1 < iVar6 + 1) {
    lVar7 = ((param_3 - 1 & 0xffffffff) >> 1) + 1;
    piVar9 = param_4;
    do {
      piVar2 = piVar9 + 3;
      piVar3 = piVar9 + 1;
      piVar9 = piVar9 + 2;
      *piVar9 = (*piVar2 + *piVar3) * 0xe2 >> 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *param_4 = param_4[2];
  if (0 < iVar6) {
    lVar7 = ((param_3 - 1 & 0xffffffff) >> 1) + 1;
    piVar9 = piVar10;
    do {
      *piVar9 = *piVar9 - ((piVar9[-1] + piVar9[1]) * 0xd9 >> 0xc);
      piVar9 = piVar9 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(iVar5 + (int)piVar10) = *(undefined4 *)(iVar4 + (int)piVar10);
  if (1 < iVar6 + 1) {
    lVar7 = ((param_3 - 1 & 0xffffffff) >> 1) + 1;
    do {
      piVar9 = param_4 + 2;
      *piVar9 = ((param_4[1] + param_4[3]) * 0x196 >> 8) - *piVar9;
      lVar7 = lVar7 + -1;
      param_4 = piVar9;
    } while (lVar7 != 0);
  }
  if (0 < iVar6) {
    puVar8 = (undefined1 *)(param_1 - param_5);
    do {
      uVar1 = *piVar10 >> 4;
      uVar11 = (ulonglong)(int)uVar1;
      if (0xff < uVar1) {
        uVar11 = ((ulonglong)(uVar1 >> 0x1f) - 1) + (ulonglong)(uVar11 == 0) & 0xff;
      }
      piVar10 = piVar10 + 1;
      puVar8 = puVar8 + param_5;
      *puVar8 = (char)uVar11;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}


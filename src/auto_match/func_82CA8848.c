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


void fn_82CA8848(undefined1 *param_1,byte *param_2,int *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  
  pbVar9 = param_2;
  if (1 < param_4 + -1) {
    piVar10 = param_3 + -1;
    lVar6 = (ulonglong)(param_4 - 3U >> 1) + 1;
    do {
      bVar1 = *pbVar9;
      pbVar2 = pbVar9 + param_5 * 2;
      pbVar3 = pbVar9 + param_5;
      pbVar9 = pbVar9 + param_5 * 2;
      piVar10 = piVar10 + 2;
      *piVar10 = ((int)(((uint)*pbVar2 + (uint)bVar1) * -0x196) >> 4) + (uint)*pbVar3 * 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_3[param_4 + -1] = (uint)pbVar9[param_5] * 0x10 + ((int)((uint)*pbVar9 * -0x196) >> 3);
  *param_3 = (param_3[1] * -0xd9 >> 10) + (uint)*param_2 * 0x20;
  if (2 < param_4) {
    lVar6 = (ulonglong)(param_4 - 3U >> 1) + 1;
    piVar10 = param_3;
    do {
      piVar4 = piVar10 + 3;
      piVar5 = piVar10 + 1;
      param_2 = param_2 + param_5 * 2;
      piVar10 = piVar10 + 2;
      *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (uint)*param_2 * 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (1 < param_4 + -1) {
    lVar6 = (ulonglong)(param_4 - 3U >> 1) + 1;
    piVar10 = param_3 + 1;
    do {
      *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
      piVar10 = piVar10 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_3[param_4 + -1] = (param_3[param_4 + -2] * 0xe2 >> 8) + param_3[param_4 + -1];
  iVar7 = param_3[1];
  if (0 < param_4) {
    param_3 = param_3 + -1;
    lVar6 = (ulonglong)(param_4 - 1U >> 1) + 1;
    do {
      iVar7 = (((param_3[2] + iVar7) * 0xe3 >> 8) + param_3[1] + 0x14) * 0x1a;
      uVar8 = iVar7 >> 10;
      if (0xff < uVar8) {
        uVar8 = 0xffffffffU - (iVar7 >> 0x1f) & 0xff;
      }
      *param_1 = (char)uVar8;
      param_1[param_5] = 0;
      param_1 = param_1 + param_5 * 2;
      param_3 = param_3 + 2;
      iVar7 = *param_3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}


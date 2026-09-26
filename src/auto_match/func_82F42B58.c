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


void fn_82F42B58(int param_1,byte *param_2,uint *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = 2;
  *param_3 = (int)(((uint)*param_2 * 0xf + (uint)param_2[1] * 0xe + (uint)param_2[2]) * 5 +
                   ((uint)param_2[3] + (uint)param_2[1]) * -0xb + 0x40) >> 7;
  if (2 < (int)(param_4 - 2)) {
    lVar8 = (ulonglong)(param_4 - 5 >> 1) + 1;
    puVar7 = param_3;
    do {
      pbVar1 = param_2 + iVar9;
      iVar2 = iVar9 + 1;
      iVar5 = iVar9 + -1;
      iVar3 = iVar9 + 2;
      iVar6 = iVar9 + -2;
      iVar4 = iVar9 + 3;
      iVar9 = iVar9 + 2;
      puVar7 = puVar7 + 2;
      *puVar7 = (int)((((uint)param_2[iVar2] + (uint)*pbVar1) * 0xe + (uint)param_2[iVar5] +
                      (uint)param_2[iVar3]) * 5 +
                      ((uint)param_2[iVar6] + (uint)param_2[iVar4]) * -0xb + 0x40) >> 7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar9 = 0;
  param_3[param_4 - 2] =
       (int)(((uint)param_2[param_4 - 1] * 0xf + (uint)param_2[param_4 - 2] * 0xe +
             (uint)param_2[param_4 - 3]) * 5 +
             ((uint)param_2[param_4 - 4] + (uint)param_2[param_4 - 2]) * -0xb + 0x40) >> 7;
  if (0 < (int)param_4) {
    lVar8 = (((ulonglong)param_4 - 1 & 0xffffffff) >> 1) + 1;
    do {
      uVar10 = *param_3;
      if (0xff < uVar10) {
        uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
      }
      *(undefined1 *)(param_1 + 1 + iVar9) = 0;
      param_3 = param_3 + 2;
      *(char *)(iVar9 + param_1) = (char)uVar10;
      iVar9 = iVar9 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}


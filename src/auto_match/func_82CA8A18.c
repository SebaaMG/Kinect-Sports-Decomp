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


void fn_82CA8A18(int *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  if (1 < (int)(param_2 - 1)) {
    piVar3 = param_1 + 1;
    lVar2 = (ulonglong)(param_2 - 3 >> 1) + 1;
    do {
      *piVar3 = *piVar3 * 0x100 + piVar3[-1] * -0x80 + piVar3[1] * -0x80;
      piVar3 = piVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[param_2 - 1] = param_1[param_2 - 1] * 0x100 + param_1[param_2 - 2] * -0x100;
  *param_1 = (param_1[1] >> 1) + *param_1 * 0x100;
  if (2 < (int)param_2) {
    lVar2 = (((ulonglong)param_2 - 3 & 0xffffffff) >> 1) + 1;
    piVar3 = param_1;
    do {
      piVar4 = piVar3 + 2;
      *piVar4 = (piVar3[1] + piVar3[3] >> 2) + *piVar4 * 0x100;
      lVar2 = lVar2 + -1;
      piVar3 = piVar4;
    } while (lVar2 != 0);
  }
  if ((int)param_2 < 1) {
    return;
  }
  param_1 = param_1 + -1;
  lVar2 = (((ulonglong)param_2 - 1 & 0xffffffff) >> 1) + 1;
  do {
    iVar1 = param_1[1];
    uVar5 = iVar1 + 0x80 >> 8;
    param_1[1] = uVar5;
    if (0xff < uVar5) {
      uVar5 = -(iVar1 + 0x80 >> 0x1f) - 1U & 0xff;
    }
    param_1[1] = uVar5;
    param_1 = param_1 + 2;
    *param_1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


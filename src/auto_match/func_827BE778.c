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
extern int fn_827C1A20();


void fn_827BE778(int *param_1,int param_2,int *param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((param_2 < 0) || (3 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1f;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  param_2 = param_2 + 0x12;
  if (param_1[param_2] == 0) {
    iVar1 = fn_827C1A20(param_1);
    param_1[param_2] = iVar1;
  }
  iVar1 = 0;
  lVar3 = 0x40;
  do {
    iVar2 = (*param_3 * param_4 + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    param_3 = param_3 + 1;
    *(short *)(param_1[param_2] + iVar1) = (short)iVar2;
    iVar1 = iVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined1 *)(param_1[param_2] + 0x80) = 0;
  return;
}


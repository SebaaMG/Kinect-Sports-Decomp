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


void fn_82CA0A28(undefined8 param_1,int param_2,int param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  iVar1 = 0;
  if (0 < (int)param_5) {
    do {
      *(char *)(iVar1 + param_2) = (char)((int)(*(byte *)(iVar1 + param_2) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  iVar1 = 0;
  lVar2 = param_6;
  if (0 < (int)param_6) {
    do {
      *(char *)(iVar1 + param_3) = (char)((int)(*(byte *)(iVar1 + param_3) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  iVar1 = 0;
  if (0 < (int)param_6) {
    do {
      *(char *)(iVar1 + param_4) = (char)((int)(*(byte *)(iVar1 + param_4) - 0x80) >> 1) + -0x80;
      iVar1 = iVar1 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    return;
  }
  return;
}


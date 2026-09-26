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


void fn_82ED1D40(undefined8 param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  lVar4 = 4;
  do {
    iVar3 = param_4 + param_5;
    lVar2 = (ulonglong)*(byte *)(param_3 + 1 + param_4) +
            (ulonglong)*(byte *)(param_3 + 2 + param_4) +
            (ulonglong)*(byte *)(param_3 + 3 + param_4) +
            (ulonglong)*(byte *)(param_3 + 4 + param_4) +
            (ulonglong)*(byte *)(param_3 + 5 + param_4) +
            (ulonglong)*(byte *)(param_3 + 6 + param_4) +
            (ulonglong)*(byte *)(param_3 + 7 + param_4) + (ulonglong)*(byte *)(param_4 + param_3) +
            lVar2;
    param_4 = iVar3 + param_5;
    lVar1 = (ulonglong)*(byte *)(param_3 + 1 + iVar3) + (ulonglong)*(byte *)(param_3 + 2 + iVar3) +
            (ulonglong)*(byte *)(param_3 + 3 + iVar3) + (ulonglong)*(byte *)(param_3 + 4 + iVar3) +
            (ulonglong)*(byte *)(param_3 + 5 + iVar3) + (ulonglong)*(byte *)(param_3 + 6 + iVar3) +
            (ulonglong)*(byte *)(param_3 + 7 + iVar3) + (ulonglong)*(byte *)(iVar3 + param_3) +
            lVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_2 = (char)((lVar1 + lVar2 & 0xffffffffU) >> 6);
  return;
}


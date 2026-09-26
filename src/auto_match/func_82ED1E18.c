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


void fn_82ED1E18(undefined8 param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  lVar4 = 8;
  do {
    iVar3 = param_4 + param_5;
    iVar2 = (uint)*(byte *)(param_3 + 1 + param_4) + (uint)*(byte *)(param_3 + 2 + param_4) +
            (uint)*(byte *)(param_3 + 3 + param_4) + (uint)*(byte *)(param_3 + 4 + param_4) +
            (uint)*(byte *)(param_3 + 5 + param_4) + (uint)*(byte *)(param_3 + 6 + param_4) +
            (uint)*(byte *)(param_3 + 7 + param_4) + (uint)*(byte *)(param_3 + 8 + param_4) +
            (uint)*(byte *)(param_3 + 9 + param_4) + (uint)*(byte *)(param_3 + 10 + param_4) +
            (uint)*(byte *)(param_3 + 0xb + param_4) + (uint)*(byte *)(param_3 + 0xc + param_4) +
            (uint)*(byte *)(param_3 + 0xd + param_4) + (uint)*(byte *)(param_3 + 0xe + param_4) +
            (uint)*(byte *)(param_3 + 0xf + param_4) + (uint)*(byte *)(param_4 + param_3) + iVar2;
    param_4 = iVar3 + param_5;
    iVar1 = (uint)*(byte *)(param_3 + 1 + iVar3) + (uint)*(byte *)(param_3 + 2 + iVar3) +
            (uint)*(byte *)(param_3 + 3 + iVar3) + (uint)*(byte *)(param_3 + 4 + iVar3) +
            (uint)*(byte *)(param_3 + 5 + iVar3) + (uint)*(byte *)(param_3 + 6 + iVar3) +
            (uint)*(byte *)(param_3 + 7 + iVar3) + (uint)*(byte *)(param_3 + 8 + iVar3) +
            (uint)*(byte *)(param_3 + 9 + iVar3) + (uint)*(byte *)(param_3 + 10 + iVar3) +
            (uint)*(byte *)(param_3 + 0xb + iVar3) + (uint)*(byte *)(param_3 + 0xc + iVar3) +
            (uint)*(byte *)(param_3 + 0xd + iVar3) + (uint)*(byte *)(param_3 + 0xe + iVar3) +
            (uint)*(byte *)(param_3 + 0xf + iVar3) + (uint)*(byte *)(iVar3 + param_3) + iVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_2 = (char)((uint)(iVar1 + iVar2) >> 8);
  return;
}


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


ulonglong fn_82825290(int param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 3;
  uVar2 = (ulonglong)*(byte *)(param_1 + 3) & 0x7f;
  lVar4 = 3;
  do {
    pbVar1 = (byte *)(param_1 + -1 + iVar3);
    iVar3 = iVar3 + -1;
    uVar2 = (ulonglong)*pbVar1 + (uVar2 & 0xffffff) * 0x100;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    return uVar2;
  }
  return -uVar2;
}


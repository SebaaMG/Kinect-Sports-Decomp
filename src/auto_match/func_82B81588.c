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


uint fn_82B81588(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  iVar3 = 0;
  uVar4 = 0;
  lVar5 = 4;
  do {
    uVar1 = (param_1 >> (uVar4 & 0x3f)) + iVar3;
    iVar3 = iVar3 + 1;
    uVar2 = (uVar1 & 3) << (uVar4 & 0x3f) | uVar2 & ~(3 << (uVar4 & 0x3f));
    uVar4 = uVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return uVar2;
}


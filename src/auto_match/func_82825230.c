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


void fn_82825230(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = -param_1;
  if (-1 < (int)param_1) {
    uVar2 = param_1;
  }
  iVar1 = 0;
  lVar4 = 4;
  do {
    uVar3 = uVar2 - (uVar2 & 0xff);
    *(char *)(iVar1 + param_2) = (char)uVar2;
    iVar1 = iVar1 + 1;
    uVar2 = ((int)uVar3 >> 8) + (uint)((int)uVar3 < 0 && (uVar3 & 0xff) != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (-1 < (int)param_1) {
    return;
  }
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x80;
  return;
}


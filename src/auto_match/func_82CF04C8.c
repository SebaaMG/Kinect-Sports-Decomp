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
extern int fn_82CF0460();


void fn_82CF04C8(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 1000;
  do {
    iVar1 = (int)param_1 / (int)uVar5;
    uVar2 = iVar1 / 10 + (iVar1 >> 0x1f);
    uVar3 = uVar5 & ~((((ulonglong)param_1 & 0x7fffffff) << 1 | (ulonglong)(param_1 >> 0x1f)) - 1);
    uVar4 = (longlong)(int)uVar2 + (ulonglong)(uVar2 >> 0x1f);
    trapWord(6,uVar5,0);
    trapWord(5,uVar3,0xffff);
    fn_82CF0460((longlong)iVar1 + (uVar4 + (uVar4 & 0x3fffffff) * 4 & 0x7fffffff) * -2,param_2,
                  param_3,uVar3);
    iVar1 = (int)uVar5 / 10;
    uVar5 = (ulonglong)iVar1;
    param_3 = param_3 + 0x1c;
  } while (0 < iVar1);
  return;
}


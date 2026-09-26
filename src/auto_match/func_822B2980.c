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
extern int fn_822B26F8();


undefined8 fn_822B2980(int param_1,undefined8 param_2)

{
  int iVar2;
  longlong lVar1;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 8) + 0x84;
  iVar2 = fn_822B26F8(lVar4,0,param_2);
  lVar1 = fn_822B26F8(lVar4,1,param_2);
  lVar4 = fn_822B26F8(lVar4,2,param_2);
  if (((lVar4 == 0) || (iVar2 != *(int *)(param_1 + 4))) || (uVar3 = 1, lVar1 == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}


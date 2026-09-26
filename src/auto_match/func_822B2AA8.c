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


undefined8 fn_822B2AA8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 8) + 0x84;
  iVar1 = fn_822B26F8(lVar3,0,param_2);
  fn_822B26F8(lVar3,1,param_2);
  lVar3 = fn_822B26F8(lVar3,2,param_2);
  if ((lVar3 == 0) || (uVar2 = 1, iVar1 != *(int *)(param_1 + 4))) {
    uVar2 = 0;
  }
  return uVar2;
}


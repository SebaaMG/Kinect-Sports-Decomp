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


void fn_82D4B4F0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 + 0xd) * 4;
  iVar2 = (param_3 + 0xd) * 4;
  *(uint *)(iVar1 + param_1) = 1 << (param_3 & 0x3f) | *(uint *)(iVar1 + param_1);
  *(uint *)(iVar2 + param_1) = 1 << (param_2 & 0x3f) | *(uint *)(iVar2 + param_1);
  return;
}


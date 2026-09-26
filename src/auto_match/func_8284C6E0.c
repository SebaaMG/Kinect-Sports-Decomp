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
extern int fn_8284C428();
extern int fn_8284C528();


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_8284C6E0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int aiStack_30 [12];
  
  aiStack_30[1] = 0;
  aiStack_30[0] = 0;
  fn_8284C428(param_1,param_2,param_4,aiStack_30 + 1,aiStack_30);
  iVar2 = fn_8284C528(param_1,param_3,param_4);
  uVar1 = *(uint *)(param_3 + 8);
  return (longlong)(int)(((uVar1 + aiStack_30[0]) - 1 & ~(uVar1 - 1)) / uVar1 + 0x1f & 0xffffffe0) *
         (longlong)iVar2 + 0xfffU & 0xfffff000;
}


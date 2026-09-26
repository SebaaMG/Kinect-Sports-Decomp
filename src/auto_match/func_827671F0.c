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
extern unsigned int *auStack_20;
extern int fn_82766450();
extern unsigned int uStack_1e;


void fn_827671F0(int param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  
  *(int *)(param_1 + 4) = (int)param_2;
  lVar1 = fn_82766450(param_1,param_2,auStack_20);
  lVar1 = lVar1 + param_2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(undefined2 *)(param_1 + 8) = uStack_1e;
  lVar2 = fn_82766450(param_1,lVar1,auStack_20);
  lVar2 = lVar2 + lVar1;
  *(int *)(param_1 + 4) = (int)lVar2;
  *(undefined2 *)(param_1 + 10) = uStack_1e;
  lVar1 = fn_82766450(param_1,lVar2,auStack_20);
  iVar4 = (int)(lVar1 + lVar2);
  *(int *)(param_1 + 4) = iVar4;
  *(undefined2 *)(param_1 + 0xc) = uStack_1e;
  iVar3 = fn_82766450(param_1,lVar1 + lVar2,auStack_20);
  *(int *)(param_1 + 4) = iVar3 + iVar4;
  *(undefined2 *)(param_1 + 0xe) = uStack_1e;
  return;
}


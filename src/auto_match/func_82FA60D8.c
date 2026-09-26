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
extern int fn_82FA5D50();


int fn_82FA60D8(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 4) & 0xfffffffc;
  if (param_3 + 0x10U <= uVar1) {
    uVar2 = param_3 - 4;
    iVar4 = uVar2 + param_2;
    iVar5 = iVar4 + 4;
    *(uint *)(iVar4 + 8) = (uVar1 - uVar2) - 4 | *(uint *)(iVar4 + 8) & 3;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 3 | uVar2;
    iVar3 = (*(uint *)(iVar4 + 8) & 0xfffffffc) + iVar5;
    *(int *)(iVar3 + 4) = iVar5;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 2;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 3;
    *(int *)((*(uint *)(param_2 + 4) & 0xfffffffc) + param_2 + 4) = param_2;
    fn_82FA5D50();
    return iVar5;
  }
  return param_2;
}


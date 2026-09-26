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
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82702B90();


ulonglong fn_82704A98(int param_1,undefined8 param_2)

{
  int iVar2;
  longlong lVar1;
  longlong lVar3;
  ulonglong uVar4;
  int aiStack_20 [2];
  
  if ((*(int *)(param_1 + 0xa00) == 0) || (*(int **)(param_1 + 0x68) == (int *)0x0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    iVar2 = fn_82694700((ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,param_2);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    aiStack_20[0] = iVar2;
    lVar1 = fn_82702B90(*(undefined4 *)(param_1 + 0xa00),aiStack_20);
    lVar3 = (ulonglong)*(uint *)(iVar2 + 8) - 1;
    uVar4 = -(ulonglong)(lVar1 != 0) & lVar1 + 4U;
    *(int *)(iVar2 + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iVar2);
    }
  }
  return uVar4;
}


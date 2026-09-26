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
extern unsigned int *auStack_40;
extern int fn_82CE4118();
extern int fn_82D81240();


void fn_82DEF1A0(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [64];
  
  piVar1 = *(int **)(param_1 + 0x50);
  iVar2 = piVar1[4];
  while (iVar2 != 0) {
    iVar3 = piVar1[2] + 1;
    iVar2 = *(int *)(piVar1[2] * 4 + *piVar1);
    piVar1[2] = iVar3;
    if (iVar3 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18) - 1;
    if (-1 < (longlong)uVar5) {
      lVar4 = (uVar5 & 0x3fffffff) << 2;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x14) + (int)lVar4);
        (**(code **)(*piVar1 + 0x10))(piVar1,iVar2);
        uVar5 = uVar5 - 1;
        lVar4 = lVar4 + -4;
      } while (-1 < (longlong)uVar5);
    }
    if ((ulonglong)*(uint *)(iVar2 + 8) == (param_2 & 0xffffffff)) {
      fn_82D81240(auStack_40,param_2,iVar2);
    }
    fn_82CE4118(iVar2);
    piVar1 = *(int **)(param_1 + 0x50);
    iVar2 = piVar1[4];
  }
  return;
}


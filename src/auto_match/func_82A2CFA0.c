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
extern unsigned int lbl_8315D344;
extern unsigned int lbl_83219D04;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A2CFA0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    do {
      KeWaitForSingleObject(param_1 + 0x10,0,0,0,0);
      while( true ) {
        uVar4 = KfAcquireSpinLock(param_1 + 4);
        piVar1 = *(int **)(param_1 + 8);
        piVar2 = (int *)piVar1[1];
        iVar5 = *piVar1;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        KfReleaseSpinLock(param_1 + 4,uVar4);
        if (piVar1 == (int *)(param_1 + 8)) break;
        lbl_83219D04 = lbl_83219D04 + 1;
        (*(code *)(&lbl_8315D344)[*(byte *)piVar1[8]])
                  (*(undefined4 *)(*(int *)((byte *)piVar1[8] + 0x14) + 0x18),piVar1 + -0xc);
      }
    } while (*(int *)(param_1 + 0x20) == 0);
  }
  iVar5 = param_1 + 4;
  uVar4 = KfAcquireSpinLock(iVar5);
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    KfReleaseSpinLock(iVar5,uVar4);
    if (piVar1 == (int *)(param_1 + 8)) break;
    piVar1[-8] = -0x3ffffd92;
    IoCompleteRequest(piVar1 + -0xc,1);
    uVar4 = KfAcquireSpinLock(iVar5);
    piVar1 = *(int **)(param_1 + 8);
  }
  return;
}


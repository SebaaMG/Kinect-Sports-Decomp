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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696D38();
extern unsigned int iStack_60;
extern unsigned int stack0x00000000;


void fn_827105A0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar6;
  char cVar7;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar8;
  int iStack_60;
  
  uVar3 = ZEXT48(&stack0x00000000);
  piVar8 = (int *)0x0;
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar6 != 8)) ||
     (cVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_82681838(*(undefined4 *)(param_1 + 4),
                        (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(uVar3 - 0x60,uVar4,uVar2,0xffffffffffffffff,0);
      fn_82681838(*(undefined4 *)(param_1 + 4),uVar3 - 0x60);
      lVar5 = (ulonglong)*(uint *)(iStack_60 + 8) - 1;
      *(int *)(iStack_60 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iStack_60);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      piVar8 = (int *)(*(int *)(param_1 + 8) + -0x10);
    }
    bVar1 = *(int *)(param_1 + 0x1c) < 1;
    if (bVar1) {
      lVar5 = uVar3 - 0x50;
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    else {
      uVar4 = fn_826957D0(param_1,0);
      lVar5 = fn_82695DA0(uVar3 - 0x30,uVar4);
    }
    fn_82695DA0(uVar3 - 0x40,lVar5);
    if (bVar1) {
      fn_82696330(uVar3 - 0x50);
    }
    else {
      fn_82696330(uVar3 - 0x30);
    }
    (**(code **)(*piVar8 + 0xc))(piVar8,*(undefined4 *)(param_1 + 0x18),uVar3 - 0x40);
    fn_82695FA0(*(undefined4 *)(param_1 + 4),uVar3 - 0x40);
    fn_82696330(uVar3 - 0x40);
  }
  return;
}


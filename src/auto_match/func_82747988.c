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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82745128();
extern int fn_82746C20();


void fn_82747988(int param_1)

{
  int iVar3;
  char cVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar3 != 0x11)) ||
     (cVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x40))(), cVar4 != '\0')) {
    uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82746C20(uVar1,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar3);
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar5 = auStack_70;
    lVar6 = 4;
    do {
      puVar5 = puVar5 + 0x10;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = fn_826957D0(param_1,0);
    fn_82695FA0(auStack_60,uVar2);
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = fn_826957D0(param_1,1);
      fn_82695FA0(auStack_50,uVar2);
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar2 = fn_826957D0(param_1,2);
        fn_82695FA0(auStack_40,uVar2);
        if (3 < *(int *)(param_1 + 0x1c)) {
          uVar2 = fn_826957D0(param_1,3);
          fn_82695FA0(auStack_30,uVar2);
        }
      }
    }
    fn_82745128(iVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,auStack_60);
    puVar5 = auStack_20;
    lVar6 = 3;
    do {
      puVar5 = puVar5 + -0x10;
      fn_82696330(puVar5);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  if (iVar3 != 0) {
    fn_826824B0(iVar3);
  }
  return;
}


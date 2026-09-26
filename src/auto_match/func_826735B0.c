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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82670C10();
extern int fn_82671278();
extern int fn_82671C38();
extern int fn_826732C8();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_58;


void fn_826735B0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar6;
  undefined8 uVar4;
  longlong lVar5;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  puStack_60 = (undefined4 *)0x0;
  iVar6 = fn_82A1BB18();
  if (iVar6 == lbl_831E7B44) {
    if (*(int *)(param_2 + 0xa8) == 0) {
      uVar4 = (**(code **)(**(int **)(param_2 + 0x10) + 0xb8))();
      (**(code **)(**(int **)(param_2 + 0x10) + 0xbc))(*(int **)(param_2 + 0x10),param_2);
      (**(code **)(**(int **)(param_2 + 0x10) + 0x8c))(param_1);
      (**(code **)(**(int **)(param_2 + 0x10) + 0xbc))(*(int **)(param_2 + 0x10),uVar4);
    }
  }
  else if (*(int *)(param_2 + 0xe8) == 0) {
    lVar5 = fn_8265C9E0(0x18);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      puStack_60 = (undefined4 *)0x0;
      puStack_5c = (undefined4 *)0x0;
      fn_82517978(&puStack_60,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),1);
      uVar4 = fn_82671278(param_1,lVar5,&puStack_60);
      if (puStack_5c != (undefined4 *)0x0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar4);
    iVar6 = param_2 + 0x140;
    if (iVar6 != 0) {
      RtlEnterCriticalSection(iVar6);
    }
    fn_826732C8(&puStack_50,param_2 + 0x24);
    iVar7 = *(int *)(param_2 + 0xe8);
    puStack_60 = (undefined4 *)0x0;
    puStack_5c = (undefined4 *)0x0;
    uStack_58 = 0;
    puVar2 = puStack_60;
    puVar3 = puStack_5c;
    for (puVar8 = puStack_50;
        (puStack_60 = puVar2, puStack_5c = puVar3, puVar1 = puVar2, iVar7 == 0 &&
        (puVar8 != puStack_4c)); puVar8 = puVar8 + 2) {
      iVar7 = (*(code *)*puVar8)(param_1,puVar8[1]);
      if (iVar7 == 1) {
        fn_8257A9F0(&puStack_60,puVar8 + 1);
      }
      iVar7 = *(int *)(param_2 + 0xe8);
      puVar2 = puStack_60;
      puVar3 = puStack_5c;
    }
    for (; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      fn_82671C38(param_2,*puVar1);
    }
    if (puVar2 != (undefined4 *)0x0) {
      fn_8265CA20(puVar2);
    }
    fn_82670C10(&puStack_50);
    if (iVar6 != 0) {
      RtlLeaveCriticalSection(iVar6);
    }
  }
  return;
}


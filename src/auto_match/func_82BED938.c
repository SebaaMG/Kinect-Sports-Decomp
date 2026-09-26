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
extern unsigned int *auStack_14f;
extern unsigned int *auStack_15c;
extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BECC20();
extern int fn_82BECCB8();
extern int fn_82BECDA0();
extern int fn_82BED560();
extern int fn_82BF6D38();
extern int fn_82BF7540();
extern int fn_82BF7890();
extern int fn_82BF7C38();
extern int fn_82BF7DC8();
extern int fn_82F691F0();
extern unsigned int uStack_150;
extern unsigned int uStack_160;


undefined8 fn_82BED938(int param_1,int *param_2)

{
  int *piVar5;
  ulonglong uVar1;
  int iVar6;
  int iVar7;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar8;
  longlong lVar4;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_160;
  uint auStack_15c [3];
  undefined1 uStack_150;
  undefined1 auStack_14f [335];
  
  if ((((*(int *)(param_1 + 0x50) == 2) || (param_2 == (int *)0x0)) ||
      (piVar5 = (int *)(**(code **)(*param_2 + 4))(param_2), piVar5 == (int *)0x0)) ||
     (*(int *)(param_1 + 0x48) != 0)) {
    return 0;
  }
  uVar1 = thunk_FUN_82be5550(0x1c);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82BF6D38(uVar1,0x200,1);
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar7 = (**(code **)(*piVar5 + 8))(piVar5,iVar6);
  if (iVar7 == 0) {
    fn_82BE8D50(iVar6);
    return 0;
  }
  iVar7 = (**(code **)(*param_2 + 8))(param_2);
  uVar9 = *(uint *)(iVar6 + 0xc);
  if (iVar7 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(iVar7 + 0xc);
  }
  fn_82BE8D50(iVar6);
  uVar2 = fn_82BECC20(param_1);
  if ((ulonglong)*(uint *)(param_1 + 0x40) < uVar1 + uVar9 + (uVar2 & 0xffffffff)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    return 0;
  }
  auStack_15c[0] = 0;
  uStack_160 = (**(code **)(*piVar5 + 4))(piVar5);
  iVar6 = fn_82BF7540(param_1 + 0xc,&uStack_160,auStack_15c);
  uVar9 = auStack_15c[0];
  if (iVar6 == 0) {
    lVar4 = thunk_FUN_82be5550(0x20);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      if (iVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(iVar7 + 0xc);
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
      uVar9 = fn_82BECCB8(lVar4,param_1,piVar5,uVar3,uVar11);
    }
    if (uVar9 == 0) {
      return 0;
    }
    if (((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) && (*(int *)(iVar7 + 0xc) != 0)) {
      uStack_150 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_14f,0,0x103);
    }
    iVar6 = fn_82BF7890(param_1 + 0xc,&uStack_160,uVar9);
    uVar8 = uVar9;
    if (iVar6 == 0) goto LAB_82bedcf0;
  }
  else {
    if (((iVar7 == 0) || (*(int *)(iVar7 + 8) == 0)) || (*(int *)(iVar7 + 0xc) == 0)) {
      puVar10 = (undefined4 *)(auStack_15c[0] + 0x1c);
      if ((*(char **)(auStack_15c[0] + 0x1c) != (char *)0x0) &&
         (**(char **)(auStack_15c[0] + 0x1c) != '\0')) {
        uVar1 = thunk_FUN_82be5550(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = fn_82BF7DC8(uVar1,uStack_160,*(undefined4 *)(param_1 + 8),*puVar10);
        }
        if (uVar8 == 0) {
          return 0;
        }
        iVar6 = fn_82BECB18(param_1,uVar8);
        if (iVar6 == 0) goto LAB_82bedcf0;
        fn_82BE8D50(uVar8);
      }
    }
    else if ((*(char **)(auStack_15c[0] + 0x1c) == (char *)0x0) ||
            (**(char **)(auStack_15c[0] + 0x1c) == '\0')) {
      uStack_150 = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_14f,0,0x103);
    }
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar7 + 0xc);
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
    fn_82BECDA0(uVar9,piVar5,uVar3,uVar11);
  }
  iVar6 = fn_82BED560(param_1);
  if (iVar6 == 0) {
    return 0;
  }
  if (((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) && (*(int *)(iVar7 + 0xc) != 0)) {
    uVar1 = thunk_FUN_82be5550(0x18);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = fn_82BF7C38(uVar1,uStack_160,*(undefined4 *)(param_1 + 8),
                                *(undefined4 *)(uVar9 + 0x1c),iVar7);
    }
    if (uVar8 == 0) {
      return 0;
    }
    iVar6 = fn_82BECB18(param_1,uVar8);
    if (iVar6 == 0) {
LAB_82bedcf0:
      fn_82BE8D50(uVar8);
      return 0;
    }
    fn_82BE8D50(uVar8);
  }
  return 1;
}


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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8226C7C0();
extern int fn_82279CA0();
extern int fn_82281868();
extern int fn_822819E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82196288;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_82281C20(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar5;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  int aiStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + -8) + 0x10);
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        iVar7 = puVar2[2];
        if ((ulonglong)*(uint *)(iVar7 + 0x10) == (param_2 & 0xffffffff)) goto LAB_82281dfc;
      }
      iVar7 = 0;
LAB_82281dfc:
      fn_82279CA0(*(undefined4 *)(*(int *)(param_1 + 0x18) + -8),1);
      piVar5 = (int *)(iVar7 + 0x5c);
      if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
        piVar5 = (int *)0x0;
      }
      piVar3 = (int *)(iVar7 + 0x60);
      if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
        piVar3 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = &lbl_82196288;
      }
      aiStack_40[0] = *piVar5;
      puVar1 = *(undefined4 **)(param_1 + 0x40);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_2,aiStack_40,piVar3,iVar7 + 100);
      }
      if (aiStack_40[0] != 0) {
        fn_822819E0(param_1,aiStack_40);
      }
    }
  }
  else {
    if (*(int *)(iVar7 + 0x6c) == 0) {
      if ((*(int *)(iVar7 + 0x44) == 1) || (*(int *)(iVar7 + 0x44) == 0)) {
        piVar5 = (int *)(iVar7 + 0x4c);
      }
      else {
        piVar5 = (int *)(iVar7 + 0x54);
      }
      iVar7 = *piVar5;
    }
    else {
      iVar7 = *(int *)(iVar7 + 100);
    }
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar7 + 0x10);
        puVar1 != *(undefined4 **)(iVar7 + 0x10); puVar1 = (undefined4 *)*puVar1) {
      iVar6 = puVar1[2];
      if ((ulonglong)*(uint *)(iVar6 + 0x10) == (param_2 & 0xffffffff)) goto LAB_82281ca4;
    }
    iVar6 = 0;
LAB_82281ca4:
    fn_82279CA0(iVar7,1);
    piVar5 = (int *)(iVar6 + 0x5c);
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      piVar5 = (int *)0x0;
    }
    piVar3 = (int *)(iVar6 + 0x60);
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      piVar3 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      piVar5 = &lbl_82196288;
    }
    aiStack_40[0] = *piVar5;
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,param_2,aiStack_40,piVar3,iVar6 + 100);
    }
    uVar4 = *(undefined8 *)(iVar6 + 0x230);
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)*(undefined8 *)(iVar6 + 0x228) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x7c);
    uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)*(undefined8 *)(iVar6 + 0x228))) & ((U64)0xFFFFFFFF)) << 32));
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
    uStack_38 = CONCAT44((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) * lbl_8218E8E8 + (((U64)(uStack_38) >> 0) & 0xFFFFFFFF),
                         (((U64)(uStack_30) >> 32) & 0xFFFFFFFF) * lbl_8218E8E8 + (((U64)(uStack_38) >> 32) & 0xFFFFFFFF));
    if (iVar7 == 0) {
      uStack_30 = uStack_38;
    }
    else {
      uStack_30 = uVar4;
      fn_8226C7C0(iVar7,&uStack_38,&uStack_30,1);
    }
    if (aiStack_40[0] != 0) {
      fn_82281868(param_1,aiStack_40,&uStack_30);
    }
  }
  return;
}


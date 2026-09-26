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
extern int fn_823AAD88();
extern int fn_8263DE70();
extern int fn_82647538();
extern int fn_82647578();
extern int fn_82648988();
extern int fn_82A1E108();
extern int fn_82A1E2C0();
extern int fn_82A1E438();
extern int fn_82C0BD58();
extern int fn_82C0BE40();
extern unsigned int lbl_821AAD20;
extern U64 storeWordConditionalIndexed();


void fn_82C0FA98(ulonglong param_1)

{
  int *piVar2;
  ulonglong uVar1;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  code *pcVar10;
  double dVar11;
  int *piStack_50;
  int *apiStack_4c [19];
  
  piVar2 = (int *)param_1;
  uVar1 = (**(code **)(*piVar2 + 0x104))();
  if ((uVar1 & 4) != 0) {
LAB_82c10190:
    (**(code **)(*piVar2 + 0x10c))(param_1,8);
    (**(code **)(*piVar2 + 0xe0))(param_1);
    return;
  }
  dVar11 = (double)lbl_821AAD20;
LAB_82c0fadc:
  (**(code **)(*(int *)piVar2[0xb] + 0x40))((int *)piVar2[0xb],0,&piStack_50,0);
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*(int *)piVar2[0xb] + 0x44))((int *)piVar2[0xb],0,apiStack_4c,0);
    (**(code **)(*piStack_50 + 0xc))();
    (**(code **)(*piStack_50 + 0x30))(piStack_50,1,0xffffffff82c0d5a0,param_1);
    if (piVar2[0xd] != 0) {
      (**(code **)(*piStack_50 + 0x30))(piStack_50,3,piVar2[0xd],piVar2[0x11]);
    }
    if (piVar2[0xe] != 0) {
      (**(code **)(*piStack_50 + 0x30))(piStack_50,4,piVar2[0xe],piVar2[0x12]);
    }
    (**(code **)(*piStack_50 + 0x14))();
    fn_82647538(piVar2[0xc]);
LAB_82c0fbdc:
    if ((piVar2[0xf] != 0) && ((uint)piVar2[0x3e] < (uint)piVar2[0x3f])) {
      do {
        (*(code *)piVar2[0xf])(piVar2[0x13]);
        do {
          puVar9 = (uint *)(param_1 + 0xfc);
          if (in_RESERVE != '\0') {
            uVar6 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,param_1 + 0xfc);
            *puVar9 = uVar6;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      } while ((uint)piVar2[0x3e] < *puVar9);
    }
    uVar6 = (**(code **)(*piVar2 + 0x104))(param_1);
    if (uVar6 != 0) {
      if ((uVar6 & 6) != 0) goto LAB_82c0ff08;
      if ((uVar6 & 1) != 0) {
        (**(code **)(*piVar2 + 0x10c))(param_1,5);
      }
    }
    if ((uVar6 & 1) == 0) {
      (**(code **)(*piVar2 + 0x10c))(param_1,3);
    }
    (**(code **)(*piStack_50 + 0xc))();
    iVar3 = fn_823AAD88(apiStack_4c[0]);
    if (iVar3 == 0) {
      (**(code **)(*piStack_50 + 0x14))();
      (**(code **)(*piVar2 + 0xb0))(param_1);
    }
    else {
      piVar4 = (int *)fn_82C0BD58(apiStack_4c[0]);
      uVar1 = (**(code **)(*piVar4 + 0x58))();
      if ((uVar1 & 0xffffffff) == 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        if (piVar2[0x3c] != 0) {
          fn_82A1E2C0(piVar2[0x44]);
          piVar2[0x3c] = 0;
        }
        (**(code **)(*piStack_50 + 0x14))();
        goto LAB_82c0ffbc;
      }
      lVar8 = uVar1 - 8;
      (**(code **)(*piVar4 + 0x38))(piVar4,1);
      puVar5 = (undefined8 *)(**(code **)(*piVar4 + 0x50))(piVar4);
      lVar7 = param_1 + 0xf8;
      *(undefined8 *)(piVar2 + 0x48) = *puVar5;
      do {
        puVar9 = (uint *)lVar7;
        if (in_RESERVE != '\0') {
          uVar6 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar7);
          *puVar9 = uVar6;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      (**(code **)(*piStack_50 + 0x38))(piStack_50,piVar4,in_MSR);
      (**(code **)(*piVar4 + 0x48))(piVar4,8);
      fn_8263DE70(dVar11,piVar2[0xc],0,0,0xf,0);
      iVar3 = (**(code **)(*piStack_50 + 0x50))(piStack_50,lVar8);
      if (iVar3 < 0) {
        if (iVar3 != -0x7ffffff6) goto LAB_82c0fe4c;
        (**(code **)(*piVar4 + 0x48))(piVar4,lVar8);
        do {
          if (in_RESERVE != '\0') {
            uVar6 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,lVar7);
            *puVar9 = uVar6;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        (**(code **)(*piStack_50 + 0x14))();
        pcVar10 = *(code **)(*piVar2 + 0xb0);
        uVar1 = param_1;
      }
      else {
        do {
          puVar9 = (uint *)(param_1 + 0xfc);
          if (in_RESERVE != '\0') {
            uVar6 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,param_1 + 0xfc);
            *puVar9 = uVar6;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        iVar3 = (**(code **)(*piVar2 + 0xf8))(param_1);
        if (iVar3 == 5) {
          (**(code **)(*piVar4 + 0x48))(piVar4,lVar8);
          fn_82A1E108(0x21);
        }
        else {
          fn_82C0BE40(apiStack_4c[0]);
          (**(code **)(*piVar2 + 0x80))(param_1,*(undefined8 *)(piVar2 + 0x48));
        }
        fn_82648988(piVar2[0xc]);
LAB_82c0fe4c:
        pcVar10 = *(code **)(*piStack_50 + 0x14);
        uVar1 = ZEXT48(piStack_50);
      }
      (*pcVar10)(uVar1);
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    goto LAB_82c0fbdc;
  }
  fn_82A1E2C0(piVar2[0x44]);
  piVar2[0x3c] = 0;
  goto LAB_82c10108;
LAB_82c0ff08:
  (**(code **)(*piVar2 + 0x10c))(param_1,6);
  (**(code **)(*piStack_50 + 0xc))();
  (**(code **)(*piStack_50 + 0x54))(piStack_50,4);
  (**(code **)(*piStack_50 + 0x14))();
  if (piVar2[0x3c] != 0) {
    fn_82A1E2C0(piVar2[0x44]);
    piVar2[0x3c] = 0;
  }
LAB_82c0ffbc:
  iVar3 = (**(code **)(*piVar2 + 0xf8))(param_1);
  if (iVar3 != 6) {
    (**(code **)(*piVar2 + 0x10c))(param_1,6);
    (**(code **)(*piStack_50 + 0xc))();
    (**(code **)(*piStack_50 + 0x54))(piStack_50,2);
    (**(code **)(*piStack_50 + 0x14))();
  }
  if (piVar2[0xf] != 0) {
    uVar6 = piVar2[0x3f];
    while (uVar6 != 0) {
      (*(code *)piVar2[0xf])(piVar2[0x13]);
      do {
        puVar9 = (uint *)(param_1 + 0xfc);
        if (in_RESERVE != '\0') {
          uVar6 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,param_1 + 0xfc);
          *puVar9 = uVar6;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      uVar6 = *puVar9;
    }
  }
  fn_82647578(piVar2[0xc]);
  (**(code **)(*piStack_50 + 0xc))();
  (**(code **)(*piStack_50 + 0x3c))();
  (**(code **)(*piStack_50 + 0x14))();
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (apiStack_4c[0] != (int *)0x0) {
    (**(code **)(*apiStack_4c[0] + 8))();
    apiStack_4c[0] = (int *)0x0;
  }
LAB_82c10108:
  (**(code **)(*piVar2 + 0xb8))(param_1);
  uVar6 = (**(code **)(*piVar2 + 0x104))(param_1);
  if ((uVar6 & 4) != 0) goto LAB_82c10190;
  (**(code **)(*piVar2 + 0x10c))(param_1,7);
  (**(code **)(*piVar2 + 0xe0))(param_1);
  fn_82A1E438(piVar2[0x45]);
  uVar1 = (**(code **)(*piVar2 + 0x104))(param_1);
  if ((uVar1 & 4) != 0) goto LAB_82c10190;
  goto LAB_82c0fadc;
}


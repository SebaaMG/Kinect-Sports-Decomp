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
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82697610();
extern int fn_826ABE30();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_826B02D0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar7;
  int iVar6;
  char *pcVar8;
  ulonglong uVar9;
  int *piVar10;
  int iStack_70;
  int iStack_6c;
  byte bStack_68;
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [16];
  char acStack_40 [64];
  
  fn_82695DA0(acStack_40,*(undefined4 *)(*param_1 + 8));
  uVar1 = *param_1;
  uVar4 = (ulonglong)*(uint *)(uVar1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(uVar1 + 8) <= (ulonglong)*(uint *)(uVar1 + 0xc)) {
    uVar4 = (ulonglong)*(uint *)(uVar1 + 0x14);
  }
  uVar5 = fn_82697610(uVar4);
  uVar1 = *param_1;
  piVar10 = (int *)(uVar1 + 8);
  if (*(int *)(uVar1 + 8) - 0x20U < *(uint *)(uVar1 + 0xc)) {
    fn_82683270(piVar10,2);
  }
  else {
    fn_82696330();
    *piVar10 = *piVar10 + -0x10;
    fn_82696330();
    *piVar10 = *piVar10 + -0x10;
  }
  if ((acStack_40[0] == '\b') || (bVar3 = false, acStack_40[0] == '\v')) {
    bVar3 = true;
  }
  if (bVar3) {
    fn_82696B20(&iStack_60,acStack_40,*param_1);
    iVar6 = 0;
    if (iStack_60 != 0) {
      auStack_50[0] = 0;
      cVar7 = (**(code **)(*(int *)(iStack_60 + 0x10) + 0x2c))
                        (iStack_60 + 0x10,*param_1 + 0x78,
                         (ulonglong)*(uint *)(*param_1 + 0x78) + 0x130,auStack_50);
      if (cVar7 == '\0') {
        if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
          fn_826ABE30(param_1 + 9,0xffffffff820078a0);
        }
      }
      else {
        iVar6 = fn_82696958(auStack_50,*param_1);
        if (iVar6 != 0) {
          piVar10 = (int *)(iVar6 + 0x10);
          (**(code **)(*(int *)(iVar6 + 0x10) + 0x44))(piVar10,(ulonglong)*param_1 + 0x78,uVar5,0);
          uVar4 = 0;
          if (0 < (int)uVar5) {
            do {
              uVar1 = *param_1;
              pcVar8 = (char *)0x0;
              uVar9 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
                      ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
              if ((uVar4 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
                uVar2 = (int)uVar9 - (int)uVar4;
                pcVar8 = (char *)(*(int *)((uVar2 >> 3 & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
                                 (uVar2 & 0x1f) * 0x10);
              }
              if ((*pcVar8 == '\b') || (bVar3 = false, *pcVar8 == '\v')) {
                bVar3 = true;
              }
              if (bVar3) {
                fn_82696B20(&iStack_70);
                iVar6 = 0;
                if (iStack_70 != 0) {
                  (**(code **)(*piVar10 + 0x44))(piVar10,(ulonglong)*param_1 + 0x78,uVar4);
                  iVar6 = iStack_70;
                }
                if (((bStack_68 & 2) == 0) && (iVar6 != 0)) {
                  fn_826824B0(iVar6);
                }
                iStack_70 = 0;
                if (((bStack_68 & 1) == 0) && (iStack_6c != 0)) {
                  fn_826824B0();
                }
                iStack_6c = 0;
              }
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < (int)uVar5);
          }
        }
      }
      fn_82696330(auStack_50);
      iVar6 = iStack_60;
    }
    if (((bStack_58 & 2) == 0) && (iVar6 != 0)) {
      fn_826824B0(iVar6);
    }
    iStack_60 = 0;
    if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
      fn_826824B0();
    }
    iStack_5c = 0;
  }
  else if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
    fn_826ABE30(param_1 + 9,0xffffffff82007864);
  }
  fn_82683270((ulonglong)*param_1 + 8,uVar5);
  fn_82696330(acStack_40);
  return;
}


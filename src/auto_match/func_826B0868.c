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
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826ABE30();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_826B0868(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  int *piVar6;
  char cVar7;
  undefined8 uVar5;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  undefined1 auStack_40 [64];
  
  iVar1 = *param_1;
  pcVar2 = *(char **)(iVar1 + 8);
  pcVar10 = pcVar2 + -0x10;
  if (pcVar2 <= *(char **)(iVar1 + 0xc)) {
    pcVar10 = *(char **)(iVar1 + 0x14);
  }
  uVar8 = 0;
  if ((*pcVar2 == '\b') || (bVar4 = false, *pcVar2 == '\v')) {
    bVar4 = true;
  }
  if (bVar4) {
    fn_82696B20(&iStack_50);
    uVar8 = 0;
    if (iStack_50 != 0) {
      piVar6 = (int *)fn_82696AD0(pcVar10,*param_1);
      if (piVar6 != (int *)0x0) {
        auStack_40[0] = 0;
        cVar7 = (**(code **)(*(int *)(iStack_50 + 0x10) + 0x2c))
                          (iStack_50 + 0x10,*param_1 + 0x78,
                           (ulonglong)*(uint *)(*param_1 + 0x78) + 0x130,auStack_40);
        if (cVar7 == '\0') {
          uVar8 = 0;
          if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
            fn_826ABE30(param_1 + 9,0xffffffff820079b8);
          }
        }
        else {
          uVar5 = fn_82696958(auStack_40,*param_1);
          uVar8 = (**(code **)(*piVar6 + 0x48))(piVar6,*param_1,uVar5,1);
        }
        fn_82696330(auStack_40);
      }
    }
    if (((bStack_48 & 2) == 0) && (iStack_50 != 0)) {
      fn_826824B0();
    }
    iStack_50 = 0;
    if (((bStack_48 & 1) == 0) && (iStack_4c != 0)) {
      fn_826824B0();
    }
    iStack_4c = 0;
  }
  else if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
    fn_826ABE30(param_1 + 9,0xffffffff82007978);
  }
  iVar1 = *param_1;
  piVar6 = (int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) - 0x20U < *(uint *)(iVar1 + 0xc)) {
    fn_82683270(piVar6,2);
  }
  else {
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
  }
  iVar1 = *param_1;
  puVar11 = (uint *)(iVar1 + 8);
  uVar9 = *(int *)(iVar1 + 8) + 0x10;
  *puVar11 = uVar9;
  if (*(uint *)(iVar1 + 0x10) <= uVar9) {
    fn_826826A8(puVar11);
  }
  puVar3 = (undefined1 *)*puVar11;
  if (puVar3 != (undefined1 *)0x0) {
    puVar3[4] = uVar8;
    *puVar3 = 2;
  }
  return;
}


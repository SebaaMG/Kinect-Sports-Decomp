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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_82696CB8();
extern int fn_826ABE30();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_826B00B0(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar4;
  char cVar5;
  undefined8 uVar3;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  iVar1 = *param_1;
  uVar7 = *(uint *)(iVar1 + 8);
  pcVar6 = (char *)(uVar7 - 0x10);
  if (uVar7 <= *(uint *)(iVar1 + 0xc)) {
    pcVar6 = *(char **)(iVar1 + 0x14);
  }
  auStack_30[0] = 1;
  if ((*pcVar6 == '\b') || (bVar2 = false, *pcVar6 == '\v')) {
    bVar2 = true;
  }
  if (bVar2) {
    fn_82696B20(&iStack_50);
    if (iStack_50 != 0) {
      piVar4 = (int *)fn_82696AD0(uVar7,*param_1);
      if (piVar4 != (int *)0x0) {
        auStack_40[0] = 0;
        cVar5 = (**(code **)(*(int *)(iStack_50 + 0x10) + 0x2c))
                          (iStack_50 + 0x10,*param_1 + 0x78,
                           (ulonglong)*(uint *)(*param_1 + 0x78) + 0x130,auStack_40);
        if (cVar5 == '\0') {
          if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
            fn_826ABE30(param_1 + 9,0xffffffff82007820);
          }
        }
        else {
          uVar3 = fn_82696958(auStack_40,*param_1);
          cVar5 = (**(code **)(*piVar4 + 0x48))(piVar4,*param_1,uVar3,1);
          if (cVar5 != '\0') {
            fn_82696CB8(auStack_30,piVar4);
          }
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
    fn_826ABE30(param_1 + 9,0xffffffff820077e4);
  }
  iVar1 = *param_1;
  piVar4 = (int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) - 0x20U < *(uint *)(iVar1 + 0xc)) {
    fn_82683270(piVar4,2);
  }
  else {
    fn_82696330();
    *piVar4 = *piVar4 + -0x10;
    fn_82696330();
    *piVar4 = *piVar4 + -0x10;
  }
  iVar1 = *param_1;
  puVar8 = (uint *)(iVar1 + 8);
  uVar7 = *(int *)(iVar1 + 8) + 0x10;
  *puVar8 = uVar7;
  if (*(uint *)(iVar1 + 0x10) <= uVar7) {
    fn_826826A8(puVar8);
  }
  if (*puVar8 != 0) {
    fn_82695DA0(*puVar8,auStack_30);
  }
  fn_82696330(auStack_30);
  return;
}


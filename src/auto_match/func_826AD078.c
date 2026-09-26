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
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826C0A68();
extern int fn_82F66570();
extern int fn_82F68CC0();


int fn_826AD078(uint *param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar4;
  char cVar5;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 auStack_1a0 [4];
  int aiStack_19c [3];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [15];
  char acStack_171 [369];
  
  pcVar7 = param_4;
  do {
    cVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 != '\0');
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  while (param_4 != (char *)0x0) {
    iVar4 = fn_82F66570(param_4,0x2e);
    if (iVar4 == 0) {
      uVar8 = (int)pcVar7 - (int)param_4;
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)(iVar4 + 1);
      uVar8 = (iVar4 - (int)param_4) + 1;
    }
    if (0x100 < uVar8) {
      uVar8 = 0x100;
    }
    fn_82F68CC0(acStack_171 + 1,param_4,uVar8 - 1);
    acStack_171[uVar8] = '\0';
    auStack_190[0] = 0;
    aiStack_19c[0] = fn_82694700((ulonglong)*param_1 + 0x254,acStack_171 + 1);
    *(int *)(aiStack_19c[0] + 8) = *(int *)(aiStack_19c[0] + 8) + 1;
    piVar10 = (int *)(param_2 + 0x10);
    cVar5 = (**(code **)(*(int *)(param_2 + 0x10) + 0x2c))(piVar10,param_1,aiStack_19c,auStack_190);
    if (cVar5 == '\0') {
      uVar2 = fn_8267B890(*(undefined4 *)(*param_1 + 0x288),0x30,0);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_826C0A68(uVar2,param_1,param_3);
      }
      auStack_1a0[0] = 0;
      iVar1 = *piVar10;
      uVar3 = fn_826961B0(auStack_180);
      (**(code **)(iVar1 + 0x28))(piVar10,param_1,aiStack_19c,uVar3,auStack_1a0);
      fn_82696330(auStack_180);
    }
    else {
      iVar4 = fn_82696958(auStack_190,0);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      }
    }
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
    }
    fn_826824B0(param_2);
    lVar6 = (ulonglong)*(uint *)(aiStack_19c[0] + 8) - 1;
    *(int *)(aiStack_19c[0] + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(aiStack_19c[0]);
    }
    if (iVar4 != 0) {
      fn_826824B0(iVar4);
    }
    fn_82696330(auStack_190);
    param_4 = pcVar9;
    param_2 = iVar4;
  }
  if (param_2 != 0) {
    fn_826824B0(param_2);
  }
  return param_2;
}


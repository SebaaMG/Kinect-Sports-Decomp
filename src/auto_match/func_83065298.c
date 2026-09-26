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
extern int fn_8265C9E0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_83065138();
extern int fn_83065E50();
extern int fn_83069238();
extern int fn_8306AAF0();


void fn_83065298(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar1;
  
  if (param_5 == '\0') {
    iVar2 = *(int *)(param_2 + 0x40);
    iVar3 = *(int *)(param_3 + 0x40);
    if (iVar2 == 0) {
      iVar2 = fn_8265C9E0(0x2c);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_83069238();
      }
      *(int *)(param_2 + 0x40) = iVar2;
      *(int *)(iVar2 + 0x28) = param_2;
    }
    if (iVar3 != 0) goto LAB_8306538c;
    iVar3 = fn_8265C9E0(0x2c);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_83069238();
    }
    *(int *)(param_3 + 0x40) = iVar3;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x3c);
    iVar3 = *(int *)(param_3 + 0x3c);
    if (iVar2 == 0) {
      iVar2 = fn_8265C9E0(0x2c);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_83069238();
      }
      *(int *)(param_2 + 0x3c) = iVar2;
      *(int *)(iVar2 + 0x28) = param_2;
    }
    if (iVar3 != 0) goto LAB_8306538c;
    iVar3 = fn_8265C9E0(0x2c);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_83069238();
    }
    *(int *)(param_3 + 0x3c) = iVar3;
  }
  *(int *)(iVar3 + 0x28) = param_3;
LAB_8306538c:
  for (iVar4 = *(int *)(iVar2 + 0x10); (iVar4 != 0 && (*(int *)(iVar4 + 0x10) != iVar3));
      iVar4 = *(int *)(iVar4 + 4)) {
  }
  iVar4 = fn_83065138(param_1);
  iVar5 = fn_83065138(param_1);
  *(int *)(iVar4 + 0x10) = iVar3;
  *(int *)(iVar5 + 0x10) = iVar2;
  uVar1 = fn_83065E50();
  fn_8305E0F8(uVar1,param_1 + 0x94);
  fn_8305EC98(uVar1,param_4);
  *(int *)(iVar4 + 0x18) = (int)uVar1;
  *(int *)(iVar5 + 0x18) = (int)uVar1;
  fn_8306AAF0(iVar2 + 0x10,iVar4);
  fn_8306AAF0(iVar3 + 0x10,iVar5);
  return;
}


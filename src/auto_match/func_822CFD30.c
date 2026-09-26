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
extern unsigned int *auStack_60;
extern int fn_822B7290();
extern int fn_822CBBB0();
extern int fn_82358FD8();
extern int fn_824CCD80();
extern int fn_8265C9E0();
extern int fn_8288B760();


void fn_822CFD30(int param_1)

{
  uint uVar2;
  int iVar3;
  ulonglong uVar1;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [96];
  
  if (*(int *)(*(int *)(param_1 + 0x1c0) + 0x204) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x78) != 0) goto LAB_822cfe10;
  fn_82358FD8(*(int *)(param_1 + 0x1c0),auStack_60,0x20,0xffffffff821ad4c0);
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
LAB_822cfdb8:
    iVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar2 = *(uint *)(param_1 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) goto LAB_822cfdb8;
    iVar3 = fn_824CCD80(iVar3);
  }
  if (iVar3 == 1) {
    iVar5 = param_1 + 0x2f0;
LAB_822cfddc:
    iVar6 = param_1 + 0x2f4;
  }
  else {
    iVar5 = param_1 + 0x2f4;
    iVar6 = param_1 + 0x2f0;
    if (iVar3 != 0) goto LAB_822cfddc;
  }
  uVar1 = fn_8265C9E0(0x70);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822CBBB0(uVar1,iVar6,iVar5,0,auStack_60);
  }
  *(undefined4 *)(param_1 + 0x78) = uVar4;
LAB_822cfe10:
  fn_822B7290(param_1);
  return;
}


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
extern int fn_825FBDB8();
extern int fn_8284C860();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821CA460;


void fn_825FBEA8(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,int param_7,undefined4 param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11,int param_12,int param_13)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  undefined1 uVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  undefined4 in_stack_00000074;
  int in_stack_00000084;
  int in_stack_0000009c;
  
  iVar1 = fn_82F6A544();
  dVar6 = extraout_f1;
  fn_825FBDB8();
  *(int *)(iVar1 + 0x25c) = param_7;
  *(undefined4 *)(iVar1 + 0x260) = param_8;
  cVar3 = fn_8284C860(*(undefined4 *)(param_7 + 0x14));
  if (cVar3 == '\0') {
    *(undefined4 *)(iVar1 + 0x264) = 0;
  }
  else {
    uVar2 = fn_8284C860(*(undefined4 *)(*(int *)(iVar1 + 0x25c) + 0x14));
    *(uint *)(iVar1 + 0x264) = (uVar2 & 0xff) - 1;
  }
  *(float *)(iVar1 + 0x178) = (float)param_3;
  *(float *)(iVar1 + 0x17c) = (float)param_4;
  *(undefined4 *)(iVar1 + 600) = param_11;
  *(float *)(iVar1 + 0x180) = (float)param_5;
  *(undefined4 *)(iVar1 + 0x174) = in_stack_00000074;
  *(undefined1 *)(iVar1 + 0x270) = 0;
  dVar5 = (double)lbl_821CA460;
  *(float *)(iVar1 + 0x268) = (float)((double)(float)(dVar5 - param_2) * dVar6);
  *(float *)(iVar1 + 0x26c) = (float)((double)(float)(param_2 + dVar5) * dVar6);
  if ((*(int *)(iVar1 + 0x260) == 0) || (in_stack_00000084 != 0)) {
    uVar2 = -(uint)(in_stack_00000054 == 0) & 2;
  }
  else {
    uVar2 = (-(uint)(in_stack_00000054 != 0) & 0xfffffffe) + 3;
  }
  *(uint *)(iVar1 + 0x254) = uVar2;
  if (param_12 == 1) {
    uVar4 = 4;
  }
  else if (param_12 == 2) {
    uVar4 = 8;
  }
  else {
    if (param_12 != 3) goto LAB_825fbfe0;
    uVar4 = 0x10;
  }
  *(undefined1 *)(iVar1 + 0x270) = uVar4;
LAB_825fbfe0:
  if (param_13 != 0) {
    *(byte *)(iVar1 + 0x270) = *(byte *)(iVar1 + 0x270) | 1;
  }
  if (in_stack_0000005c == 0) {
    uVar2 = *(uint *)(iVar1 + 0x20) & 0xfffffeff;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x20) | 0x100;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  if (in_stack_00000064 == 0) {
    uVar2 = *(uint *)(iVar1 + 0x20) & 0xfffffdff;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x20) | 0x200;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  if (in_stack_0000009c == 0) {
    uVar2 = *(uint *)(iVar1 + 0x20) & 0xfffdffff;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x20) | 0x20000;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  if (in_stack_0000006c == 0) {
    uVar2 = *(uint *)(iVar1 + 0x20) & 0xfffffbff;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x20) | 0x400;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  if ((in_stack_00000084 == 0) || (*(int *)(iVar1 + 0x260) == 0)) {
    uVar2 = *(uint *)(iVar1 + 0x20) & 0xfffff7ff;
  }
  else {
    uVar2 = uVar2 | 0x800;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  fn_82F6A590(*(undefined4 *)(iVar1 + 0x264));
  return;
}


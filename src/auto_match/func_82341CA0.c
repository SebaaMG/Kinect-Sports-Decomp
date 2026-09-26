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
extern int fn_8242E560();
extern int fn_824CD030();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821CC160;


void fn_82341CA0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  
  iVar1 = fn_82F6A548();
  dVar5 = (double)lbl_821CC160;
  dVar4 = extraout_f1;
  if ((param_3 < dVar5) && (iVar2 = fn_824CD030(param_5), param_3 = dVar5, iVar2 != 0)) {
    param_3 = (double)*(float *)(*(int *)(*(int *)((int)param_5 + 0xfc) + 0x2c) + 0x74);
  }
  if ((*(char *)(*(int *)(*(int *)(*(int *)(**(int **)(iVar1 + 0xc) + 0x1a0) + 0xc) + 0x174) + 0xca)
       == '\0') && (dVar5 < dVar4)) {
    param_3 = dVar5;
  }
  iVar2 = fn_8242E560();
  if (iVar2 != 0) {
    param_3 = dVar5;
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  if (((param_3 < (double)*(float *)(iVar2 + 100)) && (dVar5 < dVar4)) || (param_7 != 0)) {
    *(float *)(iVar2 + 0x5c) = (float)((double)*(float *)(iVar2 + 0x5c) + param_2);
  }
  else {
    *(float *)(iVar2 + 0x5c) = (float)dVar5;
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  if ((*(int *)(iVar2 + 0x54) == 0) && (param_7 == 0)) {
    if ((param_3 <= (double)*(float *)(iVar2 + 100)) && (dVar4 != dVar5)) goto LAB_82341dc4;
    uVar3 = 1;
  }
  else {
    if (*(float *)(*(int *)(iVar1 + 0xc) + 0x5c) <= *(float *)(*(int *)(iVar1 + 0xc) + 0x60))
    goto LAB_82341dc4;
    uVar3 = 0;
  }
  *(undefined4 *)(iVar2 + 0x54) = uVar3;
LAB_82341dc4:
  iVar1 = *(int *)(iVar1 + 0xc);
  *(float *)(param_6 + 0x44) =
       (*(float *)(param_6 + 0x40) - *(float *)(param_6 + 0x3c)) *
       (float)(longlong)*(int *)(iVar1 + 0x54) + *(float *)(param_6 + 0x3c);
  *(float *)(param_6 + 0x50) =
       (*(float *)(param_6 + 0x4c) - *(float *)(param_6 + 0x48)) *
       (float)(longlong)*(int *)(iVar1 + 0x54) + *(float *)(param_6 + 0x48);
  fn_82F6A594();
  return;
}


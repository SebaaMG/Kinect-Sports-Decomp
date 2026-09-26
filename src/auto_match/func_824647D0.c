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
extern int fn_8257E190();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824647D0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  
  if (param_2 == 8) {
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 100) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_8265C9E0(0x80);
    dVar4 = (double)lbl_821CA460;
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),uVar2,
                                *(undefined4 *)(param_1 + 8),param_3,param_4,1);
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined1 *)(iVar3 + 0x67) = 1;
    uVar1 = lbl_821CC160;
    iVar3 = *(int *)(param_1 + 0x10);
    *(float *)(iVar3 + 0x5c) = (float)dVar4;
    *(undefined4 *)(iVar3 + 0x50) = uVar1;
    *(undefined1 *)(iVar3 + 0x66) = 1;
    *(undefined4 *)(iVar3 + 0x60) = uVar1;
    goto LAB_82464940;
  }
  if (param_2 != 10) {
    if (param_2 == 0xb) {
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 100) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_8265C9E0(0x80);
      dVar4 = (double)lbl_821CA460;
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),uVar2,
                                  *(undefined4 *)(param_1 + 8),param_3,param_4,1);
      }
      *(int *)(param_1 + 0x10) = iVar3;
      *(undefined1 *)(iVar3 + 0x67) = 1;
      iVar3 = *(int *)(param_1 + 0x10);
      *(float *)(iVar3 + 0x5c) = (float)dVar4;
      uVar1 = lbl_821CC160;
      *(undefined1 *)(iVar3 + 0x66) = 1;
      *(undefined4 *)(iVar3 + 0x50) = uVar1;
      *(undefined4 *)(iVar3 + 0x60) = uVar1;
      goto LAB_82464940;
    }
    if (param_2 != 0xc) goto LAB_82464940;
  }
  uVar2 = fn_8265C9E0(0x80);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_8257E190((double)*(float *)(param_1 + 0x18),(double)lbl_821CA460,uVar2,
                              *(undefined4 *)(param_1 + 8),param_3,param_4,0);
  }
  *(undefined1 *)(iVar3 + 0x67) = 1;
LAB_82464940:
  *(int *)(param_1 + 4) = param_2;
  return;
}


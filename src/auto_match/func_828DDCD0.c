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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA180();
extern unsigned int lbl_8202706C;


void fn_828DDCD0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_828E9FF8(param_2,1);
  }
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828E9FF8(param_2,0x20);
    }
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (0x11f < iVar1 - iVar2) {
      fn_828EA180(param_2,param_1 + 0x8c,0x24);
    }
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (0x3f < iVar1 - iVar2) {
      fn_828EA180(param_2,param_1 + 0xb0,8);
    }
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (0x7f < iVar1 - iVar2) {
      fn_828EA180(param_2,param_1 + 0xb8,0x10);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828E9FF8(param_2,0x20);
    }
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,4);
    }
    *(float *)(param_1 + 0x88) = (float)uVar4 * lbl_8202706C;
  }
  return;
}


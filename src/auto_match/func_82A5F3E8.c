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
extern int fn_82A5DAC0();
extern int fn_82A5F060();
extern int fn_82F68CC0();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82A5F3E8(undefined8 param_1,short *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = fn_82A5F060(param_2);
  if (iVar1 == 0) {
    return 0xffffffff80070057;
  }
  sVar2 = fn_82A5DAC0(param_2);
  uVar3 = 0xffffffff88970001;
  uVar4 = 0;
  if ((sVar2 != 3) && (uVar4 = uVar3, param_3 != 0)) {
    uVar4 = 0xffffffff88970001;
    if (*param_2 == -2) {
      uStack_3c = lbl_8208E054;
      uStack_38 = lbl_8208E058;
      uStack_34 = lbl_8208E05C;
      uStack_40 = 3;
      fn_82F68CC0(param_2 + 0xc,&uStack_40,0x10);
    }
    else {
      *param_2 = 3;
    }
  }
  if (param_2[1] == 0) {
    uVar4 = uVar3;
    if (param_3 == 0) goto LAB_82a5f4dc;
    sVar2 = 1;
  }
  else {
    if (((ushort)param_2[1] < 0x41) || (uVar4 = 0xffffffff88970001, param_3 == 0))
    goto LAB_82a5f4dc;
    sVar2 = 0x40;
  }
  uVar4 = 0xffffffff88970001;
  param_2[1] = sVar2;
LAB_82a5f4dc:
  if (*(uint *)(param_2 + 2) < 1000) {
    uVar4 = uVar3;
    if (param_3 != 0) {
      param_2[2] = 0;
      param_2[3] = 1000;
      uVar4 = 0xffffffff88970001;
    }
  }
  else if ((200000 < *(uint *)(param_2 + 2)) && (uVar4 = 0xffffffff88970001, param_3 != 0)) {
    param_2[2] = 3;
    param_2[3] = 0xd40;
  }
  if ((param_2[7] != 0x20) && (uVar4 = uVar3, param_3 != 0)) {
    param_2[7] = 0x20;
    uVar4 = 0xffffffff88970001;
  }
  if (((*param_2 == -2) && (param_2[9] != 0x20)) && (uVar4 = uVar3, param_3 != 0)) {
    param_2[9] = 0x20;
    uVar4 = 0xffffffff88970001;
  }
  return uVar4;
}


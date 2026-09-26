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
extern int fn_828AFF88();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA0D0();


void fn_828DA728(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar4;
  int iVar5;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = fn_828AFF88((ulonglong)*(uint *)(param_1 + 0x6c) + 0x278);
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = fn_828E9FF8(param_2,1);
  }
  *(bool *)(param_1 + 0x80) = lVar2 != 0;
  if (lVar2 != 0) {
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 0x1e) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828EA0D0(param_2,0x1e);
    }
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  }
  else {
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 0x1e) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_828EA0D0(param_2,0x1e);
    }
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    *(longlong *)(param_1 + 0x88) = lVar2 + -100000;
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 0x1e) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar1 = fn_828EA0D0(param_2,0x1e);
      *(undefined8 *)(param_1 + 0xa8) = uVar1;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    }
  }
  return;
}


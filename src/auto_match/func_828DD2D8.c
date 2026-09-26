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
extern int fn_823AA970();
extern int fn_8288A398();
extern int fn_828E9D50();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA0D0();


void fn_828DD2D8(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  
  iVar3 = fn_828E9DA8(param_2);
  iVar4 = fn_828E9D90(param_2);
  if (iVar3 - iVar4 < 0x20) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_828E9FF8(param_2,0x20);
  }
  iVar4 = fn_8288A398();
  bVar1 = *(int *)(iVar4 + 0x38) == iVar3;
  *(bool *)(param_1 + 0x90) = bVar1;
  if (bVar1) {
    iVar3 = fn_828E9DA8();
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 0x40) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828EA0D0(param_2,0x40);
    }
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_828E9FF8(param_2,8);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar5;
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < 8) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      uVar5 = fn_828E9FF8(param_2,8);
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
    }
  }
  else {
    uVar2 = fn_823AA970(param_2);
    fn_828E9D50(param_2,uVar2);
  }
  return;
}


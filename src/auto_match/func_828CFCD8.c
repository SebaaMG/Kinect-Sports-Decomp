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
extern int fn_8288A398();
extern int fn_828AC498();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828CFCD8(undefined1 *param_1,undefined8 param_2)

{
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar5 = fn_828E9DA8(param_2);
  iVar6 = fn_828E9D90(param_2);
  if (iVar5 - iVar6 < 0x10) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_828E9FF8(param_2,0x10);
  }
  *(undefined2 *)(param_1 + 4) = uVar7;
  iVar5 = fn_8288A398();
  if ((uint)*(ushort *)(param_1 + 4) == *(uint *)(iVar5 + 0x38)) {
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = fn_828E9FF8(param_2,8);
    }
    param_1[0x20] = uVar8;
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if ((iVar5 - iVar6 < 1) || (iVar5 = fn_828E9FF8(param_2,1), iVar5 == 0)) {
      param_1[1] = 0;
    }
    else {
      iVar5 = fn_828E9DA8(param_2);
      iVar6 = fn_828E9D90(param_2);
      if (iVar5 - iVar6 < 8) {
        param_1[1] = 0;
      }
      else {
        uVar8 = fn_828E9FF8(param_2,8);
        param_1[1] = uVar8;
      }
    }
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if ((iVar5 - iVar6 < 1) || (iVar5 = fn_828E9FF8(param_2,1), iVar5 == 0)) {
      param_1[2] = 0;
    }
    else {
      iVar5 = fn_828E9DA8(param_2);
      iVar6 = fn_828E9D90(param_2);
      if (iVar5 - iVar6 < 8) {
        param_1[2] = 0;
      }
      else {
        uVar8 = fn_828E9FF8(param_2,8);
        param_1[2] = uVar8;
      }
    }
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 6) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_828E9FF8(param_2,6);
    }
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 6) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828E9FF8(param_2,6);
    }
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 6) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828E9FF8(param_2,6);
    }
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 6) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9FF8(param_2,6);
    }
    fn_828AC498(param_1 + 8,uVar3,uVar4,uVar1,uVar2);
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


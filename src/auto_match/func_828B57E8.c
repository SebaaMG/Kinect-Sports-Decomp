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
extern int fn_8288B4C0();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828B57E8(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  short sVar6;
  int iVar4;
  int iVar5;
  undefined2 uVar7;
  
  uVar3 = fn_828A12E8(param_2);
  sVar6 = fn_8288B4C0(uVar3,param_3);
  param_1[1] = sVar6;
  if (sVar6 == -0x8000) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *param_1 = 0x8000;
    param_1[2] = 0x8000;
    param_1[1] = 0x8000;
  }
  else {
    *(undefined1 *)((int)param_1 + 7) = 1;
    iVar4 = fn_828E9DA8(param_3);
    iVar5 = fn_828E9D90(param_3);
    if (iVar4 - iVar5 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_3,2);
    }
    uVar1 = param_1[1];
    *param_1 = uVar7;
    uVar3 = fn_828A12E8(param_2);
    iVar4 = fn_8288DD10(uVar3,uVar1);
    uVar2 = *(ushort *)(iVar4 + 0x20);
    iVar4 = fn_828E9DA8(param_3);
    iVar5 = fn_828E9D90(param_3);
    if (iVar4 - iVar5 < (int)(uint)uVar2) {
      param_1[2] = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_3,uVar2);
      param_1[2] = uVar7;
    }
  }
  return;
}


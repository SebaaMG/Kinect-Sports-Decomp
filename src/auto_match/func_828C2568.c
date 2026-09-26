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
extern unsigned int *auStack_40;
extern int fn_825174B8();
extern int fn_828BAB98();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA268();


undefined8 fn_828C2568(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint auStack_40 [16];
  
  uVar1 = fn_828EA268((ulonglong)*(uint *)(param_2 + 0xe0) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (iVar2 - iVar3 < (int)uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_828E9FF8(param_3,uVar1);
  }
  auStack_40[0] = **(uint **)(param_2 + 0xdc);
  fn_828BAB98(auStack_40,uVar1);
  piVar4 = (int *)(auStack_40[0] + 0x28);
  uVar1 = fn_828EA268((ulonglong)*(uint *)(*(int *)(*piVar4 + 4) + 8) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (iVar2 - iVar3 < (int)uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_828E9FF8(param_3,uVar1);
  }
  auStack_40[0] = **(uint **)(*(int *)(*piVar4 + 4) + 4);
  fn_828BAB98(auStack_40,uVar1);
  fn_825174B8(param_1,piVar4,(ulonglong)auStack_40[0] + 0x28);
  return param_1;
}


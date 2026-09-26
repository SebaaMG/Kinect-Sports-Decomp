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
extern int fn_827D1D80();
extern int fn_827D4370();
extern int fn_82F68CC0();


undefined8 fn_827D35A0(int param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffffffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_827d3628;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffffffffffe;
  }
  uVar2 = fn_827D4370(0,0,0);
  iVar3 = fn_827D4370(uVar2,param_2,param_3);
  if (iVar3 != piVar1[6]) {
    return 0xfffffffffffffffd;
  }
LAB_827d3628:
  iVar3 = fn_827D1D80(param_1,*(undefined4 *)(param_1 + 0x10));
  if (iVar3 == 0) {
    uVar4 = (ulonglong)(uint)piVar1[10];
    if (uVar4 < (param_3 & 0xffffffff)) {
      fn_82F68CC0(piVar1[0xd],(param_2 - uVar4) + param_3,uVar4);
      piVar1[0xb] = piVar1[10];
    }
    else {
      fn_82F68CC0(((uint)piVar1[0xd] - param_3) + uVar4,param_2,param_3);
      piVar1[0xb] = (int)param_3;
    }
    uVar2 = 0;
    piVar1[3] = 1;
  }
  else {
    uVar2 = 0xfffffffffffffffc;
    *piVar1 = 0x1c;
  }
  return uVar2;
}


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
extern int fn_830B4380();


undefined8 fn_830B4828(int *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int aiStack_30;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) {
    return 0xffffffff80004003;
  }
  *param_2 = 0;
  uVar2 = 0;
  *param_3 = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar2 = fn_830B4380(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    piVar5 = param_1 + 0x26;
    if (0xf < (uint)param_1[0x2b]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 1;
    iVar3 = param_1[0x2a];
  }
  else if (uVar1 == 1) {
    piVar5 = param_1 + 0x2d;
    if (0xf < (uint)param_1[0x32]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 2;
    iVar3 = param_1[0x31];
  }
  else {
    if (uVar1 < 3) {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      aiStack_30 = 0;
      uVar2 = (**(code **)(*param_1 + 0x14))(param_1,&aiStack_30);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (aiStack_30 != 0) {
        return uVar2;
      }
      iVar4 = 3;
      goto LAB_830b4960;
    }
    if (uVar1 != 3) {
      return 0xffffffff80040001;
    }
    piVar5 = param_1 + 0x34;
    if (0xf < (uint)param_1[0x39]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 4;
    iVar3 = param_1[0x38];
  }
  *param_3 = iVar3;
LAB_830b4960:
  param_1[1] = iVar4;
  return uVar2;
}


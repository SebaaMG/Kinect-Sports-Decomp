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
extern int fn_82FAE490();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8
fn_82FA9A38(int *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,ulonglong param_5
             ,undefined8 param_6,ulonglong param_7,char param_8)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uStack00000024;
  int *in_stack_00000054;
  int aiStack_30 [12];
  
  piVar1 = in_stack_00000054;
  iVar2 = param_1[0x10];
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if (iVar2 == 0) {
    uVar3 = -(ulonglong)(uint)param_1[3];
  }
  else {
    uVar3 = (ulonglong)*(uint *)(iVar2 + 0x5c);
  }
  if ((int)uVar3 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)uVar3 < param_1[0x11]) {
    uVar3 = (ulonglong)(uint)param_1[0x11];
  }
  if (((param_7 & 0xff) == 0) || (0 < (int)uVar3)) {
    param_4 = uVar3 + param_4;
  }
  uVar4 = 2;
  uStack00000024 = param_3;
  if (iVar2 == 0) {
    if ((param_8 != '\0') || ((int)param_6 == 0)) {
      *in_stack_00000054 = (int)param_4;
      uVar4 = 1;
    }
  }
  else {
    uVar4 = fn_82FAE490(*(undefined4 *)(iVar2 + 0x60),param_4,param_6,param_7,
                              in_stack_00000054);
  }
  *piVar1 = *piVar1 - param_1[0x11];
  if (((int)uVar4 == 1) &&
     (iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,&stack0x00000024,aiStack_30), iVar2 != 0
     )) {
    iVar2 = *piVar1;
    if (param_1[3] < 0) {
      iVar2 = param_1[3] + iVar2;
    }
    if (aiStack_30[0] < iVar2) {
      return 2;
    }
  }
  return uVar4;
}


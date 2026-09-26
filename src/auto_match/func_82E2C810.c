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
extern unsigned int *auStack_50;
extern int fn_82E2ADE0();


undefined8 fn_82E2C810(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *apiStack_60 [4];
  undefined1 auStack_50 [80];
  
  piVar2 = (int *)(param_1 + -4);
  apiStack_60[0] = (int *)0x0;
  iVar1 = (**(code **)(*piVar2 + 0x84))(piVar2,auStack_50);
  if (((iVar1 < 0) ||
      (iVar1 = (**(code **)*param_2)(param_2,0xffffffff8214c5a0,apiStack_60), iVar1 < 0)) ||
     (iVar1 = (**(code **)(*apiStack_60[0] + 0x84))(apiStack_60[0],auStack_50), iVar1 < 0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar3 = fn_82E2ADE0(piVar2,param_2,param_3,0,0,param_4);
  }
  if (apiStack_60[0] != (int *)0x0) {
    (**(code **)(*apiStack_60[0] + 8))();
  }
  return uVar3;
}


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


void fn_82A77AF8(int *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 0x10) != 0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 0x1c))();
    }
    if ((int *)param_1[0x3f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3f] + 0x1c))();
    }
    piVar1 = (int *)param_1[0x2e];
    if (piVar1 != (int *)0x0) {
      param_1[0x2f] = *piVar1 + piVar1[4];
      if ((uint)(*piVar1 + piVar1[4]) < (uint)(piVar1[7] + piVar1[6] + *piVar1)) {
        iVar2 = piVar1[8];
      }
      else {
        iVar2 = 0;
      }
      param_1[0x30] = iVar2;
    }
  }
  if ((param_2 & 0x20) == 0) {
    param_1[0x1f] = 0;
    param_1[0x1d] = 1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar2 != 0) {
      param_1[0x1f] = 1;
    }
  }
  piVar1 = (int *)param_1[0x42];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,param_2);
  }
  return;
}


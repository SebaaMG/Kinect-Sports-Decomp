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


void fn_82255C48(int *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x3c))();
  if ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x16]) {
    if (((uint)param_1[0x16] - uVar2 & 0xffffffff) <
        ((ulonglong)*(uint *)(param_1[6] + 0x60) + 1 & 0xffffffff) >> 1) {
      iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
      param_1[0x16] = iVar3;
    }
  }
  piVar1 = (int *)param_1[0x15];
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
    if (param_1 == (int *)(iVar3 + 0x390)) {
      piVar1[0x30] = 1;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      if (param_1 == (int *)(iVar3 + 0x3ec)) {
        piVar1[0x31] = 1;
      }
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
  param_1[0x16] = iVar3;
  return;
}


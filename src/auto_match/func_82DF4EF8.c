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
extern int fn_82CE5410();


void fn_82DF4EF8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[2] & 0x80000000U) == 0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(iVar5 + *param_1);
        if (iVar2 != 0) {
          iVar3 = fn_82CE5410();
          (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar2,0x200);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < param_1[1]);
    }
  }
  if ((param_1[5] & 0x80000000U) == 0) {
    iVar4 = 0;
    if (0 < param_1[4]) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1[3] + iVar5);
        if (iVar2 != 0) {
          fn_82DF4EF8(iVar2);
          iVar3 = fn_82CE5410();
          (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar2,0x20);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < param_1[4]);
    }
  }
  iVar4 = fn_82CE5410();
  piVar1 = *(int **)(iVar4 + 0x10);
  param_1[4] = 0;
  if ((param_1[5] & 0x80000000U) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[3],param_1[5] & 0x3fffffff,4);
  }
  param_1[3] = 0;
  param_1[5] = -0x80000000;
  iVar4 = fn_82CE5410();
  piVar1 = *(int **)(iVar4 + 0x10);
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,4);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  return;
}


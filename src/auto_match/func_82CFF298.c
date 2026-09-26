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


void fn_82CFF298(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    do {
      uVar1 = *param_1;
      uVar3 = *(undefined4 *)(param_1[2] + iVar6);
      iVar4 = fn_82CE5410();
      (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar3,uVar1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < (int)param_1[3]);
  }
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[2],param_1[4] & 0x3fffffff,4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  param_1[1] = *param_1;
  return;
}


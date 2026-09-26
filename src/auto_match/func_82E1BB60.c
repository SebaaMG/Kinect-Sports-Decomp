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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82E1AF88();


void fn_82E1BB60(uint *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  longlong lVar4;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    iVar5 = 0;
    do {
      fn_82E1AF88(param_1,*(undefined4 *)(iVar5 + *param_1),(undefined4 *)(iVar5 + *param_1) + 1);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar2 < (int)param_1[1]);
  }
  iVar2 = fn_82CE5410();
  uVar3 = (ulonglong)param_1[1];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[1]) {
    lVar4 = (ulonglong)*param_1 + 4;
    do {
      iVar2 = fn_82CE5410();
      fn_82CEA4B8(lVar4,*(undefined4 *)(iVar2 + 0x10));
      fn_82BA02A8(lVar4);
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 != 0);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,0x10);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}


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


int * fn_82D2E8C0(int *param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  iVar3 = fn_82CE5410();
  uVar4 = (ulonglong)(uint)param_1[1];
  piVar1 = *(int **)(iVar3 + 0x10);
  if (0 < param_1[1]) {
    puVar5 = (undefined4 *)(*param_1 + -4);
    do {
      iVar3 = fn_82CE5410();
      piVar2 = *(int **)(iVar3 + 0x10);
      puVar5[2] = 0;
      if ((puVar5[3] & 0x80000000) == 0) {
        (**(code **)(*piVar2 + 0x10))(piVar2,puVar5[1],puVar5[3] & 0x3fffffff,0xc);
      }
      puVar5[1] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 3;
      *puVar5 = 0x80000000;
    } while (uVar4 != 0);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,0xc);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  if ((param_2 & 1) != 0) {
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),param_1,0x10);
  }
  return param_1;
}


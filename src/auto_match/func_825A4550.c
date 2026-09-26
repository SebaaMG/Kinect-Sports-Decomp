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


void fn_825A4550(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  iVar3 = fn_82CE5410();
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x20);
  piVar1 = *(int **)(iVar3 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c) + -0x18);
    do {
      iVar3 = fn_82CE5410();
      piVar2 = *(int **)(iVar3 + 0x10);
      puVar5[0x17] = 0;
      if ((puVar5[0x18] & 0x80000000) == 0) {
        (**(code **)(*piVar2 + 0x10))(piVar2,puVar5[0x16],puVar5[0x18] & 0x3fffffff,4);
      }
      puVar5[0x16] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
      *puVar5 = 0x80000000;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(uint *)(param_1 + 0x24) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(param_1 + 0x1c),*(uint *)(param_1 + 0x24) & 0x3fffffff,0x60);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(uint *)(param_1 + 0x18) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) & 0x3fffffff,4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(param_1,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(param_1);
  return;
}


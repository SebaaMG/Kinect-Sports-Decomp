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
extern int fn_82F68B74();


void fn_82D801A0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_82F68B74();
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  if ((*(uint *)(iVar2 + 0x3c) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(iVar2 + 0x34),*(uint *)(iVar2 + 0x3c) & 0x3fffffff,4);
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0x80000000;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  if ((*(uint *)(iVar2 + 0x30) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(iVar2 + 0x28),*(uint *)(iVar2 + 0x30) & 0x3fffffff,4);
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0x80000000;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if ((*(uint *)(iVar2 + 0x24) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(iVar2 + 0x1c),*(uint *)(iVar2 + 0x24) & 0x3fffffff,4);
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0x80000000;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  if ((*(uint *)(iVar2 + 0x18) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(iVar2 + 0x10),*(uint *)(iVar2 + 0x18) & 0x3fffffff,0x10);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x80000000;
  return;
}


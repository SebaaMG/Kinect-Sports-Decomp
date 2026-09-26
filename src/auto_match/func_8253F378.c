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
extern int fn_8251E400();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82571368();
extern int fn_825A1F38();
extern int fn_825AD4B8();
extern int fn_8265CA20();
extern int fn_82CE4118();
extern int fn_82CE5410();


void fn_8253F378(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x600);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x600) = 0;
  }
  fn_8251E400(param_1 + 0x630);
  puVar1 = *(undefined4 **)(param_1 + 0x560);
  if (puVar1 != (undefined4 *)0x0) {
    fn_825AD4B8(puVar1);
    fn_8265CA20(*puVar1);
    *puVar1 = 0;
    fn_8265CA20(puVar1);
  }
  *(undefined4 *)(param_1 + 0x560) = 0;
  fn_8251E400(param_1 + 0x4c0);
  fn_8251E400(param_1 + 0x490);
  fn_82571368(param_1 + 0x380);
  uVar2 = *(uint *)(param_1 + 0x4a8);
  for (uVar6 = *(uint *)(param_1 + 0x4a4); uVar6 < uVar2; uVar6 = uVar6 + 8) {
    piVar4 = *(int **)(uVar6 + 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4,1);
    }
  }
  fn_8251E400(param_1 + 0x4a4);
  uVar2 = *(uint *)(param_1 + 0x75c);
  for (uVar6 = *(uint *)(param_1 + 0x758); uVar6 < uVar2; uVar6 = uVar6 + 0x3f0) {
    puVar1 = *(undefined4 **)(uVar6 + 0x180);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined4 *)(uVar6 + 0x180) = 0;
    }
    fn_82571368(uVar6 + 0x2d0);
  }
  fn_8251E400(param_1 + 0x744);
  fn_8251E400(param_1 + 0x758);
  fn_8251E400(param_1 + 0x76c);
  fn_8251E400(param_1 + 0x780);
  fn_8251E400(param_1 + 0x794);
  if ((*(int *)(param_1 + 0x7c0) != 0) && (*(char *)(*(int *)(param_1 + 0x7c0) + 0xe8) != '\a')) {
    fn_82CE4118();
  }
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x7b8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar3 = *(int *)(param_1 + 0x7b0);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 4) != 0) {
      fn_82522ED8();
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    iVar5 = fn_82CE5410();
    piVar4 = *(int **)(iVar5 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = 0;
    if ((*(uint *)(iVar3 + 0x18) & 0x80000000) == 0) {
      (**(code **)(*piVar4 + 0x10))
                (piVar4,*(undefined4 *)(iVar3 + 0x10),*(uint *)(iVar3 + 0x18) & 0x3fffffff,4);
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0x80000000;
    fn_8265CA20(iVar3);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    fn_825A1F38();
  }
  if (*(int *)(param_1 + 0x890) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  return;
}


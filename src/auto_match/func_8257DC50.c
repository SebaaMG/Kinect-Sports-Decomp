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


void fn_8257DC50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0x24;
  piVar5 = (int *)(iVar1 + 4);
  do {
    while (iVar2 = *piVar5, iVar2 != 0) {
      puVar6 = (undefined4 *)(iVar2 + -0x10);
      if (iVar2 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 2;
  } while (lVar4 != 0);
  while (iVar2 = *(int *)(iVar1 + 300), iVar2 != 0) {
    puVar6 = (undefined4 *)(iVar2 + -0x10);
    if (iVar2 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  while (iVar2 = *(int *)(iVar1 + 0x124), iVar2 != 0) {
    puVar6 = (undefined4 *)(iVar2 + -0x10);
    if (iVar2 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  fn_82522ED8(iVar1);
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  for (puVar6 = *(undefined4 **)(param_1 + 8); puVar6 < puVar3; puVar6 = puVar6 + 2) {
    fn_8251FA58(*puVar6);
  }
  fn_8251E400(param_1 + 8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_8251FA58();
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_8251FA58();
  }
  piVar5 = (int *)(param_1 + 0x40);
  lVar4 = 10;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 8))();
      puVar6 = (undefined4 *)*piVar5;
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      *piVar5 = 0;
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar4 != 0);
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  fn_82522ED8(param_1);
  return;
}


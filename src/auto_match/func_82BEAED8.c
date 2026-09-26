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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE54C0();
extern int fn_82BE56C0();


undefined8 fn_82BEAED8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = fn_82BE5340();
    while (iVar1 != 0) {
      puVar2 = *(undefined4 **)(iVar1 + 8);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      iVar1 = fn_82BE5350(*(undefined4 *)(param_1 + 0x3c));
    }
    fn_82BE5478(*(undefined4 *)(param_1 + 0x3c));
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 != 0) {
      fn_82BE54C0(iVar1);
      fn_82BE56C0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_82BE5340();
    while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
      puVar2 = (undefined4 *)fn_82BE5378(*(undefined4 *)(param_1 + 0x40));
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
    }
    fn_82BE5478();
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      fn_82BE54C0(iVar1);
      fn_82BE56C0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_82BE5340();
    while (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
      puVar2 = (undefined4 *)fn_82BE5378(*(undefined4 *)(param_1 + 0x44));
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      fn_82BE5350(*(undefined4 *)(param_1 + 0x44));
    }
    fn_82BE5478();
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 != 0) {
      fn_82BE54C0(iVar1);
      fn_82BE56C0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82BE5340();
    while (*(int *)(*(int *)(param_1 + 0x48) + 8) != 0) {
      puVar2 = (undefined4 *)fn_82BE5378(*(undefined4 *)(param_1 + 0x48));
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      fn_82BE5350(*(undefined4 *)(param_1 + 0x48));
    }
    fn_82BE5478();
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 != 0) {
      fn_82BE54C0(iVar1);
      fn_82BE56C0(iVar1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  fn_82BE5478(param_1 + 0x28);
  return 1;
}


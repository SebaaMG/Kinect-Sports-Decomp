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
extern int fn_822315A0();
extern int fn_822B5EC0();
extern int fn_822B7EE8();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_825339A0();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821AC9C4;
extern unsigned int lbl_821C7FB8;


void fn_822B5CE8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &lbl_821AC9C4;
  fn_825339A0(param_1[5]);
  fn_82529320(param_1[5],0);
  puVar1 = (undefined4 *)param_1[0x44];
  param_1[5] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x45];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x1e];
  if (puVar1 != (undefined4 *)0x0) {
    fn_82672660(puVar1[9],puVar1);
    fn_82672660(*puVar1,puVar1);
    if (puVar1[10] != 0) {
      fn_822315A0();
    }
    if (puVar1[1] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(puVar1);
  }
  iVar2 = param_1[0x1f];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x28) != 0) {
      fn_8251FA58();
      *(undefined4 *)(iVar2 + 0x28) = 0;
    }
    puVar1 = *(undefined4 **)(iVar2 + 0x20);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
  }
  iVar2 = param_1[0x46];
  if (iVar2 != 0) {
    fn_822B7EE8(iVar2);
    fn_8265CA20(iVar2);
  }
  if (param_1[0x47] != 0) {
    fn_8265CA20();
  }
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x5a] != 0) {
    *(undefined4 *)(param_1[0x5a] + 0xbc) = 0;
    param_1[0x5a] = 0;
  }
  if (param_1[0x5c] != 0) {
    fn_822B5EC0();
    param_1[0x5c] = 0;
  }
  fn_82359C18(param_1 + 0x60);
  param_1[0x5e] = &lbl_821C7FB8;
  if (param_1[0x59] != 0) {
    fn_822315A0();
  }
  if (param_1[0x57] != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0x50);
  return;
}


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
extern unsigned int *auStack_20;
extern int fn_8251E370();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_821C7F7C;


void fn_8253C910(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [8];
  
  fn_8251E370(param_1 + 0x14,4,0);
  fn_8251E370(param_1 + 0x19,4,0);
  fn_8251E370(param_1 + 0x1e,4,0);
  fn_8251E370(param_1 + 0x23,4,0);
  fn_8251E370(param_1 + 0x28,4,0);
  fn_8251E370(param_1 + 0x2d,4,0);
  fn_8251E370(param_1 + 0x32,4,0);
  fn_8251E370(param_1 + 0x37,4,0);
  iVar1 = fn_82520158(0xffffffff821c4074,auStack_20,0);
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(auStack_20,0);
    param_1[9] = uVar2;
  }
  iVar1 = fn_82520158(0xffffffff821c4084,auStack_20,0);
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(auStack_20,0);
    param_1[10] = uVar2;
  }
  iVar1 = fn_82520158(0xffffffff821c4098,auStack_20,0);
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(auStack_20,0);
    param_1[0xb] = uVar2;
  }
  iVar1 = fn_82520158(0xffffffff821c40a4,auStack_20,0);
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(auStack_20,0);
    param_1[0xc] = uVar2;
  }
  iVar1 = fn_82520158(0xffffffff821c40b0,auStack_20,0);
  if (iVar1 != 0) {
    uVar2 = fn_8251F720(auStack_20,0);
    param_1[0xe] = uVar2;
  }
  param_1[0x11] = 0;
  *param_1 = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_821C7F7C;
  }
  param_1[1] = puVar3;
  param_1[0x3d] = 0;
  return;
}


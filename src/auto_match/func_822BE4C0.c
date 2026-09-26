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
extern int fn_8223AAC0();
extern int fn_822AF138();
extern int fn_822C03F0();
extern int fn_822C64E0();
extern int fn_822C8C08();
extern int fn_8232AFC0();
extern int fn_8232ECE0();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821B0838;


void fn_822BE4C0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar5;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  param_1[0x1fb] = (int)param_2;
  iVar1 = param_1[0x45];
  puVar2 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821A8D8C;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      fn_8232ECE0(puVar2 + 4,param_1,iVar1,param_3);
    }
  }
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  if ((puVar2 != (undefined4 *)0x0) && (cVar5 = fn_8223AAC0(puVar2), cVar5 != '\0')) {
    puStack_50 = puVar2 + 4;
    puStack_4c = puVar2;
  }
  fn_822C64E0(param_1[0x44],&puStack_50);
  iVar1 = param_1[0x45];
  puVar3 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    puVar3[2] = 1;
    *puVar3 = &lbl_821AD588;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[5] = iVar1;
      puVar3[6] = param_1;
      puVar3[4] = 2;
      puVar3[3] = &lbl_821B0838;
    }
  }
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  if ((puVar3 != (undefined4 *)0x0) && (cVar5 = fn_8223AAC0(puVar3), cVar5 != '\0')) {
    puStack_50 = puVar3 + 3;
    puStack_4c = puVar3;
  }
  fn_822C64E0(param_1[0x44],&puStack_50);
  fn_822AF138(param_1[0x44],2);
  fn_822C8C08(param_1[0x45],0xffffffff821acc3c);
  param_1[0x13f] = 0;
  param_1[0x13e] = 1;
  fn_8232AFC0(param_1 + 0x170,param_2);
  fn_822C03F0(param_1,param_1[0x1fb]);
  puVar4 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AE598;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[3] = param_4;
      puVar4[4] = 0;
    }
  }
  iVar1 = param_1[0x16d];
  param_1[0x16d] = (int)puVar4;
  param_1[0x16c] = (int)(puVar4 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (**(code **)(*param_1 + 4))(param_1);
  if (puVar3 != (undefined4 *)0x0) {
    fn_822315A0(puVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0(puVar2);
  }
  return;
}


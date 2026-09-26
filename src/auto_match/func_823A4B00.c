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
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_823A5558();
extern int fn_8265C9E0();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B5380;
extern unsigned int lbl_821B5444;
extern unsigned int lbl_821B5484;
extern unsigned int lbl_821B54D4;
extern unsigned int lbl_821CC160;


undefined4 * fn_823A4B00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined1 auStack_50 [80];
  
  param_1[2] = param_2;
  param_1[1] = 5;
  *param_1 = &lbl_821B5484;
  fn_82230110(auStack_50,0xffffffff821b5460);
  piVar2 = param_1 + 3;
  fn_823A5558(piVar2,auStack_50);
  fn_82230300(auStack_50,1,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puStack_5c = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (undefined4 *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 4;
      puStack_5c[3] = &lbl_821AC5E0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(code **)(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (undefined4 *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 5;
      puStack_5c[3] = &lbl_821AC5E0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(code **)(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (undefined4 *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 1;
      puStack_5c[3] = &lbl_821B54D4;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(code **)(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (undefined4 *)fn_8265C9E0(0x20);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (undefined4 *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 2;
      puStack_5c[3] = &lbl_821B5444;
      puStack_5c[6] = 0;
      puStack_5c[7] = 0;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(code **)(*piVar2 + 4))(piVar2,&puStack_60);
  puStack_5c = (undefined4 *)fn_8265C9E0(0x1c);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[1] = 1;
    puStack_5c[2] = 1;
    *puStack_5c = &lbl_821AD588;
    if (puStack_5c + 3 != (undefined4 *)0x0) {
      puStack_5c[5] = param_1;
      puStack_5c[4] = 3;
      uVar1 = lbl_821CC160;
      puStack_5c[3] = &lbl_821B5380;
      puStack_5c[6] = uVar1;
    }
  }
  puStack_60 = puStack_5c + 3;
  (**(code **)(*piVar2 + 4))(piVar2,&puStack_60);
  return param_1;
}


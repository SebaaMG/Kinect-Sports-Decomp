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
extern int fn_827C1B68();
extern int fn_827CCE10();
extern int fn_827CD040();
extern int fn_827CD0D8();
extern int fn_827CD160();
extern int fn_827CD1E8();
extern int fn_827CD2D0();
extern int fn_827CD3B0();
extern int fn_827CD520();


void fn_827CD590(int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_1[0x6a];
  uVar2 = param_1[0x13];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  if (uVar2 == 0) {
    if (param_1[0x19] == 3) {
      pcVar3 = fn_827CD160;
    }
    else {
      pcVar3 = fn_827CD0D8;
    }
    *(code **)(iVar1 + 4) = pcVar3;
  }
  else if (uVar2 == 1) {
    if (param_1[0x19] == 3) {
      pcVar3 = fn_827CD2D0;
    }
    else {
      pcVar3 = fn_827CD1E8;
    }
    *(code **)(iVar1 + 4) = pcVar3;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      fn_827CCE10(param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      fn_827CD040(param_1);
    }
  }
  else if (uVar2 < 3) {
    *(undefined1 *)(iVar1 + 0x54) = 0;
    *(code **)(iVar1 + 4) = fn_827CD3B0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      fn_827CD520(param_1);
    }
    uVar2 = param_1[0x17];
    iVar5 = 0;
    if (0 < param_1[0x19]) {
      puVar4 = (undefined4 *)(iVar1 + 0x40);
      do {
        puVar4 = puVar4 + 1;
        fn_827C1B68(*puVar4,((ulonglong)uVar2 + 2 & 0x7fffffff) << 1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[0x19]);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  return;
}


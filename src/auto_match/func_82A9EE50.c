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
extern int fn_82935220();
extern int fn_82936290();
extern int fn_82A9A278();
extern int fn_82A9A308();
extern int fn_82A9A428();
extern int fn_82A9A548();
extern int fn_82A9A668();
extern int fn_82A9CF38();
extern int fn_82A9D4B8();


undefined1 * fn_82A9EE50(int param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x14) + 1;
  if ((ulonglong)*(uint *)(param_1 + 0x18) < (uVar4 & 0xffffffff)) {
    fn_82A9A668((int *)(param_1 + 0x10),uVar4,param_1 + 0x90);
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  piVar2 = (int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x90) < 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) * 0x1dc + *(int *)(param_1 + 0x10);
    puVar3 = (undefined1 *)(iVar1 + -0x1dc);
    *(undefined4 *)(iVar1 + -200) = 0;
    *(undefined4 *)(iVar1 + -0xc4) = 0;
    *(undefined4 *)(iVar1 + -0xc0) = 0;
    *(undefined4 *)(iVar1 + -0xbc) = 0;
    *(undefined4 *)(iVar1 + -0xb8) = 0;
    *(undefined4 *)(iVar1 + -0xb4) = 0;
    *(undefined4 *)(iVar1 + -0x98) = 0;
    *(undefined4 *)(iVar1 + -0x94) = 0;
    *(undefined4 *)(iVar1 + -0x90) = 0;
    *(undefined4 *)(iVar1 + -0x7c) = 0;
    *(undefined4 *)(iVar1 + -0x78) = 0;
    *(undefined4 *)(iVar1 + -0x74) = 0;
    *(undefined4 *)(iVar1 + -0x70) = 0;
    *(undefined4 *)(iVar1 + -0x6c) = 0;
    *(undefined4 *)(iVar1 + -0x68) = 0;
    *(undefined4 *)(iVar1 + -100) = 0;
    *(undefined4 *)(iVar1 + -0x60) = 0;
    *(undefined4 *)(iVar1 + -0x5c) = 0;
    *(undefined4 *)(iVar1 + -0x2c) = 0;
    *(undefined4 *)(iVar1 + -0x28) = 0;
    *(undefined4 *)(iVar1 + -0x24) = 0;
    *(undefined4 *)(iVar1 + -0x20) = 0;
    *(undefined4 *)(iVar1 + -0x1c) = 0;
    *(undefined4 *)(iVar1 + -0x18) = 0;
    if ((param_2 & 0xffffffff) == 0) {
      *puVar3 = 0;
    }
    else {
      fn_82936290(puVar3,0x100,param_2);
    }
    *(undefined4 *)(iVar1 + -0x58) = 0;
    *(undefined4 *)(iVar1 + -0xdc) = param_3;
    *(undefined4 *)(iVar1 + -0xc4) = 0;
    if (*(uint *)(iVar1 + -0xc0) < 100) {
      fn_82A9A548(iVar1 + -200,100,piVar2);
    }
    *(undefined4 *)(iVar1 + -0xb8) = 0;
    if (*(int *)(iVar1 + -0xb4) == 0) {
      fn_82A9A278(iVar1 + -0xbc,1,piVar2);
    }
    *(undefined4 *)(iVar1 + -0x94) = 0;
    if (*(int *)(iVar1 + -0x90) == 0) {
      fn_82A9A278(iVar1 + -0x98,1,piVar2);
    }
    *(undefined4 *)(iVar1 + -0x78) = 0;
    if (*(int *)(iVar1 + -0x74) == 0) {
      fn_82A9CF38(iVar1 + -0x7c,1,piVar2);
    }
    *(undefined4 *)(iVar1 + -0x6c) = 0;
    if (*(int *)(iVar1 + -0x68) == 0) {
      fn_82A9A308(iVar1 + -0x70,1,piVar2);
    }
    *(undefined4 *)(iVar1 + -0x60) = 0;
    if (*(int *)(iVar1 + -0x5c) == 0) {
      fn_82A9A428(iVar1 + -100,1,piVar2);
    }
    *(undefined4 *)(iVar1 + -4) = 0;
    *(undefined4 *)(iVar1 + -8) = 0xffffffff;
    *(undefined4 *)(iVar1 + -0x10) = 0xffffffff;
    *(undefined4 *)(iVar1 + -0xc) = 0xffffffff;
    *(undefined4 *)(iVar1 + -0x14) = 0xffffffff;
    if (-1 < *piVar2) {
      *(undefined4 *)(iVar1 + -0xc4) = 0;
      *(undefined4 *)(iVar1 + -0xb8) = 0;
      *(undefined4 *)(iVar1 + -0x94) = 0;
      *(undefined4 *)(iVar1 + -0x78) = 0;
      *(undefined4 *)(iVar1 + -0x6c) = 0;
      *(undefined4 *)(iVar1 + -0x60) = 0;
    }
    *(undefined4 *)(iVar1 + -0xcc) = 0xffffffff;
    fn_82A9D4B8(param_1,iVar1 + -0xd8);
    fn_82935220(iVar1 + -0x8c,0x4c434456);
    if (-1 < *piVar2) {
      *(undefined1 **)(param_1 + 0x80) = puVar3;
      *(int *)(param_1 + 0x1c) = iVar1 + -200;
      *(int *)(param_1 + 0x44) = iVar1 + -0xbc;
      *(int *)(param_1 + 0x48) = iVar1 + -0x98;
      *(int *)(param_1 + 0x60) = iVar1 + -0x8c;
      *(int *)(param_1 + 100) = iVar1 + -0x7c;
      *(int *)(param_1 + 0x68) = iVar1 + -0x70;
      *(int *)(param_1 + 0x6c) = iVar1 + -100;
      *(int *)(param_1 + 0x4c) = iVar1 + -0xb0;
      *(int *)(param_1 + 0x50) = iVar1 + -0xa4;
      *(int *)(param_1 + 0x54) = iVar1 + -0x50;
      *(int *)(param_1 + 0x58) = iVar1 + -0x44;
      *(int *)(param_1 + 0x5c) = iVar1 + -0x38;
      *(int *)(param_1 + 0x70) = iVar1 + -0x2c;
      *(int *)(param_1 + 0x78) = iVar1 + -0x20;
    }
  }
  return puVar3;
}


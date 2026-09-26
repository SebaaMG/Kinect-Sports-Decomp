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
extern unsigned int lbl_82163138;


void fn_82F44D68(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0) || (iVar2 == 1)) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba1e8;
    }
    else {
      uVar4 = 0x831ba0a8;
    }
  }
  else if ((iVar2 == 2) || (iVar2 == 3)) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba468;
    }
    else {
      uVar4 = 0x831ba328;
    }
  }
  else if (iVar2 == 4) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba088;
    }
    else {
      uVar4 = 0x831ba078;
    }
  }
  else {
    if (iVar2 == 8) {
      *(undefined **)(param_1 + 4) = &lbl_82163138;
      return;
    }
    if (iVar2 == 10) {
      return;
    }
    if (iVar2 < 5) goto code_r0x82f44e3c;
    uVar4 = 0x831ba638;
    if (param_2 < 0xd) {
      uVar4 = 0x831ba5a8;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
code_r0x82f44e3c:
  bVar1 = **(byte **)(param_1 + 0x18);
  *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
  uVar3 = (uint)bVar1;
  *(uint *)(param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 0x10) = 1 << (uVar3 & 0x3f);
  return;
}


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
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826F40E8();
extern int fn_826F5668();
extern unsigned int lbl_831E7E64;


int fn_826F5758(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = fn_8267B890(lbl_831E7E64,0x2c,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_826F40E8(uVar1,*(undefined4 *)(param_1 + 8));
  }
  iVar2 = fn_8267B890(lbl_831E7E64,0x54,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826F5668();
  }
  if (iVar2 != 0) {
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8267C4C8(uVar1);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      fn_8267C4F0();
    }
    *(int *)(iVar2 + 8) = (int)uVar1;
    if (*(int *)(param_1 + 0x3c) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x3c) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x14) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x18) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x38) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x38) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x24) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x28) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x20) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x34) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x34) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x30) != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(iVar2 + 0x30) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar1);
  }
  return iVar2;
}


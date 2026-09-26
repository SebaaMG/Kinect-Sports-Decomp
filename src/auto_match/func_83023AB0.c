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
extern int fn_82A1EFC0();
extern int fn_82FA5060();
extern int fn_830224F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


undefined8 fn_83023AB0(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  fn_830224F0(param_1 + 0x80,param_2,0x400);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0x3f;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar2 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0x3f;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0x3f;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0x3f;
  iVar4 = 0;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0x3f;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x2b;
  *(undefined4 *)(param_1 + 0x108) = 0x11;
  for (; (param_2 & 0xffffffff) != 0; param_2 = param_2 - 1 & param_2) {
    iVar4 = iVar4 + 1;
  }
  *(int *)(param_1 + 0x150) = iVar4 << 0xc;
  uVar3 = fn_82FA5060(lbl_831BC770);
  if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(uVar3,0,*(undefined4 *)(param_1 + 0x150));
  }
  return 0x34;
}


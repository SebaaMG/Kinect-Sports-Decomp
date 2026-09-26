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
extern int fn_829E5388();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_82057AB0;
extern unsigned int lbl_82057AB8;
extern unsigned int lbl_82057ABC;
extern unsigned int lbl_821AAD20;


int fn_829E2FF8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = lbl_82005748;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = lbl_8201EBA4;
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar3 = lbl_8201FBB0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 4;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  fn_829E5388(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  uVar5 = lbl_821AAD20;
  uVar4 = lbl_82057ABC;
  uVar3 = lbl_82057AB8;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x68) = 2;
  uVar2 = lbl_82057AB0;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar1 = lbl_82005344;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return param_1;
}


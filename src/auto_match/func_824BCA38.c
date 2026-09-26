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
extern unsigned int *auStack_30;
extern int fn_824BC840();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82864988();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824BCA38(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_30 [48];
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = 4;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar5 = 10;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xb;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 1;
  do {
    puVar4[-9] = 0;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar2;
    uVar1 = lbl_821CA460;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x4b4) = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x4b8) = uVar1;
  fn_82864988(param_1 + 0x4bc,0xffffffff821c05b8);
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  fn_824BC840(param_1);
  fn_82520158(0xffffffff821c05cc,auStack_30,0);
  uVar3 = fn_8251F720(auStack_30,0);
  fn_82A1DD38(param_1 + 0x4e0,uVar3,0x28);
  fn_8251FA58(uVar3);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x90,0,0x34);
}


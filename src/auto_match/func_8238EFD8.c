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
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_370;
extern unsigned int *auStack_390;
extern unsigned int *auStack_420;
extern unsigned int *auStack_440;
extern unsigned int *auStack_4d0;
extern unsigned int *auStack_4f0;
extern unsigned int *auStack_510;
extern unsigned int *auStack_530;
extern unsigned int *auStack_550;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82230040();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82390788();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B48E8;
extern unsigned int uStack_55c;


void fn_8238EFD8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined **ppuStack_560;
  undefined4 uStack_55c;
  undefined1 auStack_550 [16];
  undefined4 *puStack_540;
  undefined1 auStack_530 [32];
  undefined1 auStack_510 [32];
  undefined1 auStack_4f0 [32];
  undefined1 auStack_4d0 [144];
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [144];
  undefined1 auStack_390 [32];
  undefined1 auStack_370 [144];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [144];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [144];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [144];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [176];
  
  fn_82F68CC0(auStack_4f0,param_2,0x90);
  uVar1 = fn_822C5B18(auStack_530,param_1 + 0x30);
  uVar2 = fn_822C5B18(auStack_510,uVar1);
  fn_822C5B18(auStack_180,uVar2);
  fn_82F68CC0(auStack_160,auStack_4f0,0x90);
  fn_82359C18(uVar2);
  fn_822C5B18(auStack_440,auStack_180);
  fn_82F68CC0(auStack_420,auStack_160,0x90);
  fn_822C5B18(auStack_4f0,auStack_440);
  fn_82F68CC0(auStack_4d0,auStack_420,0x90);
  fn_822C5B18(auStack_2e0,auStack_4f0);
  fn_82F68CC0(auStack_2c0,auStack_4d0,0x90);
  fn_82359C18(auStack_4f0);
  fn_82359C18(auStack_440);
  fn_822C5B18(auStack_d0,auStack_2e0);
  fn_82F68CC0(auStack_b0,auStack_2c0,0x90);
  fn_82359C18(auStack_2e0);
  fn_82359C18(auStack_180);
  fn_82359C18(uVar1);
  fn_822C5B18(auStack_230,auStack_d0);
  fn_82F68CC0(auStack_210,auStack_b0,0x90);
  fn_822C5B18(auStack_390,auStack_230);
  fn_82F68CC0(auStack_370,auStack_210,0x90);
  puVar3 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &lbl_821B48E8;
    fn_822C5B18(puVar3 + 4,auStack_390);
    fn_82F68CC0(puVar3 + 0xc,auStack_370,0x90);
    puStack_540 = puVar3;
    fn_82359C18(auStack_390);
    fn_82359C18(auStack_230);
    fn_82359C18(auStack_d0);
    fn_82390788(param_1 + 0x7c,auStack_550);
    fn_82359C18(auStack_550);
    return;
  }
  uStack_55c = 0;
  ppuStack_560 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_560);
}


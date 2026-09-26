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
extern unsigned int *auStack_120;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_260;
extern unsigned int *auStack_300;
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_440;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_500;
extern unsigned int *auStack_520;
extern unsigned int *auStack_540;
extern unsigned int *auStack_560;
extern unsigned int fStack_450;
extern int fn_82230040();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82390788();
extern int fn_823926F0();
extern int fn_82392CE0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B4900;
extern unsigned int uStack_56c;


void fn_8238F198(undefined8 param_1,double param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined **ppuStack_570;
  undefined4 uStack_56c;
  undefined1 auStack_560 [16];
  undefined4 *puStack_550;
  undefined1 auStack_540 [32];
  undefined1 auStack_520 [32];
  undefined1 auStack_500 [32];
  undefined1 auStack_4e0 [144];
  float fStack_450;
  undefined1 auStack_440 [160];
  undefined1 auStack_3a0 [160];
  undefined1 auStack_300 [160];
  undefined1 auStack_260 [160];
  undefined1 auStack_1c0 [160];
  undefined1 auStack_120 [288];
  
  uVar1 = fn_822C5B18(auStack_540,param_3 + 0x18);
  uVar2 = fn_822C5B18(auStack_520,uVar1);
  uVar3 = fn_822C5B18(auStack_500,uVar2);
  fn_82392CE0(param_1,auStack_4e0,uVar3);
  fStack_450 = (float)param_2;
  fn_82359C18(uVar2);
  uVar2 = fn_823926F0(auStack_1c0,auStack_4e0);
  uVar3 = fn_823926F0(auStack_120,uVar2);
  fn_823926F0(auStack_260,uVar3);
  fn_82359C18(uVar3);
  fn_82359C18(uVar2);
  fn_823926F0(auStack_3a0,auStack_260);
  fn_82359C18(auStack_260);
  fn_82359C18(auStack_4e0);
  fn_82359C18(uVar1);
  fn_823926F0(auStack_440,auStack_3a0);
  fn_823926F0(auStack_300,auStack_440);
  puVar4 = (undefined4 *)fn_8265C9E0(0xb0);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &lbl_821B4900;
    fn_823926F0(puVar4 + 4,auStack_300);
    puStack_550 = puVar4;
    fn_82359C18(auStack_300);
    fn_82359C18(auStack_440);
    fn_82359C18(auStack_3a0);
    fn_82390788(param_3 + 0x7c,auStack_560);
    fn_82359C18(auStack_560);
    return;
  }
  uStack_56c = 0;
  ppuStack_570 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_570);
}


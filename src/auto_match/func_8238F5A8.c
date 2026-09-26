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
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2c0;
extern int fn_82230040();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82390788();
extern int fn_82391AB0();
extern int fn_82392860();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B4948;
extern unsigned int uStack_2cc;


void fn_8238F5A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined **ppuStack_2d0;
  undefined4 uStack_2cc;
  undefined1 auStack_2c0 [16];
  undefined4 *puStack_2b0;
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [176];
  undefined1 auStack_1d0 [176];
  undefined1 auStack_120 [288];
  
  uVar1 = fn_822C5B18(auStack_2a0,param_4 + 0x60);
  uVar1 = fn_82391AB0(param_1,param_2,param_3,auStack_120,uVar1);
  fn_82392860(auStack_280,uVar1);
  fn_82392860(auStack_1d0,auStack_280);
  puVar2 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B4948;
    fn_82392860(puVar2 + 4,auStack_1d0);
    puStack_2b0 = puVar2;
    fn_82359C18(auStack_1d0);
    fn_82359C18(auStack_280);
    fn_82359C18(uVar1);
    fn_82390788(param_4 + 0x7c,auStack_2c0);
    fn_82359C18(auStack_2c0);
    return;
  }
  uStack_2cc = 0;
  ppuStack_2d0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_2d0);
}


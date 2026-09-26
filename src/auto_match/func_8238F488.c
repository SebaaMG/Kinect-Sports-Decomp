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
extern unsigned int *auStack_140;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_d0;
extern int fn_82230040();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82390788();
extern int fn_82391940();
extern int fn_823927F0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B4930;
extern unsigned int uStack_1fc;


void fn_8238F488(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined **ppuStack_200;
  undefined4 uStack_1fc;
  undefined1 auStack_1f0 [16];
  undefined4 *puStack_1e0;
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [112];
  undefined1 auStack_140 [112];
  undefined1 auStack_d0 [208];
  
  uVar1 = fn_822C5B18(auStack_1d0,param_2 + 0x48);
  uVar1 = fn_82391940(param_1,auStack_d0,uVar1);
  fn_823927F0(auStack_1b0,uVar1);
  fn_823927F0(auStack_140,auStack_1b0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x80);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B4930;
    fn_823927F0(puVar2 + 4,auStack_140);
    puStack_1e0 = puVar2;
    fn_82359C18(auStack_140);
    fn_82359C18(auStack_1b0);
    fn_82359C18(uVar1);
    fn_82390788(param_2 + 0x7c,auStack_1f0);
    fn_82359C18(auStack_1f0);
    return;
  }
  uStack_1fc = 0;
  ppuStack_200 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_200);
}


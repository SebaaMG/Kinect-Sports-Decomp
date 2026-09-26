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
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82390788();
extern int fn_823917B0();
extern int fn_82392778();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B4918;
extern unsigned int uStack_22c;


void fn_8238F360(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined **ppuStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_220 [16];
  undefined4 *puStack_210;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [224];
  
  uVar1 = fn_822C5B18(auStack_200,param_2);
  uVar1 = fn_823917B0(param_1,auStack_e0,uVar1);
  fn_82392778(auStack_1e0,uVar1);
  fn_82392778(auStack_160,auStack_1e0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x90);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B4918;
    fn_82392778(puVar2 + 4,auStack_160);
    puStack_210 = puVar2;
    fn_82359C18(auStack_160);
    fn_82359C18(auStack_1e0);
    fn_82359C18(uVar1);
    fn_82390788(param_2 + 0x7c,auStack_220);
    fn_82359C18(auStack_220);
    return;
  }
  uStack_22c = 0;
  ppuStack_230 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_230);
}


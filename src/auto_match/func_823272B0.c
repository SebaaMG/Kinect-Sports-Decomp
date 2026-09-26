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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822CA318();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8286D250();
extern int fn_8289C940();
extern int fn_82F565A0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B03E8;
extern unsigned int lbl_821B043C;
extern unsigned int lbl_821B0548;
extern unsigned int uStack_60;
extern unsigned int uStack_a4;


undefined4 * fn_823272B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined **ppuStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined4 *puStack_58;
  
  fn_822CA318();
  param_1[0x30] = 0;
  *param_1 = &lbl_821B03E8;
  param_1[0x1a] = &lbl_821B043C;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  fn_8286D250(param_1 + 0x34);
  uStack_60 = 0x82327a6800000000;
  puStack_58 = param_1;
  puVar1 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B0548;
    fn_82F68CC0(puVar1 + 2,&uStack_60,0x38);
    puStack_90 = puVar1;
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((ulonglong)(uint)param_1[0xd] + 0x33c,auStack_80);
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((ulonglong)(uint)param_1[0xd] + 0x448,auStack_80);
    *(undefined4 **)(param_1[0xd] + 0x3e4) = param_1;
    *(undefined4 **)(param_1[0xd] + 0x440) = param_1;
    fn_82359C18(auStack_a0);
    return param_1;
  }
  uStack_a4 = 0;
  ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_a8);
}


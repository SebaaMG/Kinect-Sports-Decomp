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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823D0DD8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B793C;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_ec;


void fn_823EC160(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined **ppuStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [16];
  undefined4 *puStack_d0;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [176];
  
  uStack_b8 = *(undefined4 *)(param_1 + 4);
  uStack_ec = 0;
  ppuStack_f0 = (undefined **)fn_823D0DD8;
  uStack_c0 = 0x823d0dd800000000;
  fn_82F68CC0(auStack_b0,param_2,0x90);
  puVar1 = (undefined4 *)fn_8265C9E0(0xb0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B793C;
    fn_82F68CC0(puVar1 + 4,&uStack_c0,0xa0);
    puStack_d0 = puVar1;
    fn_8227CB30((ulonglong)*(uint *)(param_1 + 4) + 0xad0,auStack_e0);
    fn_82359C18(auStack_e0);
    return;
  }
  uStack_ec = 0;
  ppuStack_f0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_f0);
}


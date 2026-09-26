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
extern unsigned int *auStack_78;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CC9F0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B7864;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_bc;


void fn_823EB788(int param_1,undefined1 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [16];
  undefined4 *puStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [120];
  
  uStack_88 = *(undefined4 *)(param_1 + 4);
  uStack_bc = 0;
  ppuStack_c0 = (undefined **)fn_823CC9F0;
  uStack_90 = 0x823cc9f000000000;
  uStack_80 = param_2;
  fn_82F68CC0(auStack_78,param_3,0x4c);
  puVar1 = (undefined4 *)fn_8265C9E0(0x70);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B7864;
    fn_82F68CC0(puVar1 + 2,&uStack_90,0x68);
    puStack_a0 = puVar1;
    fn_8227CB30((ulonglong)*(uint *)(param_1 + 4) + 0xd10,auStack_b0);
    fn_82359C18(auStack_b0);
    return;
  }
  uStack_bc = 0;
  ppuStack_c0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_c0);
}


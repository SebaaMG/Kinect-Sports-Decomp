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
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CD8F8();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B787C;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


void fn_823EB840(uint *param_1,code *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar2;
  longlong lVar1;
  code *pcStack_100;
  undefined4 uStack_fc;
  undefined **ppuStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 *puStack_e0;
  undefined8 uStack_d0;
  uint uStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [176];
  
  uStack_c8 = param_1[1];
  uStack_fc = 0;
  pcStack_100 = fn_823CD8F8;
  uStack_d0 = 0x823cd8f800000000;
  pcStack_c0 = param_2;
  uStack_b8 = param_3;
  fn_82F68CC0(auStack_b0,param_4,0x80);
  puVar2 = (undefined4 *)fn_8265C9E0(0xb0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B787C;
    fn_82F68CC0(puVar2 + 4,&uStack_d0,0xa0);
    pcStack_100 = param_2;
    uStack_fc = param_3;
    puStack_e0 = puVar2;
    lVar1 = fn_823F05B8((ulonglong)param_1[1] + 0x9f8,&pcStack_100);
    fn_8227CB30(lVar1 + 0x18,auStack_f0);
    fn_82359C18(auStack_f0);
    fn_823831D8((ulonglong)*param_1 + 0x710);
    return;
  }
  uStack_f4 = 0;
  ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_f8);
}


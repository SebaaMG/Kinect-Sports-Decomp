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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823D0140();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78DC;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


void fn_823EBD08(uint *param_1,code *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int in_r0;
  undefined4 *puVar2;
  longlong lVar1;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
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
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uStack_c8 = param_1[1];
  pcStack_100 = fn_823D0140;
  uStack_fc = 0;
  puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  uStack_d0 = 0x823d014000000000;
  pcStack_c0 = param_2;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  fn_82F68CC0(auStack_80,param_6,0x4c);
  puVar2 = (undefined4 *)fn_8265C9E0(0xb0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B78DC;
    fn_82F68CC0(puVar2 + 4,&uStack_d0,0xa0);
    pcStack_100 = param_2;
    uStack_fc = param_3;
    puStack_e0 = puVar2;
    lVar1 = fn_823F05B8((ulonglong)param_1[1] + 0xa08,&pcStack_100);
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


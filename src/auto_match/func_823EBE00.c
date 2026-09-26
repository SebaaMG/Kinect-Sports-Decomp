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
extern unsigned int *auStack_100;
extern unsigned int *auStack_130;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f8;
extern unsigned int fStack_b0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CD178();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78F4;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_40;
extern unsigned int uStack_a0;


void fn_823EBE00(double param_1,uint *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  int in_r0;
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  code *pcStack_140;
  undefined4 uStack_13c;
  undefined **ppuStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined4 *puStack_120;
  undefined8 uStack_110;
  uint uStack_108;
  undefined1 auStack_100 [8];
  undefined8 auStack_f8 [7];
  undefined1 auStack_c0 [16];
  float fStack_b0;
  undefined4 uStack_a0;
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  
  uStack_108 = param_2[1];
  puVar2 = auStack_f8;
  puVar1 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  pcStack_140 = fn_823CD178;
  uStack_13c = 0;
  uStack_110 = 0x823cd17800000000;
  puVar3 = (undefined8 *)(param_3 + -2);
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fStack_b0 = (float)param_1;
  uStack_a0 = param_5;
  fn_82F68CC0(auStack_90,param_6,0x4c);
  uStack_40 = param_7;
  puVar1 = (undefined4 *)fn_8265C9E0(0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B78F4;
    fn_82F68CC0(puVar1 + 4,&uStack_110,0xe0);
    uStack_13c = param_3[1];
    pcStack_140 = (code *)*param_3;
    puStack_120 = puVar1;
    lVar4 = fn_823F05B8((ulonglong)param_2[1] + 0xa48,&pcStack_140);
    fn_8227CB30(lVar4 + 0x18,auStack_130);
    fn_82359C18(auStack_130);
    fn_823831D8((ulonglong)*param_2 + 0x710);
    return;
  }
  uStack_134 = 0;
  ppuStack_138 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_138);
}


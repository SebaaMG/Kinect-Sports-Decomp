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
extern unsigned int *auStack_128;
extern unsigned int *auStack_130;
extern unsigned int *auStack_160;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CD698();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B790C;
extern unsigned int uStack_138;
extern unsigned int uStack_140;
extern unsigned int uStack_164;
extern unsigned int uStack_16c;
extern unsigned int uStack_50;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;
extern unsigned int uStack_f0;


void fn_823EBF18(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined2 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7)

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
  code *pcStack_170;
  undefined4 uStack_16c;
  undefined **ppuStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined4 *puStack_150;
  undefined8 uStack_140;
  uint uStack_138;
  undefined1 auStack_130 [8];
  undefined8 auStack_128 [7];
  undefined4 uStack_f0;
  undefined2 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  undefined4 uStack_50;
  
  uStack_138 = param_1[1];
  pcStack_170 = fn_823CD698;
  puVar2 = auStack_128;
  puVar1 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_16c = 0;
  uStack_140 = 0x823cd69800000000;
  puVar3 = (undefined8 *)(param_2 + -2);
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_e0 = *param_4;
  uStack_d0 = *param_5;
  uStack_c8 = param_5[1];
  uStack_c0 = param_5[2];
  uStack_b8 = param_5[3];
  uStack_f0 = param_3;
  fn_82F68CC0(auStack_b0,param_6,0x60);
  uStack_50 = param_7;
  puVar1 = (undefined4 *)fn_8265C9E0(0x110);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B790C;
    fn_82F68CC0(puVar1 + 4,&uStack_140,0x100);
    uStack_16c = param_2[1];
    pcStack_170 = (code *)*param_2;
    puStack_150 = puVar1;
    lVar4 = fn_823F05B8((ulonglong)param_1[1] + 0xa58,&pcStack_170);
    fn_8227CB30(lVar4 + 0x18,auStack_160);
    fn_82359C18(auStack_160);
    fn_823831D8((ulonglong)*param_1 + 0x710);
    return;
  }
  uStack_164 = 0;
  ppuStack_168 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_168);
}


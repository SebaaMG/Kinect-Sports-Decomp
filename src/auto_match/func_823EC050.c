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
extern unsigned int *auStack_90;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CCBA8();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B7924;
extern unsigned int uStack_100;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_40;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_f8;


void fn_823EC050(uint *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

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
  code *pcStack_130;
  undefined4 uStack_12c;
  undefined **ppuStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined4 *puStack_110;
  undefined8 uStack_100;
  uint uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 auStack_e8 [7];
  undefined1 uStack_b0;
  undefined1 uStack_a0;
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  
  uStack_f8 = param_1[1];
  puVar2 = auStack_e8;
  puVar1 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  pcStack_130 = fn_823CCBA8;
  uStack_12c = 0;
  puVar3 = (undefined8 *)(param_2 + -2);
  uStack_100 = 0x823ccba800000000;
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_b0 = param_3;
  uStack_a0 = param_4;
  fn_82F68CC0(auStack_90,param_5,0x4c);
  uStack_40 = param_6;
  puVar1 = (undefined4 *)fn_8265C9E0(0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B7924;
    fn_82F68CC0(puVar1 + 4,&uStack_100,0xd0);
    uStack_12c = param_2[1];
    pcStack_130 = (code *)*param_2;
    puStack_110 = puVar1;
    lVar4 = fn_823F05B8((ulonglong)param_1[1] + 0xa68,&pcStack_130);
    fn_8227CB30(lVar4 + 0x18,auStack_120);
    fn_82359C18(auStack_120);
    fn_823831D8((ulonglong)*param_1 + 0x710);
    return;
  }
  uStack_124 = 0;
  ppuStack_128 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_128);
}


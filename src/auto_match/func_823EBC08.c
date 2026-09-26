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
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_90;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CFCE8();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78C4;
extern unsigned int stack0x00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack00000068;
extern unsigned int uStack_40;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;


void fn_823EBC08(double param_1,int param_2,code *param_3,undefined4 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

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
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 in_stack_00000097;
  code *pcStack_f0;
  undefined4 uStack_ec;
  undefined **ppuStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 *puStack_d0;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  code *pcStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  float fStack_90;
  undefined8 auStack_88 [9];
  undefined1 uStack_40;
  
  uStack_b8 = *(undefined4 *)(param_2 + 4);
  puVar3 = (undefined8 *)&stack0x00000048;
  pcStack_f0 = fn_823CFCE8;
  uStack_ec = 0;
  puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_c0 = 0x823cfce800000000;
  puVar2 = auStack_88;
  fStack_90 = (float)param_1;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_40 = in_stack_00000097;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  uStack00000068 = param_9;
  pcStack_b0 = param_3;
  uStack_a8 = param_4;
  puVar1 = (undefined4 *)fn_8265C9E0(0xa0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B78C4;
    fn_82F68CC0(puVar1 + 4,&uStack_c0,0x90);
    pcStack_f0 = param_3;
    uStack_ec = param_4;
    puStack_d0 = puVar1;
    lVar4 = fn_823F05B8((ulonglong)*(uint *)(param_2 + 4) + 0xa38,&pcStack_f0);
    fn_8227CB30(lVar4 + 0x18,auStack_e0);
    fn_82359C18(auStack_e0);
    return;
  }
  uStack_e4 = 0;
  ppuStack_e8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_e8);
}


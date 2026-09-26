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
extern unsigned int *auStack_140;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CDEB0();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B7894;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack_108;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_144;
extern unsigned int uStack_14c;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;


void fn_823EB9E0(int param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined2 param_8)

{
  int in_r0;
  undefined4 *puVar2;
  longlong lVar1;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  code *pcStack_150;
  undefined4 uStack_14c;
  undefined **ppuStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  undefined4 *puStack_130;
  undefined8 uStack_120;
  undefined4 uStack_118;
  code *pcStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [176];
  
  uStack_118 = *(undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  pcStack_150 = fn_823CDEB0;
  uStack_14c = 0;
  uStack_120 = 0x823cdeb000000000;
  uStack_c0 = in_stack_0000006c;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  pcStack_110 = param_2;
  uStack_108 = param_3;
  uStack_e8 = param_5;
  uStack_e0 = param_6;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  fn_82F68CC0(auStack_b0,in_stack_00000074,0x60);
  puVar2 = (undefined4 *)fn_8265C9E0(0xe0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B7894;
    fn_82F68CC0(puVar2 + 4,&uStack_120,0xd0);
    pcStack_150 = param_2;
    uStack_14c = param_3;
    puStack_130 = puVar2;
    lVar1 = fn_823F05B8((ulonglong)*(uint *)(param_1 + 4) + 0xa18,&pcStack_150);
    fn_8227CB30(lVar1 + 0x18,auStack_140);
    fn_82359C18(auStack_140);
    return;
  }
  uStack_144 = 0;
  ppuStack_148 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_148);
}


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
extern unsigned int *auStack_110;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823CF430();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B78AC;
extern unsigned int stack0x00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;
extern unsigned int uStack00000058;
extern unsigned int uStack00000060;
extern unsigned int uStack_114;
extern unsigned int uStack_11c;
extern unsigned int uStack_d8;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


void fn_823EBB00(int param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined4 in_stack_00000084;
  code *pcStack_120;
  undefined4 uStack_11c;
  undefined **ppuStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined4 *puStack_100;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  code *pcStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 auStack_c8 [9];
  undefined1 auStack_80 [128];
  
  uStack_e8 = *(undefined4 *)(param_1 + 4);
  puVar3 = (undefined8 *)&stack0x00000038;
  uStack_11c = 0;
  pcStack_120 = fn_823CF430;
  puVar1 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_f0 = 0x823cf43000000000;
  puVar2 = auStack_c8;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack00000040 = param_4;
  uStack00000048 = param_5;
  uStack00000050 = param_6;
  uStack00000058 = param_7;
  uStack00000060 = param_8;
  pcStack_e0 = param_2;
  uStack_d8 = param_3;
  fn_82F68CC0(auStack_80,in_stack_00000084,0x48);
  puVar1 = (undefined4 *)fn_8265C9E0(0xd0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B78AC;
    fn_82F68CC0(puVar1 + 4,&uStack_f0,0xc0);
    pcStack_120 = param_2;
    uStack_11c = param_3;
    puStack_100 = puVar1;
    lVar4 = fn_823F05B8((ulonglong)*(uint *)(param_1 + 4) + 0xa28,&pcStack_120);
    fn_8227CB30(lVar4 + 0x18,auStack_110);
    fn_82359C18(auStack_110);
    return;
  }
  uStack_114 = 0;
  ppuStack_118 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_118);
}


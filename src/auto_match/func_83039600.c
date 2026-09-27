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
extern int fn_82FAB9C0();
extern int fn_83032B40();
extern int fn_83032D88();
extern unsigned int iStack_5c;
extern unsigned int iStack_e0;
extern unsigned int iStack_e8;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832643DC;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_83039600(int param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  byte bStack_e4;
  byte bStack_e3;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  struct { undefined4 first; undefined4 second; } stack_pair_d0;

  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  
  piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
  if (piVar4 == (int *)0x0) {
    uVar3 = 2;
  }
  else {
    iStack_e8 = param_1 + 0x17c;
    uStack_f0 = *(undefined4 *)(param_1 + 0x58);
    uStack_ec = *(undefined4 *)(param_1 + 0x5c);
    bStack_e4 = *(byte *)(param_1 + 0x60) >> 7;
    uStack_dc = *(undefined4 *)(param_1 + 0x130);
    bStack_e3 = *(byte *)(param_1 + 0x60) >> 6 & 1;
    iStack_e0 = 0;
    iVar5 = fn_83032B40();
    iVar2 = iStack_e0;
    bVar1 = iStack_e0 != 0;
    iStack_e0 = iVar5;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    stack_pair_d0.second = *(undefined4 *)(param_1 + 0x1d4);
    uStack_c0 = *(undefined8 *)(param_1 + 0x40);
    uStack_b8 = *(undefined8 *)(param_1 + 0x48);
    uStack_b0 = *(undefined8 *)(param_1 + 0x50);
    uStack_c8 = *(undefined4 *)(param_1 + 0x70);
    iStack_5c = param_3 * 0x30;
    uStack_54 = *(undefined4 *)(param_1 + 100);
    puStack_58 = &uStack_f0;
    puStack_c4 = &uStack_d8;
    stack_pair_d0.first = 2;
    uStack_64 = 0;
    uStack_50 = 0;
    uStack_a8 = 0;
    uStack_d8 = 0;
    uStack_d4 = 9;
    uStack_60 = 0;
    uStack_4f = 0;
    uVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,&stack_pair_d0.first);
    if ((*(byte *)(param_1 + 0xd9) & 0x20) != 0) {
      *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) | 0x10;
    }
    (**(code **)(*piVar4 + 8))(piVar4);
    lbl_832643DC = lbl_832643DC + 1;
    if (iStack_e0 != 0) {
      fn_83032D88();
    }
  }
  return uVar3;
}


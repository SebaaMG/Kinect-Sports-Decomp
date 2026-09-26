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
extern int iRam831bc8e0;
extern unsigned int iStack_4c;
extern unsigned int iStack_bc;
extern unsigned int iStack_e0;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e3;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_830149A0(int param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
    if (piVar4 == (int *)0x0) {
      return 0xf;
    }
    puStack_e8 = &uStack_d0;
    uStack_d8 = 0;
    uStack_d4 = 4;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e4 = 0;
    uStack_e3 = 0;
    iStack_e0 = 0;
    uStack_dc = 0;
    iVar5 = fn_83032B40();
    iVar2 = iStack_e0;
    bVar1 = iStack_e0 != 0;
    iStack_e0 = iVar5;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    if (iStack_e0 != 0) {
      uStack_b0 = *(undefined8 *)(param_1 + 0x40);
      uStack_a8 = *(undefined8 *)(param_1 + 0x48);
      uStack_a0 = *(undefined8 *)(param_1 + 0x50);
      uStack_b8 = *(undefined4 *)(param_1 + 0x3c);
      iStack_4c = param_3 * 0x30;
      puStack_b4 = &uStack_d8;
      uStack_54 = 0;
      puStack_48 = &uStack_f0;
      uStack_40 = 0;
      uStack_98 = 0;
      uStack_c0 = 2;
      uStack_50 = 0;
      uStack_3f = 1;
      iVar2 = *(int *)(param_1 + 0x7c);
      while (iVar5 = iRam831bc8e0, iVar2 == 0) {
        iRam831bc8e0 = iVar5 + 1;
        *(int *)(param_1 + 0x7c) = iVar5;
        iVar2 = iVar5;
      }
      uStack_44 = *(undefined4 *)(param_1 + 0x7c);
      iRam831bc8e0 = iVar5;
      iStack_bc = param_1;
      uVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,&uStack_c0);
      (**(code **)(*piVar4 + 8))(piVar4);
      if (iStack_e0 == 0) {
        return uVar3;
      }
      fn_83032D88();
      return uVar3;
    }
    (**(code **)(*piVar4 + 8))(piVar4);
    if (iStack_e0 != 0) {
      fn_83032D88();
    }
  }
  return 2;
}


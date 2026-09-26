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
extern unsigned int *auStack_b8;
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern int fn_82FF0BA8();
extern int fn_8301B7B8();
extern int fn_83032B08();
extern int fn_83032D88();
extern unsigned int iStack_f0;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_832643DC;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_fc;


undefined8 fn_830335A0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar4;
  undefined8 uVar3;
  int *piVar5;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  byte bStack_f4;
  byte bStack_f3;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [72];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  
  uStack_110 = *(undefined4 *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x80);
  uStack_10c = 4;
  if (iVar2 != 0) {
    if ((*(uint *)(iVar2 + 0x1e0) & 0xf0000000) == 0x20000000) {
      uStack_10c = 1;
    }
    fn_82FF0BA8(iVar2,&uStack_110);
  }
  piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,*(undefined4 *)(param_1 + 0x10));
  if (piVar4 == (int *)0x0) {
    uVar3 = 0xf;
  }
  else {
    uStack_100 = *(undefined4 *)(param_1 + 0x20);
    piVar5 = (int *)(param_1 + 0x2c);
    uStack_fc = *(undefined4 *)(param_1 + 0x24);
    bStack_f4 = *(byte *)(param_1 + 0x28) >> 7;
    uStack_ec = *(undefined4 *)(param_1 + 0x9c);
    bStack_f3 = *(byte *)(param_1 + 0x28) >> 6 & 1;
    iVar2 = *(int *)(param_1 + 0x34);
    iStack_f0 = 0;
    piStack_f8 = piVar5;
    if (iVar2 != 0) {
      fn_83032B08(iVar2);
    }
    bVar1 = iStack_f0 != 0;
    iStack_f0 = iVar2;
    if (bVar1) {
      fn_83032D88();
    }
    uStack_60 = 0;
    fn_82F68CC0(auStack_b8,param_1 + 0x38,0x48);
    uStack_d8 = *(undefined4 *)(param_2 + 0x34);
    uStack_d0 = *(undefined8 *)(param_2 + 0x18);
    uStack_c8 = *(undefined8 *)(param_2 + 0x20);
    puStack_68 = &uStack_100;
    uStack_c0 = *(undefined8 *)(param_2 + 0x28);
    puStack_d4 = &uStack_110;
    uStack_6c = *(undefined4 *)(param_2 + 0x10);
    uStack_dc = *(undefined4 *)(param_1 + 0x98);
    uStack_70 = *(undefined4 *)(param_1 + 0x88);
    uStack_5f = *(undefined1 *)(param_1 + 0x91);
    uStack_64 = *(undefined4 *)(param_1 + 0x8c);
    uStack_e0 = 1;
    uVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,&uStack_e0);
    lbl_832643DC = lbl_832643DC + 1;
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (iVar2 != 0) {
      fn_83032D88();
    }
    if (*piVar5 != 0) {
      fn_8301B7B8(lbl_832642F8);
      *piVar5 = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa0) + 8))();
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    (**(code **)(*piVar4 + 8))(piVar4);
    if (iStack_f0 != 0) {
      fn_83032D88();
    }
  }
  return uVar3;
}


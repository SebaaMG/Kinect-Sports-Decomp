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
extern unsigned int *auStack_c0;
extern int fn_82681838();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826953D8();
extern int fn_82695750();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696728();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826ADE60();
extern unsigned int iStack_a4;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8 fn_826979D0(undefined8 param_1,char *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar5;
  char cVar9;
  int *piVar6;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar7;
  byte *pbVar8;
  uint auStack_c0 [2];
  int iStack_b8;
  int iStack_b4;
  byte bStack_b0;
  int *piStack_a8;
  int iStack_a4;
  byte bStack_a0;
  byte abStack_90 [16];
  byte abStack_80 [16];
  byte abStack_70 [16];
  undefined **ppuStack_60;
  byte *pbStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  cVar9 = *param_2;
  if (((cVar9 != '\x06') && (cVar9 != '\a')) && (cVar9 != '\b')) {
    if (cVar9 == '\v') {
      fn_82696728(&iStack_b8);
      if (iStack_b8 != 0) {
        fn_82695750(param_1,&iStack_b8);
        if (((bStack_b0 & 2) == 0) && (iStack_b8 != 0)) {
          fn_826824B0();
        }
        iStack_b8 = 0;
        if ((bStack_b0 & 1) != 0) {
          return param_1;
        }
        if (iStack_b4 == 0) {
          return param_1;
        }
        fn_826824B0();
        return param_1;
      }
      iStack_b8 = 0;
      if (((bStack_b0 & 1) == 0) && (iStack_b4 != 0)) {
        fn_826824B0();
      }
      iStack_b4 = 0;
    }
    fn_82695DA0(param_1,param_2);
    return param_1;
  }
  abStack_80[0] = 0;
  piVar5 = (int *)fn_82696AD0(param_2,param_3);
  if (((param_3 == (int *)0x0) || (piVar5 == (int *)0x0)) ||
     (cVar9 = (**(code **)(*piVar5 + 0x2c))
                        (piVar5,param_3 + 0x1e,(ulonglong)(uint)param_3[0x1e] + 0x158,abStack_80),
     cVar9 == '\0')) {
    abStack_90[0] = 0;
    if ((*param_2 == '\a') && (*(int *)(param_2 + 4) != 0)) {
      uVar3 = fn_826953D8(param_2,param_3);
      fn_82681838(abStack_90,uVar3);
    }
    else {
      if ((*param_2 == '\x06') &&
         ((iVar2 = *(int *)(param_2 + 4), iVar2 != 0 &&
          (lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 4))(iVar2 + 0x10,param_3), lVar4 != 0)))) {
        uVar7 = fn_82694700((ulonglong)(uint)param_3[0x1e] + 0x254);
        *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
        auStack_c0[0] = uVar7;
        fn_82681838(abStack_90,auStack_c0);
        lVar4 = (ulonglong)*(uint *)(uVar7 + 8) - 1;
        *(int *)(uVar7 + 8) = (int)lVar4;
      }
      else {
        fn_82696D38(auStack_c0,param_2,param_3,0xffffffffffffffff,0);
        fn_82681838(abStack_90,auStack_c0);
        lVar4 = (ulonglong)*(uint *)(auStack_c0[0] + 8) - 1;
        *(int *)(auStack_c0[0] + 8) = (int)lVar4;
        uVar7 = auStack_c0[0];
      }
      if (lVar4 == 0) {
        fn_826944C8(uVar7);
      }
    }
    fn_82695DA0(param_1,abStack_90);
    if (abStack_90[0] < 5) goto LAB_82697d40;
    pbVar8 = abStack_90;
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0x31);
    abStack_70[0] = 0;
    *(ushort *)(param_3 + 0x31) = uVar1 + 1;
    if (uVar1 < 0xff) {
      fn_82696B20(&piStack_a8,abStack_80,param_3);
      piVar6 = (int *)0x0;
      if (piStack_a8 != (int *)0x0) {
        pbStack_5c = abStack_70;
        uStack_4c = 0;
        ppuStack_60 = &lbl_8200579C;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        piStack_58 = piVar5;
        piStack_48 = param_3;
        (**(code **)(*piStack_a8 + 0x28))(piStack_a8,&ppuStack_60,iStack_a4,0);
        fn_826828D8(&ppuStack_60);
        piVar6 = piStack_a8;
      }
      if (((bStack_a0 & 2) == 0) && (piVar6 != (int *)0x0)) {
        fn_826824B0();
      }
      piStack_a8 = (int *)0x0;
      if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
        fn_826824B0();
      }
      iStack_a4 = 0;
    }
    else {
      cVar9 = (**(code **)(*param_3 + 4))(param_3);
      if (cVar9 != '\0') {
        fn_826ADE60(param_3,0xffffffff82006218);
      }
    }
    *(short *)(param_3 + 0x31) = *(short *)(param_3 + 0x31) + -1;
    fn_82695DA0(param_1,abStack_70);
    if (abStack_70[0] < 5) goto LAB_82697d40;
    pbVar8 = abStack_70;
  }
  fn_826959C8(pbVar8);
LAB_82697d40:
  if (4 < abStack_80[0]) {
    fn_826959C8(abStack_80);
  }
  return param_1;
}


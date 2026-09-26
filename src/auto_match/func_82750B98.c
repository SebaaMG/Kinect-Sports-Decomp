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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_827501D0();
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_e8;
extern unsigned int uStack_e9;
extern unsigned int uStack_ea;
extern unsigned int uStack_eb;
extern unsigned int uStack_ec;
extern unsigned int uStack_ed;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;


void fn_82750B98(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  int *piVar9;
  uint *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x27)) {
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x3c,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_827501D0(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar5);
  uVar1 = *(undefined1 *)(iVar5 + 0x38);
  *(undefined2 *)(iVar5 + 0x34) = 0;
  *(undefined2 *)(iVar5 + 0x36) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0xff0000;
  *(undefined1 *)(iVar5 + 0x38) = uVar1;
  *(undefined1 *)(iVar5 + 0x38) = 0xff;
  *(undefined1 *)(iVar5 + 0x31) = 0x60;
  *(undefined1 *)(iVar5 + 0x32) = 0x60;
  *(undefined1 *)(iVar5 + 0x33) = 0x20;
  *(byte *)(iVar5 + 0x30) = *(byte *)(iVar5 + 0x30) & 0x9f;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    uVar6 = fn_82697700(uVar4,uVar6);
    uVar1 = *(undefined1 *)(iVar5 + 0x38);
    *(undefined4 *)(iVar5 + 0x38) = uVar6;
    *(undefined1 *)(iVar5 + 0x38) = uVar1;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      dVar12 = (double)fn_826972E0(uVar4,uVar6);
      uStack_e8 = (longlong)((float)dVar12 * lbl_82005CCC);
      *(undefined1 *)(iVar5 + 0x38) = (undefined1)uStack_e8;
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar6 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,2);
        dVar12 = (double)fn_826972E0(uVar4,uVar6);
        dVar14 = (double)lbl_82011638;
        dVar13 = (double)lbl_82002C5C;
        lVar11 = (longlong)((double)(float)dVar12 * dVar14 + dVar13);
        uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)lVar11)) & ((U64)0xFFFFFFFF)) << 32));
        if (0xfe < (((U64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
          uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0xff)) & ((U64)0xFFFFFFFF)) << 32));
        }
        *(char *)(iVar5 + 0x31) = (char)(((U64)(uStack_e8) >> 32) & 0xFFFFFFFF);
        uStack_e8 = lVar11;
        if (3 < *(int *)(param_1 + 0x1c)) {
          uVar6 = *(undefined4 *)(param_1 + 0x18);
          uVar4 = fn_826957D0(param_1,3);
          dVar12 = (double)fn_826972E0(uVar4,uVar6);
          lVar11 = (longlong)((double)(float)dVar12 * dVar14 + dVar13);
          uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)lVar11)) & ((U64)0xFFFFFFFF)) << 32));
          if (0xfe < (((U64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
            uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0xff)) & ((U64)0xFFFFFFFF)) << 32));
          }
          *(char *)(iVar5 + 0x32) = (char)(((U64)(uStack_e8) >> 32) & 0xFFFFFFFF);
          uStack_e8 = lVar11;
          if (4 < *(int *)(param_1 + 0x1c)) {
            uVar6 = *(undefined4 *)(param_1 + 0x18);
            uVar4 = fn_826957D0(param_1,4);
            dVar12 = (double)fn_826972E0(uVar4,uVar6);
            lVar11 = (longlong)((double)(float)dVar12 * dVar14 + dVar13);
            uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)lVar11)) & ((U64)0xFFFFFFFF)) << 32));
            if (0xfe < (((U64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
              uStack_e8 = ((((U64)(uStack_e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(0xff)) & ((U64)0xFFFFFFFF)) << 32));
            }
            *(char *)(iVar5 + 0x33) = (char)(((U64)(uStack_e8) >> 32) & 0xFFFFFFFF);
            iVar2 = *(int *)(param_1 + 0x1c);
            uStack_e8 = lVar11;
            if (((5 < iVar2) && (6 < iVar2)) && (7 < iVar2)) {
              uVar6 = *(undefined4 *)(param_1 + 0x18);
              uVar4 = fn_826957D0(param_1,7);
              cVar7 = fn_82695608(uVar4,uVar6);
              if (cVar7 == '\0') {
                bVar8 = *(byte *)(iVar5 + 0x30) & 0xdf;
              }
              else {
                bVar8 = *(byte *)(iVar5 + 0x30) | 0x20;
              }
              *(byte *)(iVar5 + 0x30) = bVar8;
            }
          }
        }
      }
    }
  }
  uStack_ee = 0;
  auStack_c0[0] = 10;
  puVar10 = (uint *)(*(int *)(param_1 + 0x18) + 0x78);
  piVar9 = (int *)(iVar5 + 0x10);
  fn_82681728(&iStack_d0,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                    0xffffffff821cdae4);
  (**(code **)(*(int *)(iVar5 + 0x10) + 0x28))(piVar9,puVar10,&iStack_d0,auStack_c0,&uStack_ee);
  lVar11 = (ulonglong)*(uint *)(iStack_d0 + 8) - 1;
  *(int *)(iStack_d0 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d0);
  }
  fn_82696330(auStack_c0);
  auStack_a0[0] = 10;
  uStack_ef = 0;
  fn_82681728(&iStack_c4,(ulonglong)*puVar10 + 0x254,0xffffffff821c81ec);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_c4,auStack_a0,&uStack_ef);
  lVar11 = (ulonglong)*(uint *)(iStack_c4 + 8) - 1;
  *(int *)(iStack_c4 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_c4);
  }
  fn_82696330(auStack_a0);
  auStack_60[0] = 10;
  uStack_ea = 0;
  fn_82681728(&iStack_d8,(ulonglong)*puVar10 + 0x254,0xffffffff820063e8);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_d8,auStack_60,&uStack_ea);
  lVar11 = (ulonglong)*(uint *)(iStack_d8 + 8) - 1;
  *(int *)(iStack_d8 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d8);
  }
  fn_82696330(auStack_60);
  auStack_80[0] = 10;
  uStack_ec = 0;
  fn_82681728(&iStack_c8,(ulonglong)*puVar10 + 0x254,0xffffffff820063e0);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_c8,auStack_80,&uStack_ec);
  lVar11 = (ulonglong)*(uint *)(iStack_c8 + 8) - 1;
  *(int *)(iStack_c8 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_c8);
  }
  fn_82696330(auStack_80);
  auStack_b0[0] = 10;
  uStack_f0 = 0;
  fn_82681728(&iStack_e0,(ulonglong)*puVar10 + 0x254,0xffffffff82013864);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_e0,auStack_b0,&uStack_f0);
  lVar11 = (ulonglong)*(uint *)(iStack_e0 + 8) - 1;
  *(int *)(iStack_e0 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_e0);
  }
  fn_82696330(auStack_b0);
  auStack_90[0] = 10;
  uStack_ed = 0;
  fn_82681728(&iStack_dc,(ulonglong)*puVar10 + 0x254,0xffffffff820138b8);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_dc,auStack_90,&uStack_ed);
  lVar11 = (ulonglong)*(uint *)(iStack_dc + 8) - 1;
  *(int *)(iStack_dc + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_dc);
  }
  fn_82696330(auStack_90);
  auStack_70[0] = 10;
  uStack_eb = 0;
  fn_82681728(&iStack_d4,(ulonglong)*puVar10 + 0x254,0xffffffff82013900);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_d4,auStack_70,&uStack_eb);
  lVar11 = (ulonglong)*(uint *)(iStack_d4 + 8) - 1;
  *(int *)(iStack_d4 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d4);
  }
  fn_82696330(auStack_70);
  auStack_50[0] = 10;
  uStack_e9 = 0;
  fn_82681728(&iStack_cc,(ulonglong)*puVar10 + 0x254,0xffffffff820138b0);
  (**(code **)(*piVar9 + 0x28))(piVar9,puVar10,&iStack_cc,auStack_50,&uStack_e9);
  lVar11 = (ulonglong)*(uint *)(iStack_cc + 8) - 1;
  *(int *)(iStack_cc + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_cc);
  }
  fn_82696330(auStack_50);
  fn_826824B0(iVar5);
  return;
}


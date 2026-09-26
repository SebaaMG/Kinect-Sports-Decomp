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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826BC950();
extern int fn_82745028();
extern int fn_82745128();
extern int fn_827451A8();
extern int fn_827459D8();
extern int fn_82746C20();
extern unsigned int lbl_82005710;


void fn_82747690(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double *pdVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  cVar6 = fn_82695468(param_1,0x11);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    lVar8 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82746C20(uVar3,*(undefined4 *)(param_1 + 0x18));
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar3);
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_82745128(uVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff831f1308);
    }
    else {
      dVar11 = (double)fn_826BC950();
      dVar12 = (double)fn_826BC950();
      dVar13 = (double)fn_826BC950();
      dStack_c0 = (double)fn_826BC950();
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      dStack_b8 = dVar13;
      dStack_b0 = dVar12;
      dStack_a8 = dVar11;
      uVar4 = fn_826957D0(param_1,0);
      lVar5 = fn_82696958(uVar4,uVar1);
      if (lVar5 != 0) {
        pdVar7 = &dStack_90;
        dStack_a0 = lbl_82005710;
        lVar10 = 4;
        dStack_98 = lbl_82005710;
        dStack_90 = lbl_82005710;
        dStack_88 = lbl_82005710;
        do {
          pdVar7 = pdVar7 + 2;
          *(undefined1 *)pdVar7 = 0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        fn_827459D8(lVar8,*(undefined4 *)(param_1 + 0x18),&dStack_a0);
        fn_82745028(*(undefined4 *)(param_1 + 0x18),lVar5,auStack_80);
        dVar11 = (double)fn_826972E0(auStack_50,*(undefined4 *)(param_1 + 0x18));
        dVar12 = (double)fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
        dVar13 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
        dStack_c0 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18));
        dStack_a8 = dVar13 + dVar11;
        dStack_b0 = dVar12 + dStack_c0;
        if (dStack_a0 <= dStack_c0) {
          dStack_c0 = dStack_a0;
        }
        if (dStack_b0 < dStack_90) {
          dStack_b0 = dStack_90;
        }
        dStack_b8 = dVar13;
        if (dStack_98 <= dVar13) {
          dStack_b8 = dStack_98;
        }
        if (dStack_a8 < dStack_88) {
          dStack_a8 = dStack_88;
        }
        uVar14 = fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18));
        if (((uVar14 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
           (bVar2 = true, (uVar14 & 0xfffffffffffff) == 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          dStack_c0 = (double)fn_826BC950();
        }
        uVar14 = fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
        if (((uVar14 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
           (bVar2 = true, (uVar14 & 0xfffffffffffff) == 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          dStack_b8 = (double)fn_826BC950();
        }
        puVar9 = auStack_40;
        lVar8 = 3;
        do {
          puVar9 = puVar9 + -0x10;
          fn_82696330(puVar9);
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      fn_827451A8(uVar3,*(undefined4 *)(param_1 + 0x18),&dStack_c0);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826824B0(uVar3);
    }
  }
  return;
}


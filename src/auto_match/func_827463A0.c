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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82745028();
extern int fn_827459D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;


void fn_827463A0(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar5;
  char cVar6;
  undefined8 uVar3;
  longlong lVar4;
  double *pdVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar5 = fn_82F6A548();
  cVar6 = fn_82695468(iVar5,0x11);
  if (cVar6 == '\0') {
    fn_826954C0(iVar5,0xffffffff8200eef4,0,0);
  }
  else {
    uVar8 = 0;
    lVar9 = (ulonglong)*(uint *)(iVar5 + 8) - 0x10;
    if ((ulonglong)*(uint *)(iVar5 + 8) == 0) {
      lVar9 = 0;
    }
    if (0 < *(int *)(iVar5 + 0x1c)) {
      uVar1 = *(undefined4 *)(iVar5 + 0x18);
      uVar3 = fn_826957D0(iVar5,0);
      lVar4 = fn_82696958(uVar3,uVar1);
      dVar20 = lbl_82005710;
      if (lVar4 != 0) {
        pdVar7 = &dStack_a0;
        dStack_b0 = lbl_82005710;
        lVar11 = 4;
        dStack_a8 = lbl_82005710;
        dStack_a0 = lbl_82005710;
        dStack_98 = lbl_82005710;
        do {
          pdVar7 = pdVar7 + 2;
          *(undefined1 *)pdVar7 = 0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        fn_827459D8(lVar9,*(undefined4 *)(iVar5 + 0x18),&dStack_b0);
        fn_82745028(*(undefined4 *)(iVar5 + 0x18),lVar4,auStack_90);
        dVar13 = (double)fn_826972E0(auStack_60,*(undefined4 *)(iVar5 + 0x18));
        dVar14 = (double)fn_826972E0(auStack_70,*(undefined4 *)(iVar5 + 0x18));
        dVar15 = (double)fn_826972E0(auStack_80,*(undefined4 *)(iVar5 + 0x18));
        dVar16 = (double)fn_826972E0(auStack_90,*(undefined4 *)(iVar5 + 0x18));
        dVar13 = dVar15 + dVar13;
        dVar14 = dVar14 + dVar16;
        if ((((dStack_98 < dVar15) || (dVar13 < dStack_a8)) || (dVar14 < dStack_b0)) ||
           (bVar2 = true, dStack_a0 < dVar16)) {
          bVar2 = false;
        }
        dVar12 = dVar20;
        dVar17 = dVar20;
        dVar18 = dVar20;
        dVar19 = dVar20;
        if (bVar2) {
          if (dVar16 < dStack_b0) {
            dVar16 = dStack_b0;
          }
          dVar18 = dStack_a0;
          if (dVar14 < dStack_a0) {
            dVar18 = dVar14;
          }
          if (dVar15 < dStack_a8) {
            dVar15 = dStack_a8;
          }
          dVar12 = dStack_98;
          dVar17 = dVar16;
          dVar19 = dVar15;
          if (dVar13 < dStack_98) {
            dVar12 = dVar13;
          }
        }
        uVar8 = 1;
        if ((dVar18 - dVar17 == dVar20) || (dVar12 - dVar19 == dVar20)) {
          uVar8 = 0;
        }
        puVar10 = auStack_50;
        lVar9 = 3;
        do {
          puVar10 = puVar10 + -0x10;
          fn_82696330(puVar10);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
    puVar10 = *(undefined1 **)(iVar5 + 4);
    fn_826959C8(puVar10);
    puVar10[4] = uVar8;
    *puVar10 = 2;
  }
  fn_82F6A594();
  return;
}


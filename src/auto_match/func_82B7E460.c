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
extern unsigned int *auStack_10c;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82AB72A0();
extern int fn_82B6E130();
extern int fn_82B7E130();
extern int fn_82B7E210();
extern int fn_82B7E3A0();
extern int fn_82B7F488();
extern int fn_82B9FB10();
extern int fn_82B9FCF0();
extern int fn_82BA0170();
extern int fn_82BBD798();
extern int fn_82BC21F8();
extern int iRam8316d920;
extern unsigned int iStack_134;
extern unsigned int iStack_144;
extern unsigned int iStack_148;
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82011638;
extern unsigned int lbl_820DB6EC;
extern unsigned int lbl_820DB7FC;
extern unsigned int lbl_820DB800;
extern unsigned int uStack_138;
extern unsigned int uStack_140;


void fn_82B7E460(int param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar13;
  undefined4 uVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  uint *puVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double dVar21;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  int iStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  int aiStack_120 [5];
  undefined4 auStack_10c [28];
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  
  iVar11 = iRam8316d920;
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820db938,0x28f);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820db938,0x290);
  }
  lVar19 = 0x43;
  piVar17 = (int *)&lbl_820DB6EC;
  do {
    piVar17 = piVar17 + 1;
    iVar8 = *piVar17;
    iVar7 = iVar8 * 0x10;
    puVar3 = (undefined4 *)(iVar7 + iVar11);
    iVar7 = fn_82B7F488(param_1,*(undefined4 *)(iVar7 + iVar11));
    puVar16 = (uint *)(iVar7 + (puVar3[1] + 2) * 4);
    *puVar16 = *puVar16 & ~puVar3[2];
    iVar7 = fn_82B7F488(param_1,*puVar3);
    puVar16 = (uint *)(iVar7 + (puVar3[1] + 2) * 4);
    iVar8 = fn_82AB6EC0(param_2,iVar8);
    lVar19 = lVar19 + -1;
    *puVar16 = iVar8 << (puVar3[3] & 0x3f) & puVar3[2] | *puVar16;
  } while (lVar19 != 0);
  uVar9 = 0;
  do {
    uVar20 = 0;
    if (*(int *)(&lbl_820DB800 + uVar9) != 0) {
      do {
        iVar8 = fn_82B7E130(param_2,*(undefined4 *)(&lbl_820DB7FC + uVar9),uVar20,&uStack_140);
        puVar3 = (undefined4 *)(iVar8 * 0x10 + iVar11);
        iVar8 = fn_82B7F488(param_1,*(undefined4 *)(iVar8 * 0x10 + iVar11));
        puVar16 = (uint *)(iVar8 + (puVar3[1] + 2) * 4);
        *puVar16 = *puVar16 & ~puVar3[2];
        iVar8 = fn_82B7F488(param_1,*puVar3);
        uVar20 = uVar20 + 1;
        puVar16 = (uint *)(iVar8 + (puVar3[1] + 2) * 4);
        *puVar16 = (((U64)(uStack_140) >> 0) & 0xFFFFFFFF) << (puVar3[3] & 0x3f) & puVar3[2] | *puVar16;
      } while ((uVar20 & 0xffffffff) < (ulonglong)*(uint *)(&lbl_820DB800 + uVar9));
    }
    uVar9 = uVar9 + 8;
  } while (uVar9 < 0x30);
  iVar11 = *(int *)(param_1 + 0x18);
  uVar20 = 0;
  piVar17 = &iStack_150;
  puVar16 = (uint *)(iVar11 + 8);
  iStack_150 = iVar11 + 0xc;
  iStack_14c = iVar11 + 0x14;
  iStack_144 = iVar11 + 0x1c;
  iStack_148 = iVar11 + 0x18;
  do {
    uVar9 = fn_82AB71F0(param_2,0x21,uVar20);
    iVar8 = fn_82AB71F0(param_2,0x22,uVar20);
    if (iVar8 != 0) {
      fn_82BA0170(param_2,uVar20,&iStack_134);
      puVar1 = (uint *)*piVar17;
      *puVar1 = 0;
      if ((uVar9 & 0xfffff800) != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbb68,0xffffffff820db938,0x2ce);
      }
      *puVar1 = iStack_134 << 0x10 | *puVar1 | uVar9;
    }
    uVar20 = uVar20 + 1;
    piVar17 = piVar17 + 1;
  } while ((uVar20 & 0xffffffff) < 4);
  uVar9 = fn_82AB6EC0(param_2,0x2e);
  uVar10 = fn_82B7E3A0(param_2);
  if ((uVar9 & 0xfffff800) != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbb68,0xffffffff820db938,0x2e3);
  }
  *(uint *)(iVar11 + 0x10) =
       uVar9 & 0xfff | (uVar10 & 1) << 0x10 | *(uint *)(iVar11 + 0x10) & 0xfffef000;
  uVar9 = fn_82AB6EC0(param_2,0x28c);
  iVar11 = fn_82AB6EC0(param_2,0x3bd);
  if (iVar11 == 4) {
    if ((uVar9 & 0xf) != 0) {
      uVar15 = 0x2f3;
      uVar14 = 0xffffffff820dbb54;
LAB_82b7e798:
      fn_82AB15D0(0,0xffffffff820d2ea4,uVar14,0xffffffff820db938,uVar15);
    }
  }
  else if ((uVar9 & 0x1f) != 0) {
    uVar15 = 0x2f7;
    uVar14 = 0xffffffff820dbb40;
    goto LAB_82b7e798;
  }
  *puVar16 = uVar9 & 0x3fff | *puVar16 & 0xfffcc000;
  iVar11 = *(int *)(param_1 + 0x1c);
  iVar8 = fn_82AB6EC0(param_2,0x28e);
  if (iVar8 == 0) {
    *(undefined2 *)(iVar11 + 0x10) = 0;
  }
  else {
    iVar8 = fn_82AB6EC0(param_2,0x28e);
    if (iVar8 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbb10,0xffffffff820db938,0x312);
    }
    *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) | 0xffff0000;
  }
  iVar8 = fn_82AB6EC0(param_2,0x23c);
  *(undefined4 *)(iVar11 + 0x14) = 0;
  *(undefined4 *)(iVar11 + 0x18) = 0;
  *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) | 0xffff;
  lVar19 = 0;
  *(undefined2 *)(iVar11 + 0x10) = 0;
  uVar9 = 0;
  do {
    fn_82AB72A0(*(undefined4 *)(param_1 + 0x34),lVar19,aiStack_120);
    if (aiStack_120[0] != 0) {
      if (iStack_98 == 0) {
        if (iStack_94 != 0) {
          uVar10 = 0;
          do {
            uVar20 = fn_82AB71F0(param_2,0xd,auStack_10c[uVar10]);
            if (uVar10 == 0) {
              uVar20 = uVar20 & 1;
LAB_82b7e918:
              if (uVar20 != 0) {
                if (uVar9 < 0x20) {
                  *(uint *)(iVar11 + 0x14) = 1 << (uVar9 + uVar10 & 0x3f) | *(uint *)(iVar11 + 0x14)
                  ;
                }
                else {
                  *(uint *)(iVar11 + 0x18) =
                       1 << ((uVar9 + uVar10) - 0x20 & 0x3f) | *(uint *)(iVar11 + 0x18);
                }
              }
            }
            else {
              if (uVar10 == 1) {
                uVar20 = uVar20 & 2;
                goto LAB_82b7e918;
              }
              if (uVar10 < 3) {
                uVar20 = uVar20 & 4;
                goto LAB_82b7e918;
              }
              if (uVar10 == 3) {
                uVar20 = uVar20 & 8;
                goto LAB_82b7e918;
              }
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbac8,0xffffffff820db938,0x36d);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < 4);
        }
      }
      else if (iVar8 == 1) {
        *(ushort *)(iVar11 + 0x12) =
             (ushort)*(undefined4 *)(iVar11 + 0x10) & ~(ushort)(1 << ((uint)lVar19 & 0x3f));
      }
      if (iStack_9c == 0) {
        *(ushort *)(iVar11 + 0x10) =
             (ushort)(1 << ((uint)lVar19 & 0x3f)) | *(ushort *)(iVar11 + 0x10);
      }
    }
    uVar9 = uVar9 + 4;
    lVar19 = lVar19 + 1;
  } while (uVar9 < 0x40);
  iVar11 = *(int *)(param_1 + 0x20);
  iVar8 = fn_82AB6EC0(param_2,0x5f);
  *(uint *)(iVar11 + 0x18) = (uint)(iVar8 == 0) << 0x10 | *(uint *)(iVar11 + 0x18) & 0xfffeffff;
  fn_82B7E210(param_1,param_2,&iStack_150);
  uVar9 = 1;
  iVar8 = fn_82AB6EC0(param_2,0x23b);
  if (iVar8 == 2) {
    lVar19 = fn_82AB6EC0(param_2,0x23a);
    uVar9 = -(uint)(lVar19 != 2) & 1;
  }
  *(uint *)(iVar11 + 0x1c) = uVar9 << 3 | *(uint *)(iVar11 + 0x1c) & 0xffffffe7;
  uVar9 = fn_82AB6EC0(param_2,0x9a);
  *(uint *)(iVar11 + 0x20) = uVar9 & 0x3f | *(uint *)(iVar11 + 0x20) & 0xffffffc0;
  uVar9 = fn_82AB6EC0(param_2,0x1c);
  *(uint *)(iVar11 + 0x10) = uVar9 & 7 | *(uint *)(iVar11 + 0x10) & 0xfffffff8;
  uVar9 = fn_82AB6EC0(param_2,0x1b);
  *(uint *)(iVar11 + 0x10) = (uVar9 & 1) << 3 | *(uint *)(iVar11 + 0x10) & 0xfffffff7;
  fn_82AB6EC0(param_2,0x1d);
  *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) & 0xffffef;
  uVar9 = fn_82AB6EC0(param_2,0x29f);
  *(uint *)(iVar11 + 0x28) = *(uint *)(iVar11 + 0x28) & 0xfffffff8 | uVar9 & 7;
  *(uint *)(iVar11 + 0x14) = *(uint *)(iVar11 + 0x14) & 0xfffffff0;
  iVar11 = *(int *)(param_1 + 0x24);
  uVar14 = fn_82B6E130(param_2,0x80);
  dVar21 = (double)lbl_82002C5C;
  uVar13 = fn_82BC21F8((double)(float)(extraout_f1 * dVar21),uVar14,0xc,4);
  *(undefined2 *)(iVar11 + 8) = uVar13;
  *(undefined2 *)(iVar11 + 10) = uVar13;
  uVar14 = fn_82B6E130(param_2,0x81);
  uVar13 = fn_82BC21F8((double)(float)(extraout_f1_00 * dVar21),uVar14,0xc,4);
  *(undefined2 *)(iVar11 + 0xe) = uVar13;
  uVar14 = fn_82B6E130(param_2,0x82);
  uVar13 = fn_82BC21F8((double)(float)(extraout_f1_01 * dVar21),uVar14,0xc,4);
  *(undefined2 *)(iVar11 + 0xc) = uVar13;
  dVar21 = (double)fn_82B6E130(param_2,0x23d);
  uStack_140 = (longlong)(dVar21 * (double)lbl_82011638);
  *(short *)(iVar11 + 0x12) = (short)((((U64)(uStack_140) >> 32) & 0xFFFFFFFF) >> 1);
  iVar8 = fn_82AB6EC0(param_2,0x3cb);
  if (iVar8 != 1) goto LAB_82b7ee28;
  iVar8 = fn_82AB6EC0(param_2,0x3ce);
  iVar7 = 2;
  *(int *)(iVar11 + 0x18) = iVar8;
  if (iVar8 == 3) {
    *(undefined4 *)(iVar11 + 0x14) = 2;
  }
  else {
    *(undefined4 *)(iVar11 + 0x14) = 1;
  }
  dVar21 = (double)fn_82B6E130(param_2,0x3cd);
  *(float *)(iVar11 + 0x1c) = (float)dVar21;
  dVar21 = (double)fn_82B6E130(param_2,0x3cc);
  *(float *)(iVar11 + 0x20) = (float)dVar21;
  *(undefined4 *)(iVar11 + 0x24) = 0xe;
  uVar9 = fn_82AB6EC0(param_2,0x237);
  uVar10 = fn_82AB6EC0(param_2,0x238);
  uVar20 = fn_82AB6EC0(param_2,0x239);
  uVar18 = uVar20 + 1;
  if (uVar9 == 0) {
LAB_82b7ec08:
    iVar7 = 1;
  }
  else if (uVar9 != 1) {
    if ((uVar9 < 3) || (uVar9 == 3)) {
      iVar7 = 3;
    }
    else {
      if (4 < uVar9) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820db938,0x472);
        goto LAB_82b7ec08;
      }
      iVar7 = 4;
    }
  }
  iVar8 = iVar7;
  if (uVar10 != 0) {
    if (uVar10 == 1) {
      iVar8 = ((uint)LZCOUNT(uVar9 - 4) >> 5) + 1;
    }
    else {
      if (((2 < uVar10) && (uVar10 != 3)) && (4 < uVar10)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820db938,0x490);
      }
      iVar8 = 1;
    }
  }
  uVar2 = *(uint *)(iVar11 + 0x28);
  *(int *)(iVar11 + 0x2c) = iVar7;
  *(int *)(iVar11 + 0x30) = iVar8;
  uVar10 = (uVar10 & 7) << 0x10 | uVar2 & 0xfff83ff0;
  *(uint *)(iVar11 + 0x28) = uVar9 & 0xf | uVar10;
  cVar4 = (char)uVar18;
  if (*(int *)(iVar11 + 0x14) == 2) {
    *(undefined4 *)(iVar11 + 0x2c) = 1;
    *(undefined4 *)(iVar11 + 0x30) = 1;
    cVar5 = (char)iVar7 * cVar4;
    *(uint *)(iVar11 + 0x34) = *(uint *)(iVar11 + 0x34) & 0xfffffff0 | 7;
    *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) & 0xfffffff0 | 1;
    *(char *)(iVar11 + 0x36) = cVar5;
    *(undefined1 *)(iVar11 + 0x35) = 0;
    *(char *)(iVar11 + 0x3a) = cVar5;
    *(char *)(iVar11 + 0x39) = (char)iVar8 * cVar4;
    *(uint *)(iVar11 + 0x28) = uVar2 & 0xfff83ff0;
    *(uint *)(iVar11 + 0x3c) =
         (uint)((uVar20 & 0xffffffff) << 0x10) & 0xf0000 | (uint)(uVar20 & 0xf) |
         (uint)((uVar20 & 0xffffffff) << 0x18) & 0xf000000 |
         (uint)(((uVar18 & 0xf) << 4 | uVar20 & 0xf) << 8) |
         (uint)((uVar18 & 0xffffffff) << 0x15) & 0xe00000;
    *(uint *)(iVar11 + 0x40) = (uint)((uVar20 & 0xffffffff) << 0x18) & 0xf000000 | 0x60472707;
  }
  else if (*(int *)(iVar11 + 0x18) == 2) {
    *(undefined4 *)(iVar11 + 0x2c) = 4;
    *(undefined4 *)(iVar11 + 0x30) = 4;
    *(uint *)(iVar11 + 0x34) = *(uint *)(iVar11 + 0x34) & 0xfffffff0 | 1;
    *(undefined1 *)(iVar11 + 0x35) = 0;
    *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) | 0xf;
    *(uint *)(iVar11 + 0x28) = uVar10 | 0xd;
    *(undefined1 *)(iVar11 + 0x36) = 8;
    *(undefined4 *)(iVar11 + 0x3c) = 0x61412107;
    *(undefined1 *)(iVar11 + 0x3a) = 8;
    *(undefined1 *)(iVar11 + 0x39) = 8;
    *(undefined4 *)(iVar11 + 0x40) = 0x61462606;
  }
  else {
    *(undefined4 *)(iVar11 + 0x40) = 0;
    *(uint *)(iVar11 + 0x34) = *(uint *)(iVar11 + 0x34) & 0xfffffff0 | 7;
    *(uint *)(iVar11 + 0x3c) =
         (uint)((uVar20 & 0xffffffff) << 8) & 0xf00 |
         *(uint *)(iVar11 + 0x3c) & 0xfffff0f0 | (uint)uVar20 & 0xf;
    uVar9 = *(uint *)(iVar11 + 0x3c);
    *(char *)(iVar11 + 0x36) = (char)iVar7 * cVar4;
    *(char *)(iVar11 + 0x35) = (char)iVar8 * cVar4;
    uVar10 = (uint)((uVar20 & 0xf) << 0x10);
    *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) & 0xfffffff0;
    *(uint *)(iVar11 + 0x3c) = uVar10 | uVar9 & 0xfff0ffff;
    *(undefined1 *)(iVar11 + 0x3a) = 0;
    *(undefined1 *)(iVar11 + 0x39) = 0;
    uVar2 = (uint)((uVar20 & 0xf) << 0x18);
    *(uint *)(iVar11 + 0x3c) = uVar2 | uVar10 | uVar9 & 0xf0f0ff0f;
    uVar6 = (uint)((uVar18 & 0xffffffff) << 0xc) & 0xf000;
    *(uint *)(iVar11 + 0x3c) = uVar6 | uVar2 | uVar10 | uVar9 & 0xf0f00f0f;
    *(uint *)(iVar11 + 0x3c) =
         (uint)((uVar18 & 0xffffffff) << 0x15) & 0xe00000 | uVar6 | uVar2 | uVar10 | uVar9 & 0xf0f;
  }
LAB_82b7ee28:
  iVar11 = *(int *)(param_1 + 0x28);
  dVar21 = (double)fn_82B6E130(param_2,0x270);
  fStack_130 = (float)dVar21;
  dVar21 = (double)fn_82B6E130(param_2,0x271);
  fStack_12c = (float)dVar21;
  dVar21 = (double)fn_82B6E130(param_2,0x272);
  fStack_128 = (float)dVar21;
  dVar21 = (double)fn_82B6E130(param_2,0x273);
  fStack_124 = (float)dVar21;
  iVar8 = fn_82AB71F0(param_2,0x22,0);
  if (iVar8 != 0) {
    fn_82B9FCF0(param_2,0,&uStack_140);
  }
  uVar9 = fn_82B9FB10(&fStack_130,&iStack_150,(((U64)(uStack_140) >> 32) & 0xFFFFFFFF),uStack_138,0,
                            (((U64)(uStack_140) >> 0) & 0xFFFFFFFF) != 0);
  if (uVar9 < 9) {
    if (iStack_148 != iStack_150) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbaa4,0xffffffff820db938,0x556);
    }
    if (iStack_144 != iStack_14c) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dba84,0xffffffff820db938,0x557);
    }
    *(int *)(iVar11 + 0x84) = iStack_150;
    *(int *)(iVar11 + 0x80) = iStack_14c;
  }
  else {
    *(undefined4 *)(iVar11 + 0x84) = 0;
    *(undefined4 *)(iVar11 + 0x80) = 0;
  }
  fn_82B6E130(param_2,0x35);
  uVar12 = fn_82BBD798();
  *(undefined4 *)(iVar11 + 0x7c) = uVar12;
  uVar9 = fn_82AB6EC0(param_2,0x2a0);
  *(uint *)(iVar11 + 0x68) = uVar9 & 7 | *(uint *)(iVar11 + 0x68) & 0xfffffff8;
  uVar9 = fn_82AB6EC0(param_2,0x2a1);
  *(uint *)(iVar11 + 0x68) = (uVar9 & 7) << 4 | *(uint *)(iVar11 + 0x68) & 0xffffff8f;
  uVar9 = fn_82AB6EC0(param_2,0x26a);
  *(uint *)(iVar11 + 0x68) = (uVar9 & 1) << 8 | *(uint *)(iVar11 + 0x68) & 0xfffffeff;
  uVar9 = fn_82AB6EC0(param_2,0x37);
  *(uint *)(iVar11 + 0x68) = (uVar9 & 1) << 9 | *(uint *)(iVar11 + 0x68) & 0xfffffdff;
  uVar9 = fn_82AB6EC0(param_2,0x2a2);
  *(uint *)(iVar11 + 0x68) = (uVar9 & 3) << 0x14 | *(uint *)(iVar11 + 0x68) & 0xffcfffff;
  uVar12 = fn_82AB6EC0(param_2,0x2a3);
  *(undefined4 *)(iVar11 + 0x6c) = uVar12;
  uVar9 = fn_82AB6EC0(param_2,0x2a8);
  if ((uVar9 & 0x1f) != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dba6c,0xffffffff820db938,0x589);
  }
  *(uint *)(iVar11 + 0x70) = uVar9 & 0x3fff | *(uint *)(iVar11 + 0x70) & 0xffffc000;
  uVar9 = fn_82AB6EC0(param_2,0x2a9);
  *(uint *)(iVar11 + 0x70) = (uVar9 & 0x3fff) << 0x10 | *(uint *)(iVar11 + 0x70) & 0xc000ffff;
  uVar9 = fn_82AB6EC0(param_2,0x2a4);
  *(uint *)(iVar11 + 0x74) = uVar9 & 7 | *(uint *)(iVar11 + 0x74) & 0xfffffff8;
  uVar9 = fn_82AB6EC0(param_2,0x26e);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 1) << 3 | *(uint *)(iVar11 + 0x74) & 0xfffffff7;
  uVar9 = fn_82AB6EC0(param_2,0x26d);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 7) << 4 | *(uint *)(iVar11 + 0x74) & 0xffffff8f;
  uVar9 = fn_82AB6EC0(param_2,0x29e);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 0x3f) << 7 | *(uint *)(iVar11 + 0x74) & 0xffffe07f;
  uVar9 = fn_82AB6EC0(param_2,0x2a5);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 7) << 0xd | *(uint *)(iVar11 + 0x74) & 0xffff1fff;
  uVar9 = fn_82AB6EC0(param_2,0x2a6);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 0x3f) << 0x10 | *(uint *)(iVar11 + 0x74) & 0xffc0ffff;
  uVar9 = fn_82AB6EC0(param_2,0x2a7);
  *(uint *)(iVar11 + 0x74) = (uVar9 & 1) << 0x18 | *(uint *)(iVar11 + 0x74) & 0xfeffffff;
  uVar9 = fn_82AB6EC0(param_2,0x2aa);
  *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) & 0xfffffff8 | uVar9 & 7;
  uVar9 = fn_82AB6EC0(param_2,0x2ac);
  *(uint *)(iVar11 + 0x88) = (uVar9 & 7) << 4 | *(uint *)(iVar11 + 0x88) & 0xffffff8f;
  uVar9 = fn_82AB6EC0(param_2,0x2ab);
  *(uint *)(iVar11 + 0x88) = (uVar9 & 7) << 8 | *(uint *)(iVar11 + 0x88) & 0xfffff8ff;
  uVar9 = fn_82AB6EC0(param_2,0x2ad);
  *(undefined4 *)(iVar11 + 0x8c) = 0;
  *(undefined4 *)(iVar11 + 0x90) = 0xffffffff;
  *(uint *)(iVar11 + 0x88) = (uVar9 & 7) << 0xc | *(uint *)(iVar11 + 0x88) & 0xffff8fff;
  *puVar16 = *puVar16 & 0xfffcffff;
  *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) & 0xffffff8f;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}


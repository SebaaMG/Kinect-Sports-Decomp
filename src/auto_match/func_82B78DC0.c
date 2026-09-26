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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_5bb0;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82B6EAE8();
extern int fn_82B6FED0();
extern int fn_82B70070();
extern int fn_82B70420();
extern int fn_82B707F0();
extern int fn_82B70C48();
extern int fn_82B71160();
extern int fn_82B71AD0();
extern int fn_82B71F00();
extern int fn_82B721F8();
extern int fn_82B72678();
extern int fn_82B72BD0();
extern int fn_82B72FC8();
extern int fn_82B731F8();
extern int fn_82B73448();
extern int fn_82B73720();
extern int fn_82B74028();
extern int fn_82B74190();
extern int fn_82B74390();
extern int fn_82B74620();
extern int fn_82B74EF0();
extern int fn_82B750F0();
extern int fn_82B75468();
extern int fn_82B755B0();
extern int fn_82B75830();
extern int fn_82B75BC0();
extern int fn_82B75D30();
extern int fn_82B75EF0();
extern int fn_82B76170();
extern int fn_82B76540();
extern int fn_82B77F18();
extern int fn_82B78308();
extern int fn_82B78A90();
extern unsigned int iStack_130;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_104;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;


uint * fn_82B78DC0(undefined4 *param_1,uint *param_2,uint *param_3,int *param_4,longlong param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined2 uVar17;
  uint uVar16;
  ulonglong uVar18;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  int *piVar23;
  uint *puVar24;
  longlong lVar25;
  uint *puStack0000001c;
  int *piStack0000002c;
  uint auStack_5bb0 [5772];
  undefined1 *puStack_180;
  int iStack_130;
  int *piStack_12c;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_104;
  uint uStack_f8;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c0;
  
  uVar8 = ZEXT48(&stack0x00000000);
  piVar23 = (int *)param_1[7];
  uStack_ec = 0;
  iStack_130 = 0;
  puVar15 = (undefined1 *)((int)param_3 + -1);
  lVar25 = 0x820;
  do {
    puVar15 = puVar15 + 1;
    *puVar15 = 0;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  uVar16 = *param_2;
  if (((uVar16 & 0xffff) == 0x3e) || ((uVar16 & 0xffff) == 0x2a)) {
    *param_2 = uVar16 & 0xe000ffff;
  }
  iVar12 = (uVar16 & 0xffff) * 4;
  puVar19 = param_2 + 1;
  iStack_e8 = -0x7ce92510;
  uVar18 = (ulonglong)*(uint *)(iVar12 + -0x7ce92348);
  puStack0000001c = puVar19;
  piStack0000002c = param_4;
  puStack_180 = (undefined1 *)register0x0000000c;
  piStack_12c = piVar23;
  uStack_120 = uVar16;
  if (*(int *)(iVar12 + -0x7ce92510) != 0) {
    uVar10 = *puVar19;
    puVar19 = param_2 + 2;
    puStack0000001c = puVar19;
    uStack_11c = uVar10;
    if ((*(uint *)((int)((param_5 + 0xcdcU & 0xffffffff) << 2) + (int)piVar23) & 0x800) != 0) {
      if ((uVar10 >> 0x10 & 0x3f) == 0x17) {
        uStack_ec = uVar10 & 0xffff;
      }
      uVar9 = fn_82B6EAE8(param_1,piVar23 + 0x1060,uVar10 & 0xffff);
      uStack_11c = uVar9 & 0xffff | uVar10 & 0xffc40000 | 0x40000;
    }
    if ((uStack_11c & 0x400000) == 0) {
      uStack_118 = 0x55;
    }
    else {
      uStack_118 = *puVar19;
      puVar19 = param_2 + 3;
      puStack0000001c = puVar19;
    }
    if ((uStack_11c & 0x800000) == 0) {
      uStack_114 = 0;
    }
    else {
      uStack_114 = *puVar19;
      puVar19 = puVar19 + 1;
      puStack0000001c = puVar19;
    }
  }
  uVar10 = 0;
  puVar20 = puStack0000001c;
  if (uVar18 != 0) {
    lVar25 = uVar8 - 0x110;
    do {
      uVar16 = *puVar19;
      uVar9 = *(uint *)((int)((param_5 + 0xcdcU & 0xffffffff) << 2) + (int)piVar23);
      puVar20 = puVar19 + 1;
      puVar24 = (uint *)lVar25;
      *puVar24 = uVar16;
      if ((0x1000 << (uVar10 & 0x3f) & uVar9) != 0) {
        for (puVar1 = (undefined4 *)piVar23[0x1060]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[3]) {
          if ((puVar1[1] == (uVar16 & 0xffff)) && (puVar1[2] == (uVar16 >> 0x10 & 0x3f))) {
            uVar17 = (undefined2)*puVar1;
            goto LAB_82b78fac;
          }
        }
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x432);
        uVar17 = 0;
LAB_82b78fac:
        *(undefined2 *)((int)puVar24 + 2) = uVar17;
        *puVar24 = *puVar24 & 0xffc0ffff | 0x40000;
      }
      if ((*puVar24 & 0x400000) == 0) {
        puVar24[3] = 0x3210;
      }
      else {
        uVar16 = *puVar20;
        puVar20 = puVar19 + 2;
        puVar24[3] = uVar16;
      }
      if ((*puVar24 & 0x800000) == 0) {
        puVar24[6] = 0;
      }
      else {
        uVar16 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar24[6] = uVar16;
      }
      uVar10 = uVar10 + 1;
      lVar25 = lVar25 + 4;
      puVar19 = puVar20;
      uVar16 = uStack_120;
    } while (uVar10 < uVar18);
  }
  puStack0000001c = puVar20;
  uVar9 = uStack_110;
  uVar10 = uStack_11c;
  uVar21 = (ulonglong)uVar16;
  if (((uVar16 & 0xffff) == 0x47) && ((uStack_110 & 0x3f0000) == 0x30000)) {
    uVar21 = uVar21 & 0xffffffffffff0000 | 0x48;
    uStack_120 = (uint)uVar21;
  }
  iVar11 = (int)((param_5 + 0xcdcU & 0x3fffffff) << 2);
  iVar12 = 0;
  iStack_e4 = iVar11;
  if ((*(uint *)(iVar11 + (int)piVar23) & 8) != 0) {
    iStack_130 = 0;
    param_3 = (uint *)fn_82B76170(param_1,uVar8 - 0x120,piVar23 + 0x16ae,param_3,uVar8 - 0x130);
    iVar12 = iStack_130;
  }
  piVar7 = piStack_12c;
  iVar2 = iStack_130;
  if ((*(uint *)(iVar11 + (int)piVar23) & 1) == 0) {
    if (((*(uint *)(iVar11 + (int)piVar23) & 2) != 0) && (uVar18 != 0)) {
      lVar25 = uVar8 - 0x110;
      piVar23 = piStack_12c + 0x16ab;
      iVar11 = -(int)piStack_12c;
      do {
        puVar19 = (uint *)lVar25;
        if ((*puVar19 & 0x3f0000) == 0x10000) {
          uVar16 = *puVar19;
          iVar2 = *piVar23;
          *(undefined2 *)((int)param_3 + 2) = 0x41;
          *param_3 = *param_3 & 0xe000ffff;
          lVar22 = 2;
          *(short *)((int)param_3 + 6) = (short)iVar2;
          param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
          param_3 = param_3 + 2;
          do {
            uVar10 = *puVar19;
            if ((uVar10 & 0x3f0000) != 0x10000) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8e8,0xffffffff820da3b8,0x25fc);
            }
            *(short *)((int)param_3 + 2) = (short)uVar10;
            *param_3 = uVar10 & 0xff0000 | *param_3 & 0xff00ffff;
            puVar20 = param_3 + 1;
            if ((uVar10 & 0x400000) != 0) {
              param_3[1] = *(uint *)((int)piVar23 + (int)auStack_5bb0 + iVar11);
              puVar20 = param_3 + 2;
            }
            param_3 = puVar20;
            if ((uVar16 >> 0x17 & 1) != 0) {
              *param_3 = *(uint *)((int)piVar23 + (int)auStack_5bb0 + iVar11 + 0xc);
              param_3 = param_3 + 1;
            }
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          iVar12 = iVar12 + 1;
          *(ushort *)((int)puVar19 + 2) = (ushort)*piVar23;
          *puVar19 = *puVar19 & 0xff00ffff | 0x40000;
          puVar19[3] = 0x3210;
        }
        uVar18 = uVar18 - 1;
        piVar23 = piVar23 + 1;
        lVar25 = lVar25 + 4;
      } while (uVar18 != 0);
      uVar21 = (ulonglong)uStack_120;
      uVar9 = uStack_110;
      iVar2 = iVar12;
      uVar10 = uStack_11c;
    }
  }
  else if (uVar18 != 0) {
    lVar25 = uVar8 - 0x104;
    piVar23 = piStack_12c + 0x16ab;
    do {
      puVar19 = (uint *)lVar25;
      lVar22 = lVar25 + -0xc;
      if ((puVar19[-3] & 0x400000) != 0) {
        uVar16 = *puVar19;
        puVar20 = (uint *)lVar22;
        if ((((3 < (uVar16 & 7)) || (0x3f < (uVar16 & 0x70))) || (0x3ff < (uVar16 & 0x700))) ||
           (0x3fff < (uVar16 & 0x7000))) {
          lVar13 = lVar25 + 0xc;
          param_3 = (uint *)fn_82B750F0(lVar22,lVar25,lVar13,*piVar23,param_3);
          iVar12 = iVar12 + 2;
          *(short *)((int)lVar13 + -0x16) = (short)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        if ((*puVar19 & 0x10000) == 0x10000) {
          lVar13 = lVar25 + 0xc;
          param_3 = (uint *)fn_82B75468(lVar22,lVar25,lVar13,*piVar23,param_3);
          iVar12 = iVar12 + 1;
          *(short *)((int)lVar13 + -0x16) = (short)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        if ((*puVar19 & 0x20000) == 0x20000) {
          iVar11 = *piVar23;
          uVar16 = *puVar20;
          *(undefined2 *)((int)param_3 + 2) = 3;
          *param_3 = *param_3 & 0xe000ffff;
          *(short *)((int)param_3 + 6) = (short)iVar11;
          param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
          *(short *)((int)param_3 + 10) = (short)uVar16;
          uVar10 = param_3[2];
          uVar9 = *puVar19;
          param_3[2] = uVar10 & 0x400000 | uVar10 & 0xff00ffff | uVar16 & 0xbf0000 | 0x400000;
          param_3[3] = param_3[3] & 0xffff8888 | uVar9 & 0x7777;
          puVar24 = param_3 + 4;
          if ((uVar16 & 0x800000) != 0) {
            *puVar24 = puVar19[3];
            puVar24 = param_3 + 5;
          }
          *(undefined2 *)((int)puVar24 + 2) = 0;
          *puVar24 = *puVar24 & 0xff00ffff | 0x410000;
          iVar12 = iVar12 + 1;
          *(undefined1 *)puVar24 = 1;
          puVar24[1] = puVar24[1] & 0xffff0000 | 0xaaaa;
          param_3 = puVar24 + 2;
          *(ushort *)((int)puVar19 + -10) = (ushort)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        if ((*puVar19 & 0x40000) == 0x40000) {
          iVar11 = *piVar23;
          uVar16 = *puVar20;
          *(undefined2 *)((int)param_3 + 2) = 0x49;
          uVar10 = *puVar19;
          *param_3 = *param_3 & 0xe000ffff;
          *(short *)((int)param_3 + 6) = (short)iVar11;
          param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
          *(short *)((int)param_3 + 10) = (short)uVar16;
          param_3[2] = uVar16 & 0x800000 | uVar16 & 0x3f0000 | param_3[2] & 0xff40ffff | 0x400000;
          param_3[3] = param_3[3] & 0xffff8888 | uVar10 & 0x7777;
          puVar24 = param_3 + 4;
          if ((uVar16 & 0x800000) != 0) {
            *puVar24 = puVar19[3];
            puVar24 = param_3 + 5;
          }
          *(undefined2 *)((int)puVar24 + 2) = 2;
          iVar12 = iVar12 + 1;
          *puVar24 = *puVar24 & 0xff00ffff | 0x410000;
          *(undefined1 *)puVar24 = 1;
          puVar24[1] = puVar24[1] & 0xffff8888;
          param_3 = puVar24 + 2;
          *(ushort *)((int)puVar19 + -10) = (ushort)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        if ((*puVar19 & 0x80000) == 0x80000) {
          param_3 = (uint *)fn_82B755B0(param_1,lVar22,lVar25,lVar25 + 0xc,*piVar23,param_3);
          iVar12 = iVar12 + 3;
          *(ushort *)((int)puVar19 + -10) = (ushort)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        uVar16 = *puVar19;
        uVar10 = uVar16 >> 0x15 & 7;
        if (uVar10 != 0) {
          uVar5 = uVar21 & 0xffff;
          if (((((uVar5 == 0x5d) || (uVar5 == 0x5f)) ||
               ((uVar5 == 0x5e || ((uVar5 == 0x60 || (uVar5 == 0x50)))))) || (uVar5 == 0x3b)) &&
             (uVar10 == 4)) {
            uVar10 = fn_82AB71F0(param_1[5],0xe,uVar21 >> 0x10 & 0xf);
            *puVar19 = (uVar10 & 7) << 0x15 | uVar16 & 0xff1fffff;
            uVar21 = (ulonglong)uStack_120;
          }
          if ((*puVar19 & 0xe00000) != 0) {
            param_3 = (uint *)fn_82B75830(lVar22,lVar25,lVar25 + 0xc,*piVar23,param_3);
            iVar12 = iVar12 + 3;
            *(ushort *)((int)puVar19 + -10) = (ushort)*piVar23;
            *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
            *puVar19 = *puVar19 & 0xffffba98 | 0x3210;
            uVar21 = (ulonglong)uStack_120;
          }
        }
        if ((*puVar19 & 0x100000) == 0x100000) {
          iVar11 = *piVar23;
          *(undefined2 *)((int)param_3 + 2) = 0x41;
          uVar16 = 0;
          *param_3 = *param_3 & 0xe000ffff;
          *(short *)((int)param_3 + 6) = (short)iVar11;
          param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
          param_3 = param_3 + 2;
          do {
            uVar10 = *puVar20;
            uVar9 = *puVar19;
            *(short *)((int)param_3 + 2) = (short)uVar10;
            *param_3 = *param_3 & 0x400000 | *param_3 & 0xff00ffff | uVar10 & 0xbf0000 | 0x400000;
            puVar24 = param_3 + 1;
            uVar3 = *puVar24;
            uVar6 = uVar3 & 8;
            uVar4 = uVar9 & 0x77;
            *puVar24 = uVar6 | uVar3 & 0xffffff80 | uVar4;
            *puVar24 = uVar6 | uVar3 & 0xfffff880 | uVar4 | uVar9 & 0x700;
            uVar9 = uVar9 & 0x7000 | uVar6 | uVar3 & 0xffff8880 | uVar4 | uVar9 & 0x700;
            *puVar24 = uVar9;
            if (uVar16 == 1) {
              *puVar24 = uVar9 | 0x8888;
            }
            puVar24 = param_3 + 2;
            if ((uVar10 & 0x800000) != 0) {
              param_3[2] = *(uint *)((int)piVar23 + (int)auStack_5bb0 + (0xc - (int)piVar7));
              puVar24 = param_3 + 3;
            }
            param_3 = puVar24;
            uVar16 = uVar16 + 1;
          } while (uVar16 < 2);
          iVar12 = iVar12 + 1;
          *(ushort *)((int)puVar19 + -10) = (ushort)*piVar23;
          *puVar20 = *puVar20 & 0xff00ffff | 0x40000;
          *puVar19 = 0x3210;
          uVar21 = (ulonglong)uStack_120;
        }
        uVar16 = *puVar19;
        if (((((uVar16 & 8) == 8) || ((uVar16 & 0x80) == 0x80)) || ((uVar16 & 0x800) == 0x800)) ||
           ((uVar16 & 0x8000) == 0x8000)) {
          param_3 = (uint *)fn_82B75BC0(lVar22,lVar25,lVar25 + 0xc,*piVar23,param_3);
          iVar12 = iVar12 + 1;
        }
      }
      uVar18 = uVar18 - 1;
      piVar23 = piVar23 + 1;
      lVar25 = lVar25 + 4;
      uVar9 = uStack_110;
      iVar2 = iVar12;
      uVar10 = uStack_11c;
    } while (uVar18 != 0);
  }
  iStack_130 = iVar2;
  switch((int)(uVar21 & 0xffff) + -1) {
  case 0:
    param_3 = (uint *)fn_82B6FED0(uVar8 - 0x120,param_3);
    goto LAB_82b79ea0;
  default:
    uVar18 = (ulonglong)*(uint *)((int)((uVar21 & 0xffff) << 2) + iStack_e8 + 0x1c8);
    *param_3 = (uint)uVar21;
    param_3[1] = uVar10;
    puVar19 = param_3 + 2;
    if ((uVar10 & 0x400000) != 0) {
      param_3[2] = uStack_118;
      puVar19 = param_3 + 3;
    }
    param_3 = puVar19;
    if ((uVar10 & 0x800000) != 0) {
      *param_3 = uStack_114;
      param_3 = param_3 + 1;
    }
    if (uVar18 != 0) {
      lVar25 = uVar8 - 0x110;
      do {
        puVar20 = (uint *)lVar25;
        uVar16 = *puVar20;
        *param_3 = uVar16;
        puVar19 = param_3 + 1;
        if ((uVar16 & 0x400000) != 0) {
          param_3[1] = puVar20[3];
          puVar19 = param_3 + 2;
        }
        param_3 = puVar19;
        if ((uVar16 & 0x800000) != 0) {
          *param_3 = puVar20[6];
          param_3 = param_3 + 1;
        }
        lVar25 = lVar25 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    goto LAB_82b79ea0;
  case 5:
    uVar17 = 0x70;
    goto code_r0x82b797b0;
  case 6:
    param_3 = (uint *)fn_82B74390(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b798f4;
  case 9:
  case 0x24:
  case 0x25:
  case 0x2b:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar14 = 0x33f7;
code_r0x82b79778:
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,uVar14);
    break;
  case 0xc:
    param_3 = (uint *)fn_82B70070(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b797a4;
  case 0xd:
    param_3 = (uint *)fn_82B77F18(param_1,uVar8 - 0x120,param_3,uStack_ec);
    goto code_r0x82b7999c;
  case 0x12:
    param_3 = (uint *)fn_82B70420(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b797a4;
  case 0x15:
    param_3 = (uint *)fn_82B76540(param_1,uVar8 - 0x120,param_3,uVar8 - 0x130);
    iVar12 = iStack_130;
    break;
  case 0x1f:
    param_3 = (uint *)fn_82B707F0(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b7999c;
  case 0x26:
    uVar17 = 0x6e;
    goto code_r0x82b797b0;
  case 0x27:
    iVar12 = 0;
    piVar23 = piStack_12c;
    if (((*piStack_12c == 1) &&
        (iVar11 = fn_82AB6EC0(param_1[5],0xa3), piVar23 = piStack_12c, iVar11 != 0)) &&
       (piStack_12c[0x1468] != -1)) {
      iVar12 = fn_82AB6EC0(param_1[5],0xa5);
      iVar11 = fn_82AB6EC0(param_1[5],0xa9);
      if (iVar12 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dac9c,0xffffffff820da3b8,0x34d6);
      }
      if ((iVar11 == 1) || (iVar11 == 2)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dac48,0xffffffff820da3b8,0x34d7);
      }
      param_3 = (uint *)fn_82B78A90(param_1,param_3);
      iVar12 = 3;
    }
    if (piVar23[0x1062] != 0) {
      do {
        puVar19 = (uint *)piVar23[0x1060];
        if (piVar23[0x1062] != 0) {
          uStack_e0 = *puVar19;
          uStack_d4 = puVar19[3];
          uStack_d8 = puVar19[2];
          uStack_dc = puVar19[1];
          piVar23[0x1060] = uStack_d4;
          (*(code *)param_1[2])(*param_1);
        }
        iVar12 = iVar12 + 1;
        piVar23[0x1062] = piVar23[0x1062] + -1;
        *param_3 = uStack_d0 & 0xc0000000 | 0x41;
        uVar16 = uStack_c0 & 0xff040000 | uStack_e0 & 0xffff | 0x40000;
        param_3[1] = (uStack_d8 & 0x3f) << 0x10 | uStack_cc & 0xff000000 | uStack_dc & 0xffff;
        param_3[2] = uVar16;
        param_3[3] = uVar16;
        param_3 = param_3 + 4;
      } while (piVar23[0x1062] != 0);
    }
    if (piVar23[2] == 0) break;
    if (piStack_12c[0x13e8] == -1) {
      piStack_12c[0x13e8] = 0x3e;
    }
    *(undefined2 *)((int)param_3 + 2) = 0x41;
    *param_3 = *param_3 & 0xe000ffff;
    *(undefined2 *)((int)param_3 + 6) = 0;
    param_3[1] = param_3[1] & 0xff00ffff | 0xe0000;
    *(undefined2 *)((int)param_3 + 10) = 1;
    param_3[2] = param_3[2] & 0xff00ffff | 0x410000;
    *(undefined1 *)(param_3 + 2) = 1;
    param_3[3] = param_3[3] & 0xffffbbbb | 0x3333;
    puVar19 = param_3 + 4;
    *(undefined2 *)((int)param_3 + 0x12) = 1;
    *puVar19 = *puVar19 & 0xff00ffff | 0x410000;
    *(undefined1 *)puVar19 = 1;
    puVar19 = param_3 + 5;
    uVar16 = *puVar19 & 0xffffbbbb | 0x3333;
    goto code_r0x82b798cc;
  case 0x28:
    uVar17 = 0x6f;
code_r0x82b797b0:
    iVar11 = param_1[7];
    *(undefined2 *)((int)param_3 + 2) = uVar17;
    *param_3 = *param_3 & 0xe000ffff;
    *(short *)((int)param_3 + 6) = (short)*(undefined4 *)(iVar11 + 0x5b40);
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(iVar11 + 0x5b40);
    param_3[2] = param_3[2] & 0xff00ffff | 0x40000;
    param_3 = param_3 + 3;
    goto LAB_82b79ea0;
  case 0x29:
    param_3 = (uint *)fn_82B74620(param_1,uVar8 - 0x120,param_3);
    goto LAB_82b79ea0;
  case 0x2d:
    param_3 = (uint *)fn_82B70C48(param_1,uVar8 - 0x120,param_3);
code_r0x82b7999c:
    iVar12 = iVar12 + 5;
    break;
  case 0x33:
    param_3 = (uint *)fn_82B74190(param_1,uVar8 - 0x120,param_3);
code_r0x82b797a4:
    iVar12 = iVar12 + 2;
    break;
  case 0x35:
  case 0x46:
    uStack_120 = (uint)uVar21 & 0xffff0000 | 0x41;
    *param_3 = uStack_120;
    param_3[1] = uVar10;
    puVar19 = param_3 + 2;
    if ((uVar10 & 0x400000) != 0) {
      *puVar19 = uStack_118;
      puVar19 = param_3 + 3;
    }
    if ((uVar10 & 0x800000) != 0) {
      *puVar19 = uStack_114;
      puVar19 = puVar19 + 1;
    }
    *puVar19 = uVar9;
    puVar20 = puVar19 + 1;
    uVar16 = uVar9 >> 0x16 & 1;
    if (uVar16 != 0) {
      *puVar20 = uStack_104;
      puVar20 = puVar19 + 2;
    }
    uVar10 = uVar9 >> 0x17 & 1;
    if (uVar10 != 0) {
      *puVar20 = uStack_f8;
      puVar20 = puVar20 + 1;
    }
    *puVar20 = uVar9;
    param_3 = puVar20 + 1;
    if (uVar16 != 0) {
      *param_3 = uStack_104;
      param_3 = puVar20 + 2;
    }
    if (uVar10 != 0) {
      *param_3 = uStack_f8;
      param_3 = param_3 + 1;
    }
    goto LAB_82b79ea0;
  case 0x38:
    param_3 = (uint *)fn_82B71160(param_1,uVar8 - 0x120,param_3);
    if (*(int *)(param_1[7] + 4) == 1) {
      iVar12 = iVar12 + 9;
    }
    else {
      iVar12 = iVar12 + 10;
    }
    break;
  case 0x3c:
    param_3 = (uint *)fn_82B71AD0(param_1,uVar8 - 0x120,param_3);
    iVar12 = iVar12 + 6;
    break;
  case 0x3d:
    iVar11 = param_1[7];
    *(undefined2 *)((int)param_3 + 2) = 0x41;
    uVar18 = uVar21 >> 0x10 & 0x1fff;
    *param_3 = *param_3 & 0xe000ffff;
    *(short *)((int)param_3 + 6) = (short)*(undefined4 *)(iVar11 + 0x5b44);
    param_3[1] = param_3[1] & 0xff00ffff | 0x440000;
    puVar19 = param_3 + 2;
    *puVar19 = 0;
    if (uVar18 == 1) {
      *puVar19 = 1;
    }
    else {
      if (uVar18 == 2) {
        uVar16 = 4;
      }
      else if (uVar18 == 3) {
        uVar16 = 0x10;
      }
      else if (uVar18 == 4) {
        uVar16 = 0x40;
      }
      else {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x1f43);
        uVar16 = *puVar19 & 0xfffffffc | 1;
      }
      *puVar19 = uVar16;
    }
    puVar19 = param_3 + 4;
    *(short *)((int)param_3 + 0xe) = (short)*(undefined4 *)(iVar11 + 0x5b40);
    param_3[3] = param_3[3] & 0xff00ffff | 0x40000;
    *(short *)((int)param_3 + 0x12) = (short)*(undefined4 *)(iVar11 + 0x5b40);
    uVar16 = *puVar19 & 0xff00ffff | 0x40000;
code_r0x82b798cc:
    param_3 = puVar19 + 1;
    *puVar19 = uVar16;
    goto LAB_82b79ea0;
  case 0x3e:
    param_3 = (uint *)fn_82B71F00(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b79ae8;
  case 0x41:
    param_3 = (uint *)fn_82B74EF0(param_1,uVar8 - 0x120,param_3,uVar8 - 0x130);
    iVar12 = iStack_130;
    break;
  case 0x44:
    param_3 = (uint *)fn_82B721F8(uVar8 - 0x120,param_3);
    uVar18 = uVar21 >> 0x10 & 0x1fff;
    if (uVar18 != 0) {
      if (uVar18 != 1) {
        if (uVar18 < 3) goto code_r0x82b798f4;
        if (uVar18 != 3) {
          if (uVar18 < 5) goto code_r0x82b797a4;
          uVar14 = 0x3485;
          goto code_r0x82b79778;
        }
      }
      goto code_r0x82b79ae8;
    }
code_r0x82b798f4:
    iVar12 = iVar12 + 4;
    break;
  case 0x45:
    param_3 = (uint *)fn_82B72678(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b79b3c;
  case 0x47:
    fn_82B75EF0(param_1,uVar8 - 0x120,piStack_12c + 0x16ae);
    break;
  case 0x4b:
    param_3 = (uint *)fn_82B72BD0(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b79ae8;
  case 0x4d:
    param_3 = (uint *)fn_82B72FC8(param_1,uVar8 - 0x120,param_3);
    goto code_r0x82b79ae8;
  case 0x55:
    param_3 = (uint *)fn_82B731F8(uVar8 - 0x120,param_3);
    goto LAB_82b79ea0;
  case 0x56:
    param_3 = (uint *)fn_82B73448(param_1,uVar8 - 0x120,param_3);
code_r0x82b79ae8:
    iVar12 = iVar12 + 3;
    break;
  case 0x58:
    param_3 = (uint *)fn_82B73720(param_1,uVar8 - 0x120,param_3);
code_r0x82b79b3c:
    iVar12 = iVar12 + 8;
    break;
  case 0x5a:
    param_3 = (uint *)fn_82B74028(uVar8 - 0x120,param_3);
LAB_82b79ea0:
    iVar12 = iVar12 + 1;
    break;
  case 0x5c:
  case 0x5d:
    param_3 = (uint *)fn_82B78308(param_1,uVar8 - 0x120,param_3,uVar8 - 0x130);
    iVar12 = iStack_130;
  }
  if ((*(uint *)(iStack_e4 + (int)piStack_12c) & 4) != 0) {
    fn_82B75D30(uVar8 - 0x11c,uVar8 - 0x118,uVar8 - 0x114,param_3);
    iVar12 = iVar12 + 1;
  }
  *piStack0000002c = iVar12;
  return puStack0000001c;
}


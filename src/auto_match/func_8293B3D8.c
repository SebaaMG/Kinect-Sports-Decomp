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
extern int fn_82935FA0();
extern int fn_82937A60();
extern unsigned int lbl_821CE37C;
extern unsigned int uStack_60;


void fn_8293B3D8(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar19;
  uint uVar18;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  longlong lVar23;
  undefined8 uStack_60;
  
  puVar22 = (uint *)&uStack_60;
  uStack_60 = 0;
  uVar20 = 0;
  puVar21 = (uint *)(param_3 + 0x44);
  do {
    uVar17 = puVar21[4];
    if (uVar17 != 0) {
      iVar16 = *(int *)(uVar17 + 0x10);
      if (iVar16 == 0) {
        uVar7 = (*(uint *)(uVar17 + 0x18) & 0x3f) << 0x19 | *puVar22 & 0x81ffffff;
LAB_8293b480:
        *puVar22 = uVar7;
      }
      else {
        if (iVar16 == 2) {
          uVar8 = 0xffffffff82032b90;
          goto LAB_8293b5f8;
        }
        if (((iVar16 == 4) || (iVar16 == 6)) || (iVar16 == 8)) {
          uVar7 = (*(uint *)(uVar17 + 0x18) & 0x3f) << 0x19 | 0x80000000 | *puVar22 & 0x1ffffff;
          goto LAB_8293b480;
        }
        fn_82937A60(param_1,0xffffffff82032bec);
      }
      uVar7 = fn_82935FA0(param_1,*(undefined4 *)(uVar17 + 0x20));
      if (uVar7 == 0xffffffff) {
        fn_82937A60(param_1,0xffffffff82032b68);
        break;
      }
      iVar16 = 0;
      uVar12 = 0;
      uVar10 = 0;
      do {
        uVar18 = uVar7 >> (uVar10 & 0x3f);
        uVar11 = uVar18 & 7;
        if ((uVar18 & 7) == 0) {
LAB_8293b4cc:
          iVar9 = 0 << (uVar12 & 0x3f);
LAB_8293b4d0:
          *puVar22 = *puVar22 & 0xfe01ffff | (iVar9 << 0x11 | *puVar22) & 0x1fe0000;
        }
        else {
          if (uVar11 < 5) {
            if (uVar11 == iVar16 + 1U) {
              iVar9 = 1 << (uVar12 & 0x3f);
              goto LAB_8293b4d0;
            }
            uVar8 = 0xffffffff82032ab8;
            uVar19 = (&lbl_821CE37C)[iVar16];
            goto LAB_8293b644;
          }
          if (uVar11 == 5) {
            uVar18 = *puVar22;
            if ((uVar18 & 0x80000000) == 0) {
              uVar8 = 0xffffffff82032ad8;
              goto LAB_8293b5f8;
            }
            iVar9 = 2;
LAB_8293b5c4:
            *puVar22 = uVar18 & 0xfe01ffff |
                       ((iVar9 << (uVar12 & 0x3f)) << 0x11 | uVar18) & 0x1fe0000;
          }
          else {
            if (uVar11 < 7) {
              uVar18 = *puVar22;
              if ((uVar18 & 0x80000000) != 0) {
                iVar9 = 3;
                goto LAB_8293b5c4;
              }
              uVar8 = 0xffffffff82032b20;
              goto LAB_8293b5f8;
            }
            if (uVar11 == 7) goto LAB_8293b4cc;
          }
        }
        uVar10 = uVar10 + 3;
        iVar16 = iVar16 + 1;
        uVar12 = uVar12 + 2;
      } while (uVar10 < 0xc);
      uVar7 = *puVar22;
      iVar16 = *(int *)(uVar17 + 0x28);
      uVar17 = *puVar21 >> 4 & 0x10000 | uVar7 & 0xfffeffff;
      *puVar22 = uVar17;
      if (iVar16 != 0) {
        if ((uVar7 & 0x80000000) != 0) {
          uVar8 = 0xffffffff82032a70;
          goto LAB_8293b5f8;
        }
        if (*(int *)(iVar16 + 0x10) != 0xf) {
          uVar8 = 0xffffffff82032a20;
          goto LAB_8293b5f8;
        }
        *puVar22 = uVar17 | 0x8000;
      }
    }
    uVar20 = uVar20 + 1;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  } while (uVar20 < 2);
  iVar9 = 0;
  iVar16 = 0;
  puVar21 = (uint *)&uStack_60;
  lVar23 = 2;
  do {
    iVar3 = -((int)*puVar21 >> 0x1f);
    if ((iVar3 != 0) || (iVar15 = 1, (*puVar21 & 0x1fe0000) == 0)) {
      iVar15 = 0;
    }
    iVar9 = iVar15 + iVar9;
    iVar16 = iVar3 + iVar16;
    puVar21 = puVar21 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  if ((iVar9 == 0) || (iVar16 == 0)) {
    uVar20 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
    uVar17 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
    if (((uStack_60 & 0x8000000000000000) != 0) || (iVar16 = 0, (uStack_60 & 0x80000000) != 0)) {
      iVar16 = 1;
    }
    *param_2 = iVar16 << 0xf | *param_2 & 0xffff7fff;
    if (iVar16 == 0) {
      iVar16 = 0;
      do {
        uVar13 = 0;
        uVar12 = 0;
        uVar10 = 0;
        uVar7 = *(uint *)((int)&uStack_60 + iVar16 * 4);
        lVar23 = 4;
        do {
          if (((uVar7 >> 0x11 & 0xff) >> (uVar10 & 0x3f) & 3) == 1) {
            uVar13 = (uint)(1 << (uVar12 & 0x3f)) | uVar13;
          }
          uVar12 = uVar12 + 1;
          uVar10 = uVar10 + 2;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        uVar10 = *param_2;
        if (iVar16 == 0) {
          uVar7 = (uint)(uVar13 << 0x10) & 0xf0000;
          uVar10 = uVar10 & 0xfff0ff80;
          uVar18 = ((((U64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x10 & 0x7e00 | (((U64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0x8000) >> 9;
        }
        else {
          uVar12 = uVar7 >> 0x11 & 0x3f00;
          uVar18 = uVar7 >> 1 & 0x4000;
          *param_2 = uVar12 | uVar10 & 0xffffc0ff;
          uVar7 = (uint)(uVar13 << 0x14) & 0xf00000;
          uVar10 = uVar12 | uVar10 & 0xff0f80ff;
        }
        iVar16 = iVar16 + 1;
        *param_2 = uVar18 | uVar7 | uVar10;
      } while (iVar16 < 2);
    }
    else {
      uVar7 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x11 & 0xff;
      uVar10 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
      if (uVar7 == 0) {
        uVar10 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
      }
      uVar10 = uVar10 >> 0x19 & 0x3f;
      if ((uVar10 != ((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x19 & 0x3f)) && ((uStack_60 & 0x1fe0000) != 0)) {
        uVar8 = 0xffffffff820329e0;
        goto LAB_8293b5f8;
      }
      bVar6 = false;
      bVar5 = false;
      *param_2 = uVar10 | *param_2 & 0xffffffc0;
      uVar12 = 0;
      uVar10 = 0;
      uVar18 = 0;
      uVar11 = 0;
      do {
        uVar1 = uVar7 >> (uVar11 & 0x3f);
        uVar14 = uVar1 & 3;
        uVar2 = ((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x11 & 0xff) >> (uVar11 & 0x3f);
        uVar4 = uVar2 & 3;
        if ((uVar14 == 1) && (uVar4 == 1)) {
          uVar8 = 0xffffffff82032968;
LAB_8293b814:
          uVar19 = (&lbl_821CE37C)[uVar18];
LAB_8293b644:
          fn_82937A60(param_1,uVar8,uVar19);
          return;
        }
        if (((uVar14 != uVar4) && ((uVar1 & 3) != 0)) && ((uVar2 & 3) != 0)) {
          uVar8 = 0xffffffff8203292c;
          goto LAB_8293b814;
        }
        if (((uVar1 & 3) == 0) && (uVar14 = uVar4, uVar4 == 1)) {
          uVar14 = 4;
        }
        iVar9 = 0;
        iVar16 = 0;
        if (uVar14 == 0) {
          bVar5 = true;
LAB_8293b79c:
          iVar9 = 0;
LAB_8293b7a0:
          iVar16 = 0;
        }
        else {
          if (uVar14 != 1) {
            if (uVar14 < 3) {
              bVar6 = true;
              goto LAB_8293b79c;
            }
            if (uVar14 == 3) {
              iVar9 = 1;
              goto LAB_8293b790;
            }
            if (4 < uVar14) goto LAB_8293b7a4;
            iVar9 = 1;
            goto LAB_8293b7a0;
          }
          iVar9 = 0;
LAB_8293b790:
          iVar16 = 1;
        }
LAB_8293b7a4:
        uVar11 = uVar11 + 2;
        uVar12 = iVar16 << (uVar18 & 0x3f) | uVar12;
        uVar10 = iVar9 << (uVar18 & 0x3f) | uVar10;
        uVar18 = uVar18 + 1;
      } while ((int)uVar11 < 8);
      *param_2 = ((uVar10 & 0xf) << 4 | uVar12 & 0xf) << 0x10 | *param_2 & 0xff00ffff;
      if ((bVar6) && (bVar5)) {
        fn_82937A60(param_1,0xffffffff820329b0);
      }
      if (bVar6) {
        *param_2 = *param_2 | 0x4000;
      }
    }
    *param_2 = ((uVar17 & 0x10000) << 1 | uVar20 & 0x10000) << 8 | *param_2 & 0xfcffffff;
  }
  else {
    uVar8 = 0xffffffff82032bb0;
LAB_8293b5f8:
    fn_82937A60(param_1,uVar8);
  }
  return;
}


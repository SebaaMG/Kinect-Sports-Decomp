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
extern int fn_82EFE498();
extern int fn_82EFE560();
extern int fn_82EFE610();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern float lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82007310;
extern float lbl_820116D8;
extern unsigned int lbl_82015408;
extern unsigned int lbl_82015610;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_8202DCF0;
extern unsigned int lbl_820380A0;
extern float lbl_820A6C58;
extern unsigned int lbl_820AA960;
extern unsigned int lbl_820FBB20;
extern unsigned int lbl_8215F6E0;
extern unsigned int lbl_8215F708;
extern unsigned int lbl_8215F740;
extern unsigned int lbl_82160708;
extern unsigned int lbl_82160738;
extern unsigned int lbl_82160740;
extern unsigned int lbl_82160748;
extern unsigned int lbl_82160750;
extern unsigned int lbl_82160758;
extern unsigned int lbl_82160760;
extern unsigned int lbl_82160768;
extern unsigned int lbl_831A7B18;


void fn_82EFEBA0(void)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  iVar8 = fn_82F6A544();
  if ((*(uint *)(iVar8 + 0x358) == 0) || (bVar2 = true, 4 < *(uint *)(iVar8 + 0x358))) {
    bVar2 = false;
  }
  if (((*(int *)(iVar8 + 0x76c4) != 0) && (*(int *)(iVar8 + 0x7660) != 0)) &&
     (*(int *)(iVar8 + 0x1db0) == 2)) {
    *(undefined4 *)(iVar8 + 0x76c4) = 0;
    *(undefined4 *)(iVar8 + 0x2a4) = *(undefined4 *)(iVar8 + 0x2a0);
  }
  iVar10 = *(int *)(iVar8 + 0x7660);
  *(double *)(iVar8 + 0x1f68) = *(double *)(iVar8 + 0x2b0);
  dVar20 = lbl_82015610;
  *(int *)(iVar8 + 0x1f5c) = *(int *)(iVar8 + 0x2a4);
  dVar19 = lbl_820AA960;
  *(undefined4 *)(iVar8 + 0x1f60) = *(undefined4 *)(iVar8 + 0x590);
  if ((iVar10 != 0) && (*(int *)(iVar8 + 0x1db0) == 2)) {
    if (*(longlong *)(iVar8 + 0x2e0) == (longlong)*(int *)(iVar8 + 0x7678)) {
      dVar16 = (double)(longlong)*(int *)(iVar8 + 8000) * dVar19;
    }
    else {
      if (*(longlong *)(iVar8 + 0x2e0) != (longlong)*(int *)(iVar8 + 0x767c)) goto LAB_82efecac;
      dVar16 = (double)(longlong)*(int *)(iVar8 + 8000) * dVar20;
    }
    *(int *)(iVar8 + 0x1f50) = (int)dVar16;
  }
LAB_82efecac:
  dVar16 = lbl_82005758;
  dVar13 = (double)(longlong)*(int *)(iVar8 + 0x2a4);
  if (lbl_82005758 < ABS(*(double *)(iVar8 + 0x2b0) - dVar13)) {
    *(double *)(iVar8 + 0x2b0) = dVar13;
  }
  dVar13 = lbl_82005710;
  dVar21 = lbl_82005730;
  dVar22 = lbl_820A6C58;
  dVar15 = lbl_82005710;
  if ((*(int *)(iVar8 + 0x4f20) != 0) && (iVar9 = *(int *)(iVar8 + 0x1f0c), iVar9 != 0)) {
    if (bVar2) {
      dVar13 = (double)fn_82EFE560(*(undefined8 *)(iVar8 + 0x2b0),iVar8,
                                    *(undefined4 *)(iVar8 + 0x1f50),iVar9,
                                    (int)((double)(longlong)*(int *)(iVar8 + 0x1ecc) * lbl_82005730)
                                   );
    }
    else {
      dVar13 = (double)fn_82EFE560(*(undefined8 *)(iVar8 + 0x2b0),iVar8,
                                    *(undefined4 *)(iVar8 + 0x1f50),iVar9,
                                    (int)((double)(longlong)*(int *)(iVar8 + 0x1ecc) * lbl_820A6C58)
                                   );
    }
  }
  dVar14 = (double)fn_82EFE610(*(undefined8 *)(iVar8 + 0x2b0),iVar8);
  if ((bVar2) && (dVar14 < dVar15)) {
    dVar14 = dVar15;
  }
  dVar23 = dVar15;
  if ((*(int *)(iVar8 + 0x1db0) != 0) && (iVar10 == 0)) {
    dVar15 = (double)fn_82EFE498(iVar8);
  }
  dVar7 = lbl_82160708;
  dVar6 = lbl_8215F708;
  dVar5 = lbl_820FBB20;
  dVar4 = lbl_8202DCF0;
  dVar3 = lbl_82002C40;
  dVar17 = dVar16 - (double)(longlong)*(int *)(iVar8 + 0x1f10) /
                    (double)(longlong)*(int *)(iVar8 + 8000);
  dVar18 = dVar23;
  if ((((*(longlong *)(iVar8 + 0x1e40) * 10 < *(longlong *)(iVar8 + 0x1e18)) &&
       (*(longlong *)(iVar8 + 0x1e18) <
        *(longlong *)(iVar8 + 0x1e40) * 5 + *(longlong *)(iVar8 + 0x1e20))) &&
      (dVar18 = lbl_82002C40, dVar17 <= lbl_820FBB20)) && (dVar18 = dVar23, dVar22 < dVar17)) {
    dVar18 = lbl_8215F740;
  }
  iVar10 = *(int *)(iVar8 + 0x7660);
  if (((iVar10 == 0) || (*(int *)(iVar8 + 0x1db0) != 2)) ||
     (*(longlong *)(iVar8 + 0x2e0) < (longlong)*(int *)(iVar8 + 0x767c))) {
    dVar15 = dVar18 + dVar15 + dVar14 + dVar13;
  }
  else {
    iVar11 = 6;
    iVar9 = 10;
    dVar15 = (*(double *)(iVar8 + 0x1ed0) * lbl_820116D8) /
             ((double)(((ulonglong)*(uint *)(iVar8 + 0x2d8) & 0xffffff) << 8) *
             *(double *)(iVar8 + 0x1e08));
    if (lbl_82005720 < dVar15) {
      if (dVar15 <= dVar20) {
        iVar9 = 0xd;
      }
    }
    else {
      iVar9 = 0xf;
    }
    if ((lbl_82160768 <= dVar17) || (dVar15 < lbl_82160760)) {
      if ((dVar17 < dVar21) && (dVar20 <= dVar15)) {
        iVar11 = 0xc;
      }
    }
    else {
      iVar11 = 0x12;
    }
    if ((*(longlong *)(iVar8 + 0x2e0) < (longlong)(*(int *)(iVar8 + 0x7674) - iVar11)) ||
       (*(int *)(iVar8 + 0x1f58) != 0)) {
      dVar15 = dVar14 * lbl_82160758 + dVar13 * lbl_8215F708 + dVar18;
    }
    else if (((lbl_820FBB20 <= dVar17) || (dVar15 = lbl_8202DCF0, *(int *)(iVar8 + 0x2a4) < iVar9))
            && (dVar15 = (dVar14 * lbl_82160758 + dVar13 * lbl_8215F708) - dVar16,
               iVar9 <= *(int *)(iVar8 + 0x2a4))) {
      dVar15 = dVar15 - lbl_82015408;
    }
  }
  dVar16 = dVar23;
  if (*(int *)(iVar8 + 0x1db0) == 2) {
    if (iVar10 == 0) {
      if (*(int *)(iVar8 + 0x1f58) != 0) {
        if (dVar15 < dVar23) {
          dVar15 = dVar23;
        }
        if (*(double *)(iVar8 + 0x2b0) < (double)(longlong)*(int *)(iVar8 + 0x2a4)) {
          *(double *)(iVar8 + 0x2b0) = (double)(longlong)*(int *)(iVar8 + 0x2a4);
        }
        *(double *)(iVar8 + 0x2b0) =
             (double)(longlong)(*(int *)(iVar8 + 0x1f5c) + 0x10 >> 3) + *(double *)(iVar8 + 0x2b0);
      }
      if (lbl_820380A0 <= dVar15) {
        if (dVar15 < dVar23) goto LAB_82eff110;
      }
      else {
        dVar15 = dVar15 + dVar21;
      }
      goto LAB_82eff0e4;
    }
    if (*(int *)(iVar8 + 0xb00) != 0) {
      dVar15 = dVar23;
    }
    iVar9 = 0x1f;
    dVar13 = dVar15;
    if (lbl_82002C40 < dVar15) {
      dVar13 = lbl_82002C40;
    }
    if (*(int *)(iVar8 + 0x766c) != 0) {
      iVar9 = *(int *)(*(int *)(iVar8 + 0x766c) + 0x1c);
    }
    if (((lbl_82160708 <= dVar17) || (dVar15 <= dVar23)) ||
       ((int)dVar13 + *(int *)(iVar8 + 0x2a4) < iVar9 + 4)) goto LAB_82eff0e4;
  }
  else {
LAB_82eff0e4:
    dVar16 = dVar3;
    if ((dVar15 <= dVar3) && (dVar16 = dVar15, dVar15 < dVar4)) {
      dVar16 = dVar4;
    }
  }
LAB_82eff110:
  if ((bVar2) && (dVar16 < dVar23)) {
    dVar16 = dVar23;
  }
  iVar11 = 0;
  dVar16 = *(double *)(iVar8 + 0x2b0) + dVar16;
  *(double *)(iVar8 + 0x2b0) = dVar16;
  iVar9 = (int)(dVar16 + dVar21);
  if ((iVar10 == 0) || (*(int *)(iVar8 + 0x1db0) != 2)) {
    if ((lbl_8215F6E0 <= dVar17) || (*(int *)(iVar8 + 0x1f58) != 0)) goto LAB_82eff29c;
    if (dVar17 < dVar5) {
      if (dVar17 < lbl_82160750) {
        if (dVar17 < lbl_82160748) {
          if (dVar22 <= dVar17) goto LAB_82eff214;
          if (dVar17 < lbl_82007310) {
            if (dVar17 < dVar6) {
              if (dVar17 < dVar21) {
                if (dVar17 < dVar19) {
                  if (dVar17 < lbl_82160740) {
                    if (dVar17 < dVar7) {
                      if (dVar20 <= dVar17) {
                        iVar11 = 1;
                      }
                    }
                    else {
                      iVar11 = 2;
                    }
                  }
                  else {
                    iVar11 = 3;
                  }
                }
                else {
                  iVar11 = 4;
                }
              }
              else {
                iVar11 = 5;
              }
            }
            else {
              iVar11 = 6;
            }
          }
          else {
            iVar11 = 7;
          }
        }
        else {
          iVar11 = 9;
        }
      }
      else {
        iVar11 = 10;
      }
    }
    else {
      iVar11 = 0xb;
    }
  }
  else if ((lbl_8215F6E0 <= dVar17) || (*(int *)(iVar8 + 0x1f58) != 0)) {
LAB_82eff29c:
    iVar11 = 0xc;
  }
  else if (dVar17 < dVar5) {
    if (dVar17 < lbl_82160750) {
      if (dVar17 < lbl_82160748) {
LAB_82eff214:
        iVar11 = 8;
      }
      else {
        iVar11 = 9;
      }
    }
    else {
      iVar11 = 10;
    }
  }
  else {
    iVar11 = 0xb;
  }
  if (*(int *)(iVar8 + 0x10) != 0) {
    iVar11 = *(int *)(&lbl_831A7B18 + (*(int *)(iVar8 + 0x10) * 0xd + iVar11 + -0xd) * 4);
  }
  iVar11 = *(int *)(iVar8 + 0x1ee8) + iVar11;
  if (0x1e < iVar11) {
    iVar11 = 0x1e;
  }
  *(int *)(iVar8 + 0x1ee4) = iVar11;
  if ((lbl_82160738 <= dVar17) && (iVar11 < *(int *)(iVar8 + 0x2a4))) {
    iVar11 = *(int *)(iVar8 + 0x2a4);
  }
  iVar10 = iVar9;
  if (iVar11 <= iVar9) {
    iVar10 = iVar11;
  }
  iVar1 = *(int *)(iVar8 + 0x1efc);
  iVar12 = iVar1;
  if ((iVar1 <= iVar10) && (iVar12 = iVar11, iVar9 < iVar11)) {
    iVar12 = iVar9;
  }
  if (((iVar12 < 9) && (iVar12 != iVar1)) && (ABS(dVar16 - (double)(longlong)iVar12) < dVar21)) {
    iVar12 = (int)(dVar16 + lbl_8202DCE0);
    if (iVar12 < 1) {
      iVar12 = 1;
    }
    else if (ABS(dVar16 - ((double)(longlong)iVar12 + dVar21)) < lbl_8202DCE0) {
      *(undefined4 *)(iVar8 + 0x590) = 1;
      goto LAB_82eff3b8;
    }
  }
  *(undefined4 *)(iVar8 + 0x590) = 0;
LAB_82eff3b8:
  if ((*(int *)(iVar8 + 0x1f58) != 0) &&
     (iVar10 = 0x16 - (*(int *)(iVar8 + 0x1ee0) * 0xe) / 100, iVar12 <= iVar10)) {
    iVar12 = iVar10;
  }
  iVar10 = *(int *)(iVar8 + 0x2a4) + 2;
  if (iVar12 < iVar10) {
    iVar10 = *(int *)(iVar8 + 0x2a4) + -2;
    if (iVar10 < iVar12) {
      *(int *)(iVar8 + 0x2a4) = iVar12;
    }
    else {
      *(int *)(iVar8 + 0x2a4) = iVar10;
    }
  }
  else {
    *(int *)(iVar8 + 0x2a4) = iVar10;
  }
  if (*(int *)(iVar8 + 0x4f20) == 0) {
    iVar9 = *(int *)(iVar8 + 0x2a0) + -2;
    iVar10 = *(int *)(iVar8 + 0x2a4);
    if (*(int *)(iVar8 + 0x2a4) <= iVar9) {
      iVar10 = iVar9;
    }
    *(int *)(iVar8 + 0x2a4) = iVar10;
  }
  fn_82F6A590();
  return;
}


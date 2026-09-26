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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_8225F160();
extern int fn_822C72E0();
extern int fn_822CEA78();
extern int fn_822CEB28();
extern int fn_822CEE40();
extern int fn_822CEF30();
extern int fn_822CEFA0();
extern int fn_822CF008();
extern int fn_822CF260();
extern int fn_822CF300();
extern int fn_822CFA38();
extern int fn_822CFA98();
extern int fn_822D0858();
extern int fn_822DF348();
extern int fn_822E0EB0();
extern int fn_82365BD8();
extern int fn_823737B8();
extern int fn_82374520();
extern int fn_824D2AE8();
extern int fn_8288B760();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int iStack_13c;
extern unsigned int iStack_140;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C4;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD62C;
extern unsigned int lbl_831CD64C;
extern unsigned int lbl_831CD654;
extern unsigned int lbl_831D1C88;
extern unsigned int lbl_831DCD58;
extern V16 vectorCompareEqualToFloatingPoint();


void fn_822DE718(void)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int in_r0;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar9;
  ulonglong uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [256];
  
  iVar10 = fn_82F6A548();
  if (*(int *)(*(int *)(iVar10 + 0x14) + 0x168) == 0) {
    uVar11 = *(uint *)(*(int *)(iVar10 + 0x14) + 0x16c);
  }
  else {
    uVar11 = fn_8288B760();
    uVar11 = uVar11 & 0xff;
  }
  if (uVar11 == 0) goto LAB_822df324;
  iVar13 = *(int *)(iVar10 + 0x14);
  iVar12 = fn_823737B8(*(undefined4 *)(iVar10 + 0x10),*(int *)(iVar13 + 0x2c) == 0);
  if ((iVar12 != 0) && (*(int *)(iVar13 + 0x340) != 0)) {
    fn_822CF300(iVar13,2);
  }
  if (*(int *)(*(int *)(iVar10 + 0x14) + 0x2c) == *(int *)(*(int *)(iVar10 + 0x10) + 0x1f0)) {
    uVar19 = (ulonglong)*(uint *)(*(int *)(iVar10 + 0x10) + 500);
  }
  else {
    uVar19 = 0xffffffffffffffff;
  }
  pfVar3 = (float *)(iVar10 + 0xe0U & 0xfffffff0);
  fVar27 = *pfVar3;
  fVar28 = pfVar3[1];
  fVar29 = pfVar3[2];
  fVar30 = pfVar3[3];
  fn_82374520(&iStack_140);
  if ((0x17 < *(int *)(iVar10 + 0x30)) || (*(int *)(iVar10 + 0x54) == 0)) {
    fn_822D0858(iVar10,0);
  }
  if ((*(int *)(iVar10 + 0xc0) == 0) && (iStack_140 != 0)) {
    iVar13 = *(int *)(iVar10 + 0x14);
    bVar21 = *(uint *)(iVar13 + 0x28) != uVar19;
    bVar22 = *(int *)(iStack_140 + 0xb4) == 0;
    if (*(int *)(iVar13 + 0x340) == 0) {
      pfVar3 = (float *)(iStack_140 + 400U & 0xfffffff0);
      fVar31 = *pfVar3;
      fVar32 = pfVar3[1];
      fVar33 = pfVar3[2];
      fVar34 = pfVar3[3];
      pfVar3 = (float *)((int)&fStack_130 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar31;
      pfVar3[1] = fVar32;
      pfVar3[2] = fVar33;
      pfVar3[3] = fVar34;
    }
    else {
      pfVar3 = (float *)(iStack_140 + 0x1a0U & 0xfffffff0);
      fVar31 = *pfVar3;
      fVar32 = pfVar3[1];
      fVar33 = pfVar3[2];
      fVar34 = pfVar3[3];
      pfVar3 = (float *)((int)&fStack_130 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar31;
      pfVar3[1] = fVar32;
      pfVar3[2] = fVar33;
      pfVar3[3] = fVar34;
    }
    if (*(int *)(iVar10 + 0x30) < 0x18) {
      if (((*(int *)(iVar10 + 0x54) != 0) && (*(int *)(iVar13 + 0x24c) != 0)) &&
         (uVar11 = *(uint *)(*(int *)(iVar10 + 8) + 0x28), uVar11 != 0)) {
        dVar25 = (double)*(float *)(iVar10 + 0x38);
        dVar23 = (double)*(float *)(iVar10 + 0x34);
        uVar7 = fn_8223B688(auStack_100,(ulonglong)uVar11 + 4);
        uVar8 = fn_82365BD8(&iStack_138,&iStack_140);
        fn_822DF348(dVar23,dVar25,iVar10,uVar8,uVar7,3);
        uVar1 = *(undefined4 *)(iVar10 + 0x14);
        uVar7 = fn_82365BD8(&iStack_138,&iStack_140);
        fn_822CEA78(uVar1,uVar7,iVar10 + 0x58,&fStack_130);
      }
      if (*(int *)(iVar10 + 0x54) == 0) {
        uVar1 = *(undefined4 *)(iVar10 + 0x14);
        uVar7 = fn_82365BD8(&iStack_138,&iStack_140);
        iVar13 = fn_822CEB28(uVar1,uVar7,iVar10 + 0x58,&fStack_130);
        *(int *)(iVar10 + 0x54) = iVar13;
        if (iVar13 == 0) {
          if (*(int *)(*(int *)(iVar10 + 0x14) + 0x24c) == 0) {
            *(undefined4 *)(iStack_140 + 0x20ec) = 0x18;
            *(undefined4 *)(iVar10 + 0x30) = 0x18;
            *(undefined4 *)(iVar10 + 0x54) = 0;
            *(undefined4 *)(iVar10 + 0x94) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x24c) = 0;
            fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x14) + 0x114) + 0x20),
                              0xffffffff821ad2f4);
          }
        }
        else {
          pfVar3 = (float *)(iVar10 + 0x80U & 0xfffffff0);
          *pfVar3 = fVar31;
          pfVar3[1] = fVar32;
          pfVar3[2] = fVar33;
          pfVar3[3] = fVar34;
        }
      }
    }
    else if (bVar22 && bVar21) {
      iVar12 = *(int *)(iStack_140 + 0x2148);
      uVar16 = (ulonglong)*(uint *)(iStack_140 + 0x214c) - 3;
      uVar19 = (ulonglong)((int)uVar16 >> 0x1f);
      uVar19 = (uVar16 ^ uVar19) - uVar19;
      uVar11 = (int)((uVar19 & 0xffffffff) >> 0x1f) + ((int)lbl_831D1C88 >> 0x1f) +
               (uint)(uVar19 <= lbl_831D1C88);
      if (iVar12 < 0x18) {
        uVar17 = *(uint *)(&lbl_831DCD58 + iVar12 * 4);
      }
      else {
        uVar17 = 6;
      }
      iVar15 = *(int *)(iStack_140 + 0x2130);
      dVar23 = (double)*(float *)(iStack_140 + 0x2140);
      iVar13 = fn_822CEE40(iVar13);
      if ((iVar15 == 0) || (bVar5 = true, *(int *)(iVar15 + 0x24) == 0)) {
        bVar5 = false;
      }
      if ((iVar13 == 0) || (*(int *)(iVar13 + 0x268) == 0)) {
        if (uVar11 == 0) {
          iVar14 = fn_8225F160();
          if ((*(int *)(iVar14 + 0x14) == 3) ||
             (iVar14 = fn_822CFA98(*(undefined4 *)(iVar10 + 0x14),0), iVar14 != 0)) {
            uVar11 = 1;
          }
        }
        else {
          iVar14 = fn_8225F160();
          if (*(int *)(iVar14 + 0x14) != 3) {
            lVar9 = fn_822CFA98(*(undefined4 *)(iVar10 + 0x14),0);
            uVar11 = -(uint)(lVar9 != 0) & uVar11;
          }
        }
      }
      uVar2 = *(uint *)(iVar10 + 0x14);
      uVar19 = (ulonglong)uVar2;
      if (*(int *)(uVar2 + 0x340) == 0) {
        dVar24 = (double)fStack_12c;
        dVar26 = (double)lbl_82191FCC;
        dVar25 = (double)lbl_821917C4;
        if (uVar17 == 0) {
LAB_822deb84:
          bVar18 = 0;
          if (*(int *)(iVar10 + 0xc4) == 0) {
            if (uVar17 != 0) {
              if ((((double)lbl_8218E8E8 <= dVar23) ||
                  (iVar15 = fn_822CEF30(dVar25,uVar19), iVar15 != 0)) ||
                 (*(int *)(iStack_140 + 0xb4) != 0)) {
                if ((iVar12 != 0xb) && (iVar12 != 10)) goto LAB_822dec5c;
              }
              else {
                if (dVar26 < dVar24) goto LAB_822deca4;
                bVar18 = 5;
              }
            }
          }
          else {
            uVar11 = 1;
LAB_822dec5c:
            iVar15 = fn_822CFA38(uVar19,0x12);
            if ((iVar13 == 0) || (bVar4 = true, *(int *)(iVar13 + 0x23c) == 0)) {
              bVar4 = false;
            }
            if (((iVar15 != 0) || (bVar4)) &&
               (iVar15 = fn_822CEFA0(*(undefined4 *)(iVar10 + 0x14)), iVar15 == 0)) {
LAB_822deca4:
              bVar18 = 3;
            }
          }
        }
        else if (uVar17 == 1) {
          bVar18 = 1;
        }
        else {
          if (2 < uVar17) goto LAB_822deb84;
          if ((*(int *)(iVar15 + 0x2c) == *(int *)(uVar2 + 0x2c)) ||
             (iVar15 = fn_822CFA38(uVar19,0xf), iVar15 == 0)) {
            bVar18 = 2;
            iVar15 = fn_822CF260(*(undefined4 *)(iVar10 + 0x14),0);
            if (iVar15 == 0) {
              lVar9 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),0x12);
              bVar18 = (-(lVar9 != 0) & 2U) + 1;
            }
          }
          else {
            bVar18 = 1;
            iVar12 = 4;
          }
        }
        if (bVar18 == 0) {
          if ((dVar26 < dVar24) &&
             (iVar15 = fn_822CEF30(dVar25,*(undefined4 *)(iVar10 + 0x14)), iVar15 == 0)) {
            if ((iVar13 == 0) || (*(int *)(iVar13 + 0x24) == 0)) {
              bVar18 = 1;
              goto LAB_822ded68;
            }
LAB_822ded24:
            bVar18 = 3;
            goto LAB_822ded70;
          }
        }
        else {
          if (bVar18 < 3) {
            if (dVar24 < (double)lbl_821CA460) {
              bVar18 = 0;
            }
            uVar19 = (ulonglong)*(uint *)(iVar10 + 0x14);
            iVar15 = fn_822CEE40(uVar19);
            if (bVar18 == 1) {
              if ((((iVar15 == 0) || (*(int *)(iVar15 + 0x24) == 0)) ||
                  (*(int *)(*(int *)(iVar10 + 0x10) + 0x1fc) != 0)) || (uVar17 == 2))
              goto LAB_822ded98;
              if ((dVar26 < dVar24) && (iVar15 = fn_822CEF30(dVar25,uVar19), iVar15 == 0))
              goto LAB_822ded24;
              bVar18 = 0;
            }
          }
LAB_822ded68:
          if (bVar18 == 3) {
LAB_822ded70:
            if (((bVar5) && ((iVar12 == 0xb || (iVar12 == 10)))) && ((double)lbl_8218E8E8 <= dVar23)
               ) {
              bVar18 = 0;
            }
          }
        }
      }
      else {
        iVar15 = fn_822CF008((double)lbl_831CD64C,uVar19);
        fVar6 = lbl_831CD62C;
        if (iVar15 == 0) goto LAB_822df314;
        bVar18 = 4;
        if (uVar17 != 3) {
          bVar18 = 2;
        }
        pfVar3 = (float *)((int)&fStack_130 + in_r0 & 0xfffffff0);
        *pfVar3 = fVar31 - fVar27;
        pfVar3[1] = fVar32 - fVar28;
        pfVar3[2] = fVar33 - fVar29;
        pfVar3[3] = fVar34 - fVar30;
        if (fVar6 <= SQRT(fStack_128 * fStack_128 + fStack_130 * fStack_130)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
      }
LAB_822ded98:
      dVar23 = (double)*(float *)(iVar10 + 0xd8);
      iVar15 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),1);
      fVar27 = lbl_821CC160;
      if (iVar15 != 0) {
        fVar27 = lbl_821CA460;
      }
      dVar25 = (double)fVar27;
      cVar20 = '\x18';
      fn_82230300(auStack_120,0,0);
      if (bVar18 == 0) {
        if (uVar11 == 0) {
          fn_82230360(auStack_120,0xffffffff821ad29c,5);
          cVar20 = '\x03';
        }
        else {
          uVar8 = 4;
          uVar7 = 0xffffffff821ad28c;
LAB_822df19c:
          fn_82230360(auStack_120,uVar7,uVar8);
          cVar20 = '\x04';
        }
      }
      else if (bVar18 == 1) {
        if ((iVar13 == 0) || (*(int *)(iVar13 + 0x24) == 0)) {
          if (uVar11 == 0) {
            if ((iVar13 == 0) || (*(int *)(iVar13 + 0x268) == 0)) {
              uVar8 = 3;
              uVar7 = 0xffffffff821ad2a4;
            }
            else {
              uVar8 = 5;
              uVar7 = 0xffffffff821ad29c;
            }
            fn_82230360(auStack_120,uVar7,uVar8);
            cVar20 = '\x05';
          }
          else {
            fn_82230360(auStack_120,0xffffffff821ad2a4,3);
            iVar13 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),0x11);
            cVar20 = (iVar13 != 0) + '\x06';
          }
        }
        else {
          if (iVar12 == 4) {
            fn_82230360(auStack_120,0xffffffff821ad2a4,3);
            cVar20 = '\a';
          }
          else {
            fn_82230360(auStack_120,0xffffffff821ad29c,5);
            cVar20 = '\x05';
          }
          dVar25 = (double)*(float *)(iStack_140 + 0x2140);
        }
      }
      else if (bVar18 < 3) {
        iVar13 = fn_822E0EB0(iVar10);
        iVar15 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),8);
        uVar19 = (ulonglong)*(uint *)(iVar10 + 0x14);
        iVar14 = fn_822CEE40(uVar19);
        if ((iVar14 == 0) || (bVar5 = true, *(int *)(iVar14 + 0x24) == 0)) {
          bVar5 = false;
        }
        if (iVar12 == 7) {
          if ((iVar15 != 0) || (bVar5)) {
            if (iVar13 == 0) {
              dVar25 = (double)lbl_821CA460;
              iVar12 = fn_822CF008((double)lbl_831CD654,uVar19);
              if (iVar12 == 0) {
                cVar20 = '\n';
                fn_82230360(auStack_120,0xffffffff821ad2b0,10);
                goto LAB_822df04c;
              }
              fn_82230360(auStack_120,0xffffffff821ad2c8,0xb);
            }
            else {
              fn_82230360(auStack_120,0xffffffff821ad2bc,9);
              dVar25 = (double)lbl_821CC160;
            }
            cVar20 = '\v';
          }
          else {
LAB_822df010:
            cVar20 = '\t';
            if (iVar13 != 0) {
              uVar8 = 10;
              uVar7 = 0xffffffff821ad5b8;
              goto LAB_822df02c;
            }
            uVar8 = 5;
            uVar7 = 0xffffffff821ad2a8;
LAB_822df044:
            fn_82230360(auStack_120,uVar7,uVar8);
            dVar25 = (double)lbl_821CA460;
          }
        }
        else {
          if (iVar15 == 0) goto LAB_822df010;
          cVar20 = '\n';
          if (iVar13 == 0) {
            uVar8 = 10;
            uVar7 = 0xffffffff821ad2b0;
            goto LAB_822df044;
          }
          uVar8 = 9;
          uVar7 = 0xffffffff821ad2bc;
LAB_822df02c:
          fn_82230360(auStack_120,uVar7,uVar8);
          dVar25 = (double)lbl_821CC160;
        }
LAB_822df04c:
        iVar12 = *(int *)(iVar10 + 0x14);
        iVar15 = fn_823737B8(*(undefined4 *)(iVar10 + 0x10),*(int *)(iVar12 + 0x2c) == 0);
        if (iVar15 != 0) {
          if (iVar13 == 0) {
            if (*(int *)(iVar15 + 0x2a4) != 0) goto LAB_822df094;
          }
          else if (*(int *)(iVar12 + 0x2a4) == 0) {
LAB_822df094:
            dVar23 = (double)lbl_82192734;
            goto LAB_822df1a8;
          }
          dVar23 = (double)lbl_821CA460;
        }
      }
      else if (bVar18 == 3) {
        if (uVar17 == 5) {
          iVar13 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),2);
          if (iVar13 != 0) {
            uVar8 = 10;
            uVar7 = 0xffffffff821ad2b0;
            goto LAB_822deef8;
          }
          uVar8 = 7;
          uVar7 = 0xffffffff821ad294;
LAB_822deee0:
          fn_82230360(auStack_120,uVar7,uVar8);
          fVar27 = lbl_821CC160;
        }
        else {
          iVar13 = fn_822CEF30((double)lbl_821916FC,*(undefined4 *)(iVar10 + 0x14));
          if (iVar13 != 0) {
            uVar8 = 5;
            uVar7 = 0xffffffff821ad2a8;
            goto LAB_822deee0;
          }
          uVar8 = 7;
          uVar7 = 0xffffffff821ad294;
LAB_822deef8:
          fn_82230360(auStack_120,uVar7,uVar8);
          fVar27 = lbl_821CA460;
        }
        dVar25 = (double)fVar27;
        cVar20 = '\f';
      }
      else if (bVar18 < 5) {
        iVar13 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),10);
        if (iVar13 == 0) {
          fn_82230360(auStack_120,0xffffffff821ad38c,5);
          if ((iVar12 == 0xb) || (bVar5)) {
            cVar20 = '\x0f';
          }
          else {
            cVar20 = '\x10';
            iVar13 = fn_822CFA38(*(undefined4 *)(iVar10 + 0x14),2);
            if (iVar13 == 0) {
              dVar25 = (double)lbl_821CC160;
            }
            else {
              dVar25 = (double)lbl_821CA460;
            }
          }
        }
        else {
          fn_82230360(auStack_120,0xffffffff821ad38c,5);
          cVar20 = '\x0e';
        }
      }
      else if (bVar18 == 5) {
        uVar8 = 0xd;
        uVar7 = 0xffffffff821ad2e4;
        goto LAB_822df19c;
      }
LAB_822df1a8:
      uVar7 = fn_8223B688(auStack_100,auStack_120);
      uVar8 = fn_82365BD8(&iStack_138,&iStack_140);
      fn_822DF348(dVar23,dVar25,iVar10,uVar8,uVar7,cVar20);
      fn_82230300(auStack_120,1,0);
    }
    if (*(int *)(iVar10 + 0x30) < 0x18) {
      fn_824D2AE8(&iStack_138,iVar10 + 0x44);
      if (iStack_138 == 0) {
        *(undefined4 *)(iVar10 + 0x30) = 0x18;
        *(undefined4 *)(iVar10 + 0x54) = 0;
        *(undefined4 *)(iVar10 + 0x94) = 0;
        *(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x24c) = 0;
      }
      else {
        iVar13 = *(int *)(iVar10 + 0x14);
        iVar12 = fn_822CEFA0(iVar13);
        if (((iVar12 == 0) && (*(int *)(iVar13 + 0x23c) == 0)) &&
           (((!bVar22 || !bVar21 || (*(int *)(iStack_138 + 0xa0) != 0)) ||
            (((*(int *)(iVar10 + 0xc4) == 0 && (*(int *)(iStack_138 + 0x2148) == 0x11)) ||
             ((*(int *)(iVar10 + 0x54) != 0 &&
              (vectorCompareEqualToFloatingPoint(in_vs45,in_vs32), -1 < *(int *)(iVar10 + 0x54))))))
            ))) {
          *(undefined4 *)(iStack_138 + 0x20ec) = 0x18;
          *(undefined4 *)(iVar10 + 0x30) = 0x18;
          *(undefined4 *)(iVar10 + 0x54) = 0;
          *(undefined4 *)(iVar10 + 0x94) = 0;
          *(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x24c) = 0;
          if ((*(int *)(iVar10 + 0xc4) == 0) && (*(int *)(iStack_138 + 0x2148) == 0x11)) {
            fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x14) + 0x114) + 0x20),
                              0xffffffff821ad2f4);
            *(undefined4 *)(iVar10 + 0xc4) = 1;
          }
        }
      }
      if (iStack_134 != 0) {
        fn_822315A0();
      }
    }
  }
LAB_822df314:
  if (iStack_13c != 0) {
    fn_822315A0();
  }
LAB_822df324:
  fn_82F6A594();
  return;
}


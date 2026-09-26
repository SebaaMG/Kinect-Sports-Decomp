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
extern unsigned int *auStack_100;
extern unsigned int *auStack_b0;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82681B80();
extern int fn_8268CC00();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_82741A50();
extern int fn_827599C0();
extern int fn_8275A528();
extern int fn_82F643F8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_114;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200BC20;
extern unsigned char lbl_8200BED8[];
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_110;


void fn_826CACF8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  char cVar15;
  ulonglong uVar6;
  uint uVar14;
  char *pcVar16;
  char *pcVar17;
  undefined1 *puVar18;
  bool bVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_b0 [176];
  
  iVar7 = fn_82F6A53C();
  bVar19 = false;
  iStack_114 = 0;
  if (*(int *)(iVar7 + 0x1c) < 1) goto LAB_826cb5d0;
  uVar2 = *(undefined4 *)(iVar7 + 0x18);
  uVar5 = fn_826957D0(iVar7,0);
  fn_82696D38(&puStack_11c,uVar5,uVar2,0xffffffffffffffff,0);
  if (1 < *(int *)(iVar7 + 0x1c)) {
    uVar2 = *(undefined4 *)(iVar7 + 0x18);
    uVar5 = fn_826957D0(iVar7,1);
    iVar8 = fn_82696958(uVar5,uVar2);
    if (((iVar8 != 0) &&
        (iVar9 = (**(code **)(*(int *)(iVar8 + 0x10) + 8))(iVar8 + 0x10), iVar9 == 7)) &&
       (2 < *(int *)(iVar7 + 0x1c))) {
      uVar2 = *(undefined4 *)(iVar7 + 0x18);
      uVar5 = fn_826957D0(iVar7,2);
      iVar9 = fn_82696958(uVar5,uVar2);
      if (((iVar9 != 0) &&
          (iVar10 = (**(code **)(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 == 7)) &&
         (3 < *(int *)(iVar7 + 0x1c))) {
        uVar2 = *(undefined4 *)(iVar7 + 0x18);
        uVar5 = fn_826957D0(iVar7,3);
        iVar10 = fn_82696958(uVar5,uVar2);
        if (((iVar10 != 0) &&
            (iVar11 = (**(code **)(*(int *)(iVar10 + 0x10) + 8))(iVar10 + 0x10), iVar11 == 7)) &&
           ((4 < *(int *)(iVar7 + 0x1c) &&
            (((iVar11 = *(int *)(iVar8 + 0x38), 0 < iVar11 && (iVar11 == *(int *)(iVar9 + 0x38))) &&
             (iVar11 == *(int *)(iVar10 + 0x38))))))) {
          fn_8268CC00(&fStack_f0);
          auStack_100[0] = 0;
          uVar14 = *(uint *)(iVar7 + 0x18);
          lVar20 = (ulonglong)uVar14 + 0x78;
          uVar5 = fn_826957D0(iVar7,4);
          iVar11 = fn_82696958(uVar5,(ulonglong)uVar14);
          iVar21 = iVar11 + 0x10;
          iVar12 = (**(code **)(*(int *)(iVar11 + 0x10) + 8))(iVar21);
          dVar26 = (double)lbl_821AAD20;
          if (iVar12 == 0xf) {
            pfVar13 = (float *)fn_82741A50(auStack_b0,iVar11,*(undefined4 *)(iVar7 + 0x18));
            fStack_f0 = *pfVar13;
            fStack_ec = pfVar13[1];
            fStack_e8 = pfVar13[2];
            fStack_e4 = pfVar13[3];
            fStack_e0 = pfVar13[4];
            fStack_dc = pfVar13[5];
          }
          else {
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bf04,auStack_100);
            if (cVar15 == '\0') {
LAB_826caf7c:
              bVar3 = false;
            }
            else {
              bVar19 = true;
              fn_82696D38(&puStack_120,auStack_100,*(undefined4 *)(iVar7 + 0x18),
                                0xffffffffffffffff,0);
              pcVar16 = "box";
              pcVar17 = (char *)*puStack_120;
              do {
                cVar15 = *pcVar17;
                cVar1 = *pcVar16;
                if (cVar15 == '\0') break;
                pcVar17 = pcVar17 + 1;
                pcVar16 = pcVar16 + 1;
              } while (cVar15 == cVar1);
              if (cVar15 != cVar1) goto LAB_826caf7c;
              bVar3 = true;
            }
            if ((bVar19) &&
               (uVar14 = puStack_120[2], puStack_120[2] = (int)((ulonglong)uVar14 - 1),
               (ulonglong)uVar14 - 1 == 0)) {
              fn_826944C8();
            }
            if (bVar3) {
              cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff821ce358,auStack_100);
              if (cVar15 != '\0') {
                fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              }
              cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff821ce35c,auStack_100);
              if (cVar15 != '\0') {
                fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              }
              cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff821ce364,auStack_100);
              if (cVar15 != '\0') {
                fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              }
              cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bf00,auStack_100);
              if (cVar15 != '\0') {
                fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              }
              cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff821ce348,auStack_100);
              if (cVar15 != '\0') {
                dVar26 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
                dVar26 = (double)(float)dVar26;
              }
                    /* WARNING: Subroutine does not return */
              fn_82F643F8(dVar26);
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200befc,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_f0 = (float)dVar24 * lbl_8200BC20;
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bef8,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_ec = (float)dVar24 * lbl_8200BC20;
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bef4,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_e8 = (float)dVar24;
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bef0,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_e4 = (float)dVar24 * lbl_8200BC20;
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff82197000,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_e0 = (float)dVar24 * lbl_8200BC20;
            }
            cVar15 = fn_82681B80(iVar21,lVar20,0xffffffff8200bf00,auStack_100);
            if (cVar15 != '\0') {
              dVar24 = (double)fn_826972E0(auStack_100,*(undefined4 *)(iVar7 + 0x18));
              fStack_dc = (float)dVar24;
            }
          }
          bVar19 = false;
          dVar24 = dVar26;
          if (5 < *(int *)(iVar7 + 0x1c)) {
            uVar2 = *(undefined4 *)(iVar7 + 0x18);
            uVar5 = fn_826957D0(iVar7,5);
            fn_82696D38(&iStack_114,uVar5,uVar2,0xffffffffffffffff,0);
            if (6 < *(int *)(iVar7 + 0x1c)) {
              uVar2 = *(undefined4 *)(iVar7 + 0x18);
              uVar5 = fn_826957D0(iVar7,6);
              fn_82696D38(&puStack_118,uVar5,uVar2,0xffffffffffffffff,0);
              pcVar16 = "linearRGB";
              pcVar17 = (char *)*puStack_118;
              do {
                cVar15 = *pcVar17;
                cVar1 = *pcVar16;
                if (cVar15 == '\0') break;
                pcVar17 = pcVar17 + 1;
                pcVar16 = pcVar16 + 1;
              } while (cVar15 == cVar1);
              uVar14 = puStack_118[2];
              bVar19 = cVar15 == cVar1;
              puStack_118[2] = (int)((ulonglong)uVar14 - 1);
              if ((ulonglong)uVar14 - 1 == 0) {
                fn_826944C8(puStack_118);
              }
              if (7 < *(int *)(iVar7 + 0x1c)) {
                uVar2 = *(undefined4 *)(iVar7 + 0x18);
                uVar5 = fn_826957D0(iVar7,7);
                dVar24 = (double)fn_826972E0(uVar5,uVar2);
                uStack_110 = (double)(float)dVar24;
                if ((((ulonglong)uStack_110 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
                   (bVar3 = true, ((ulonglong)uStack_110 & 0xfffffffffffff) == 0)) {
                  bVar3 = false;
                }
                dVar24 = dVar26;
                if ((!bVar3) &&
                   ((dVar27 = (double)lbl_8200133C, uStack_110 < dVar27 ||
                    (dVar27 = (double)lbl_82002AE0, dVar24 = uStack_110, dVar27 < uStack_110)))) {
                  dVar24 = dVar27;
                }
              }
            }
            lVar20 = (ulonglong)*(uint *)(iStack_114 + 8) - 1;
            *(int *)(iStack_114 + 8) = (int)lVar20;
            if (lVar20 == 0) {
              fn_826944C8(iStack_114);
            }
          }
          uVar5 = 0x10;
          pcVar16 = "radial";
          pcVar17 = (char *)*puStack_11c;
          do {
            cVar15 = *pcVar17;
            cVar1 = *pcVar16;
            if (cVar15 == '\0') break;
            pcVar17 = pcVar17 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar15 == cVar1);
          if ((cVar15 == cVar1) && (uVar5 = 0x12, dVar24 != dVar26)) {
            uVar5 = 0x13;
          }
          uVar6 = fn_8267B890(lbl_831E7E64,0x14,0);
          if ((uVar6 & 0xffffffff) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = fn_8275A528(uVar6,uVar5,*(uint *)(iVar8 + 0x38) & 0xffff,bVar19);
          }
          if (iVar11 != 0) {
            *(float *)(iVar11 + 0x10) = (float)dVar24;
            iVar12 = 0;
            if (0 < *(int *)(iVar8 + 0x38)) {
              iVar21 = 0;
              iVar22 = 0;
              dVar27 = (double)lbl_82005CCC;
              dVar24 = (double)(float)(((U64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF);
              do {
                uVar14 = fn_82697700(*(undefined4 *)(*(int *)(iVar8 + 0x34) + iVar22),
                                           *(undefined4 *)(iVar7 + 0x18));
                dVar25 = (double)fn_826972E0(*(undefined4 *)(iVar22 + *(int *)(iVar9 + 0x34)),
                                                   *(undefined4 *)(iVar7 + 0x18));
                dVar23 = (double)(float)((double)(float)dVar25 * dVar24);
                if (dVar27 <= (double)(float)((double)(float)dVar25 * dVar24)) {
                  dVar23 = dVar27;
                }
                if (dVar23 < 0.0) {
                  dVar23 = dVar26;
                }
                uStack_110 = (double)(longlong)dVar23;
                uVar4 = (((U64)(uStack_110) >> 32) & 0xFFFFFFFF) << 0x18;
                dVar25 = (double)fn_826972E0(*(undefined4 *)(iVar22 + *(int *)(iVar10 + 0x34))
                                                   ,*(undefined4 *)(iVar7 + 0x18));
                dVar23 = (double)(float)dVar25;
                if (dVar27 <= (double)(float)dVar25) {
                  dVar23 = dVar27;
                }
                if (dVar23 < 0.0) {
                  dVar23 = dVar26;
                }
                iVar12 = iVar12 + 1;
                puVar18 = (undefined1 *)(*(int *)(iVar11 + 0xc) + iVar21);
                iVar22 = iVar22 + 4;
                iVar21 = iVar21 + 8;
                uStack_110 = (double)(longlong)dVar23;
                *puVar18 = (undefined1)uStack_110;
                *(uint *)(puVar18 + 4) = uVar4 | uVar14 & 0xffffff;
              } while (iVar12 < *(int *)(iVar8 + 0x38));
            }
            fn_827599C0(param_2,uVar5,iVar11,&fStack_f0);
            fn_8267C4F0(iVar11);
          }
          fn_82696330(auStack_100);
        }
      }
    }
  }
  uVar14 = puStack_11c[2];
  puStack_11c[2] = (int)((ulonglong)uVar14 - 1);
  if ((ulonglong)uVar14 - 1 == 0) {
    fn_826944C8(puStack_11c);
  }
LAB_826cb5d0:
  fn_82F6A588();
  return;
}


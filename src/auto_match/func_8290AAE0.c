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
extern unsigned int *auStack_f0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82902360();
extern int fn_82902688();
extern int fn_82904138();
extern int fn_82904258();
extern int fn_82904370();
extern int fn_829083F0();
extern int fn_829088E0();
extern int fn_82913308();
extern int fn_82914750();
extern int fn_82F68CC0();
extern unsigned int iStack00000034;
extern unsigned int iStack_104;
extern unsigned int iStack_e4;
extern unsigned int iStack_fc;
extern unsigned int lbl_82005710;
extern unsigned int uStack0000001c;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_e0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_8290AAE0(int param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4,
                      int param_5,int *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  double dVar8;
  int *piVar10;
  double *pdVar11;
  int iVar12;
  longlong lVar9;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double *pdVar21;
  int *piVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uStack0000001c;
  int iStack00000034;
  undefined4 uStack_110;
  int *piStack_10c;
  double *pdStack_108;
  int iStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint auStack_f0 [3];
  int iStack_e4;
  undefined4 uStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  
  dVar8 = dStack_d0;
  uStack_e0 = *(undefined4 *)(param_1 + 0x58);
  uStack_f8 = *(undefined4 *)(param_1 + 0x5c);
  auStack_f0[2] = *(undefined4 *)(param_1 + 0x18);
  uVar16 = *(uint *)(*(int *)(param_1 + 4) + 0x1c);
  uVar18 = (ulonglong)uVar16;
  pdVar11 = (double *)0x0;
  iVar15 = uVar16 << 2;
  piStack_10c = (int *)0x0;
  iVar12 = 0;
  iStack_e4 = 0;
  pdStack_108 = (double *)0x0;
  iStack_104 = 0;
  uStack0000001c = param_2;
  iStack00000034 = param_5;
  piVar10 = (int *)fn_8265C940(iVar15,0x24810000);
  if ((piVar10 != (int *)0x0) &&
     (piStack_10c = (int *)fn_8265C940(iVar15,0x24810000), piStack_10c != (int *)0x0)) {
    pdVar11 = (double *)fn_8265C940(uVar16 << 4,0x24810000);
    if (((pdVar11 != (double *)0x0) &&
        (((pdStack_108 = (double *)fn_8265C940(uVar16 << 4,0x24810000),
          pdStack_108 != (double *)0x0 &&
          (iVar12 = fn_8265C940(iVar15,0x24810000), iVar12 != 0)) &&
         (iStack_104 = fn_8265C940(iVar15,0x24810000), iStack_104 != 0)))) &&
       (iStack_e4 = fn_8265C940(iVar15,0x24810000), iStack_e4 != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if ((param_3 & 0xffffffff) == 0) {
LAB_8290ac40:
        fn_82F68CC0(piVar10,*(undefined4 *)(param_1 + 0x18),iVar15);
        fn_82F68CC0(param_6,*(undefined4 *)(param_1 + 0x18),iVar15);
        if (uVar18 != 0) {
          iVar14 = 0;
          uVar20 = uVar18;
          pdVar21 = pdVar11;
          do {
            iVar13 = *(int *)(*(int *)(param_1 + 0x18) + iVar14);
            if ((iVar13 == -1) || (iVar13 = fn_82902688(param_1,iVar13,pdVar21), iVar13 < 0)) {
              *pdVar21 = *(double *)(param_1 + 0xa8);
              pdVar21[1] = *(double *)(param_1 + 0xb0);
            }
            iVar13 = *(int *)(*(int *)(param_1 + 0x18) + iVar14);
            if ((iVar13 == -1) ||
               (puVar4 = *(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar13 * 4),
               *(uint *)(*(int *)(param_1 + 8) + 0x74) == puVar4[1])) {
              uVar17 = 0x1f;
            }
            else {
              uVar17 = *puVar4 & 0x1f;
            }
            *(uint *)(iVar14 + iVar12) = uVar17;
            uVar20 = uVar20 - 1;
            pdVar21 = pdVar21 + 2;
            iVar14 = iVar14 + 4;
          } while (uVar20 != 0);
        }
        uStack_100 = *(undefined4 *)(param_1 + 0x20);
        bVar7 = false;
        auStack_f0[0] = 0xffffffff;
        iStack_fc = 1;
        uVar20 = 0;
        auStack_f0[1] = 0xffffffff;
        dVar25 = lbl_82005710;
        uStack_f4 = uStack_100;
        do {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
          fn_82F68CC0(piStack_10c,piVar10,iVar15);
          fn_82F68CC0(pdStack_108,pdVar11,uVar16 << 4);
          fn_82F68CC0(iStack_104,iVar12,iVar15);
          uStack_110 = 0xffffffff;
          if ((param_4 & 0xffffffff) != 0) {
            *(int **)(param_1 + 0x18) = piVar10;
            *(undefined4 *)(param_1 + 0x50) = 0;
            uStack_110 = 0xffffffff;
            *(undefined4 *)(param_1 + 0x54) = 0;
            lVar9 = fn_82914750(param_1,param_4,&uStack_110,0);
            if ((lVar9 < 0) ||
               (lVar9 = fn_82904370(param_1,param_4,0x20500001,&uStack_f4,&uStack_f4,&uStack_110,
                                      0x17), lVar9 < 0)) goto LAB_8290b298;
            *(int **)(param_1 + 0x18) = param_6;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            uStack_110 = 0xffffffff;
            lVar9 = fn_82914750(param_1,param_4,&uStack_110,0);
            if ((lVar9 < 0) ||
               (lVar9 = fn_82904370(param_1,param_4,0x20500001,&uStack_100,&uStack_100,&uStack_110
                                      ,0x17), lVar9 < 0)) goto LAB_8290b298;
            if ((*(int *)(param_1 + 0x58) == 0) &&
               ((*(int *)(param_1 + 0x50) != 0 || (*(int *)(param_1 + 0x54) != 0)))) break;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
          iVar14 = fn_82902360(param_1,uStack_100,&dStack_c0);
          if (iVar14 < 0) {
            dStack_c0 = *(double *)(param_1 + 0xb0);
            dStack_b8 = *(double *)(param_1 + 0xa8);
          }
          if ((dVar25 < dStack_c0) || (dStack_b8 < dVar25)) {
            bVar7 = true;
          }
          dVar23 = dStack_b8;
          dVar24 = dStack_c0;
          if (uVar18 != 0) {
            uVar19 = uVar18;
            piVar22 = param_6;
            pdVar21 = pdVar11;
            do {
              if (*piVar22 != -1) {
                iVar14 = fn_82902360(param_1,*piVar22,&dStack_d0);
                if (iVar14 < 0) {
                  dStack_d0 = *(double *)(param_1 + 0xa8);
                  dStack_c8 = *(double *)(param_1 + 0xb0);
                }
                if (bVar7) {
                  pdVar21[1] = dStack_c8;
                  *pdVar21 = dVar8;
                  uVar17 = **(uint **)(*piVar22 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) & 0x1f
                  ;
                }
                else {
                  if (dStack_d0 < *pdVar21) {
                    *pdVar21 = dStack_d0;
                  }
                  if (pdVar21[1] < dStack_c8) {
                    pdVar21[1] = dStack_c8;
                  }
                  uVar17 = **(uint **)(*piVar22 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) &
                           *(uint *)((iVar12 - (int)param_6) + (int)piVar22);
                }
                *(uint *)((iVar12 - (int)param_6) + (int)piVar22) = uVar17;
              }
              uVar19 = uVar19 - 1;
              pdVar21 = pdVar21 + 2;
              piVar22 = piVar22 + 1;
            } while (uVar19 != 0);
          }
          if ((dVar24 == dVar25) && (dVar23 == dVar25)) break;
          if ((dVar24 <= dVar25) && (dVar25 <= dVar23)) {
            *(undefined4 *)(param_1 + 0x58) = 1;
          }
          if (iStack_fc != 0) {
            if ((bVar7) ||
               (iVar14 = fn_829083F0(param_1,uStack_110,uVar20,auStack_f0,auStack_f0 + 1),
               iVar14 == 0)) {
              iStack_fc = 0;
            }
            else {
              iStack_fc = 1;
            }
          }
          iVar14 = iStack00000034;
          if (uVar18 != 0) {
            uVar19 = uVar18;
            piVar22 = piVar10;
            do {
              iVar13 = *piVar22;
              iVar5 = *(int *)((int)param_6 + ((int)piVar22 - (int)piVar10));
              if ((iVar13 != iVar5) && (iVar13 != -1)) {
                iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x14);
                puVar4 = *(uint **)(iVar13 * 4 + iVar3);
                puVar6 = *(uint **)(iVar5 * 4 + iVar3);
                uVar17 = *puVar4;
                *puVar4 = uVar17 & 0xfffffe60;
                *puVar4 = *puVar6 & 0x19f | uVar17 & 0xfffffe60;
                *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar6 + 8);
                *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar6 + 10);
              }
              piVar22 = piVar22 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (iStack00000034 != 0) {
            *(int **)(param_1 + 0x18) = piVar10;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            lVar9 = fn_829088E0(param_1,param_4,uStack_100,iStack00000034,0,0);
            if (lVar9 < 0) goto LAB_8290b298;
            *(int **)(param_1 + 0x18) = param_6;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            lVar9 = fn_82913308(param_1,iVar14,0);
            if (lVar9 < 0) goto LAB_8290b298;
            if ((*(int *)(param_1 + 0x58) == 0) &&
               ((*(int *)(param_1 + 0x50) != 0 || (*(int *)(param_1 + 0x54) != 0)))) break;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
          iVar14 = iStack_104;
          pdVar21 = pdStack_108;
          piVar22 = piStack_10c;
          if (*(int *)(param_1 + 0x5c) != 0) {
            piStack_10c = piVar10;
            pdStack_108 = pdVar11;
            iStack_104 = iVar12;
            fn_82904138(param_1,uVar1,uVar2,piVar22);
            *(undefined4 *)(param_1 + 0x4c) = 0;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            iVar12 = iVar14;
            pdVar11 = pdVar21;
            piVar10 = piVar22;
            if ((uVar20 & 0xffffffff) == 0) {
              uStack_f8 = 1;
            }
            break;
          }
          uVar20 = uVar20 + 1;
        } while ((uVar20 & 0xffffffff) < 0x400);
        if ((uVar20 & 0xffffffff) == 0x400) {
          fn_82904258(param_1,uStack0000001c,0xdb7,0xffffffff8202dd80,0x400);
        }
        else {
          if (uVar18 != 0) {
            pdVar21 = pdVar11;
            piVar22 = piVar10;
            do {
              if (*piVar22 != -1) {
                puVar4 = *(uint **)(*piVar22 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
                *(double *)(puVar4 + 8) = *pdVar21;
                *(double *)(puVar4 + 10) = pdVar21[1];
                uVar16 = *(uint *)((iVar12 - (int)piVar10) + (int)piVar22) & 0xfffffe7f;
                *puVar4 = uVar16;
                if (*(double *)(puVar4 + 8) == *(double *)(puVar4 + 10)) {
                  uVar16 = uVar16 | 0x80;
                }
                else {
                  uVar16 = uVar16 | 0x100;
                }
                *puVar4 = uVar16;
              }
              pdVar21 = pdVar21 + 2;
              piVar22 = piVar22 + 1;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          *(uint *)(param_1 + 0x18) = auStack_f0[2];
          fn_82F68CC0(auStack_f0[2],piVar10,iVar15);
          if (((((uVar20 & 0xffffffff) == 0) || (iStack_fc == 0)) || (*(int *)(param_1 + 0x50) != 0)
              ) || ((*(int *)(param_1 + 0x54) != 0 ||
                    (iVar15 = fn_82904370(param_1,param_4,0x10000001,
                                            ((ulonglong)auStack_f0[0] & 0x3fffffff) * 4 +
                                            (ulonglong)*(uint *)(param_1 + 0x18),auStack_f0 + 1,0,0)
                    , -1 < iVar15)))) goto LAB_8290b288;
        }
        lVar9 = -0x7fffbffb;
      }
      else {
        lVar9 = fn_82913308(param_1,param_3,0);
        if (lVar9 < 0) goto LAB_8290b298;
        if (*(int *)(param_1 + 0x5c) != 0) {
          uStack_f8 = 1;
        }
        if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x54) == 0)) goto LAB_8290ac40;
LAB_8290b288:
        lVar9 = 0;
      }
      goto LAB_8290b298;
    }
  }
  lVar9 = -0x7ff8fff2;
LAB_8290b298:
  *(uint *)(param_1 + 0x18) = auStack_f0[2];
  fn_8265C990(piVar10,0x24810000);
  fn_8265C990(piStack_10c,0x24810000);
  fn_8265C990(iStack_e4,0x24810000);
  fn_8265C990(pdVar11,0x24810000);
  fn_8265C990(pdStack_108,0x24810000);
  fn_8265C990(iVar12,0x24810000);
  fn_8265C990(iStack_104,0x24810000);
  *(undefined4 *)(param_1 + 0x58) = uStack_e0;
  *(undefined4 *)(param_1 + 0x5c) = uStack_f8;
  return lVar9;
}


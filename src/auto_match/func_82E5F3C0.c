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
extern unsigned int *auStack_d0;
extern int fn_82E5CF30();
extern int fn_82E5E1F0();
extern int fn_82E5E628();
extern unsigned int iStack_b4;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int lbl_821537D8;
extern unsigned int lbl_821537E8;
extern unsigned int lbl_821537F8;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E5F3C0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar7;
  int iVar6;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int **ppiVar18;
  ulonglong uVar17;
  ushort auStack_d0 [2];
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  
  if (param_1 == (int *)0x0) {
    lVar5 = -0x7ff8ffa9;
  }
  else {
    piStack_cc = (int *)0x0;
    piStack_c4 = (int *)0x0;
    piVar12 = (int *)0x0;
    piStack_c8 = (int *)0x0;
    piVar13 = (int *)0x0;
    uStack_bc = 0;
    piVar11 = (int *)0x0;
    piVar10 = (int *)0x0;
    lVar5 = (**(code **)(*param_1 + 0x84))(param_1,&uStack_bc);
    if (-1 < lVar5) {
      uVar14 = 0;
      uVar15 = 0xffffffff;
      uVar16 = 0xffffffff;
      if (uStack_bc != 0) {
        do {
          auStack_d0[1] = 0;
          lVar5 = (**(code **)(*param_1 + 0x88))(param_1,uVar14,auStack_d0 + 1,&piStack_cc);
          if (((lVar5 < 0) || (lVar5 = fn_82E5E628(piStack_cc,1), lVar5 < 0)) ||
             (lVar5 = (**(code **)(*piStack_cc + 0x90))(piStack_cc,&piStack_c4), lVar5 < 0))
          goto LAB_82e5f9b8;
          if (piStack_c4 == (int *)0x0) {
            lVar5 = -0x3ff2c945;
            break;
          }
          uStack_b0 = lbl_8202E618;
          uStack_ac = lbl_8202E61C;
          uStack_a8 = lbl_8202E620;
          uStack_a4 = lbl_8202E624;
          lVar5 = (**(code **)(*piStack_c4 + 0x84))(piStack_c4,&uStack_b0);
          if (lVar5 < 0) goto LAB_82e5f9b8;
          if (piStack_c4 != (int *)0x0) {
            (**(code **)(*piStack_c4 + 8))();
            piStack_c4 = (int *)0x0;
          }
          uStack_c0 = 0;
          lVar5 = fn_82E5E1F0(piStack_cc,0xffffffff8214c2a0,&uStack_c0,0);
          uVar4 = uStack_c0;
          if (lVar5 < 0) goto LAB_82e5f9b8;
          pbVar8 = (byte *)&uStack_b0;
          pbVar9 = &lbl_821537A8;
          do {
            bVar1 = *pbVar9;
            bVar2 = *pbVar8;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar9 != &lbl_821537B8);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            if (uStack_c0 < uVar15) {
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 8))(piVar12);
              }
              iVar6 = *piStack_cc;
              uVar15 = uVar4;
              piVar12 = piStack_cc;
LAB_82e5f6d8:
              (**(code **)(iVar6 + 4))();
            }
          }
          else {
            pbVar8 = (byte *)&uStack_b0;
            pbVar9 = &lbl_821537B8;
            do {
              bVar1 = *pbVar9;
              bVar2 = *pbVar8;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar9 = pbVar9 + 1;
              pbVar8 = pbVar8 + 1;
            } while (pbVar9 != &lbl_821537C8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              if (uStack_c0 < uVar16) {
                if (piVar13 != (int *)0x0) {
                  (**(code **)(*piVar13 + 8))(piVar13);
                }
                iVar6 = *piStack_cc;
                uVar16 = uVar4;
                piVar13 = piStack_cc;
                goto LAB_82e5f6d8;
              }
            }
            else {
              if (piVar11 == (int *)0x0) {
                pbVar8 = (byte *)&uStack_b0;
                pbVar9 = &lbl_821537D8;
                do {
                  bVar1 = *pbVar9;
                  bVar2 = *pbVar8;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar9 = pbVar9 + 1;
                  pbVar8 = pbVar8 + 1;
                } while (pbVar9 != &lbl_821537E8);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                  iVar6 = *piStack_cc;
                  piVar11 = piStack_cc;
                  goto LAB_82e5f6d8;
                }
              }
              if (piVar10 == (int *)0x0) {
                pbVar8 = (byte *)&uStack_b0;
                pbVar9 = &lbl_821537E8;
                do {
                  bVar1 = *pbVar9;
                  bVar2 = *pbVar8;
                  if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                  pbVar9 = pbVar9 + 1;
                  pbVar8 = pbVar8 + 1;
                } while (pbVar9 != &lbl_821537F8);
                if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                  iVar6 = *piStack_cc;
                  piVar10 = piStack_cc;
                  goto LAB_82e5f6d8;
                }
              }
            }
          }
          if (piStack_cc != (int *)0x0) {
            (**(code **)(*piStack_cc + 8))();
            piStack_cc = (int *)0x0;
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uStack_bc);
      }
      if (-1 < (int)lVar5) {
        uVar15 = 0;
        ppiVar18 = &piStack_a0;
        piStack_a0 = piVar12;
        piStack_9c = piVar13;
        piStack_98 = piVar11;
        piStack_94 = piVar10;
        do {
          if ((*ppiVar18 != (int *)0x0) && (lVar5 = fn_82E5E628(*ppiVar18,0), lVar5 < 0))
          goto LAB_82e5f9b8;
          uVar15 = uVar15 + 1;
          ppiVar18 = ppiVar18 + 1;
        } while (uVar15 < 4);
        if (-1 < (int)lVar5) {
          uStack_b8 = 0;
          lVar5 = (**(code **)(*param_1 + 0x9c))(param_1,&uStack_b8);
          if ((-1 < lVar5) && (uVar14 = 0, uStack_b8 != 0)) {
            while (piVar13 != (int *)0x0) {
              uVar7 = (**(code **)(*piVar13 + 0x88))(piVar13);
              iVar6 = fn_82E5CF30(param_1,uVar14);
              if (iVar6 != 0) {
                lVar5 = (**(code **)(*param_1 + 0xa0))(param_1,uVar14,&piStack_c8);
                if (lVar5 < 0) break;
                uStack_c0 = 0;
                lVar5 = (**(code **)(*piStack_c8 + 0x14))(piStack_c8,&uStack_c0);
                if (lVar5 < 0) break;
                bVar3 = false;
                uVar17 = 0;
                if (uStack_c0 != 0) {
                  do {
                    if (bVar3) break;
                    auStack_d0[0] = 0;
                    iStack_b4 = 1;
                    lVar5 = (**(code **)(*piStack_c8 + 0x18))
                                      (piStack_c8,uVar17,auStack_d0,&iStack_b4);
                    if (lVar5 < 0) goto LAB_82e5f9b8;
                    if (iStack_b4 != 1) {
                      lVar5 = -0x7fff0001;
                      break;
                    }
                    if (uVar7 == auStack_d0[0]) {
                      bVar3 = true;
                    }
                    uVar17 = uVar17 + 1;
                  } while ((uVar17 & 0xffffffff) < (ulonglong)uStack_c0);
                }
                if ((int)lVar5 < 0) break;
                if (bVar3) {
                  uVar17 = 0;
                  if (uStack_c0 != 0) {
                    do {
                      auStack_d0[0] = 0;
                      iStack_b4 = 1;
                      lVar5 = (**(code **)(*piStack_c8 + 0x18))
                                        (piStack_c8,uVar17,auStack_d0,&iStack_b4);
                      if (lVar5 < 0) goto LAB_82e5f9b8;
                      if (iStack_b4 != 1) {
                        lVar5 = -0x7fff0001;
                        break;
                      }
                      lVar5 = (**(code **)(*param_1 + 0x8c))(param_1,auStack_d0[0],&piStack_cc);
                      if ((lVar5 < 0) || (lVar5 = fn_82E5E628(piStack_cc,0), lVar5 < 0))
                      goto LAB_82e5f9b8;
                      if (piStack_cc != (int *)0x0) {
                        (**(code **)(*piStack_cc + 8))();
                        piStack_cc = (int *)0x0;
                      }
                      uVar17 = uVar17 + 1;
                    } while ((uVar17 & 0xffffffff) < (ulonglong)uStack_c0);
                  }
                  if ((int)lVar5 < 0) break;
                }
                if (piStack_c8 != (int *)0x0) {
                  (**(code **)(*piStack_c8 + 8))();
                  piStack_c8 = (int *)0x0;
                }
              }
              uVar14 = uVar14 + 1;
              if ((ulonglong)uStack_b8 <= (uVar14 & 0xffffffff)) break;
            }
          }
        }
      }
    }
LAB_82e5f9b8:
    if (piStack_cc != (int *)0x0) {
      (**(code **)(*piStack_cc + 8))();
      piStack_cc = (int *)0x0;
    }
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
    }
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 8))(piVar13);
    }
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))(piVar10);
    }
    if (piStack_c4 != (int *)0x0) {
      (**(code **)(*piStack_c4 + 8))();
      piStack_c4 = (int *)0x0;
    }
    if (piStack_c8 != (int *)0x0) {
      (**(code **)(*piStack_c8 + 8))();
    }
  }
  return lVar5;
}


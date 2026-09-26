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
extern unsigned int *auStack_a0;
extern int fn_82A75588();
extern int fn_82C1AC88();
extern int fn_82C2CAC0();
extern int fn_82C30370();
extern int fn_82C3DB38();
extern int fn_82C40FB0();


undefined8 fn_82C34E90(int *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int *piVar10;
  short *psVar11;
  int iVar12;
  longlong lVar9;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint auStack_a0 [40];
  
  iVar3 = *param_1;
  uVar5 = 0;
  if (*(int *)(iVar3 + 0x3c) < 3) {
LAB_82c34eb8:
    uVar5 = 0xffffffff80040002;
  }
  else {
    iVar12 = param_1[10];
    while (iVar12 != 10) {
      switch(param_1[10]) {
      case 0:
        uVar1 = *(ushort *)(iVar3 + 0x22);
        sVar6 = (short)*(int *)(iVar3 + 0x100);
        iVar12 = *(int *)(iVar3 + 0x100) * (uint)uVar1;
        sVar8 = sVar6;
        if (uVar1 != 0) {
          sVar7 = 0;
          piVar10 = (int *)(*(int *)(iVar3 + 0x140) + 0x1a8);
          do {
            sVar2 = **(short **)(*piVar10 + 0xc);
            if (sVar2 < sVar8) {
              sVar6 = *(short *)(*(short *)((int)piVar10 + -0x136) * 2 + *(int *)(*piVar10 + 8));
              sVar8 = sVar2;
            }
            sVar7 = sVar7 + 1;
            piVar10 = piVar10 + 0x1bc;
          } while ((int)sVar7 < (int)(uint)uVar1);
        }
        sVar7 = 0;
        *(undefined2 *)(iVar3 + 0x244) = 0;
        if (uVar1 != 0) {
          psVar11 = (short *)(*(int *)(iVar3 + 0x140) + 0x72);
          do {
            iVar14 = *(int *)(*(int *)(psVar11 + 0x9b) + 8);
            sVar2 = **(short **)(*(int *)(psVar11 + 0x9b) + 0xc);
            iVar12 = iVar12 - sVar2;
            if ((sVar8 == sVar2) && (sVar6 == *(short *)(*psVar11 * 2 + iVar14))) {
              *(short *)(*(short *)(iVar3 + 0x244) * 2 + *(int *)(iVar3 + 0x248)) = sVar7;
              *(short *)(iVar3 + 0x244) = *(short *)(iVar3 + 0x244) + 1;
              psVar11[6] = *(short *)((*psVar11 + 1) * 2 + iVar14);
              psVar11[5] = *(short *)(*psVar11 * 2 + iVar14);
              psVar11[4] = *(short *)(*psVar11 * 2 + iVar14 + -2);
              iVar12 = iVar12 - *(short *)(*psVar11 * 2 + iVar14);
            }
            sVar7 = sVar7 + 1;
            psVar11 = psVar11 + 0x378;
          } while ((int)sVar7 < (int)(uint)*(ushort *)(iVar3 + 0x22));
        }
        if ((((int)(uint)*(ushort *)(iVar3 + 0x22) < (int)*(short *)(iVar3 + 0x244)) ||
            (*(short *)(iVar3 + 0x244) < 1)) || (iVar12 < 0)) goto LAB_82c34eb8;
        param_1[0x36] = (uint)(iVar12 == 0);
        uVar5 = fn_82C2CAC0(iVar3);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar5 = fn_82C1AC88(iVar3);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        param_1[10] = 2;
        break;
      case 1:
        goto switchD_82c34f1c_caseD_1;
      case 2:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0xc0) = auStack_a0[0];
        if ((int)*(short *)(iVar3 + 0x244) != (uint)*(ushort *)(iVar3 + 0x22)) goto LAB_82c34eb8;
        if (auStack_a0[0] == 1) {
          param_1[10] = 0x12;
        }
        else {
          param_1[10] = 1;
        }
        break;
      case 3:
        goto switchD_82c34f1c_caseD_3;
      case 0x11:
        goto switchD_82c34f1c_caseD_11;
      case 0x12:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0xbc) = auStack_a0[0];
        if (auStack_a0[0] == 1) goto LAB_82c34eb8;
        param_1[10] = 0x11;
switchD_82c34f1c_caseD_11:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0xb4) = auStack_a0[0];
        param_1[10] = 3;
switchD_82c34f1c_caseD_3:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0xb8) = auStack_a0[0];
        param_1[10] = 0x13;
switchD_82c34f1c_caseD_13:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0x290) = auStack_a0[0];
        param_1[10] = 0x14;
        break;
      case 0x13:
        goto switchD_82c34f1c_caseD_13;
      case 0x14:
        if (*(int *)(iVar3 + 0xb4) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar15 = auStack_a0[0] + 1;
          if ((4 < uVar15) || (uVar15 == 0)) goto LAB_82c34eb8;
          *(int *)(iVar3 + 0x288) = (int)(short)uVar15;
        }
        param_1[10] = 0x15;
        goto switchD_82c34f1c_caseD_15;
      case 0x15:
switchD_82c34f1c_caseD_15:
        if (*(int *)(iVar3 + 0xb4) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          sVar6 = (short)auStack_a0[0];
          if ((0xc < sVar6) || (sVar6 < 0)) goto LAB_82c34eb8;
          *(short *)(iVar3 + 0x246) = sVar6;
        }
        *(undefined4 *)(iVar3 + 0x28c) = 0;
        param_1[10] = 0x16;
switchD_82c34f1c_caseD_16:
        if ((*(int *)(iVar3 + 0xb4) == 1) && (*(int *)(iVar3 + 0x28c) < *(int *)(iVar3 + 0x288))) {
          do {
            if (*(int *)(iVar3 + 0xc0) == 1) {
              uVar5 = fn_82C30370(param_1 + 0x38,*(undefined2 *)(iVar3 + 0x246),auStack_a0);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              lVar9 = (ulonglong)auStack_a0[0] + 1;
              if ((lVar9 == 0) || (1 << ((int)*(short *)(iVar3 + 0x246) & 0x3fU) < (int)lVar9))
              goto LAB_82c34eb8;
              *(int *)((*(int *)(iVar3 + 0x28c) + 0x9e) * 4 + iVar3) = (int)(short)lVar9;
            }
            iVar12 = *(int *)(iVar3 + 0x28c) + 1;
            *(int *)(iVar3 + 0x28c) = iVar12;
          } while (iVar12 < *(int *)(iVar3 + 0x288));
        }
        param_1[10] = 0x17;
switchD_82c34f1c_caseD_17:
        if (*(int *)(iVar3 + 0x290) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar15 = (auStack_a0[0] + 1) * 2;
          if ((8 < uVar15) || (uVar15 < 2)) goto LAB_82c34eb8;
          *(uint *)(iVar3 + 0x298) = uVar15;
        }
        param_1[10] = 0x18;
switchD_82c34f1c_caseD_18:
        if (*(int *)(iVar3 + 0x290) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          if ((0xc < (int)auStack_a0[0]) || ((int)auStack_a0[0] < 0)) goto LAB_82c34eb8;
          *(uint *)(iVar3 + 0x2a0) = auStack_a0[0];
          fn_82C3DB38(iVar3,iVar3 + 0x298);
        }
        param_1[10] = 0x19;
switchD_82c34f1c_caseD_19:
        if (*(int *)(iVar3 + 0x290) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          *(uint *)(iVar3 + 0x294) = auStack_a0[0];
        }
        *(undefined2 *)((int)param_1 + 0x92) = 0;
        param_1[10] = 0x1a;
switchD_82c34f1c_caseD_1a:
        if ((*(int *)(iVar3 + 0x290) == 1) && (*(int *)(iVar3 + 0x294) == 1)) {
          iVar12 = *(int *)(iVar3 + 0x2a0);
          lVar9 = 0;
          if (1 < iVar12 + 1U) {
            do {
              lVar9 = lVar9 + 1;
            } while (1 < iVar12 + 1U >> ((uint)lVar9 & 0x3f));
          }
          if (1 << ((uint)lVar9 & 0x3f) < iVar12 + 1) {
            lVar9 = lVar9 + 1;
          }
          uVar5 = fn_82C30370(param_1 + 0x38,lVar9,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          if (*(int *)(iVar3 + 0x2a0) + 2 < (int)(auStack_a0[0] + 2)) goto LAB_82c34eb8;
          *(int *)(iVar3 + 0x2a8) = (short)auStack_a0[0] + 2;
        }
        *(undefined2 *)((int)param_1 + 0x92) = 0;
        param_1[10] = 0x1b;
switchD_82c34f1c_caseD_1b:
        if ((*(int *)(iVar3 + 0x290) == 1) && (*(int *)(iVar3 + 0x294) == 1)) {
          iVar12 = *(int *)(iVar3 + 0x2a8);
          iVar14 = *(int *)(iVar3 + 0x2a0);
          if ((int)*(short *)((int)param_1 + 0x92) <
              (int)((uint)*(ushort *)(iVar3 + 0x22) * (uint)*(ushort *)(iVar3 + 0x22) *
                   *(int *)(iVar3 + 0x298))) {
            do {
              uVar5 = fn_82C30370(param_1 + 0x38,*(undefined4 *)(iVar3 + 0x2a8),auStack_a0);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              auStack_a0[0] =
                   (int)(auStack_a0[0] << (0x20U - iVar12 & 0x3f)) >> (0x1eU - iVar14 & 0x3f);
              *(short *)(*(short *)((int)param_1 + 0x92) * 2 + *(int *)(iVar3 + 0x2b8)) =
                   (short)auStack_a0[0];
              sVar6 = *(short *)((int)param_1 + 0x92) + 1;
              *(short *)((int)param_1 + 0x92) = sVar6;
            } while ((int)sVar6 <
                     (int)((uint)*(ushort *)(iVar3 + 0x22) * (uint)*(ushort *)(iVar3 + 0x22) *
                          *(int *)(iVar3 + 0x298)));
          }
        }
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        *(undefined2 *)((int)param_1 + 0x92) = 0;
        param_1[10] = 0x1c;
switchD_82c34f1c_caseD_1c:
        if ((*(int *)(iVar3 + 0x290) == 1) && (*(int *)(iVar3 + 0x294) == 1)) {
          iVar12 = *(int *)(iVar3 + 0x2a8);
          iVar14 = *(int *)(iVar3 + 0x2a0);
          if ((int)*(short *)((int)param_1 + 0x96) < (int)(uint)*(ushort *)(iVar3 + 0x22)) {
            do {
              if (*(short *)((int)param_1 + 0x92) < *(short *)((int)param_1 + 0x96)) {
                do {
                  uVar5 = fn_82C30370(param_1 + 0x38,*(undefined4 *)(iVar3 + 0x2a8),auStack_a0);
                  if ((int)uVar5 < 0) {
                    return uVar5;
                  }
                  auStack_a0[0] =
                       (int)(auStack_a0[0] << (0x20U - iVar12 & 0x3f)) >> (0x1eU - iVar14 & 0x3f);
                  *(short *)(((uint)*(ushort *)(iVar3 + 0x22) * (int)*(short *)((int)param_1 + 0x96)
                             + (int)*(short *)((int)param_1 + 0x92)) * 2 + *(int *)(iVar3 + 0x2c0))
                       = (short)auStack_a0[0];
                  sVar6 = *(short *)((int)param_1 + 0x92) + 1;
                  *(short *)((int)param_1 + 0x92) = sVar6;
                } while (sVar6 < *(short *)((int)param_1 + 0x96));
              }
              *(undefined2 *)((int)param_1 + 0x92) = 0;
              sVar6 = *(short *)((int)param_1 + 0x96) + 1;
              *(short *)((int)param_1 + 0x96) = sVar6;
            } while ((int)sVar6 < (int)(uint)*(ushort *)(iVar3 + 0x22));
          }
        }
        param_1[10] = 0x1d;
switchD_82c34f1c_caseD_1d:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0x2cc) = auStack_a0[0];
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        param_1[10] = 0x21;
        param_1[0xb] = 0;
switchD_82c34f1c_caseD_21:
        if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar3 + 0x244)) {
          do {
            uVar15 = param_1[0xb];
            iVar12 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar3 + 0x248)) *
                     0x6f0 + *(int *)(iVar3 + 0x140);
            if (uVar15 < 4) {
              if (uVar15 == 1) {
LAB_82c357dc:
                if (*(short *)(iVar12 + 0xb8) < *(short *)(iVar12 + 0xb6)) {
                  do {
                    uVar5 = fn_82C30370(param_1 + 0x38,7,auStack_a0);
                    if ((int)uVar5 < 0) {
                      return uVar5;
                    }
                    uVar15 = (auStack_a0[0] + 1) * 8;
                    if ((0x100 < uVar15) || (uVar15 < 8)) goto LAB_82c34eb8;
                    *(uint *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 200) = uVar15;
                    sVar6 = *(short *)(iVar12 + 0xb8) + 1;
                    *(short *)(iVar12 + 0xb8) = sVar6;
                  } while (sVar6 < *(short *)(iVar12 + 0xb6));
                }
                *(undefined2 *)(iVar12 + 0xb8) = 0;
                param_1[0xb] = 2;
LAB_82c3586c:
                if (*(short *)(iVar12 + 0xb8) < *(short *)(iVar12 + 0xb6)) {
                  do {
                    uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
                    if ((int)uVar5 < 0) {
                      return uVar5;
                    }
                    if ((0xc < (int)auStack_a0[0]) || ((int)auStack_a0[0] < 0)) goto LAB_82c34eb8;
                    *(uint *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xdc) = auStack_a0[0];
                    sVar6 = *(short *)(iVar12 + 0xb8) + 1;
                    *(short *)(iVar12 + 0xb8) = sVar6;
                  } while (sVar6 < *(short *)(iVar12 + 0xb6));
                }
                *(undefined2 *)(iVar12 + 0xb8) = 0;
                param_1[0xb] = 3;
                param_1[0xc] = 0;
              }
              else {
                if (uVar15 == 2) goto LAB_82c3586c;
                if (uVar15 == 0) {
                  uVar5 = fn_82C30370(param_1 + 0x38,3,auStack_a0);
                  if ((int)uVar5 < 0) {
                    return uVar5;
                  }
                  uVar15 = auStack_a0[0] + 1;
                  if ((uVar15 < 5) && (uVar15 != 0)) {
                    *(undefined2 *)(iVar12 + 0xb8) = 0;
                    *(short *)(iVar12 + 0xb6) = (short)uVar15;
                    param_1[0xb] = 1;
                    goto LAB_82c357dc;
                  }
                  goto LAB_82c34eb8;
                }
              }
              if ((*(int *)(iVar3 + 0x2cc) == 1) &&
                 (*(short *)(iVar12 + 0xb8) < *(short *)(iVar12 + 0xb6))) {
                do {
                  uVar15 = param_1[0xc];
                  if (uVar15 == 0) {
                    lVar9 = 0;
                    uVar15 = *(uint *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 200);
                    if (1 < uVar15) {
                      do {
                        lVar9 = lVar9 + 1;
                      } while (1 < *(uint *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 200) >>
                                   ((uint)lVar9 & 0x3f));
                    }
                    if (1 << ((uint)lVar9 & 0x3f) < (int)uVar15) {
                      lVar9 = lVar9 + 1;
                    }
                    uVar5 = fn_82C30370(param_1 + 0x38,lVar9,auStack_a0);
                    if ((int)uVar5 < 0) {
                      return uVar5;
                    }
                    *(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xd4) =
                         (short)auStack_a0[0] + 1;
                    param_1[0xc] = 1;
LAB_82c359c8:
                    lVar9 = 0;
                    iVar14 = *(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xdc);
                    if (1 < iVar14 + 1U) {
                      do {
                        lVar9 = lVar9 + 1;
                      } while (1 < *(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xdc) + 1U
                                   >> ((uint)lVar9 & 0x3f));
                    }
                    if (1 << ((uint)lVar9 & 0x3f) < iVar14 + 1) {
                      lVar9 = lVar9 + 1;
                    }
                    uVar5 = fn_82C30370(param_1 + 0x38,lVar9,auStack_a0);
                    if ((int)uVar5 < 0) {
                      return uVar5;
                    }
                    *(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xd8) =
                         (short)auStack_a0[0] + 2;
                    *(undefined2 *)((int)param_1 + 0x92) = 0;
                    param_1[0xc] = 2;
LAB_82c35a64:
                    iVar13 = *(short *)(iVar12 + 0xb8) * 0x38 + iVar12;
                    iVar14 = *(int *)(iVar13 + 0xd8);
                    iVar4 = *(int *)(iVar13 + 0xdc);
                    if ((int)*(short *)((int)param_1 + 0x92) < *(int *)(iVar13 + 0xd4)) {
                      do {
                        uVar5 = fn_82C30370(param_1 + 0x38,iVar14,auStack_a0);
                        if ((int)uVar5 < 0) {
                          return uVar5;
                        }
                        auStack_a0[0] =
                             (int)(auStack_a0[0] << (0x20U - iVar14 & 0x3f)) >>
                             (0x1eU - iVar4 & 0x3f);
                        *(short *)(*(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xfc) +
                                  *(short *)((int)param_1 + 0x92) * 2) = (short)auStack_a0[0];
                        sVar6 = *(short *)((int)param_1 + 0x92) + 1;
                        *(short *)((int)param_1 + 0x92) = sVar6;
                      } while ((int)sVar6 <
                               *(int *)(*(short *)(iVar12 + 0xb8) * 0x38 + iVar12 + 0xd4));
                    }
                    param_1[0xc] = 0;
                  }
                  else {
                    if (uVar15 == 1) goto LAB_82c359c8;
                    if (uVar15 < 3) goto LAB_82c35a64;
                  }
                  param_1[0xc] = 0;
                  sVar6 = *(short *)(iVar12 + 0xb8) + 1;
                  *(short *)(iVar12 + 0xb8) = sVar6;
                } while (sVar6 < *(short *)(iVar12 + 0xb6));
              }
              *(undefined2 *)(iVar12 + 0xb8) = 0;
              param_1[0xb] = 0;
            }
            sVar6 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar6;
          } while (sVar6 < *(short *)(iVar3 + 0x244));
        }
        param_1[10] = 0x22;
switchD_82c34f1c_caseD_22:
        uVar5 = fn_82C30370(param_1 + 0x38,3,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(short *)(iVar3 + 0x2d8) = (short)auStack_a0[0];
        param_1[10] = 0x23;
switchD_82c34f1c_caseD_23:
        uVar5 = fn_82C30370(param_1 + 0x38,8,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        uVar15 = auStack_a0[0] + 1;
        if ((uVar15 == 0) || (0x80 < uVar15)) goto LAB_82c34eb8;
        *(short *)(iVar3 + 0xd0) = (short)uVar15;
        if (*(int *)(iVar3 + 0xc0) == 1) {
          fn_82C40FB0(iVar3,*(undefined4 *)(iVar3 + 0x140));
        }
        param_1[10] = 1;
switchD_82c34f1c_caseD_1:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(uint *)(iVar3 + 0xcc) = auStack_a0[0];
        if (0 < *(short *)(iVar3 + 0x244)) {
          iVar14 = 0;
          iVar12 = 0;
          do {
            sVar6 = (short)iVar14 + 1;
            iVar14 = (int)sVar6;
            psVar11 = (short *)(iVar12 + *(int *)(iVar3 + 0x248));
            iVar12 = iVar14 << 1;
            *(undefined4 *)(*psVar11 * 0x6f0 + *(int *)(iVar3 + 0x140) + 0x28) = 1;
          } while (sVar6 < *(short *)(iVar3 + 0x244));
        }
        if (*(int *)(iVar3 + 0xcc) == 1) {
          param_1[10] = 0x32;
        }
        else {
          param_1[10] = 0x20;
        }
        break;
      case 0x16:
        goto switchD_82c34f1c_caseD_16;
      case 0x17:
        goto switchD_82c34f1c_caseD_17;
      case 0x18:
        goto switchD_82c34f1c_caseD_18;
      case 0x19:
        goto switchD_82c34f1c_caseD_19;
      case 0x1a:
        goto switchD_82c34f1c_caseD_1a;
      case 0x1b:
        goto switchD_82c34f1c_caseD_1b;
      case 0x1c:
        goto switchD_82c34f1c_caseD_1c;
      case 0x1d:
        goto switchD_82c34f1c_caseD_1d;
      case 0x20:
        uVar5 = fn_82A75588(param_1 + 0x38,*(undefined2 *)(iVar3 + 0x244));
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (0 < *(short *)(iVar3 + 0x244)) {
          iVar14 = 0;
          iVar12 = 0;
          do {
            iVar4 = *(int *)(iVar3 + 0x140);
            sVar6 = *(short *)(iVar12 + *(int *)(iVar3 + 0x248));
            uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            sVar8 = (short)iVar14 + 1;
            iVar14 = (int)sVar8;
            *(uint *)(sVar6 * 0x6f0 + iVar4 + 0x28) = auStack_a0[0];
            iVar12 = iVar14 << 1;
          } while (sVar8 < *(short *)(iVar3 + 0x244));
        }
        *(undefined2 *)(iVar3 + 0x2f8) = 0;
        param_1[10] = 0x31;
      case 0x31:
        if (*(int *)(iVar3 + 0x78) == 1) {
          param_1[10] = 0x26;
        }
        else {
LAB_82c35f50:
          param_1[10] = 0x32;
        }
        break;
      case 0x21:
        goto switchD_82c34f1c_caseD_21;
      case 0x22:
        goto switchD_82c34f1c_caseD_22;
      case 0x23:
        goto switchD_82c34f1c_caseD_23;
      case 0x25:
        goto switchD_82c34f1c_caseD_25;
      case 0x26:
        if (*(int *)(iVar3 + 0x78) == 1) {
          uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          *(uint *)(iVar3 + 0xa4) = auStack_a0[0];
        }
        param_1[10] = 0x25;
switchD_82c34f1c_caseD_25:
        if ((*(int *)(iVar3 + 0x78) == 1) && (*(int *)(iVar3 + 0xa4) == 1)) {
          uVar5 = fn_82C30370(param_1 + 0x38,5,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          *(short *)(iVar3 + 0xa8) = (short)auStack_a0[0] + 1;
        }
        param_1[10] = 0x2c;
switchD_82c34f1c_caseD_2c:
        if ((*(int *)(iVar3 + 0x78) == 1) && (*(int *)(iVar3 + 0xa4) == 1)) {
          uVar5 = fn_82C30370(param_1 + 0x38,4,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          if ((0xc < (int)auStack_a0[0]) || ((int)auStack_a0[0] < 0)) goto LAB_82c34eb8;
          *(short *)(iVar3 + 0xaa) = (short)auStack_a0[0];
        }
        param_1[10] = 0x2e;
switchD_82c34f1c_caseD_2e:
        if ((*(int *)(iVar3 + 0x78) == 1) && (*(int *)(iVar3 + 0xa4) == 1)) {
          uVar5 = fn_82C30370(param_1 + 0x38,3,auStack_a0);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar15 = auStack_a0[0] + 1;
          if ((uVar15 == 0) || (8 < uVar15)) goto LAB_82c34eb8;
          *(short *)(iVar3 + 0xac) = (short)uVar15;
        }
        *(undefined2 *)((int)param_1 + 0x96) = 0;
        *(undefined2 *)(param_1 + 0x25) = 0;
        param_1[10] = 0x2f;
switchD_82c34f1c_caseD_2f:
        if (((*(int *)(iVar3 + 0x78) == 1) && (*(int *)(iVar3 + 0xa4) == 1)) &&
           (*(short *)((int)param_1 + 0x96) < *(short *)(iVar3 + 0x244))) {
          do {
            iVar12 = *(int *)(iVar3 + 0x140);
            sVar6 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar3 + 0x248));
            if (*(short *)(param_1 + 0x25) < *(short *)(iVar3 + 0xa8)) {
              do {
                sVar8 = *(short *)(iVar3 + 0xac) + *(short *)(iVar3 + 0xaa);
                uVar5 = fn_82C30370(param_1 + 0x38,sVar8,auStack_a0);
                if ((int)uVar5 < 0) {
                  return uVar5;
                }
                uVar15 = 0x20 - (int)sVar8;
                *(int *)(*(short *)(param_1 + 0x25) * 4 + sVar6 * 0x6f0 + iVar12 + 0x5b0) =
                     (int)(auStack_a0[0] << (uVar15 & 0x3f)) >> (uVar15 & 0x3f);
                sVar8 = *(short *)(param_1 + 0x25);
                *(short *)(param_1 + 0x25) = sVar8 + 1;
              } while ((short)(sVar8 + 1) < *(short *)(iVar3 + 0xa8));
            }
            *(undefined2 *)(param_1 + 0x25) = 0;
            sVar6 = *(short *)((int)param_1 + 0x96) + 1;
            *(short *)((int)param_1 + 0x96) = sVar6;
          } while (sVar6 < *(short *)(iVar3 + 0x244));
        }
        goto LAB_82c35f50;
      case 0x2c:
        goto switchD_82c34f1c_caseD_2c;
      case 0x2e:
        goto switchD_82c34f1c_caseD_2e;
      case 0x2f:
        goto switchD_82c34f1c_caseD_2f;
      case 0x32:
        uVar5 = fn_82C30370(param_1 + 0x38,1,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (auStack_a0[0] == 0) {
          *(undefined1 *)(iVar3 + 200) = 0;
          goto LAB_82c35fbc;
        }
        param_1[10] = 0x33;
        break;
      case 0x33:
        uVar5 = fn_82C30370(param_1 + 0x38,5,auStack_a0);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (*(ushort *)(iVar3 + 0x6e) <= auStack_a0[0]) goto LAB_82c34eb8;
        *(char *)(iVar3 + 200) = (char)auStack_a0[0];
LAB_82c35fbc:
        param_1[10] = 10;
      }
      iVar12 = param_1[10];
    }
    if (*(int *)(iVar3 + 0xc0) == 1) {
      param_1[5] = 1;
    }
  }
  return uVar5;
}


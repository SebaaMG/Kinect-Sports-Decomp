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
extern int fn_82967558();
extern int fn_829675E8();


undefined8 fn_829678C0(int param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar6;
  undefined8 uVar5;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int *piVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  int aiStack_80 [32];
  
  uVar14 = 0;
  uVar8 = 0;
  piVar7 = param_3;
  do {
    if (*piVar7 == -1) break;
    uVar8 = uVar8 + 1;
    uVar14 = uVar14 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar8 < 4);
  if ((uVar14 & 0xffffffff) == 0) {
    return 0;
  }
  uVar8 = 0;
  if (((*(uint *)(param_1 + 0x6c) & 0x20000000) == 0) &&
     ((*(uint *)(param_1 + 0x6c) & 0x10000000) == 0)) {
    if ((uVar14 & 0xffffffff) != 0) {
      puVar9 = param_4 + -1;
      uVar17 = uVar14;
      uVar3 = uVar14 & 0xffffffff;
      while (uVar3 != 0) {
        puVar9 = puVar9 + 1;
        *puVar9 = 0;
        uVar17 = uVar17 - 1;
        uVar3 = uVar17;
      }
    }
  }
  else {
    uVar17 = 1;
    if (1 < (uVar14 & 0xffffffff)) {
      piVar7 = param_3;
      do {
        piVar7 = piVar7 + 1;
        iVar12 = *(int *)(*(int *)(param_1 + 0x14) + *param_3 * 4);
        if ((*(uint *)(iVar12 + 0x3c) & 0x80000) == 0) {
          dVar19 = *(double *)(iVar12 + 0x20);
        }
        else {
          dVar19 = -*(double *)(iVar12 + 0x20);
        }
        iVar12 = *(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14));
        dVar18 = *(double *)(iVar12 + 0x20);
        if ((*(uint *)(iVar12 + 0x3c) & 0x80000) != 0) {
          dVar18 = -dVar18;
        }
      } while ((dVar19 == dVar18) &&
              (uVar17 = uVar17 + 1, (uVar17 & 0xffffffff) < (uVar14 & 0xffffffff)));
    }
    if ((uVar17 & 0xffffffff) == (uVar14 & 0xffffffff)) {
      uVar14 = 1;
      *param_4 = 0;
    }
    if ((uVar14 & 0xffffffff) != 0) {
      puVar9 = param_4 + -1;
      uVar17 = uVar14;
      do {
        puVar9 = puVar9 + 1;
        uVar8 = (*puVar9 == 0) + uVar8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (((*(uint *)(param_1 + 0x6c) & 0x10000000) != 0) && (uVar8 != 0)) {
      if (1 < uVar8) {
        return 0xffffffff80004005;
      }
      uVar17 = 0;
      puVar9 = param_4;
      if ((uVar14 & 0xffffffff) != 0) {
        do {
          if ((*puVar9 & 8) != 0) {
            return 0xffffffff80004005;
          }
          if (*puVar9 == 0) {
            *puVar9 = 8;
          }
          uVar17 = uVar17 + 1;
          puVar9 = puVar9 + 1;
        } while ((uVar17 & 0xffffffff) < (uVar14 & 0xffffffff));
      }
      uVar8 = 0;
    }
    uVar6 = 0;
    uVar17 = 0;
    puVar9 = param_4;
    if ((uVar14 & 0xffffffff) != 0) {
      do {
        if ((*puVar9 & uVar6) != 0) {
          return 0xffffffff80004005;
        }
        uVar17 = uVar17 + 1;
        uVar6 = *puVar9 | uVar6;
        puVar9 = puVar9 + 1;
      } while ((uVar17 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    iVar12 = 0;
    uVar10 = 0;
    lVar13 = 4;
    do {
      if ((1 << (uVar10 & 0x3f) & uVar6) != 0) {
        iVar12 = iVar12 + 1;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (4 < iVar12 + uVar8) {
      return 0xffffffff80004005;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x6c);
  lVar13 = 0;
  piVar7 = param_2;
  do {
    iVar12 = 1;
    do {
      if ((-1 < (int)(uVar8 << 5 | uVar8 >> 0x1b)) || (iVar12 == 1)) {
        uVar17 = 0;
        aiStack_80[1] = 0xffffffff;
        aiStack_80[2] = 0xffffffff;
        aiStack_80[3] = 0xffffffff;
        if ((uVar14 & 0xffffffff) != 0) {
          do {
            uVar6 = 0;
            piVar16 = piVar7;
            do {
              iVar15 = (int)((uVar17 & 0x3fffffff) << 2);
              if ((*(uint *)(iVar15 + (int)param_4) & 1 << (uVar6 & 0x3f)) != 0) {
                if (*piVar16 == -1) {
                  *(undefined4 *)(((int)aiStack_80 - (int)piVar7) + (int)piVar16) =
                       *(undefined4 *)(iVar15 + (int)param_3);
                }
                else if (*(double *)(*(int *)(*piVar16 * 4 + *(int *)(param_1 + 0x14)) + 0x20) !=
                         *(double *)
                          (*(int *)(*(int *)(iVar15 + (int)param_3) * 4 + *(int *)(param_1 + 0x14))
                          + 0x20) * (double)(longlong)iVar12) break;
              }
              uVar6 = uVar6 + 1;
              piVar16 = piVar16 + 1;
            } while (uVar6 < 4);
          } while ((3 < uVar6) &&
                  (uVar17 = uVar17 + 1, (uVar17 & 0xffffffff) < (uVar14 & 0xffffffff)));
          if ((uVar17 & 0xffffffff) < (uVar14 & 0xffffffff)) goto LAB_82967d0c;
        }
        uVar17 = 0;
        if ((uVar14 & 0xffffffff) != 0) {
          piVar16 = param_3;
          do {
            if (*(int *)(((int)param_4 - (int)param_3) + (int)piVar16) == 0) {
              uVar6 = 0;
              piVar11 = aiStack_80;
              do {
                iVar15 = *(int *)(((int)piVar7 - (int)aiStack_80) + (int)piVar11);
                iVar1 = (int)((uVar17 & 0x3fffffff) << 2);
                if ((iVar15 != -1) &&
                   (*(double *)(*(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x20) ==
                    *(double *)
                     (*(int *)(*(int *)(iVar1 + (int)param_3) * 4 + *(int *)(param_1 + 0x14)) + 0x20
                     ) * (double)(longlong)iVar12)) break;
                if (*piVar11 != -1) {
                  iVar15 = *(int *)(*piVar11 * 4 + *(int *)(param_1 + 0x14));
                  if ((*(uint *)(iVar15 + 0x3c) & 0x80000) == 0) {
                    dVar19 = *(double *)(iVar15 + 0x20);
                  }
                  else {
                    dVar19 = -*(double *)(iVar15 + 0x20);
                  }
                  iVar15 = *(int *)(*(int *)(iVar1 + (int)param_3) * 4 + *(int *)(param_1 + 0x14));
                  dVar18 = *(double *)(iVar15 + 0x20);
                  if ((*(uint *)(iVar15 + 0x3c) & 0x80000) != 0) {
                    dVar18 = -dVar18;
                  }
                  if (dVar19 == dVar18) break;
                }
                uVar6 = uVar6 + 1;
                piVar11 = piVar11 + 1;
              } while (uVar6 < 4);
              if (3 < uVar6) {
                uVar6 = 0;
                piVar11 = aiStack_80;
                do {
                  if ((*(int *)(((int)piVar7 - (int)aiStack_80) + (int)piVar11) == -1) &&
                     (*piVar11 == -1)) {
                    aiStack_80[uVar6] = *piVar16;
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  piVar11 = piVar11 + 1;
                } while (uVar6 < 4);
                if (uVar6 == 4) break;
              }
            }
            uVar17 = uVar17 + 1;
            piVar16 = piVar16 + 1;
          } while ((uVar17 & 0xffffffff) < (uVar14 & 0xffffffff));
          if ((uVar17 & 0xffffffff) < (uVar14 & 0xffffffff)) goto LAB_82967d0c;
        }
        uVar14 = 0;
        piVar16 = aiStack_80;
        iVar15 = (int)param_3 - (int)aiStack_80;
        goto LAB_82967d3c;
      }
LAB_82967d0c:
      iVar12 = iVar12 + -2;
    } while (-2 < iVar12);
    lVar13 = lVar13 + 1;
    piVar7 = piVar7 + 4;
  } while( true );
LAB_82967d3c:
  iVar1 = *piVar16;
  if (iVar12 < 0) {
    iVar2 = *(int *)(((int)piVar7 - (int)aiStack_80) + (int)piVar16);
    if (iVar2 == iVar1) {
LAB_82967d84:
      *(int *)(iVar15 + (int)piVar16) = iVar1;
    }
    else {
      if (iVar2 == -1) {
        uVar5 = 1;
LAB_82967da4:
        uVar4 = fn_829675E8(param_1,param_2,lVar13,uVar14,iVar1,uVar5);
      }
      else {
        uVar4 = fn_82967558(param_1,lVar13,uVar14);
      }
      *(undefined4 *)(iVar15 + (int)piVar16) = uVar4;
    }
  }
  else {
    iVar2 = *(int *)(((int)piVar7 - (int)aiStack_80) + (int)piVar16);
    if (iVar2 == iVar1) goto LAB_82967d84;
    if (iVar2 == -1) {
      uVar5 = 0;
      goto LAB_82967da4;
    }
    *(int *)(iVar15 + (int)piVar16) = iVar2;
  }
  uVar14 = uVar14 + 1;
  piVar16 = piVar16 + 1;
  if (3 < (uVar14 & 0xffffffff)) {
    return 0;
  }
  goto LAB_82967d3c;
}


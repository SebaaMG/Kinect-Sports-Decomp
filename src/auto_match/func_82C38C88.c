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
extern int fn_82C38BA0();
extern unsigned int iStack_d4;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82090FC8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8329F200;


undefined8 fn_82C38C88(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  uint *puVar11;
  int iVar13;
  ulonglong uVar12;
  uint uVar14;
  uint uVar16;
  ulonglong uVar15;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iStack_d4;
  uint auStack_d0 [52];
  
  iVar13 = *(int *)(param_1 + 0x11c);
  if (param_4 != 0) {
    if (param_4 == 1) {
      iVar19 = 0;
    }
    else {
      if (2 < param_4) {
        return 0xffffffff80070057;
      }
      iVar19 = 1;
    }
    if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0x24) != 0)) {
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar20 = 0x100000;
      }
      else {
        uVar20 = (ulonglong)(uint)(&lbl_8329F200)[param_3 & 0xff];
      }
      uVar2 = *(uint *)(param_1 + 0x78);
      uVar21 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        iVar5 = 0;
        iVar25 = 0;
        uVar26 = uVar21;
        do {
          iVar17 = iVar25 + *(int *)(iVar13 + 0x140);
          iVar25 = iVar25 + 0x6f0;
          *(undefined4 *)(iVar5 + *(int *)(param_2 + 0x188)) = *(undefined4 *)(iVar17 + 0x3c);
          iVar5 = iVar5 + 4;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      uVar26 = (longlong)((int)param_5 >> 8) +
               (ulonglong)((int)param_5 < 0 && (param_5 & 0xff) != 0);
      if ((int)uVar26 < 2) {
        uVar26 = 2;
      }
      else if (0x10 < (int)uVar26) {
        uVar26 = 0x10;
      }
      iVar13 = (int)uVar26;
      if (-1 < iVar13) {
        lVar9 = uVar26 + 1;
        piVar10 = &iStack_d4;
        uVar16 = 0;
        do {
          uVar3 = uVar16 >> 0x1f;
          uVar6 = (ulonglong)uVar16;
          trapWord(6,uVar26,0);
          piVar10 = piVar10 + 1;
          *piVar10 = (int)uVar16 / iVar13;
          uVar16 = uVar16 + param_5;
          trapWord(5,uVar26 & ~(((uVar6 & 0x7fffffff) << 1 | (ulonglong)uVar3) - 1),0xffff);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (0 < iVar13) {
          puVar22 = auStack_d0;
          dVar30 = (double)lbl_82002C5C;
          dVar29 = (double)lbl_821AAD20;
          dVar28 = (double)lbl_82090FC8;
          do {
            puVar22 = puVar22 + 1;
            uVar16 = puVar22[-1];
            uVar24 = (ulonglong)uVar16;
            uVar6 = 0;
            uVar3 = *puVar22;
            uVar23 = (ulonglong)uVar3;
            if (0 < (int)uVar2) {
              piVar10 = *(int **)(param_2 + 0x188);
              uVar7 = uVar21;
              do {
                uVar12 = 0;
                puVar11 = (uint *)(uVar16 * 4 + *piVar10);
                if ((int)uVar16 < (int)uVar3) {
                  lVar9 = uVar23 - uVar24;
                  do {
                    uVar15 = (ulonglong)*puVar11;
                    if ((int)*puVar11 < 1) {
                      uVar15 = -uVar15;
                    }
                    if ((int)uVar12 < (int)uVar15) {
                      uVar12 = uVar15;
                    }
                    puVar11 = puVar11 + 1;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
                if ((int)uVar6 < (int)uVar12) {
                  uVar6 = uVar12;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 1;
              } while (uVar7 != 0);
            }
            uVar4 = *(uint *)(param_1 + 0x7c);
            if ((int)uVar4 < 1) {
              if ((int)uVar4 < 0) {
                uVar6 = (ulonglong)((int)uVar6 >> (-uVar4 & 0x3f));
              }
            }
            else {
              uVar6 = (ulonglong)(uint)((int)uVar6 << (uVar4 & 0x3f));
            }
            uVar7 = uVar6;
            if (0x7ffffe < (int)uVar6) {
              uVar7 = 0x7fffff;
            }
            if (*(int *)(param_1 + 8) == 0) {
              uVar8 = 0x7ffffe;
              uVar7 = uVar20;
            }
            else {
              iVar13 = iVar19 * 4;
              lVar9 = (longlong)(int)uVar20;
              if (*(int *)(*(int *)(param_1 + 0xc4) + iVar13) == 0) {
                uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar13);
                uVar7 = (longlong)(int)(*(int *)(*(int *)(param_1 + 0xc0) + iVar13) * lVar9 >> 0x14)
                ;
              }
              else {
                uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar13);
                uVar4 = (uint)((int)uVar7 * lVar9 >> 0x14);
                iVar5 = ((int)uVar4 >> 0xd) * 4;
                uVar7 = (longlong)
                        (int)((((int)(*(int *)(*(int *)(*(int *)(param_1 + 0x108) + iVar13) + iVar5)
                                     * (uVar4 & 0x1fff)) >>
                               (*(uint *)(*(int *)(param_1 + 0x128) + iVar13) & 0x3f)) +
                              *(int *)(*(int *)(*(int *)(param_1 + 0x104) + iVar13) + iVar5)) *
                              lVar9 >> 0x14);
              }
            }
            iVar13 = *(int *)(param_1 + 0xac);
            iVar5 = fn_82C38BA0(param_1,uVar7,uVar6,uVar8,uVar23 - uVar24);
            iVar25 = (int)(uVar23 - uVar24);
            uVar4 = iVar25 >> 2;
            if (uVar4 != 0) {
              uVar14 = 0;
              uVar18 = uVar4;
              while (1 < uVar18) {
                uVar14 = uVar14 + 1;
                uVar18 = uVar4 >> (uVar14 & 0x3f);
              }
            }
            iVar17 = iVar5;
            if (iVar5 <= iVar13) {
              iVar17 = iVar13;
            }
            if (iVar17 < 3) {
              iVar17 = 2;
            }
            uVar18 = 0;
            uVar4 = iVar17 - 1U;
            while (1 < uVar4) {
              uVar18 = uVar18 + 1;
              uVar4 = iVar17 - 1U >> (uVar18 & 0x3f);
            }
            fVar1 = (float)((double)(longlong)iVar5 * dVar28);
            if (0 < (int)uVar2) {
              iVar13 = 0;
              uVar6 = uVar21;
              do {
                piVar10 = (int *)(*(int *)(*(int *)(param_2 + 0x188) + iVar13) + uVar16 * 4);
                if ((int)uVar16 < (int)uVar3) {
                  uVar7 = uVar24;
                  if (3 < iVar25) {
                    do {
                      dVar27 = (double)((float)(longlong)*piVar10 * fVar1);
                      if (dVar29 <= dVar27) {
                        dVar27 = dVar27 + dVar30;
                      }
                      else {
                        dVar27 = dVar27 - dVar30;
                      }
                      *piVar10 = (int)dVar27;
                      dVar27 = (double)((float)(longlong)piVar10[1] * fVar1);
                      if (dVar29 <= dVar27) {
                        dVar27 = dVar27 + dVar30;
                      }
                      else {
                        dVar27 = dVar27 - dVar30;
                      }
                      piVar10[1] = (int)dVar27;
                      dVar27 = (double)((float)(longlong)piVar10[2] * fVar1);
                      if (dVar29 <= dVar27) {
                        dVar27 = dVar27 + dVar30;
                      }
                      else {
                        dVar27 = dVar27 - dVar30;
                      }
                      piVar10[2] = (int)dVar27;
                      dVar27 = (double)((float)(longlong)piVar10[3] * fVar1);
                      if (dVar29 <= dVar27) {
                        dVar27 = dVar27 + dVar30;
                      }
                      else {
                        dVar27 = dVar27 - dVar30;
                      }
                      uVar7 = uVar7 + 4;
                      piVar10[3] = (int)dVar27;
                      piVar10 = piVar10 + 4;
                    } while ((int)uVar7 < (int)(uVar3 - 3));
                  }
                  if ((int)uVar7 < (int)uVar3) {
                    lVar9 = uVar23 - uVar7;
                    piVar10 = piVar10 + -1;
                    do {
                      dVar27 = (double)((float)(longlong)piVar10[1] * fVar1);
                      if (dVar29 <= dVar27) {
                        dVar27 = dVar27 + dVar30;
                      }
                      else {
                        dVar27 = dVar27 - dVar30;
                      }
                      piVar10 = piVar10 + 1;
                      *piVar10 = (int)dVar27;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  }
                }
                uVar6 = uVar6 - 1;
                iVar13 = iVar13 + 4;
              } while (uVar6 != 0);
            }
            uVar26 = uVar26 - 1;
            *(int *)(param_1 + 0xac) = iVar5;
          } while (uVar26 != 0);
        }
      }
    }
  }
  return 0;
}


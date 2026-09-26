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


void fn_827CB708(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar14;
  int iVar15;
  longlong lVar13;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  
  uVar29 = *param_2;
  uVar27 = (ulonglong)uVar29;
  uVar1 = param_2[1];
  uVar22 = (ulonglong)uVar1;
  uVar2 = param_2[2];
  uVar25 = (ulonglong)uVar2;
  uVar3 = param_2[3];
  uVar20 = (ulonglong)uVar3;
  uVar18 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x1a8) + 0x18);
  uVar4 = param_2[4];
  uVar24 = (ulonglong)uVar4;
  uVar5 = param_2[5];
  uVar19 = (ulonglong)uVar5;
  if ((int)uVar29 < (int)uVar1) {
    lVar9 = ((ulonglong)uVar29 & 0x3fffffff) * 4 + uVar18;
    uVar7 = uVar27;
    do {
      if ((int)uVar2 <= (int)uVar3) {
        lVar16 = (((ulonglong)uVar2 & 0x7ffffff) * 0x20 + uVar24 & 0x7fffffff) << 1;
        uVar8 = uVar25;
        do {
          if ((int)uVar4 <= (int)uVar5) {
            lVar11 = (ulonglong)*(uint *)lVar9 + lVar16 + -2;
            uVar12 = uVar24;
            do {
              lVar11 = lVar11 + 2;
              if (*(short *)lVar11 != 0) {
                *param_2 = (uint)uVar7;
                uVar27 = uVar7;
                goto LAB_827cb7b8;
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 <= (int)uVar5);
          }
          uVar8 = uVar8 + 1;
          lVar16 = lVar16 + 0x40;
        } while ((int)uVar8 <= (int)uVar3);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar7 <= (int)uVar1);
LAB_827cb7b8:
    if ((int)uVar27 < (int)uVar1) {
      lVar9 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + uVar18;
      uVar7 = uVar22;
      do {
        if ((int)uVar2 <= (int)uVar3) {
          lVar16 = (((ulonglong)uVar2 & 0x7ffffff) * 0x20 + uVar24 & 0x7fffffff) << 1;
          uVar8 = uVar25;
          do {
            if ((int)uVar4 <= (int)uVar5) {
              lVar11 = (ulonglong)*(uint *)lVar9 + lVar16 + -2;
              uVar12 = uVar24;
              do {
                lVar11 = lVar11 + 2;
                if (*(short *)lVar11 != 0) {
                  param_2[1] = (uint)uVar7;
                  uVar22 = uVar7;
                  goto LAB_827cb840;
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 <= (int)uVar5);
            }
            uVar8 = uVar8 + 1;
            lVar16 = lVar16 + 0x40;
          } while ((int)uVar8 <= (int)uVar3);
        }
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -4;
      } while ((int)uVar27 <= (int)uVar7);
    }
  }
LAB_827cb840:
  iVar23 = (int)uVar22;
  iVar28 = (int)uVar27;
  if ((int)uVar2 < (int)uVar3) {
    lVar9 = (((ulonglong)uVar2 & 0x7ffffff) * 0x20 + uVar24 & 0x7fffffff) << 1;
    uVar7 = uVar25;
    do {
      if (iVar28 <= iVar23) {
        lVar16 = (uVar27 & 0x3fffffff) * 4 + uVar18;
        uVar8 = uVar27;
        do {
          if ((int)uVar4 <= (int)uVar5) {
            lVar11 = (ulonglong)*(uint *)lVar16 + lVar9 + -2;
            uVar12 = uVar24;
            do {
              lVar11 = lVar11 + 2;
              if (*(short *)lVar11 != 0) {
                param_2[2] = (uint)uVar7;
                uVar25 = uVar7;
                goto LAB_827cb8c8;
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 <= (int)uVar5);
          }
          uVar8 = uVar8 + 1;
          lVar16 = lVar16 + 4;
        } while ((int)uVar8 <= iVar23);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x40;
    } while ((int)uVar7 <= (int)uVar3);
LAB_827cb8c8:
    if ((int)uVar25 < (int)uVar3) {
      lVar9 = (((ulonglong)uVar3 & 0x7ffffff) * 0x20 + uVar24 & 0x7fffffff) << 1;
      uVar7 = uVar20;
      do {
        if (iVar28 <= iVar23) {
          lVar16 = (uVar27 & 0x3fffffff) * 4 + uVar18;
          uVar8 = uVar27;
          do {
            if ((int)uVar4 <= (int)uVar5) {
              lVar11 = (ulonglong)*(uint *)lVar16 + lVar9 + -2;
              uVar12 = uVar24;
              do {
                lVar11 = lVar11 + 2;
                if (*(short *)lVar11 != 0) {
                  param_2[3] = (uint)uVar7;
                  uVar20 = uVar7;
                  goto LAB_827cb950;
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 <= (int)uVar5);
            }
            uVar8 = uVar8 + 1;
            lVar16 = lVar16 + 4;
          } while ((int)uVar8 <= iVar23);
        }
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -0x40;
      } while ((int)uVar25 <= (int)uVar7);
    }
  }
LAB_827cb950:
  iVar21 = (int)uVar20;
  iVar26 = (int)uVar25;
  uVar7 = uVar24;
  if ((int)uVar4 < (int)uVar5) {
    do {
      if (iVar28 <= iVar23) {
        lVar9 = (uVar27 & 0x3fffffff) * 4 + uVar18;
        uVar8 = uVar27;
        do {
          lVar16 = (ulonglong)*(uint *)lVar9 +
                   ((uVar25 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) * 2;
          uVar12 = uVar25;
          iVar14 = iVar26;
          while (iVar14 <= iVar21) {
            if (*(short *)lVar16 != 0) {
              param_2[4] = (uint)uVar7;
              uVar24 = uVar7;
              goto LAB_827cb9d4;
            }
            uVar12 = uVar12 + 1;
            lVar16 = lVar16 + 0x40;
            iVar14 = (int)uVar12;
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 4;
        } while ((int)uVar8 <= iVar23);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 <= (int)uVar5);
LAB_827cb9d4:
    uVar7 = uVar19;
    if ((int)uVar24 < (int)uVar5) {
      do {
        if (iVar28 <= iVar23) {
          lVar9 = (uVar27 & 0x3fffffff) * 4 + uVar18;
          uVar8 = uVar27;
          do {
            lVar16 = (ulonglong)*(uint *)lVar9 +
                     ((uVar25 & 0x7ffffff) * 0x20 + uVar7 & 0x7fffffff) * 2;
            uVar12 = uVar25;
            iVar14 = iVar26;
            while (iVar14 <= iVar21) {
              if (*(short *)lVar16 != 0) {
                param_2[5] = (uint)uVar7;
                uVar19 = uVar7;
                goto LAB_827cba58;
              }
              uVar12 = uVar12 + 1;
              lVar16 = lVar16 + 0x40;
              iVar14 = (int)uVar12;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 4;
          } while ((int)uVar8 <= iVar23);
        }
        uVar7 = uVar7 - 1;
      } while ((int)uVar24 <= (int)uVar7);
    }
  }
LAB_827cba58:
  iVar15 = (int)(uVar20 - uVar25) * 0xc;
  iVar14 = (int)((uVar19 - uVar24 & 0xffffffff) << 3);
  iVar6 = (int)((uVar22 - uVar27 & 0xffffffff) << 4);
  uVar29 = 0;
  param_2[6] = iVar14 * iVar14 + iVar15 * iVar15 + iVar6 * iVar6;
  if (iVar28 <= iVar23) {
    lVar9 = (uVar22 - uVar27) + 1;
    lVar16 = (uVar27 & 0x3fffffff) * 4 + uVar18;
    uVar29 = 0;
    do {
      if (iVar26 <= iVar21) {
        lVar11 = (uVar20 - uVar25) + 1;
        lVar17 = ((uVar25 & 0x7ffffff) * 0x20 + uVar24 & 0x7fffffff) * 2 +
                 (ulonglong)*(uint *)lVar16;
        do {
          if ((int)uVar24 <= (int)uVar19) {
            lVar10 = (uVar19 - uVar24) + 1;
            lVar13 = lVar17;
            do {
              if (*(short *)lVar13 != 0) {
                uVar29 = uVar29 + 1;
              }
              lVar13 = lVar13 + 2;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          lVar11 = lVar11 + -1;
          lVar17 = lVar17 + 0x40;
        } while (lVar11 != 0);
      }
      lVar9 = lVar9 + -1;
      lVar16 = lVar16 + 4;
    } while (lVar9 != 0);
  }
  param_2[7] = uVar29;
  return;
}


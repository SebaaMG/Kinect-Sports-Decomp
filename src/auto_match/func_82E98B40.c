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
extern int fn_82E95538();
extern int fn_82F02410();
extern int fn_82F19D30();
extern unsigned int lbl_8215F7C0;
extern unsigned int lbl_8215F7E0;
extern unsigned int lbl_8215F7F8;
extern unsigned int lbl_82162870;
extern unsigned int lbl_82162874;


void fn_82E98B40(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar13;
  longlong lVar12;
  
  if (*(int *)(param_1 + 0x76dc) == 0) {
    fn_82F19D30();
    return;
  }
  puVar11 = *(undefined1 **)(param_1 + 0x1b84);
  uVar13 = *(uint *)(param_1 + 0x8c4);
  if (param_2 == 1) {
    puVar11 = *(undefined1 **)(param_1 + 0x1a88);
    uVar13 = *(uint *)(param_1 + 0x8c8);
  }
  else if (param_2 == 2) {
    puVar11 = *(undefined1 **)(param_1 + 0x5290);
    uVar13 = *(uint *)(param_1 + 0x6efc);
  }
  if ((*(int *)(param_1 + 0x84c) < 1) || (param_2 != 3)) {
    if (param_2 == 4) {
      puVar11 = *(undefined1 **)(param_1 + 0x6f00);
      uVar13 = *(uint *)(param_1 + 0x6ef8);
    }
    else if (param_2 == 5) {
      puVar11 = *(undefined1 **)(param_1 + 0x6f08);
      uVar13 = *(uint *)(param_1 + 0x6f04);
    }
  }
  else {
    puVar11 = *(undefined1 **)(param_1 + 0x1e9c);
    uVar13 = *(uint *)(param_1 + 0x8d0);
  }
  iVar10 = *(int *)(param_1 + 0x2d8);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar13 & 1,1);
  lVar12 = (longlong)((int)uVar13 >> 1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),lVar12,3);
  if (6 < (lVar12 - 1U & 0xffffffff)) {
    return;
  }
  if ((int)(lVar12 - 1U) == 0) {
LAB_82e98c34:
    if ((*(uint *)(param_1 + 0x2d8) & 1) != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar11,1);
    }
    uVar13 = *(uint *)(param_1 + 0x2d8) & 1;
    if ((int)uVar13 < (int)*(uint *)(param_1 + 0x2d8)) {
      do {
        iVar10 = ((char)puVar11[uVar13 + 1] * 2 + (int)(char)puVar11[uVar13]) * 4;
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(&lbl_8215F7F8 + iVar10),
                          *(undefined4 *)(&lbl_8215F7E0 + iVar10));
        uVar13 = uVar13 + 2;
      } while ((int)uVar13 < *(int *)(param_1 + 0x2d8));
    }
    return;
  }
  if (lVar12 == 2) {
    puVar11 = puVar11 + iVar10;
    goto LAB_82e98c34;
  }
  if (lVar12 != 3) {
    if (lVar12 != 4) {
      if (lVar12 == 5) {
        iVar10 = 0;
        if (*(int *)(param_1 + 0x2d4) < 1) {
          return;
        }
        do {
          iVar4 = *(int *)(param_1 + 0x2d0);
          iVar6 = 0;
          if (0 < iVar4) {
            iVar5 = iVar4 * iVar10;
            do {
              if (puVar11[iVar5] != '\0') break;
              iVar6 = iVar6 + 1;
              iVar5 = iVar4 * iVar10 + iVar6;
            } while (iVar6 < iVar4);
          }
          if (iVar6 == iVar4) {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
          }
          else {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
            iVar4 = *(int *)(param_1 + 0x2d0);
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),puVar11[iVar4 * iVar10 + iVar6],
                                  1);
                iVar4 = *(int *)(param_1 + 0x2d0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar4);
            }
          }
          iVar10 = iVar10 + 1;
          if (*(int *)(param_1 + 0x2d4) <= iVar10) {
            return;
          }
        } while( true );
      }
      if (lVar12 != 6) {
        fn_82E95538(param_1);
        return;
      }
      iVar10 = *(int *)(param_1 + 0x2d0);
      iVar4 = 0;
      if (iVar10 < 1) {
        return;
      }
      do {
        iVar6 = *(int *)(param_1 + 0x2d4);
        iVar5 = 0;
        if (0 < iVar6) {
          do {
            if (puVar11[iVar10 * iVar5 + iVar4] != '\0') break;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar6);
        }
        if (iVar5 == iVar6) {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
        }
        else {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
          iVar10 = 0;
          if (0 < *(int *)(param_1 + 0x2d4)) {
            do {
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                puVar11[*(int *)(param_1 + 0x2d0) * iVar10 + iVar4],1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x2d4));
          }
        }
        iVar10 = *(int *)(param_1 + 0x2d0);
        iVar4 = iVar4 + 1;
        if (iVar10 <= iVar4) {
          return;
        }
      } while( true );
    }
    puVar11 = puVar11 + iVar10;
  }
  uVar13 = *(uint *)(param_1 + 0x2d4);
  uVar7 = 0;
  if ((ulonglong)uVar13 == ((ulonglong)uVar13 / 3) * 3) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x2d0);
    if (uVar3 != (uVar3 / 3) * 3) {
      uVar8 = *(uint *)(param_1 + 0x2d0) & 1;
      iVar10 = 0;
      if (0 < (int)uVar13) {
        do {
          uVar13 = uVar8;
          if ((int)uVar8 < (int)uVar3) {
            do {
              iVar4 = *(int *)(param_1 + 0x2d0);
              iVar6 = iVar4 * iVar10 + uVar13;
              iVar5 = iVar4 + iVar6;
              iVar4 = ((char)puVar11[iVar4 + iVar5 + 1] * 2 + (int)(char)puVar11[iVar4 + iVar5]) *
                      0x10 + ((char)puVar11[iVar5 + 1] * 2 + (int)(char)puVar11[iVar5]) * 4 +
                             (char)puVar11[iVar6 + 1] * 2 + (int)(char)puVar11[iVar6];
              iVar6 = iVar4 * 2;
              iVar4 = iVar4 * 8;
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                *(undefined4 *)(&lbl_82162870 + iVar4),
                                *(undefined4 *)(&lbl_82162874 + iVar4));
              if (*(int *)(&lbl_82162874 + iVar4) == 5) {
                uVar1 = iVar6 >> 1;
                if (*(int *)(&lbl_8215F7C0 + (uVar1 & 7) * 4) +
                    *(int *)(&lbl_8215F7C0 + (iVar6 >> 4) * 4) == 3) {
                  uVar2 = 5;
                  uVar1 = uVar1 & 0x1f;
                }
                else {
                  iVar4 = (uVar1 << 1 ^ 0x7e) * 4;
                  uVar2 = *(undefined4 *)(&lbl_82162874 + iVar4);
                  uVar1 = *(uint *)(&lbl_82162870 + iVar4);
                }
                fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar1,uVar2);
              }
              uVar3 = (ulonglong)*(uint *)(param_1 + 0x2d0);
              uVar13 = uVar13 + 2;
            } while ((int)uVar13 < (int)*(uint *)(param_1 + 0x2d0));
          }
          iVar10 = iVar10 + 3;
        } while (iVar10 < *(int *)(param_1 + 0x2d4));
      }
      goto LAB_82e99104;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2d0);
  uVar7 = uVar13 & 1;
  uVar8 = uVar1 % 3;
  uVar9 = uVar7;
  if ((int)uVar7 < (int)uVar13) {
    do {
      uVar13 = uVar8;
      if ((int)uVar8 < (int)uVar1) {
        do {
          iVar10 = *(int *)(param_1 + 0x2d0) * uVar9 + uVar13;
          iVar4 = *(int *)(param_1 + 0x2d0) + iVar10;
          iVar10 = (((char)puVar11[iVar4 + 2] * 2 + (int)(char)puVar11[iVar4 + 1]) * 2 +
                   (int)(char)puVar11[iVar4]) * 8 +
                   ((char)puVar11[iVar10 + 2] * 2 + (int)(char)puVar11[iVar10 + 1]) * 2 +
                   (int)(char)puVar11[iVar10];
          iVar4 = iVar10 * 2;
          iVar10 = iVar10 * 8;
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            *(undefined4 *)(&lbl_82162870 + iVar10),
                            *(undefined4 *)(&lbl_82162874 + iVar10));
          if (*(int *)(&lbl_82162874 + iVar10) == 5) {
            uVar1 = iVar4 >> 1;
            if (*(int *)(&lbl_8215F7C0 + (uVar1 & 7) * 4) +
                *(int *)(&lbl_8215F7C0 + (iVar4 >> 4) * 4) == 3) {
              uVar2 = 5;
              uVar1 = uVar1 & 0x1f;
            }
            else {
              iVar10 = (uVar1 << 1 ^ 0x7e) * 4;
              uVar2 = *(undefined4 *)(&lbl_82162874 + iVar10);
              uVar1 = *(uint *)(&lbl_82162870 + iVar10);
            }
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar1,uVar2);
          }
          uVar1 = *(uint *)(param_1 + 0x2d0);
          uVar13 = uVar13 + 3;
        } while ((int)uVar13 < (int)uVar1);
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < *(int *)(param_1 + 0x2d4));
  }
LAB_82e99104:
  iVar10 = 0;
  if (uVar8 != 0) {
    do {
      iVar4 = *(int *)(param_1 + 0x2d4);
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          if (puVar11[*(int *)(param_1 + 0x2d0) * iVar6 + iVar10] != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      if (iVar6 == iVar4) {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
      }
      else {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x2d4)) {
          do {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                              puVar11[*(int *)(param_1 + 0x2d0) * iVar4 + iVar10],1);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x2d4));
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar8);
  }
  if (uVar7 == 0) {
    return;
  }
  for (uVar13 = uVar8; ((int)uVar13 < (int)*(uint *)(param_1 + 0x2d0) && (puVar11[uVar13] == '\0'));
      uVar13 = uVar13 + 1) {
  }
  if (uVar13 != *(uint *)(param_1 + 0x2d0)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    if (*(int *)(param_1 + 0x2d0) <= (int)uVar8) {
      return;
    }
    do {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),puVar11[uVar8],1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x2d0));
    return;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
  return;
}


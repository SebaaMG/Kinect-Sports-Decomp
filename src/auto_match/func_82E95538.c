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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F02410();
extern unsigned int lbl_8215F748;
extern unsigned int lbl_8215F74C;
extern unsigned int lbl_8215F7C0;
extern unsigned int lbl_8215F7E0;
extern unsigned int lbl_8215F7F8;
extern unsigned int lbl_82162870;
extern unsigned int lbl_82162874;


void fn_82E95538(int param_1)

{
  undefined4 uVar1;
  uint uVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar19;
  ulonglong uVar17;
  int iVar20;
  ulonglong uVar18;
  char *pcVar21;
  
  uVar6 = *(uint *)(param_1 + 0x8cc);
  puVar13 = *(undefined1 **)(param_1 + 0x1b88);
  uVar12 = ZEXT48(puVar13);
  uVar2 = ((ulonglong)*(uint *)(param_1 + 0x2d0) + 1 & 0xffffffff) >> 1;
  uVar14 = ((ulonglong)*(uint *)(param_1 + 0x2d4) + 1 & 0xffffffff) >> 1;
  uVar8 = (uint)uVar14;
  uVar15 = (uint)uVar2;
  uVar4 = (longlong)(int)uVar8 * (longlong)(int)uVar15;
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar6 & 1,1);
  iVar5 = (int)uVar6 >> 1;
  lVar16 = (longlong)iVar5;
  iVar5 = iVar5 * 4;
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(iVar5 + -0x7ce76fe0),
                    *(undefined4 *)(iVar5 + -0x7ce76fc4));
  iVar5 = (int)uVar4;
  if ((lVar16 - 1U & 0xffffffff) < 6) {
    if ((int)(lVar16 - 1U) != 0) {
      if (lVar16 != 2) {
        if (lVar16 != 3) {
          if (lVar16 != 4) {
            if (lVar16 == 5) {
              if (uVar8 != 0) {
                do {
                  uVar6 = 0;
                  if (uVar15 != 0) {
                    do {
                      if (*(char *)((int)uVar12 + uVar6) != '\0') break;
                      uVar6 = uVar6 + 1;
                    } while ((int)uVar6 < (int)uVar15);
                  }
                  if (uVar6 == uVar15) {
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
                  }
                  else {
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
                    iVar19 = 0;
                    if (uVar15 != 0) {
                      do {
                        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                          *(undefined1 *)((int)uVar12 + iVar19),1);
                        iVar19 = iVar19 + 1;
                      } while (iVar19 < (int)uVar15);
                    }
                  }
                  uVar14 = uVar14 - 1;
                  uVar12 = uVar12 + uVar2;
                } while (uVar14 != 0);
              }
            }
            else {
              uVar11 = uVar2;
              if (uVar15 != 0) {
                do {
                  uVar6 = 0;
                  uVar17 = uVar12;
                  if (uVar8 != 0) {
                    do {
                      if (*(char *)uVar17 != '\0') break;
                      uVar6 = uVar6 + 1;
                      uVar17 = uVar17 + uVar2;
                    } while ((int)uVar6 < (int)uVar8);
                  }
                  if (uVar6 == uVar8) {
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
                  }
                  else {
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
                    if (uVar8 != 0) {
                      lVar16 = uVar12 - uVar2;
                      uVar17 = uVar14;
                      do {
                        lVar16 = lVar16 + uVar2;
                        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined1 *)lVar16,1)
                        ;
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                  }
                  uVar11 = uVar11 - 1;
                  uVar12 = uVar12 + 1;
                } while (uVar11 != 0);
              }
            }
            goto LAB_82e95b5c;
          }
          uVar12 = uVar4 + uVar12;
        }
        uVar6 = 0;
        iVar19 = (int)uVar12;
        if ((uVar14 == ((ulonglong)(longlong)(int)uVar8 / 3) * 3) &&
           (uVar2 != ((ulonglong)(longlong)(int)uVar15 / 3) * 3)) {
          uVar11 = uVar2 & 1;
          if (uVar8 != 0) {
            lVar16 = (uVar14 - 1 & 0xffffffff) / 3 + 1;
            lVar9 = 0;
            do {
              if ((uint)uVar11 < uVar15) {
                iVar7 = iVar19 + 1;
                uVar17 = uVar11;
                do {
                  iVar20 = (int)lVar9 + (int)uVar17;
                  iVar10 = iVar20 + uVar15;
                  iVar20 = (*(char *)(iVar7 + iVar10 + uVar15) * 2 +
                           (int)*(char *)(iVar10 + uVar15 + iVar19)) * 0x10 +
                           (*(char *)(iVar7 + iVar10) * 2 + (int)*(char *)(iVar10 + iVar19)) * 4 +
                           *(char *)(iVar7 + iVar20) * 2 + (int)*(char *)(iVar20 + iVar19);
                  iVar10 = iVar20 * 2;
                  iVar20 = iVar20 * 8;
                  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                    *(undefined4 *)(&lbl_82162870 + iVar20),
                                    *(undefined4 *)(&lbl_82162874 + iVar20));
                  if (*(int *)(&lbl_82162874 + iVar20) == 5) {
                    uVar3 = iVar10 >> 1;
                    if (*(int *)(&lbl_8215F7C0 + (uVar3 & 7) * 4) +
                        *(int *)(&lbl_8215F7C0 + (iVar10 >> 4) * 4) == 3) {
                      uVar1 = 5;
                      uVar3 = uVar3 & 0x1f;
                    }
                    else {
                      iVar20 = (uVar3 << 1 ^ 0x7e) * 4;
                      uVar1 = *(undefined4 *)(&lbl_82162874 + iVar20);
                      uVar3 = *(uint *)(&lbl_82162870 + iVar20);
                    }
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar3,uVar1);
                  }
                  uVar17 = uVar17 + 2;
                } while ((int)uVar17 < (int)uVar15);
              }
              lVar16 = lVar16 + -1;
              lVar9 = uVar2 * 3 + lVar9;
            } while (lVar16 != 0);
          }
        }
        else {
          uVar6 = (uint)(uVar14 & 1);
          uVar11 = uVar2 + ((ulonglong)(longlong)(int)uVar15 / 3) * -3;
          if (uVar6 < uVar8) {
            lVar9 = (longlong)(int)uVar6 * (longlong)(int)uVar15;
            lVar16 = (((uVar14 - (uVar14 & 1)) - 1 & 0xffffffff) >> 1) + 1;
            do {
              if ((int)uVar11 < (int)uVar15) {
                uVar17 = uVar11;
                do {
                  iVar7 = (int)lVar9 + (int)uVar17;
                  iVar20 = iVar7 + uVar15;
                  iVar7 = ((*(char *)(iVar19 + 2 + iVar20) * 2 + (int)*(char *)(iVar19 + 1 + iVar20)
                           ) * 2 + (int)*(char *)(iVar20 + iVar19)) * 8 +
                          (*(char *)(iVar19 + 2 + iVar7) * 2 + (int)*(char *)(iVar19 + 1 + iVar7)) *
                          2 + (int)*(char *)(iVar7 + iVar19);
                  iVar20 = iVar7 * 2;
                  iVar7 = iVar7 * 8;
                  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                    *(undefined4 *)(&lbl_82162870 + iVar7),
                                    *(undefined4 *)(&lbl_82162874 + iVar7));
                  if (*(int *)(&lbl_82162874 + iVar7) == 5) {
                    uVar3 = iVar20 >> 1;
                    if (*(int *)(&lbl_8215F7C0 + (uVar3 & 7) * 4) +
                        *(int *)(&lbl_8215F7C0 + (iVar20 >> 4) * 4) == 3) {
                      uVar1 = 5;
                      uVar3 = uVar3 & 0x1f;
                    }
                    else {
                      iVar7 = (uVar3 << 1 ^ 0x7e) * 4;
                      uVar1 = *(undefined4 *)(&lbl_82162874 + iVar7);
                      uVar3 = *(uint *)(&lbl_82162870 + iVar7);
                    }
                    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar3,uVar1);
                  }
                  uVar17 = uVar17 + 3;
                } while ((int)uVar17 < (int)uVar15);
              }
              lVar16 = lVar16 + -1;
              lVar9 = uVar2 * 2 + lVar9;
            } while (lVar16 != 0);
          }
        }
        iVar7 = (int)uVar11;
        uVar17 = uVar11;
        if (0 < iVar7) {
          do {
            uVar3 = 0;
            uVar18 = uVar12;
            if (uVar8 != 0) {
              do {
                if (*(char *)uVar18 != '\0') break;
                uVar3 = uVar3 + 1;
                uVar18 = uVar18 + uVar2;
              } while ((int)uVar3 < (int)uVar8);
            }
            if (uVar3 == uVar8) {
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
            }
            else {
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
              if (uVar8 != 0) {
                lVar16 = uVar12 - uVar2;
                uVar18 = uVar14;
                do {
                  lVar16 = lVar16 + uVar2;
                  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined1 *)lVar16,1);
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
            }
            uVar17 = uVar17 - 1;
            uVar12 = uVar12 + 1;
          } while (uVar17 != 0);
        }
        uVar2 = uVar11;
        iVar20 = iVar7;
        if (uVar6 != 0) {
          while ((iVar20 < (int)uVar15 && (*(char *)((uint)uVar2 + iVar19) == '\0'))) {
            uVar2 = uVar2 + 1;
            iVar20 = (int)uVar2;
          }
          if ((uint)uVar2 == uVar15) {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
          }
          else {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
            while (iVar7 < (int)uVar15) {
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                *(undefined1 *)((int)uVar11 + iVar19),1);
              uVar11 = uVar11 + 1;
              iVar7 = (int)uVar11;
            }
          }
        }
        goto LAB_82e95b5c;
      }
      puVar13 = puVar13 + iVar5;
    }
    uVar2 = uVar4 & 1;
    iVar19 = (int)uVar2;
    if (iVar19 != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar13,1);
    }
    while (iVar19 < iVar5) {
      iVar19 = ((char)puVar13[(int)uVar2 + 1] * 2 + (int)(char)puVar13[(int)uVar2]) * 4;
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(&lbl_8215F7F8 + iVar19),
                        *(undefined4 *)(&lbl_8215F7E0 + iVar19));
      uVar2 = uVar2 + 2;
      iVar19 = (int)uVar2;
    }
  }
LAB_82e95b5c:
  if (0 < iVar5) {
    pcVar21 = (char *)(*(int *)(param_1 + 0x1b8c) + -1);
    do {
      pcVar21 = pcVar21 + 1;
      if (*pcVar21 != '\x0f') {
        iVar5 = *pcVar21 * 8;
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(&lbl_8215F748 + iVar5),
                          *(undefined4 *)(&lbl_8215F74C + iVar5));
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


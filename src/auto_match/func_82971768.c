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
extern int fn_829655B8();
extern int fn_8296CF68();


undefined8 fn_82971768(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar10;
  ulonglong uVar9;
  int iVar12;
  longlong lVar11;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  
  fn_8296CF68();
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(uint **)(iVar12 + *(int *)(param_1 + 0x14));
      uVar15 = *puVar14;
      iVar5 = *(int *)(puVar14[1] * 4 + *(int *)(param_1 + 0x10));
      *puVar14 = uVar15 & 0xffffffdf;
      uVar1 = *(uint *)(iVar5 + 4);
      if (((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) {
        *puVar14 = uVar15 & 0xffffffdf | 0x20;
      }
      if ((*(uint *)(iVar5 + 4) & 0x800) != 0) {
        *puVar14 = *puVar14 | 0x20;
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(uint *)(param_1 + 8));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(uint **)(iVar12 + *(int *)(param_1 + 0x18));
      uVar13 = ZEXT48(puVar14);
      uVar15 = *puVar14;
      uVar1 = uVar15 & 0xfff00000;
      if ((uVar15 & 0xfff00000) != 0) {
        if ((((uVar1 == 0x50100000) || (uVar1 == 0x11000000)) || (uVar1 == 0x11200000)) ||
           ((uVar15 & 0xf0000000) == 0x60000000)) {
          uVar15 = 0;
          if (puVar14[3] != 0) {
            iVar5 = 0;
            do {
              uVar15 = uVar15 + 1;
              piVar4 = (int *)(iVar5 + puVar14[4]);
              iVar5 = iVar5 + 4;
              puVar3 = *(uint **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
              *puVar3 = *puVar3 | 0x20;
            } while (uVar15 < puVar14[3]);
          }
        }
        else if (((uVar1 == 0x10f00000) || (uVar1 == 0x11100000)) || (uVar1 == 0x11400000)) {
          uVar15 = 0;
          if (puVar14[3] != 0) {
            iVar5 = 0;
            do {
              uVar15 = uVar15 + 1;
              piVar4 = (int *)(iVar5 + puVar14[4]);
              iVar5 = iVar5 + 4;
              puVar3 = *(uint **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
              *puVar3 = *puVar3 | 0x20;
            } while (uVar15 < puVar14[3]);
          }
        }
        else {
          uVar7 = 0;
          uVar9 = 0;
          if (puVar14[3] != 0) {
            lVar11 = 0;
            do {
              iVar5 = *(int *)(*(int *)((int)lVar11 + *(int *)((int)uVar13 + 0x10)) * 4 +
                              *(int *)(param_1 + 0x14));
              if (((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                   0x1000) != 0) &&
                 (iVar5 = fn_829655B8(param_1,*(undefined4 *)(iVar5 + 0x14)), iVar5 != 0)) {
                puVar14 = *(uint **)(*(int *)((int)lVar11 + *(int *)((int)uVar13 + 0x10)) * 4 +
                                    *(int *)(param_1 + 0x14));
                *puVar14 = *puVar14 | 0x20;
              }
              uVar9 = (ulonglong)*(uint *)((int)uVar13 + 0xc);
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + 4;
            } while ((uVar7 & 0xffffffff) < uVar9);
          }
          puVar14 = (uint *)uVar13;
          uVar15 = *puVar14 & 0xf0000000;
          if ((uVar15 < 0x10000000) || (0x40000000 < uVar15)) {
            uVar15 = puVar14[1];
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar1 = puVar14[2];
              lVar11 = 0;
              do {
                iVar5 = fn_829655B8(param_1,*(undefined4 *)((int)lVar11 + uVar1));
                if (iVar5 != 0) {
                  uVar15 = 0;
                  if ((uVar9 & 0xffffffff) != 0) {
                    iVar5 = 0;
                    do {
                      uVar15 = uVar15 + 1;
                      piVar4 = (int *)(iVar5 + *(int *)((int)uVar13 + 0x10));
                      iVar5 = iVar5 + 4;
                      puVar14 = *(uint **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
                      *puVar14 = *puVar14 | 0x20;
                    } while (uVar15 < *(uint *)((int)uVar13 + 0xc));
                  }
                  break;
                }
                uVar7 = uVar7 + 1;
                lVar11 = lVar11 + 4;
              } while ((uVar7 & 0xffffffff) < (ulonglong)uVar15);
            }
          }
          else {
            uVar7 = (ulonglong)*puVar14 & 0xfffff;
            uVar8 = 0;
            uVar16 = puVar14[1] / uVar7;
            trapWord(6,uVar7,0);
            if (uVar9 != 0) {
              iVar5 = 0;
              do {
                uVar7 = 0;
                if (uVar16 != 0) {
                  iVar2 = *(int *)((int)uVar13 + 8);
                  do {
                    iVar6 = fn_829655B8(param_1,*(undefined4 *)
                                                   ((int)(((longlong)(int)uVar9 *
                                                           (longlong)(int)uVar7 + uVar8 & 0xffffffff
                                                          ) << 2) + iVar2));
                    if (iVar6 != 0) {
                      puVar14 = *(uint **)(*(int *)(*(int *)((int)uVar13 + 0x10) + iVar5) * 4 +
                                          *(int *)(param_1 + 0x14));
                      *puVar14 = *puVar14 | 0x20;
                      break;
                    }
                    uVar7 = uVar7 + 1;
                  } while ((uVar7 & 0xffffffff) < uVar16);
                }
                uVar9 = (ulonglong)*(uint *)((int)uVar13 + 0xc);
                uVar8 = uVar8 + 1;
                iVar5 = iVar5 + 4;
              } while ((uVar8 & 0xffffffff) < uVar9);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(uint *)(param_1 + 0xc));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(uint **)(*(int *)(param_1 + 0x14) + iVar12);
      if ((*(uint *)(*(int *)(puVar14[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) != 0) {
        *puVar14 = *puVar14 | 0x20;
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(uint *)(param_1 + 8));
  }
  return 0;
}


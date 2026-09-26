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


bool fn_829693C0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar6;
  ulonglong uVar5;
  uint uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  longlong lVar12;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  
  bVar3 = false;
  uVar16 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar17 = 0;
    bVar3 = false;
    do {
      puVar2 = *(uint **)(iVar17 + *(int *)(param_1 + 0x18));
      uVar15 = *puVar2;
      if (((uVar15 & 0xfff00000) != 0) && ((uVar15 & 0xfff00000) != 0x10100000)) {
        uVar1 = puVar2[3];
        uVar6 = 0;
        uVar9 = 0;
        if (uVar1 != 0) {
          iVar13 = 0;
          do {
            if ((**(uint **)(*(int *)(iVar13 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) & 0x20) ==
                0) {
              uVar6 = uVar6 + 1;
            }
            uVar9 = uVar9 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar9 < uVar1);
          if (uVar6 != 0) {
            bVar3 = true;
            if (uVar6 == uVar1) {
              uVar15 = 0;
            }
            else {
              if (((uVar1 <= uVar6) || ((uVar15 & 0xf0000000) < 0x10000000)) ||
                 (0x40000000 < (uVar15 & 0xf0000000))) goto LAB_829695a0;
              uVar10 = 0;
              uVar7 = 0;
              iVar13 = 0;
              iVar11 = 0;
              uVar4 = (ulonglong)puVar2[1] / ((ulonglong)uVar15 & 0xfffff);
              trapWord(6,(ulonglong)uVar15 & 0xfffff,0);
              do {
                uVar15 = puVar2[4];
                if ((**(uint **)(*(int *)(iVar11 + uVar15) * 4 + *(int *)(param_1 + 0x14)) & 0x20)
                    != 0) {
                  iVar14 = 0;
                  *(undefined4 *)(iVar13 + uVar15) = *(undefined4 *)(iVar11 + uVar15);
                  for (uVar18 = uVar4; uVar18 != 0; uVar18 = uVar18 - 1) {
                    lVar12 = (longlong)iVar14;
                    iVar14 = iVar14 + 1;
                    *(undefined4 *)
                     ((int)((lVar12 * (int)puVar2[3] + uVar10 & 0xffffffff) << 2) + puVar2[2]) =
                         *(undefined4 *)
                          ((int)((lVar12 * (int)puVar2[3] + uVar7 & 0xffffffff) << 2) + puVar2[2]);
                  }
                  uVar10 = uVar10 + 1;
                  iVar13 = iVar13 + 4;
                }
                uVar7 = uVar7 + 1;
                iVar11 = iVar11 + 4;
              } while ((uVar7 & 0xffffffff) < (ulonglong)puVar2[3]);
              uVar15 = 1;
              uVar7 = uVar10;
              if (1 < uVar4) {
                do {
                  lVar12 = 0;
                  uVar18 = uVar10;
                  uVar5 = uVar10 & 0xffffffff;
                  while (uVar5 != 0) {
                    uVar5 = uVar7 + lVar12;
                    uVar8 = (longlong)(int)uVar15 * (longlong)(int)puVar2[3] + lVar12;
                    lVar12 = lVar12 + 1;
                    *(undefined4 *)((int)((uVar5 & 0xffffffff) << 2) + puVar2[2]) =
                         *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + puVar2[2]);
                    uVar18 = uVar18 - 1;
                    uVar5 = uVar18;
                  }
                  uVar15 = uVar15 + 1;
                  uVar7 = uVar7 + uVar10;
                } while (uVar15 < uVar4);
              }
              uVar15 = (uint)uVar10;
              puVar2[3] = uVar15;
              puVar2[1] = uVar15 * (int)uVar4;
              uVar15 = uVar15 & 0xfffff | *puVar2 & 0xfff00000;
            }
            *puVar2 = uVar15;
          }
        }
      }
LAB_829695a0:
      uVar16 = uVar16 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar16 < *(uint *)(param_1 + 0xc));
  }
  return !bVar3;
}


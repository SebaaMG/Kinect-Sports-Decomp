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


undefined8 fn_829690E8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  uint uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar10;
  undefined4 uVar11;
  int iVar13;
  ulonglong uVar12;
  uint uVar14;
  int iVar16;
  int iVar17;
  longlong lVar15;
  int iVar18;
  ulonglong uVar19;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar13 = 0;
    do {
      iVar16 = *(int *)(iVar13 + *(int *)(param_1 + 0x14));
      iVar18 = *(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10));
      uVar14 = *(uint *)(iVar18 + 4);
      if (((uVar14 & 0x30) != 0) && ((uVar14 & 0x200) == 0)) {
        *(undefined4 *)(iVar16 + 4) = *(undefined4 *)(param_1 + 0x74);
      }
      if ((*(uint *)(iVar18 + 4) & 4) != 0) {
        *(undefined4 *)(iVar16 + 4) = *(undefined4 *)(param_1 + 0x88);
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar10 < *(uint *)(param_1 + 8));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    do {
      puVar2 = *(uint **)(iVar13 + *(int *)(param_1 + 0x18));
      uVar14 = *puVar2;
      if ((uVar14 & 0xfff00000) != 0) {
        uVar1 = puVar2[3];
        uVar5 = 0;
        uVar9 = 0;
        if (uVar1 != 0) {
          iVar16 = 0;
          do {
            if ((**(uint **)(*(int *)(iVar16 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) & 0x20) !=
                0) {
              uVar5 = uVar5 + 1;
            }
            uVar9 = uVar9 + 1;
            iVar16 = iVar16 + 4;
          } while (uVar9 < uVar1);
        }
        if (uVar5 == uVar1) {
          *puVar2 = 0;
        }
        else {
          if (((uVar5 < uVar1) && (0xfffffff < (uVar14 & 0xf0000000))) &&
             ((uVar14 & 0xf0000000) < 0x40000001)) {
            uVar12 = 0;
            uVar7 = 0;
            uVar4 = (ulonglong)puVar2[1] / ((ulonglong)uVar14 & 0xfffff);
            trapWord(6,(ulonglong)uVar14 & 0xfffff,0);
            if (uVar1 != 0) {
              iVar16 = 0;
              iVar18 = 0;
              do {
                uVar14 = puVar2[4];
                if ((**(uint **)(*(int *)(iVar18 + uVar14) * 4 + *(int *)(param_1 + 0x14)) & 0x20)
                    == 0) {
                  iVar17 = 0;
                  *(undefined4 *)(iVar16 + uVar14) = *(undefined4 *)(iVar18 + uVar14);
                  for (uVar19 = uVar4; uVar19 != 0; uVar19 = uVar19 - 1) {
                    lVar15 = (longlong)iVar17;
                    iVar17 = iVar17 + 1;
                    *(undefined4 *)
                     ((int)(((int)puVar2[3] * lVar15 + uVar12 & 0xffffffff) << 2) + puVar2[2]) =
                         *(undefined4 *)
                          ((int)(((int)puVar2[3] * lVar15 + uVar7 & 0xffffffff) << 2) + puVar2[2]);
                  }
                  uVar12 = uVar12 + 1;
                  iVar16 = iVar16 + 4;
                }
                uVar7 = uVar7 + 1;
                iVar18 = iVar18 + 4;
              } while ((uVar7 & 0xffffffff) < (ulonglong)puVar2[3]);
            }
            uVar14 = 1;
            uVar7 = uVar12;
            if (1 < uVar4) {
              do {
                lVar15 = 0;
                uVar19 = uVar12;
                uVar6 = uVar12 & 0xffffffff;
                while (uVar6 != 0) {
                  uVar6 = uVar7 + lVar15;
                  uVar8 = (longlong)(int)puVar2[3] * (longlong)(int)uVar14 + lVar15;
                  lVar15 = lVar15 + 1;
                  *(undefined4 *)((int)((uVar6 & 0xffffffff) << 2) + puVar2[2]) =
                       *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + puVar2[2]);
                  uVar19 = uVar19 - 1;
                  uVar6 = uVar19;
                }
                uVar14 = uVar14 + 1;
                uVar7 = uVar7 + uVar12;
              } while (uVar14 < uVar4);
            }
            uVar14 = (uint)uVar12;
            puVar2[3] = uVar14;
            puVar2[1] = uVar14 * (int)uVar4;
            *puVar2 = uVar14 & 0xfffff | *puVar2 & 0xfff00000;
          }
          uVar14 = 0;
          if (puVar2[3] != 0) {
            iVar16 = 0;
            do {
              iVar17 = *(int *)(*(int *)(iVar16 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14));
              iVar18 = *(int *)(iVar17 + 0x14);
              uVar11 = *(undefined4 *)(iVar17 + 0x18);
              while ((iVar18 != -1 &&
                     ((**(uint **)(iVar18 * 4 + *(int *)(param_1 + 0x14)) & 0x20) != 0))) {
                iVar3 = *(int *)(iVar18 * 4 + *(int *)(param_1 + 0x14));
                iVar18 = *(int *)(iVar3 + 0x14);
                uVar11 = *(undefined4 *)(iVar3 + 0x18);
              }
              uVar14 = uVar14 + 1;
              *(undefined4 *)(iVar17 + 0x18) = uVar11;
              *(int *)(iVar17 + 0x14) = iVar18;
              iVar16 = iVar16 + 4;
            } while (uVar14 < puVar2[3]);
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar10 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}


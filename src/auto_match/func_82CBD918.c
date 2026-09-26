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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();


void fn_82CBD918(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  puVar8 = *(ulonglong **)(param_1 + 0x54);
  if (param_3 == (int *)0x0) {
    iVar14 = 0;
    *(undefined4 *)((int)puVar8 + 0x14) = 3;
  }
  else {
    iVar13 = *param_3;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (ulonglong)*(byte *)(param_3 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar13);
    uVar11 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar12 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar11 - ((longlong)uVar12 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar13);
        uVar11 = (ulonglong)sVar7;
        iVar14 = (int)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar13 = *(int *)(puVar8 + 1);
      iVar14 = (int)(uVar11 & 0xf);
      *puVar8 = *puVar8 << (uVar11 & 0xf);
      *(int *)(puVar8 + 1) = iVar13 - iVar14;
      if (iVar13 < iVar14) {
        do {
          pbVar9 = *(byte **)((int)puVar8 + 0xc);
          if (pbVar9 < (byte *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar13 = *(int *)(puVar8 + 1);
            *(byte **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar13 + 0x30;
            *puVar8 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                         * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                       (ulonglong)bVar6 << ((longlong)-iVar13 & 0x7fU)) + *puVar8;
            goto LAB_82cbda38;
          }
          iVar13 = fn_82C4E3B0(puVar8);
        } while (iVar13 == 1);
        iVar14 = (int)sVar7 >> 4;
      }
      else {
LAB_82cbda38:
        iVar14 = (int)sVar7 >> 4;
      }
    }
  }
  puVar8 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar8 + 0x14) == 0) {
    if (iVar14 == param_4) {
      lVar15 = 0;
      if ((param_5 < 5) && (*(int *)(param_1 + 0x39e4) != 0)) {
        lVar15 = 3 - (longlong)(param_5 >> 1);
      }
      uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
      uVar16 = lVar15 + 9;
      lVar15 = 0;
      uVar12 = uVar11 + 0x10;
      if ((uVar16 & 0xffffffff) < 0x21) {
        if ((uVar16 & 0xffffffff) == 0) {
          uVar12 = 0;
        }
        else {
          if ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff)) {
            do {
              if ((uVar12 & 0xffffffff) == 0) break;
              uVar16 = uVar16 - uVar12;
              *(int *)(puVar8 + 1) = (int)(uVar11 - uVar12);
              lVar15 = (ulonglong)
                       (uint)((int)(*puVar8 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                       lVar15;
              *puVar8 = *puVar8 << (uVar12 & 0x7f);
              if ((longlong)(uVar11 - uVar12) < 0) {
                fn_82C4E5E8(puVar8);
              }
              uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
              uVar12 = uVar11 + 0x10;
            } while ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          *(int *)(puVar8 + 1) = (int)(uVar11 - uVar16);
          uVar12 = (*puVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar15;
          *puVar8 = *puVar8 << (uVar16 & 0x7f);
          if ((longlong)(uVar11 - uVar16) < 0) {
            fn_82C4E5E8(puVar8);
          }
        }
      }
      else {
        uVar12 = 0;
      }
      iVar13 = (int)((uVar12 & 0xffffffff) >> 1);
      if ((uVar12 & 1) != 0) {
        iVar13 = -iVar13;
      }
      **(int **)(param_1 + 0x6e4) = iVar13;
    }
    else {
      if (iVar14 == 0) {
        **(undefined4 **)(param_1 + 0x6e4) = 0;
        goto LAB_82cbdcf8;
      }
      if (*(int *)(param_1 + 0x39e4) == 0) {
        uVar11 = *puVar8;
        uVar10 = *(uint *)(puVar8 + 1);
        *puVar8 = uVar11 << 1;
        *(int *)(puVar8 + 1) = (int)((ulonglong)uVar10 - 1);
        if ((longlong)((ulonglong)uVar10 - 1) < 0) {
          fn_82C4E5E8(puVar8);
        }
        iVar13 = -iVar14;
        if (-1 < (longlong)uVar11) {
          iVar13 = iVar14;
        }
LAB_82cbdce4:
        **(int **)(param_1 + 0x6e4) = iVar13;
      }
      else if (param_5 == 2) {
        uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
        uVar16 = 3;
        lVar15 = 0;
        uVar12 = uVar11 + 0x10;
        if ((uVar12 & 0xffffffff) < 3) {
          do {
            if ((uVar12 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar12;
            *(int *)(puVar8 + 1) = (int)(uVar11 - uVar12);
            lVar15 = (ulonglong)
                     (uint)((int)(*puVar8 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                     lVar15;
            *puVar8 = *puVar8 << (uVar12 & 0x7f);
            if ((longlong)(uVar11 - uVar12) < 0) {
              fn_82C4E5E8(puVar8);
            }
            uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
            uVar12 = uVar11 + 0x10;
          } while ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        *(int *)(puVar8 + 1) = (int)(uVar11 - uVar16);
        uVar12 = (*puVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar15;
        *puVar8 = *puVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar11 - uVar16) < 0) {
          fn_82C4E5E8(puVar8);
        }
        iVar13 = (int)((uVar12 & 0xffffffff) >> 1) + iVar14 * 4 + -3;
        if ((uVar12 & 1) != 0) {
          iVar13 = -iVar13;
        }
LAB_82cbdca0:
        **(int **)(param_1 + 0x6e4) = iVar13;
      }
      else if (param_5 == 4) {
        uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
        uVar16 = 2;
        lVar15 = 0;
        uVar12 = uVar11 + 0x10;
        if ((uVar12 & 0xffffffff) < 2) {
          do {
            if ((uVar12 & 0xffffffff) == 0) break;
            uVar16 = uVar16 - uVar12;
            *(int *)(puVar8 + 1) = (int)(uVar11 - uVar12);
            lVar15 = (ulonglong)
                     (uint)((int)(*puVar8 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar16 & 0x3f)) +
                     lVar15;
            *puVar8 = *puVar8 << (uVar12 & 0x7f);
            if ((longlong)(uVar11 - uVar12) < 0) {
              fn_82C4E5E8(puVar8);
            }
            uVar11 = (ulonglong)*(uint *)(puVar8 + 1);
            uVar12 = uVar11 + 0x10;
          } while ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        *(int *)(puVar8 + 1) = (int)(uVar11 - uVar16);
        uVar12 = (*puVar8 >> (0x40 - uVar16 & 0x7f) & 0xffffffff) + lVar15;
        *puVar8 = *puVar8 << (uVar16 & 0x7f);
        if ((longlong)(uVar11 - uVar16) < 0) {
          fn_82C4E5E8(puVar8);
        }
        iVar13 = (int)((uVar12 & 0xffffffff) >> 1) + iVar14 * 2 + -1;
        if ((uVar12 & 1) == 0) goto LAB_82cbdca0;
        **(int **)(param_1 + 0x6e4) = -iVar13;
      }
      else {
        uVar11 = *puVar8;
        uVar10 = *(uint *)(puVar8 + 1);
        *puVar8 = uVar11 << 1;
        *(int *)(puVar8 + 1) = (int)((ulonglong)uVar10 - 1);
        if ((longlong)((ulonglong)uVar10 - 1) < 0) {
          fn_82C4E5E8(puVar8);
        }
        iVar13 = -iVar14;
        if ((longlong)uVar11 < 0) goto LAB_82cbdce4;
        **(int **)(param_1 + 0x6e4) = iVar14;
      }
LAB_82cbdcf8:
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) goto LAB_82cbdd08;
    }
    *param_2 = 0;
  }
  else {
LAB_82cbdd08:
    *param_2 = 1;
  }
  return;
}


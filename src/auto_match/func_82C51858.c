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
extern int fn_82C69448();


void fn_82C51858(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  
  if (*(int *)(param_1 + 0xfac) != 0) {
    iVar15 = *(int *)(param_1 + 0x88);
    iVar10 = iVar15 * 0x100;
    uVar12 = *(int *)(param_1 + 0xbc4) + 7U & 0xfffffff8;
    iVar11 = iVar15 * 0x80;
    iVar7 = iVar10 + uVar12;
    *(uint *)(param_1 + 0xbc8) = uVar12;
    iVar13 = iVar10 + iVar7;
    *(int *)(param_1 + 0xbcc) = iVar7;
    iVar8 = iVar10 + iVar13;
    *(int *)(param_1 + 0xbd0) = iVar13;
    iVar7 = iVar11 + iVar8;
    *(int *)(param_1 + 0xbd4) = iVar8;
    iVar13 = iVar11 + iVar7;
    *(int *)(param_1 + 0xbd8) = iVar7;
    iVar7 = iVar11 + iVar13;
    *(int *)(param_1 + 0xbdc) = iVar13;
    *(int *)(param_1 + 0xbe0) = iVar7;
    if (*(int *)(param_1 + 0xd40) == 2) {
      iVar7 = iVar11 + iVar7;
      iVar13 = iVar10 + iVar7;
      *(int *)(param_1 + 0xbe4) = iVar7;
      iVar7 = iVar10 + iVar13;
      *(int *)(param_1 + 0xbe8) = iVar13;
      iVar13 = iVar10 + iVar7;
      *(int *)(param_1 + 0xbec) = iVar7;
      iVar10 = iVar10 + iVar13;
      *(int *)(param_1 + 0xbf0) = iVar13;
      iVar13 = iVar11 + iVar10;
      *(int *)(param_1 + 0xbf4) = iVar10;
      iVar7 = iVar11 + iVar13;
      *(int *)(param_1 + 0xbf8) = iVar13;
      iVar10 = iVar11 + iVar7;
      *(int *)(param_1 + 0xbfc) = iVar7;
      iVar13 = iVar11 + iVar10;
      *(int *)(param_1 + 0xc00) = iVar10;
      *(int *)(param_1 + 0xc04) = iVar13;
      *(int *)(param_1 + 0xc08) = iVar11 + iVar13;
    }
    uVar12 = *(int *)(param_1 + 0x3bc8) + 0x1fU & 0xffffffe0;
    *(uint *)(param_1 + 0x3bcc) = uVar12;
    *(uint *)(param_1 + 0x3b94) = *(int *)(param_1 + 0x3b90) + 0x1fU & 0xffffffe0;
    *(uint *)(param_1 + 0x3bd0) = uVar12 + 0x120;
    *(uint *)(param_1 + 0x3bd4) = uVar12 + 0x240;
    *(uint *)(param_1 + 0x3bd8) = uVar12 + 0x2a0;
    iVar10 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x3bdc) = uVar12 + 0x300;
    *(uint *)(param_1 + 0x3be0) = uVar12 + 0x360;
    if (*(int *)(param_1 + 0xf8c) == 0) {
      iVar11 = iVar10 * 0x80 + *(int *)(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1d8) = iVar10 * 0x20 + iVar11;
    }
    else {
      iVar11 = iVar10 * 0x80 + *(int *)(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1d8) = iVar10 * 0x30 + iVar11;
    }
    iVar10 = iVar10 * 8;
    *(int *)(param_1 + 0x1d4) = iVar11;
    *(int *)(param_1 + 0x3bac) = *(int *)(param_1 + 0x3ba8) + iVar10;
    *(int *)(param_1 + 0x3bf0) = *(int *)(param_1 + 0x3bec) + iVar10;
    *(int *)(param_1 + 0x3be8) =
         (*(int *)(param_1 + 0x8c) + 2) * iVar15 * 8 + *(int *)(param_1 + 0x3be4);
    *(int *)(param_1 + 0x3bf8) = *(int *)(param_1 + 0x3bf4) + iVar10;
  }
  uVar12 = *(uint *)(param_1 + 0x8c);
  iVar15 = *(int *)(param_1 + 0x88);
  uVar5 = 0;
  if (uVar12 != 0) {
    iVar10 = 0;
    do {
      iVar13 = 0;
      iVar11 = iVar10;
      if (iVar15 != 0) {
        iVar11 = iVar15 * 0x18 + iVar10;
        iVar7 = iVar15;
        do {
          bVar1 = iVar13 == 0;
          bVar3 = *(int *)(param_1 + 0x88) + -1 == iVar13;
          puVar9 = (uint *)(iVar10 + *(int *)(param_1 + 0x110));
          iVar10 = iVar10 + 0x18;
          iVar13 = iVar13 + 1;
          *puVar9 = (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x8c) + -1) - uVar5) >> 4 & 2 |
                            (ulonglong)bVar3) << 2 |
                           (ulonglong)bVar1 | (ulonglong)LZCOUNT(uVar5) >> 4 & 2) << 0xc) |
                    *puVar9 & 0xffff0fff;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar10 = iVar11;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar12);
  }
  uVar12 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0xe) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0xf) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0x10) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0x11) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0x12) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0x13) = 0;
  puVar14 = *(undefined4 **)(param_1 + 0x76c);
  iVar10 = *(int *)(param_1 + 0x768);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x88) +
          ((ulonglong)*(uint *)(param_1 + 0x88) & 0x7fffffff) * 2 & 0x7ffffff;
  *(int *)(param_1 + 0x764) = (int)uVar6 * 0x20;
  *(int *)(param_1 + 0x3b88) = *(int *)(param_1 + 0xcc) * 8 + -8;
  uVar6 = uVar6 * -0x20;
  *(int *)(param_1 + 0x3b8c) = *(int *)(param_1 + 0xd0) * 4 + -4;
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar11 = 0;
    do {
      uVar12 = uVar12 + 1;
      puVar9 = (uint *)(iVar11 + *(int *)(param_1 + 0x110));
      iVar11 = iVar11 + 0x18;
      *puVar9 = *puVar9 & 0xefffffff;
    } while (uVar12 < *(uint *)(param_1 + 0x90));
  }
  uVar12 = 0;
  do {
    iVar11 = iVar15;
    if ((uVar12 & 1) != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x764);
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar4 = 0;
      iVar13 = iVar10 + -0x20;
      do {
        if ((uVar4 & 0xffffffff) < 6) {
          bVar1 = (int)uVar4 != 0;
          if (uVar4 == 1 && bVar1) {
            puVar14[6] = iVar13;
            puVar14[7] = iVar13;
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[9] = (int)((-uVar6 + 0x20 & 0xffffffff) << 1) + iVar10;
            puVar14[8] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[0xb] = (int)((-uVar6 + 0x10 & 0xffffffff) << 1) + iVar10;
            puVar14[10] = uVar2;
          }
          else if (uVar4 == 2 && bVar1) {
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[0xd] = iVar13 + -0x80;
            puVar14[0xf] = iVar13 + -0x20;
            puVar14[0xe] = iVar13 + -0x20;
            puVar14[0xc] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[0x11] = iVar13 + -0xc0;
            puVar14[0x10] = uVar2;
          }
          else if (uVar4 == 3 && bVar1) {
            puVar14[0x13] = iVar13;
            puVar14[0x12] = iVar13;
            puVar14[0x15] = iVar13 + -0x20;
            puVar14[0x14] = iVar13 + -0x20;
            puVar14[0x17] = iVar13 + -0x40;
            puVar14[0x16] = iVar13 + -0x40;
          }
          else if (uVar4 == 4 && bVar1) {
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x19] = iVar13 + -0xa0;
            puVar14[0x18] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x1b] = iVar10 - (int)((uVar6 & 0xffffffff) << 1);
            puVar14[0x1a] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x1d] = iVar10 - (int)((uVar6 + 0x60 & 0xffffffff) << 1);
            puVar14[0x1c] = uVar2;
          }
          else if (bVar1) {
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x1f] = iVar13 + -0xa0;
            puVar14[0x1e] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x21] = iVar10 - (int)((uVar6 & 0xffffffff) << 1);
            puVar14[0x20] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x774);
            puVar14[0x23] = iVar10 - (int)((uVar6 + 0x60 & 0xffffffff) << 1);
            puVar14[0x22] = uVar2;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[1] = iVar13 + -0x80;
            *puVar14 = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[3] = (int)((0x20 - uVar6 & 0xffffffff) << 1) + iVar10;
            puVar14[2] = uVar2;
            uVar2 = *(undefined4 *)(param_1 + 0x770);
            puVar14[5] = iVar10 - (int)((uVar6 + 0x30 & 0xffffffff) << 1);
            puVar14[4] = uVar2;
          }
        }
        uVar4 = uVar4 + 1;
        iVar10 = iVar10 + 0x20;
        iVar13 = iVar13 + 0x20;
      } while ((int)uVar4 < 6);
      puVar14 = puVar14 + 0x24;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 2);
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xcc) * 8 + -8;
  if (*(int *)(param_1 + 0x3a04) != 0) {
    if (*(int *)(param_1 + 0xee8) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xee8);
    }
    *(int *)(param_1 + 0xef4) = iVar15;
  }
  uVar6 = (longlong)*(int *)(param_1 + 0x88) * (longlong)*(int *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x6f4) = (int)((uVar6 & 0xffffffff) << 3) + *(int *)(param_1 + 0x6f0);
  *(int *)(param_1 + 0x6fc) = (int)((uVar6 & 0xffffffff) << 1) + *(int *)(param_1 + 0x6f8);
  fn_82C69448(param_1 + 0xebc,*(undefined4 *)(param_1 + 0xea0));
  return;
}


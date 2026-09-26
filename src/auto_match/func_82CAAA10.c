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


void fn_82CAAA10(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  ulonglong uVar9;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  uVar14 = *(uint *)(param_1 + 0x9c) + 0xf & 0xfffffff0;
  uVar5 = *(uint *)(param_1 + 0xa0) + 0xf & 0xfffffff0;
  if ((*(uint *)(param_1 + 0x9c) != uVar14) || (uVar6 = 1, *(uint *)(param_1 + 0xa0) != uVar5)) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x56bc) = uVar14;
  *(uint *)(param_1 + 0x56c0) = uVar5;
  iVar10 = *(int *)(param_1 + 0xcc) * 8 + -8;
  puVar1 = *(undefined4 **)(param_1 + 0x7b4);
  iVar7 = *(int *)(param_1 + 0x88) << 1;
  *(int *)(param_1 + 0x3b88) = iVar10;
  *(int *)(param_1 + 0xec) = iVar10;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(int *)(param_1 + 0x56c4) = (int)uVar14 >> 1;
  uVar6 = 2;
  *(int *)(param_1 + 0x56c8) = (int)uVar5 >> 1;
  *(int *)(param_1 + 0x3b8c) = *(int *)(param_1 + 0xd0) * 4 + -4;
  *puVar1 = 2;
  puVar1[1] = iVar7;
  if (iVar7 < 3) {
    uVar6 = 1;
  }
  puVar1[2] = uVar6;
  uVar14 = *(uint *)(param_1 + 0x8c);
  uVar13 = (ulonglong)*(uint *)(param_1 + 0xd40);
  uVar15 = *(uint *)(param_1 + 0x88) / uVar13;
  *(int *)(param_1 + 0xf34) = *(int *)(param_1 + 0xdc);
  uVar8 = *(uint *)(param_1 + 200) / uVar13;
  *(int *)(param_1 + 0xf38) = *(int *)(param_1 + 0xe0);
  uVar9 = *(uint *)(param_1 + 0xbc) / uVar13;
  *(int *)(param_1 + 0xf20) = (int)uVar15;
  iVar10 = (int)uVar8;
  *(int *)(param_1 + 0xf30) = iVar10;
  trapWord(6,uVar13,0);
  iVar11 = (int)uVar9;
  *(int *)(param_1 + 0xf28) = iVar11;
  trapWord(6,uVar13,0);
  iVar7 = (int)(uVar14 / uVar13);
  *(int *)(param_1 + 0xf1c) = iVar7;
  trapWord(6,uVar13,0);
  trapWord(6,uVar13,0);
  if (1 < uVar13) {
    *(int *)(param_1 + 0xf48) = iVar11;
    *(int *)(param_1 + 0xf50) = iVar10;
    *(int *)(param_1 + 0xf4c) = (int)(uVar9 << 1);
    *(int *)(param_1 + 0xf3c) = iVar7;
    *(int *)(param_1 + 0xf54) = (int)(uVar8 << 1);
    *(int *)(param_1 + 0xf58) = iVar11 * *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xdc);
    *(int *)(param_1 + 0xf5c) = iVar10 * *(int *)(param_1 + 0xd0) + *(int *)(param_1 + 0xe0);
    if (uVar13 == 4) {
      *(int *)(param_1 + 0xf40) = (int)(uVar14 / uVar13 << 1);
      *(int *)(param_1 + 0xf44) = (int)(uVar15 << 1);
    }
    else {
      *(uint *)(param_1 + 0xf40) = uVar14;
      *(uint *)(param_1 + 0xf44) = *(uint *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x3b80) = iVar7 * *(int *)(param_1 + 0xcc) * 0x10;
    *(int *)(param_1 + 0x3b84) = iVar7 * *(int *)(param_1 + 0xd0) * 8;
  }
  iVar7 = *(int *)(param_1 + 0x110);
  iVar10 = 0;
  uVar5 = 0;
  if (uVar14 != 0) {
    do {
      uVar14 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        puVar12 = (uint *)(iVar10 * 0x18 + iVar7 + -0x18);
        do {
          iVar10 = iVar10 + 1;
          puVar2 = puVar12 + 6;
          bVar4 = *(int *)(param_1 + 0x88) - 1U == uVar14;
          bVar3 = uVar14 == 0;
          uVar14 = uVar14 + 1;
          puVar12 = puVar12 + 6;
          *puVar12 = (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x8c) + -1) - uVar5) >> 4 & 2 |
                             (ulonglong)bVar4) << 2 |
                            (ulonglong)bVar3 | (ulonglong)LZCOUNT(uVar5) >> 4 & 2) << 0xc) |
                     *puVar2 & 0xffff0fff;
        } while (uVar14 < *(uint *)(param_1 + 0x88));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x8c));
  }
  return;
}


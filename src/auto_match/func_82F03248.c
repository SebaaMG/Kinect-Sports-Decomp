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


void fn_82F03248(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  uVar6 = *(uint *)(param_1 + 0x2d0);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x658);
  iVar16 = *(int *)(param_1 + 0x574);
  iVar12 = *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0xbe8) = iVar16;
  *(int *)(param_1 + 0xbec) = iVar12;
  uVar13 = *(uint *)(param_1 + 0x550) / uVar4;
  *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x564) * 8 + -8;
  uVar10 = *(uint *)(param_1 + 0x55c) / uVar4;
  *(int *)(param_1 + 0x1f3c) =
       (int)(((*(int *)(param_1 + 800) + -1) * 2 & 0x10U) + (*(int *)(param_1 + 0x31c) - 1U & 8) ^
            0x18) >> 3;
  trapWord(6,uVar4,0);
  *(uint *)(param_1 + 0x4c04) = *(uint *)(param_1 + 0x2d8) >> 1;
  trapWord(6,uVar4,0);
  *(uint *)(param_1 + 0x4bfc) = uVar6 * 0x300;
  iVar14 = (int)uVar13;
  *(int *)(param_1 + 0xbd4) = iVar14;
  iVar11 = (int)uVar10;
  *(int *)(param_1 + 0xbdc) = iVar11;
  if (1 < uVar4) {
    iVar8 = iVar14 * *(int *)(param_1 + 0x564);
    *(int *)(param_1 + 0xf98) = iVar14;
    *(int *)(param_1 + 4000) = iVar11;
    iVar7 = *(int *)(param_1 + 0x568) * iVar11;
    uVar1 = (undefined4)(uVar13 << 1);
    uVar2 = (undefined4)(uVar10 << 1);
    *(undefined4 *)(param_1 + 0xf9c) = uVar1;
    *(undefined4 *)(param_1 + 0xfa4) = uVar2;
    *(int *)(param_1 + 0xfb0) = iVar8 + iVar16;
    *(int *)(param_1 + 0xfb4) = iVar7 + iVar12;
    if (uVar4 == 4) {
      *(undefined4 *)(param_1 + 0x1360) = uVar1;
      *(undefined4 *)(param_1 + 0x1368) = uVar2;
      *(uint *)(param_1 + 0x1734) = *(uint *)(param_1 + 0x55c);
      *(uint *)(param_1 + 0x172c) = *(uint *)(param_1 + 0x550);
      iVar14 = iVar14 + (int)(uVar13 << 1);
      iVar11 = iVar11 + (int)(uVar10 << 1);
      *(int *)(param_1 + 0x1364) = iVar14;
      *(int *)(param_1 + 0x136c) = iVar11;
      *(int *)(param_1 + 0x1378) = iVar8 * 2 + iVar16;
      *(int *)(param_1 + 0x137c) = iVar7 * 2 + iVar12;
      *(int *)(param_1 + 0x1728) = iVar14;
      *(int *)(param_1 + 0x1730) = iVar11;
      *(int *)(param_1 + 0x1740) = iVar8 * 3 + iVar16;
      *(int *)(param_1 + 0x1744) = iVar7 * 3 + iVar12;
    }
  }
  uVar15 = *(uint *)(param_1 + 0x2d4);
  uVar10 = uVar15 / uVar4;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  trapWord(6,uVar4,0);
  *(undefined4 *)(param_1 + 0xc30) = 0;
  trapWord(6,uVar4,0);
  *(uint *)(param_1 + 0xe2c) = uVar6 / *(uint *)(param_1 + 0x658);
  uVar9 = (uint)uVar10;
  *(uint *)(param_1 + 0xc2c) = uVar9;
  if (uVar4 == 1) {
    *(uint *)(param_1 + 0xc34) = uVar15;
  }
  else {
    *(uint *)(param_1 + 0xc34) = uVar9 & 0xfffffffe;
  }
  iVar16 = iVar16 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x310) = iVar16;
  if (1 < uVar4) {
    *(uint *)(param_1 + 0xff0) = uVar9;
    *(undefined4 *)(param_1 + 0xff8) = *(undefined4 *)(param_1 + 0xc34);
    if (uVar4 == 4) {
      *(uint *)(param_1 + 0xff4) = uVar15 >> 1 & 0x3fffffff;
      *(uint *)(param_1 + 0xffc) = uVar15 >> 1 & 0x3ffffffe;
      *(uint *)(param_1 + 0x11f4) = uVar6 >> 1 & 0x3fffffff;
    }
    else {
      *(uint *)(param_1 + 0xff4) = uVar15;
      *(uint *)(param_1 + 0x11f4) = uVar6;
      *(uint *)(param_1 + 0xffc) = uVar15;
    }
    uVar13 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
    *(int *)(param_1 + 0x1004) = (int)uVar13;
    *(int *)(param_1 + 0x1008) = (int)uVar13;
    iVar12 = (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0x7fffff) << 9);
    *(int *)(param_1 + 0x1000) = (int)(uVar10 << 4);
    iVar11 = (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
    *(int *)(param_1 + 0x1110) =
         (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0xffffffff) << 5) + *(int *)(param_1 + 0xd48);
    *(int *)(param_1 + 0x1114) = iVar12 + *(int *)(param_1 + 0xd4c);
    *(int *)(param_1 + 0x1118) = *(int *)(param_1 + 0xd50) + iVar11;
    if (*(int *)(param_1 + 0x648) != 0) {
      iVar14 = (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0xffffff) << 8);
      *(int *)(param_1 + 0x111c) = *(int *)(param_1 + 0xd54) + iVar14;
      *(int *)(param_1 + 0x1128) = *(int *)(param_1 + 0xd60) + iVar14;
      *(int *)(param_1 + 0x1120) = *(int *)(param_1 + 0xd58) + iVar14;
      *(int *)(param_1 + 0x1124) = *(int *)(param_1 + 0xd5c) + iVar14;
      *(int *)(param_1 + 0xfe8) = *(int *)(param_1 + 0xc20) + iVar12;
      *(int *)(param_1 + 0x112c) = *(int *)(param_1 + 0xd64) + iVar11;
      *(int *)(param_1 + 0x1130) = *(int *)(param_1 + 0xd68) + iVar11;
      *(int *)(param_1 + 0x1134) = *(int *)(param_1 + 0xd6c) + iVar11;
      *(int *)(param_1 + 0x1138) = *(int *)(param_1 + 0xd70) + iVar11;
      *(int *)(param_1 + 0xfec) =
           (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0xffffffff) << 4) + *(int *)(param_1 + 0xc24)
      ;
    }
    iVar11 = *(int *)(param_1 + 0x57c) * uVar9;
    *(int *)(param_1 + 0x1144) = iVar11;
    *(int *)(param_1 + 0x113c) = iVar16 + iVar11;
    *(uint *)(param_1 + 0x1148) = uVar9 * *(int *)(param_1 + 0x580);
    *(int *)(param_1 + 0x110c) = iVar12 + *(int *)(param_1 + 0xd44);
    if (uVar4 == 4) {
      uVar9 = uVar15 >> 1 & 0x3fffffff;
      iVar16 = uVar6 * uVar9;
      *(uint *)(param_1 + 0x13b8) = uVar9;
      *(int *)(param_1 + 0x13cc) = iVar16;
      *(int *)(param_1 + 0x13d0) = iVar16;
      *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_1 + 0xffc);
      uVar9 = (uint)(((ulonglong)uVar15 + ((ulonglong)uVar15 & 0x7fffffff) * 2 & 0xffffffff) >> 2);
      *(uint *)(param_1 + 0x13bc) = uVar9;
      *(uint *)(param_1 + 0x13c4) = uVar9 & 0xfffffffe;
      *(uint *)(param_1 + 0x15bc) = uVar6 * 3 >> 2;
      *(uint *)(param_1 + 0x13c8) = (uVar15 & 0x1ffffffe) << 3;
      *(int *)(param_1 + 0x14d8) = iVar16 * 0x60 + *(int *)(param_1 + 0xd48);
      *(int *)(param_1 + 0x14dc) =
           *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x600 +
           *(int *)(param_1 + 0xd4c);
      *(int *)(param_1 + 0x14e0) =
           *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd50);
      if (*(int *)(param_1 + 0x648) != 0) {
        *(int *)(param_1 + 0x14e4) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x300 +
             *(int *)(param_1 + 0xd54);
        *(int *)(param_1 + 0x14e8) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x300 +
             *(int *)(param_1 + 0xd58);
        *(int *)(param_1 + 0x14ec) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x300 +
             *(int *)(param_1 + 0xd5c);
        *(int *)(param_1 + 0x14f0) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x300 +
             *(int *)(param_1 + 0xd60);
        *(int *)(param_1 + 0x13b0) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x600 +
             *(int *)(param_1 + 0xc20);
        *(int *)(param_1 + 0x14f4) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0xc +
             *(int *)(param_1 + 0xd64);
        *(int *)(param_1 + 0x14f8) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0xc +
             *(int *)(param_1 + 0xd68);
        *(int *)(param_1 + 0x14fc) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0xc +
             *(int *)(param_1 + 0xd6c);
        *(int *)(param_1 + 0x1500) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0xc +
             *(int *)(param_1 + 0xd70);
        *(int *)(param_1 + 0x13b4) =
             *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x30 +
             *(int *)(param_1 + 0xc24);
      }
      *(int *)(param_1 + 0x150c) = *(int *)(param_1 + 0x57c) * *(int *)(param_1 + 0x13b8);
      *(int *)(param_1 + 0x1510) = *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x580);
      *(int *)(param_1 + 0x1504) = *(int *)(param_1 + 0x150c) + *(int *)(param_1 + 0x310);
      *(int *)(param_1 + 0x14d4) =
           *(int *)(param_1 + 0x13b8) * *(int *)(param_1 + 0x2d0) * 0x600 +
           *(int *)(param_1 + 0xd44);
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      *(int *)(param_1 + 0x1780) =
           (int)(((ulonglong)*(uint *)(param_1 + 0x2d4) +
                  ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x7fffffff) * 2 & 0xffffffff) /
                (ulonglong)*(uint *)(param_1 + 0x658));
      *(undefined4 *)(param_1 + 0x1788) = *(undefined4 *)(param_1 + 0x13c4);
      *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0x178c) = *(undefined4 *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0x1984) = *(undefined4 *)(param_1 + 0x2d0);
      *(int *)(param_1 + 0x1790) = *(int *)(param_1 + 0x1780) << 4;
      *(int *)(param_1 + 0x1794) = *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780);
      *(int *)(param_1 + 0x1798) = *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780);
      *(int *)(param_1 + 0x18a0) =
           *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x60 + *(int *)(param_1 + 0xd48)
      ;
      *(int *)(param_1 + 0x18a4) =
           *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x600 +
           *(int *)(param_1 + 0xd4c);
      *(int *)(param_1 + 0x18a8) =
           *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0xc + *(int *)(param_1 + 0xd50);
      if (*(int *)(param_1 + 0x648) != 0) {
        *(int *)(param_1 + 0x18ac) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x300 +
             *(int *)(param_1 + 0xd54);
        *(int *)(param_1 + 0x18b0) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x300 +
             *(int *)(param_1 + 0xd58);
        *(int *)(param_1 + 0x18b4) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x300 +
             *(int *)(param_1 + 0xd5c);
        *(int *)(param_1 + 0x18b8) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x300 +
             *(int *)(param_1 + 0xd60);
        *(int *)(param_1 + 0x1778) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x600 +
             *(int *)(param_1 + 0xc20);
        *(int *)(param_1 + 0x18bc) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0xc +
             *(int *)(param_1 + 0xd64);
        *(int *)(param_1 + 0x18c0) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0xc +
             *(int *)(param_1 + 0xd68);
        *(int *)(param_1 + 0x18c4) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0xc +
             *(int *)(param_1 + 0xd6c);
        *(int *)(param_1 + 0x18c8) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0xc +
             *(int *)(param_1 + 0xd70);
        *(int *)(param_1 + 0x177c) =
             *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x30 +
             *(int *)(param_1 + 0xc24);
      }
      *(int *)(param_1 + 0x18d4) = *(int *)(param_1 + 0x57c) * *(int *)(param_1 + 0x1780);
      *(int *)(param_1 + 0x18d8) = *(int *)(param_1 + 0x1780) * *(int *)(param_1 + 0x580);
      *(int *)(param_1 + 0x18cc) = *(int *)(param_1 + 0x18d4) + *(int *)(param_1 + 0x310);
      *(int *)(param_1 + 0x189c) =
           *(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x1780) * 0x600 +
           *(int *)(param_1 + 0xd44);
    }
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    iVar16 = *(int *)(*(int *)(param_1 + 0x300) + 0x40);
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x574) + iVar16;
    *(int *)(param_1 + 0x14) = iVar16;
    *(int *)(param_1 + 0x4a94) =
         *(int *)(*(int *)(param_1 + 0x304) + 0x40) + *(int *)(param_1 + 0x574);
    *(int *)(param_1 + 0x4a98) =
         *(int *)(*(int *)(param_1 + 0x304) + 0x58) + *(int *)(param_1 + 0x578);
    *(int *)(param_1 + 0x4a9c) =
         *(int *)(*(int *)(param_1 + 0x304) + 0x70) + *(int *)(param_1 + 0x578);
    if ((1 < *(uint *)(param_1 + 0x658)) &&
       (*(int *)(param_1 + 0x113c) = *(int *)(param_1 + 0x1144) + *(int *)(param_1 + 0x310),
       3 < *(uint *)(param_1 + 0x658))) {
      *(int *)(param_1 + 0x1504) = *(int *)(param_1 + 0x150c) + *(int *)(param_1 + 0x310);
      *(int *)(param_1 + 0x18cc) = *(int *)(param_1 + 0x18d4) + *(int *)(param_1 + 0x310);
    }
  }
  if (*(int *)(param_1 + 0x920) != 0) {
    uVar6 = *(uint *)(param_1 + 0x31c) & 0xf;
    if (uVar6 == 0) {
      iVar16 = *(int *)(param_1 + 0x2d0);
    }
    else if (uVar6 < 4) {
      iVar16 = *(int *)(param_1 + 0x2d0) + -2;
    }
    else {
      iVar16 = *(int *)(param_1 + 0x2d0) + -1;
    }
    *(int *)(param_1 + 0x1ba0) = iVar16;
    uVar6 = *(uint *)(param_1 + 800) & 0xf;
    if (uVar6 == 0) {
      iVar16 = *(int *)(param_1 + 0x2d4);
    }
    else if (uVar6 < 4) {
      iVar16 = *(int *)(param_1 + 0x2d4) + -2;
    }
    else {
      iVar16 = *(int *)(param_1 + 0x2d4) + -1;
    }
    *(int *)(param_1 + 0x1ba4) = iVar16;
  }
  iVar16 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    do {
      uVar15 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        iVar12 = iVar16 * 0x114;
        do {
          lVar5 = LZCOUNT(uVar15);
          iVar16 = iVar16 + 1;
          bVar3 = *(int *)(param_1 + 0x2d0) - 1U == uVar15;
          iVar11 = iVar12 + *(int *)(param_1 + 0x1e54);
          uVar15 = uVar15 + 1;
          iVar12 = iVar12 + 0x114;
          *(uint *)(iVar11 + 0x78) =
               (uint)((((ulonglong)LZCOUNT((*(int *)(param_1 + 0x2d4) + -1) - uVar6) >> 4 & 2 |
                       (ulonglong)bVar3) << 1 | (ulonglong)(uVar6 == 0)) << 1) | (uint)lVar5 >> 5;
        } while (uVar15 < *(uint *)(param_1 + 0x2d0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x2d4));
  }
  return;
}


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
extern int fn_82ACA638();


undefined8 fn_82B815D0(int param_1,int param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  uint *puVar1;
  bool bVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar9;
  int iVar10;
  longlong lVar8;
  ulonglong uVar11;
  uint uVar13;
  longlong lVar12;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  puVar1 = *(uint **)((param_2 + 0xb) * 4 + param_1);
  if ((*puVar1 >> 2 & 1) != 0) {
    *param_5 = *param_5 | 1;
  }
  uVar13 = *puVar1;
  uVar16 = 0;
  uVar15 = (ulonglong)(uVar13 >> 0x19) & 7;
  cVar4 = fn_82ACA638(param_1);
  if (cVar4 == '\0') {
    iVar10 = 0;
    if ((uVar13 >> 0x19 & 7) != 0) {
      uVar9 = 0;
      uVar5 = uVar15;
      do {
        uVar14 = ((uVar13 >> 5 & 0xff) >> (uVar9 & 0x3f)) - iVar10;
        iVar10 = iVar10 + 1;
        uVar16 = (uVar14 & 3) << (uVar9 & 0x3f) | uVar16;
        uVar9 = uVar9 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (uVar15 < 4) {
      uVar5 = uVar15 - 1;
      lVar8 = 4 - uVar15;
      lVar12 = uVar15 << 1;
      do {
        iVar10 = (int)uVar15;
        uVar15 = uVar15 + 1;
        uVar16 = (((uVar13 >> 5 & 0xff) >> ((uint)((uVar5 & 0xffffffff) << 1) & 0x3e)) - iVar10 & 3)
                 << ((uint)lVar12 & 0x3f) | uVar16;
        lVar12 = lVar12 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    uVar9 = *(uint *)(param_1 + 8) >> 1;
    uVar5 = (ulonglong)uVar9 & 0xf;
    if ((uVar9 & 0xf) != 0) {
      uVar6 = 0;
      uVar9 = 0;
      uVar11 = uVar5;
      do {
        if (uVar15 <= (uVar6 & 0xffffffff)) break;
        uVar7 = uVar11 & ~(uVar11 - 1);
        uVar14 = uVar9 & 0x3f;
        uVar11 = uVar11 - uVar7;
        uVar7 = 0x1f - LZCOUNT((int)uVar7);
        uVar6 = uVar6 + 1;
        uVar9 = uVar9 + 2;
        uVar16 = (((uVar13 >> 5 & 0xff) >> uVar14) - (int)uVar7 & 3) <<
                 ((uint)((uVar7 & 0xffffffff) << 1) & 0x3e) | uVar16;
      } while (uVar11 != 0);
      uVar11 = 0x1f - LZCOUNT((uint)uVar5);
      for (uVar15 = ~uVar5 & 0xf; (uVar15 & 0xffffffff) != 0;
          uVar15 = uVar15 - (uVar15 & ~(uVar15 - 1))) {
        uVar6 = 0x1f - LZCOUNT((uint)uVar15 & ~((uint)uVar15 - 1));
        uVar13 = (uint)uVar6;
        if ((uVar11 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar9 = (uVar16 >> ((uint)((uVar11 & 0xffffffff) << 1) & 0x3e)) + (int)uVar11;
        }
        else {
          uVar9 = ((uint)uVar5 >> (uVar13 & 0x3f)) << (uVar13 & 0x3f);
          uVar7 = 0x1f - LZCOUNT(uVar9 & ~(uVar9 - 1));
          uVar9 = (uVar16 >> ((uint)((uVar7 & 0xffffffff) << 1) & 0x3e)) + (int)uVar7;
        }
        uVar16 = ((uVar9 & 3) - uVar13 & 3) << ((uint)((uVar6 & 0xffffffff) << 1) & 0x3e) | uVar16;
      }
    }
  }
  uVar13 = *param_5;
  uVar9 = (uVar16 & 0xff) << 1;
  uVar14 = uVar9 | uVar13 & 0xfffffe01;
  *param_5 = uVar14;
  uVar16 = *(uint *)(puVar1[3] + 8) >> 7 & 0x7f;
  if ((uVar16 == 0x7d) || (bVar2 = false, uVar16 == 0x7c)) {
    bVar2 = true;
  }
  if (bVar2) {
    if ((*puVar1 >> 1 & 1) != 0) {
      *param_3 = *param_3 | 0x80;
    }
    if (((*puVar1 & 0x18) != 0) && (*param_5 = *param_5 | 0x200, (*puVar1 & 8) != 0)) {
      param_3[1] = param_3[1] | 0x20000000;
    }
    uVar3 = 1;
    *param_5 = *puVar1 >> 6 & 0x7f800 | *param_5 & 0xfff807ff;
  }
  else {
    *param_5 = uVar14 | 0x400;
    uVar16 = *puVar1;
    uVar14 = uVar16 >> 0x11 & 0xff;
    if ((uVar16 >> 1 & 1) != 0) {
      uVar14 = uVar14 | 0x80;
    }
    if ((uVar16 & 0x10) != 0) {
      uVar14 = uVar14 | 0x40;
    }
    uVar3 = 0;
    *param_5 = uVar14 << 0xb | uVar9 | uVar13 & 0xfff80601 | 0x400;
  }
  return uVar3;
}


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
extern int fn_82630C60();
extern int fn_8265C940();


undefined8 fn_82630F50(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar9;
  longlong lVar8;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar5 = fn_8265C940(0x2000,0xffffffffb5800000);
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    *(uint *)(param_1 + 0x36a8) = (uint)uVar5;
    lVar7 = fn_82630C60(uVar5);
    *(uint *)(param_1 + 14000) =
         ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar5 & 0x1fffffff);
    *(uint *)(param_1 + 0x36ac) = *(uint *)(param_1 + 0x36ac) & 0xff000000 | (uint)lVar7 & 0xffffff;
    uVar11 = 0x10;
    uVar5 = (lVar7 + 7U & 0x3ffffff8) * 4 + uVar5;
    puVar10 = (uint *)(param_1 + 0x372c);
    do {
      puVar9 = (undefined4 *)uVar5;
      *puVar9 = 0x5c8;
      uVar1 = ((uVar11 & 0x7f) << 8 | -uVar11 & 0x7f) << 4;
      puVar9[1] = 0x20000;
      lVar12 = 8;
      *(undefined4 *)(uVar5 + 8) = 0x78d00;
      lVar7 = uVar5 + 8;
      do {
        lVar8 = lVar7;
        lVar7 = lVar8 + 4;
        *(uint *)lVar7 = uVar1 | 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar4 = (int)lVar8;
      *(undefined4 *)(iVar4 + 8) = 0xd00;
      uVar11 = uVar11 + 1;
      puVar2 = (uint *)(iVar4 + 0xc);
      *puVar2 = uVar1;
      puVar10[3] = ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
                   ((uint)puVar9 & 0x1fffffff);
      puVar3 = puVar10 + 2;
      uVar1 = (int)puVar2 + (4 - (int)puVar9) >> 2;
      puVar10 = puVar10 + 2;
      *puVar10 = *puVar3 & 0xff000000 | uVar1 & 0xffffff;
      uVar5 = ((longlong)(int)uVar1 + 7U & 0x3ffffff8) * 4 + uVar5;
    } while (uVar11 < 0x71);
    lVar7 = uVar5 - 4;
    lVar12 = 0x18;
    do {
      *(undefined4 *)((int)lVar7 + 4) = 0xc0003600;
      lVar7 = lVar7 + 8;
      *(undefined4 *)lVar7 = 0x10081;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(uint *)(param_1 + 0x3ab8) =
         ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar5 & 0x1fffffff);
    uVar6 = 1;
    *(uint *)(param_1 + 0x3ab4) =
         *(uint *)(param_1 + 0x3ab4) & 0xff000000 |
         (int)((int)(undefined4 *)lVar7 + (4 - (uint)uVar5)) >> 2 & 0xffffffU;
  }
  return uVar6;
}


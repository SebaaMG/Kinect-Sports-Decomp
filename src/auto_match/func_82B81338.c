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
extern int fn_82B80200();


void fn_82B81338(int param_1,ulonglong param_2,uint param_3)

{
  uint *puVar1;
  char cVar3;
  uint uVar2;
  ulonglong uVar4;
  uint uVar6;
  longlong lVar5;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  cVar3 = fn_82B80200();
  if (cVar3 == '\0') {
    uVar8 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar6 = 0;
      uVar11 = param_2;
      do {
        uVar2 = uVar6 & 0x3f;
        uVar6 = uVar6 + 2;
        uVar8 = (uint)(1 << (param_3 >> uVar2 & 3)) | uVar8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar6 = *(uint *)(param_1 + 8);
    uVar4 = (ulonglong)(uVar6 >> 1) & 0xf;
    uVar11 = (((ulonglong)(uVar6 >> 0xe) & 7) -
             (((0x8da691691448U >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f) & 7)) +
             param_2;
    lVar5 = (param_2 & 0x7fffffff) << 1;
    for (uVar8 = uVar4 - uVar8; (uVar8 & 0xffffffff) != 0; uVar8 = uVar8 - (uVar8 & ~(uVar8 - 1))) {
      param_3 = param_3 & ~(3 << ((uint)lVar5 & 0x3f)) |
                0x1f - (int)LZCOUNT((uint)uVar8 & ~((uint)uVar8 - 1)) << ((uint)lVar5 & 0x3f);
      lVar5 = lVar5 + 2;
    }
    uVar2 = 0;
    for (; uVar9 = 0, (uVar4 & 0xffffffff) != 0; uVar4 = uVar4 - (uVar4 & ~(uVar4 - 1))) {
      uVar8 = 0x1f - LZCOUNT((uint)uVar4 & ~((uint)uVar4 - 1));
      if ((uVar11 & 0xffffffff) != 0) {
        uVar10 = 0;
        do {
          if ((uint)uVar8 == (param_3 >> (uVar10 & 0x3f) & 3)) {
            uVar10 = (uint)((uVar8 & 0xffffffff) << 1);
            uVar2 = uVar2 & ~(3 << (uVar10 & 0x3e)) | uVar9 << (uVar10 & 0x3e);
            break;
          }
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 2;
        } while ((ulonglong)uVar9 < (uVar11 & 0xffffffff));
      }
    }
    *(uint *)(param_1 + 8) = (uint)((uVar11 & 0xffffffff) << 0xe) & 0x1c000 | uVar6 & 0xfffe3fff;
    puVar7 = (undefined4 *)(param_1 + 0x28);
    for (; uVar9 < (*(uint *)(param_1 + 8) >> 0x13 & 7); uVar9 = uVar9 + 1) {
      puVar7 = puVar7 + 1;
      uVar6 = *(uint *)*puVar7;
      uVar10 = (uVar6 & 0xf1ffffff) >> 5 & 0xff;
      *(uint *)*puVar7 =
           ((((uVar10 >> (param_3 >> 5 & 6) & 3) << 2 | uVar10 >> (param_3 >> 3 & 6) & 3) << 2 |
            uVar10 >> (param_3 >> 1 & 6) & 3) << 2 | uVar10 >> ((param_3 & 3) << 1) & 3) << 5 |
           uVar6 & 0xf1ffe01f | (uint)((uVar11 & 7) << 0x19);
    }
    for (puVar1 = *(uint **)(param_1 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      if ((puVar1[4] != 0) && (uVar6 = *puVar1, (uVar6 & 0xe000000) != 0)) {
        *puVar1 = ((((uVar2 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar2 >> (uVar6 >> 8 & 6) & 3) << 2 |
                   uVar2 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar2 >> (uVar6 >> 4 & 6) & 3) << 5 |
                  uVar6 & 0xffffe01f;
      }
    }
  }
  else {
    *(uint *)(param_1 + 8) =
         (uint)((param_2 & 0xffffffff) << 0xe) & 0x1c000 | *(uint *)(param_1 + 8) & 0xfffe3fff;
  }
  return;
}


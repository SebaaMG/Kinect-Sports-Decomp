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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82AB1538(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar5 = param_2 - 1U >> 3;
  puVar6 = (undefined1 *)(uVar5 + param_1);
  lVar10 = 4;
  iVar8 = 0;
  uVar9 = 0;
  uVar1 = puVar6[3];
  uVar7 = (param_2 + uVar5 * -8) - 1;
  uVar2 = puVar6[2];
  uVar3 = puVar6[1];
  uVar4 = *puVar6;
  uVar5 = ((0xffffffffU >> ((0x20 - uVar7) - param_3 & 0x3f)) >> (uVar7 & 0x3f)) << (uVar7 & 0x3f);
  do {
    puVar6[iVar8] =
         (char)((CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) & ~uVar5 |
                param_4 << (uVar7 & 0x3f) & uVar5) >> (uVar9 & 0x3f));
    uVar9 = uVar9 + 8;
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}


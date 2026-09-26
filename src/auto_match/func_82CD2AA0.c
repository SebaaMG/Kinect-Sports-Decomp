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
extern unsigned int iStack_a8;
extern unsigned int lbl_82111030;
extern unsigned int uStack_b0;


void fn_82CD2AA0(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar5;
  ulonglong uVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar11;
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uStack_b0;
  int iStack_a8;
  
  puVar11 = (uint *)&lbl_82111030;
  iStack_a8 = 0;
  do {
    uStack_b0 = 4;
    iVar8 = iStack_a8;
    do {
      uVar10 = (ulonglong)*puVar11;
      uVar9 = 0;
      lVar18 = 0x40;
      do {
        uVar6 = (uint)(uVar9 & 0xf8);
        uVar5 = (uint)(uVar9 & 0xfc);
        uVar16 = (uVar9 & 0xf8) + (longlong)(int)(uVar6 / 0x33) * -0x33;
        uVar13 = uVar9 + 1 & 0xf8;
        uVar4 = uVar9 + 1 & 0xfc;
        iVar1 = (int)uVar9;
        cVar2 = (char)(uVar6 / 0x33);
        uVar6 = (uint)uVar13;
        uVar12 = (uVar9 & 0xfc) + (longlong)(int)(uVar5 / 0x33) * -0x33;
        uVar13 = uVar13 + (longlong)(int)(uVar6 / 0x33) * -0x33;
        uVar17 = (uint)uVar4;
        *(byte *)(iVar8 + iVar1 + -0x7cdb6088) =
             ((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar2;
        uVar14 = uVar9 + 2 & 0xf8;
        *(byte *)(iVar8 + iVar1 + -0x7cdb5f88) =
             (((char)((~(uVar12 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar12 <= uVar10) & 1U) +
             (char)(uVar5 / 0x33)) * '\x06';
        uVar7 = (uint)uVar14;
        *(byte *)(iVar8 + iVar1 + -0x7cdb5e88) =
             (((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar2)
             * '$' + '\n';
        uVar4 = uVar4 + (longlong)(int)(uVar17 / 0x33) * -0x33;
        cVar3 = (char)(uVar6 / 0x33);
        uVar12 = uVar9 + 2 & 0xfc;
        uVar14 = uVar14 + (longlong)(int)(uVar7 / 0x33) * -0x33;
        uVar5 = (uint)uVar12;
        uVar12 = uVar12 + (longlong)(int)(uVar5 / 0x33) * -0x33;
        uVar16 = uVar9 + 3 & 0xf8;
        uVar6 = (uint)uVar16;
        cVar2 = (char)(uVar7 / 0x33);
        uVar16 = uVar16 + (longlong)(int)(uVar6 / 0x33) * -0x33;
        *(byte *)(iVar8 + iVar1 + -0x7cdb6087) =
             ((char)((~(uVar13 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar13 <= uVar10) & 1U) + cVar3;
        uVar15 = uVar9 + 3 & 0xfc;
        *(byte *)(iVar8 + iVar1 + -0x7cdb5f87) =
             (((char)((~(uVar4 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar4 <= uVar10) & 1U) +
             (char)(uVar17 / 0x33)) * '\x06';
        *(byte *)(iVar8 + iVar1 + -0x7cdb5e87) =
             (((char)((~(uVar13 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar13 <= uVar10) & 1U) + cVar3)
             * '$' + '\n';
        uVar7 = (uint)uVar15;
        *(byte *)(iVar8 + iVar1 + -0x7cdb6086) =
             ((char)((~(uVar14 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar14 <= uVar10) & 1U) + cVar2;
        cVar3 = (char)(uVar6 / 0x33);
        uVar15 = uVar15 + (longlong)(int)(uVar7 / 0x33) * -0x33;
        *(byte *)(iVar8 + -0x7cdb5f85 + iVar1) =
             (((char)((~(uVar15 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar15 <= uVar10) & 1U) +
             (char)(uVar7 / 0x33)) * '\x06';
        *(byte *)(iVar8 + iVar1 + -0x7cdb5e86) =
             (((char)((~(uVar14 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar14 <= uVar10) & 1U) + cVar2)
             * '$' + '\n';
        *(byte *)(iVar8 + iVar1 + -0x7cdb6085) =
             ((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar3;
        uVar9 = uVar9 + 4;
        *(byte *)(iVar8 + iVar1 + -0x7cdb5f86) =
             (((char)((~(uVar12 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar12 <= uVar10) & 1U) +
             (char)(uVar5 / 0x33)) * '\x06';
        *(byte *)(iVar8 + iVar1 + -0x7cdb5e85) =
             (((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar3)
             * '$' + '\n';
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      uVar9 = (ulonglong)uStack_b0;
      iVar8 = iVar8 + 0xc00;
      puVar11 = puVar11 + 1;
      uStack_b0 = (uint)(uVar9 - 1);
    } while (uVar9 - 1 != 0);
    iStack_a8 = iStack_a8 + 0x300;
  } while ((int)puVar11 < -0x7deeef90);
  return;
}


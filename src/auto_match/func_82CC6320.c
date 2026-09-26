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


void fn_82CC6320(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  
  iVar4 = (int)param_2;
  uVar11 = *(uint *)(param_1 + 0x20);
  uVar8 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
  lVar2 = ((ulonglong)uVar8 & 0x7fffffff) * 2;
  uVar18 = (int)(((ulonglong)uVar8 & 0x1ffffff) << 7) / (int)uVar11;
  uVar17 = (lVar2 - 7U & 0x3ffffff) << 6;
  uVar15 = ((ulonglong)uVar18 & 0x7fffffff) << 1;
  trapWord(6,(ulonglong)uVar11,0);
  iVar3 = (int)lVar2;
  trapWord(6,uVar15,0);
  lVar16 = (longlong)((int)uVar17 / (int)uVar15) + -1;
  trapWord(5,uVar15 & ~(((uVar17 & 0x7fffffff) << 1 | (lVar2 - 7U & 0x3ffffff) >> 0x19) - 1),0xffff)
  ;
  trapWord(5,(ulonglong)uVar11 &
             ~((((ulonglong)uVar8 & 0xffffff) << 8 | ((ulonglong)uVar8 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  lVar14 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  uVar18 = 0xffffffffU - ((int)uVar18 >> 0x1f) & uVar18;
  lVar12 = (longlong)iVar3 * (longlong)iVar4 + (ulonglong)*(uint *)(param_1 + 0x34);
  if (iVar4 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar13 = (undefined1 *)(uVar11 * 2 * iVar4 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      iVar4 = (int)lVar12;
      if (0 < (int)lVar16) {
        lVar20 = lVar16;
        do {
          uVar8 = (int)uVar11 >> 6 & 0xfffffffe;
          uVar10 = uVar11 + uVar18;
          uVar9 = uVar10 & 0xff;
          puVar13[1] = (char)((int)((uint)*(byte *)(uVar8 + iVar4) * (0x80 - (uVar11 & 0x7f)) +
                                   (uint)*(byte *)(iVar4 + 2 + uVar8) * (uVar11 & 0x7f)) >> 7);
          uVar8 = (int)uVar10 >> 6 & 0xfffffffe;
          uVar1 = (int)uVar10 >> 6 & 0xfffffffc;
          uVar11 = uVar10 + uVar18;
          puVar13[3] = (char)((int)((uint)*(byte *)(uVar8 + iVar4) * (0x80 - (uVar10 & 0x7f)) +
                                   (uint)*(byte *)(iVar4 + 2 + uVar8) * (uVar10 & 0x7f)) >> 7);
          puVar13[2] = (char)(*(byte *)(iVar4 + 5 + uVar1) * uVar9 +
                              (uint)*(byte *)(iVar4 + 1 + uVar1) * (0x100 - uVar9) >> 8);
          puVar13[4] = (char)(*(byte *)(iVar4 + 7 + uVar1) * uVar9 +
                              (uint)*(byte *)(iVar4 + 3 + uVar1) * (0x100 - uVar9) >> 8);
          puVar13 = puVar13 + 4;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if ((int)lVar16 < (int)lVar14) {
        lVar20 = lVar14 - lVar16;
        do {
          uVar8 = (int)uVar11 >> 6 & 0xfffffffe;
          iVar7 = uVar8 + 2;
          if (iVar3 < (int)uVar8) {
            uVar8 = iVar3 - 1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar9 = uVar11 + uVar18;
          puVar13[1] = (char)((int)((uint)*(byte *)(uVar8 + iVar4) * (0x80 - (uVar11 & 0x7f)) +
                                   (uint)*(byte *)(iVar7 + iVar4) * (uVar11 & 0x7f)) >> 7);
          uVar11 = (int)uVar9 >> 6 & 0xfffffffe;
          iVar7 = uVar11 + 2;
          if (iVar3 < (int)uVar11) {
            uVar11 = iVar3 - 1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar8 = (int)uVar9 >> 6 & 0xfffffffc;
          iVar6 = uVar8 + 1;
          uVar1 = uVar9 & 0xff;
          puVar13[3] = (char)((int)((uint)*(byte *)(uVar11 + iVar4) * (0x80 - (uVar9 & 0x7f)) +
                                   (uint)*(byte *)(iVar7 + iVar4) * (uVar9 & 0x7f)) >> 7);
          iVar19 = uVar8 + 3;
          iVar5 = uVar8 + 5;
          iVar7 = uVar8 + 7;
          if (iVar3 < iVar6) {
            iVar6 = iVar3 + -1;
          }
          if (iVar3 < iVar19) {
            iVar19 = iVar3 + -1;
          }
          if (iVar3 < iVar5) {
            iVar5 = iVar3 + -1;
          }
          if (iVar3 < iVar7) {
            iVar7 = iVar3 + -1;
          }
          uVar11 = uVar9 + uVar18;
          puVar13[2] = (char)((uint)*(byte *)(iVar6 + iVar4) * (0x100 - uVar1) +
                              *(byte *)(iVar5 + iVar4) * uVar1 >> 8);
          puVar13 = puVar13 + 4;
          *puVar13 = (char)((uint)*(byte *)(iVar19 + iVar4) * (0x100 - uVar1) +
                            *(byte *)(iVar7 + iVar4) * uVar1 >> 8);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      param_3 = param_3 + -1;
      lVar12 = lVar12 + lVar2;
    } while (param_3 != 0);
  }
  return;
}


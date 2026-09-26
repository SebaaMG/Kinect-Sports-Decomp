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


void fn_827CF7F8(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  uVar6 = *(uint *)(param_1 + 0x1c);
  lVar20 = ((ulonglong)*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 8;
  uVar14 = lVar20 - (ulonglong)uVar6;
  lVar17 = (ulonglong)*(uint *)(param_1 + 0xdc) + 2;
  if ((0 < (longlong)uVar14) && (0 < (int)lVar17)) {
    puVar13 = param_3 + -2;
    do {
      puVar13 = puVar13 + 1;
      lVar18 = (ulonglong)*puVar13 + (ulonglong)uVar6;
      lVar12 = lVar18 + -1;
      uVar4 = *(undefined1 *)((int)lVar18 + -1);
      uVar22 = uVar14;
      uVar11 = uVar14 & 0xffffffff;
      while (uVar11 != 0) {
        lVar12 = lVar12 + 1;
        *(undefined1 *)lVar12 = uVar4;
        uVar22 = uVar22 - 1;
        uVar11 = uVar22;
      }
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  iVar19 = 0;
  iVar10 = *(int *)(param_1 + 0xb4) * 0x40;
  iVar9 = (0x80 - *(int *)(param_1 + 0xb4)) * 0x200;
  if (0 < *(int *)(param_2 + 0xc)) {
    uVar14 = lVar20 - 2;
    do {
      pbVar7 = (byte *)param_3[1];
      puVar8 = (undefined1 *)*param_4;
      bVar5 = *(byte *)*param_3;
      pbVar1 = (byte *)param_3[-1] + 1;
      pbVar2 = pbVar7 + 1;
      pbVar3 = (byte *)*param_3 + 1;
      iVar21 = (uint)*pbVar7 + (uint)*(byte *)param_3[-1] + (uint)bVar5;
      iVar15 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar3;
      *puVar8 = (char)(((iVar21 * 2 - (uint)bVar5) + iVar15) * iVar10 + (uint)bVar5 * iVar9 + 0x8000
                      >> 0x10);
      uVar22 = uVar14;
      uVar11 = uVar14 & 0xffffffff;
      while (puVar8 = puVar8 + 1, uVar11 != 0) {
        pbVar1 = pbVar1 + 1;
        pbVar2 = pbVar2 + 1;
        bVar5 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar16 = (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar3;
        *puVar8 = (char)(((iVar21 - (uint)bVar5) + iVar16 + iVar15) * iVar10 + (uint)bVar5 * iVar9 +
                         0x8000 >> 0x10);
        uVar22 = uVar22 - 1;
        iVar21 = iVar15;
        iVar15 = iVar16;
        uVar11 = uVar22;
      }
      iVar19 = iVar19 + 1;
      param_4 = param_4 + 1;
      *puVar8 = (char)(((iVar15 * 2 - (uint)*pbVar3) + iVar21) * iVar10 + (uint)*pbVar3 * iVar9 +
                       0x8000 >> 0x10);
      param_3 = param_3 + 1;
    } while (iVar19 < *(int *)(param_2 + 0xc));
  }
  return;
}


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


void fn_82F2E2D0(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  iVar5 = (int)param_2;
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar10 = (ulonglong)uVar2;
  trapWord(6,uVar10,0);
  uVar9 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x74) + 0xe);
  iVar3 = (int)(uVar6 * uVar2 + 0x1f & 0xffffffe0) >> 3;
  uVar13 = (uVar9 - 1) * uVar2;
  uVar14 = (int)(((ulonglong)uVar9 & 0x1ffffff) << 7) / (int)uVar2;
  iVar4 = (int)(uVar6 * uVar9 + 0x1f & 0xffffffe0) >> 3;
  trapWord(5,uVar10 & ~((((ulonglong)uVar9 & 0xffffff) << 8 | ((ulonglong)uVar9 & 0x1ffffff) >> 0x18
                        ) - 1),0xffff);
  iVar1 = (int)uVar13 / (int)uVar9;
  trapWord(6,(ulonglong)uVar9,0);
  trapWord(5,(ulonglong)uVar9 &
             ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) - 1),0xffff);
  uVar14 = 0xffffffffU - ((int)uVar14 >> 0x1f) & uVar14;
  iVar7 = iVar4 * iVar5 + *(int *)(param_1 + 0x78);
  lVar11 = (longlong)iVar3 * (longlong)iVar5 + (ulonglong)*(uint *)(param_1 + 0x84);
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar9 = 0;
      if (0 < iVar1) {
        lVar15 = (longlong)iVar1;
        do {
          uVar6 = uVar9 & 0x7f;
          iVar8 = 0x80 - uVar6;
          iVar5 = ((int)uVar9 >> 7) * 3;
          uVar9 = uVar9 + uVar14;
          puVar12 = (undefined1 *)lVar11;
          *puVar12 = (char)((int)(*(byte *)(iVar7 + 3 + iVar5) * uVar6 +
                                 (uint)*(byte *)(iVar5 + iVar7) * iVar8) >> 7);
          puVar12[1] = (char)((int)(*(byte *)(iVar7 + 4 + iVar5) * uVar6 +
                                   (uint)*(byte *)(iVar7 + 1 + iVar5) * iVar8) >> 7);
          puVar12[2] = (char)((int)(*(byte *)(iVar7 + 5 + iVar5) * uVar6 +
                                   (uint)*(byte *)(iVar7 + 2 + iVar5) * iVar8) >> 7);
          lVar11 = lVar11 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (iVar1 < *(int *)(param_1 + 0x60)) {
        lVar15 = (longlong)iVar1;
        do {
          iVar5 = (int)uVar9 >> 7;
          lVar15 = lVar15 + 1;
          uVar9 = uVar9 + uVar14;
          iVar5 = iVar5 * 3;
          puVar12 = (undefined1 *)lVar11;
          *puVar12 = *(undefined1 *)(iVar5 + iVar7);
          puVar12[1] = *(undefined1 *)(iVar7 + 1 + iVar5);
          puVar12[2] = *(undefined1 *)(iVar7 + 2 + iVar5);
          lVar11 = lVar11 + 3;
        } while ((int)lVar15 < *(int *)(param_1 + 0x60));
      }
      param_3 = param_3 + -1;
      lVar11 = lVar11 + ((longlong)iVar3 - (uVar10 + ((ulonglong)uVar2 & 0x7fffffff) * 2));
      iVar7 = iVar7 + iVar4;
    } while (param_3 != 0);
  }
  return;
}


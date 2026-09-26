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


void fn_82F2E6D0(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar12 = (ulonglong)uVar3;
  iVar17 = *(int *)(param_1 + 0x74);
  trapWord(6,uVar12,0);
  uVar9 = *(uint *)(iVar17 + 4);
  uVar16 = (uVar9 - 1) * uVar3;
  iVar4 = (int)((int)((uVar12 + ((ulonglong)uVar3 & 0x7fffffff) * 2 & 0xffffffff) << 3) + 0x1fU &
               0xffffffe0) >> 3;
  uVar18 = (int)(((ulonglong)uVar9 & 0x1ffffff) << 7) / (int)uVar3;
  iVar5 = (int)(*(ushort *)(iVar17 + 0xe) * uVar9 + 0x1f & 0xffffffe0) >> 3;
  iVar7 = (int)param_2;
  trapWord(5,uVar12 & ~((((ulonglong)uVar9 & 0xffffff) << 8 | ((ulonglong)uVar9 & 0x1ffffff) >> 0x18
                        ) - 1),0xffff);
  trapWord(5,(ulonglong)uVar9 &
             ~((((ulonglong)uVar16 & 0x7fffffff) << 1 | (ulonglong)(uVar16 >> 0x1f)) - 1),0xffff);
  iVar1 = (int)uVar16 / (int)uVar9;
  trapWord(6,(ulonglong)uVar9,0);
  uVar18 = 0xffffffffU - ((int)uVar18 >> 0x1f) & uVar18;
  iVar19 = iVar5 * iVar7 + *(int *)(param_1 + 0x78);
  lVar13 = (longlong)iVar4 * (longlong)iVar7 + (ulonglong)*(uint *)(param_1 + 0x84);
  if (*(int *)(iVar17 + 0x10) == 0) {
    uVar16 = 0x3e0;
    uVar9 = 0x7c00;
    iVar17 = 0x11;
  }
  else if (((*(int *)(iVar17 + 0x28) == 0x7c00) && (*(int *)(iVar17 + 0x2c) == 0x3e0)) &&
          (*(int *)(iVar17 + 0x30) == 0x1f)) {
    uVar16 = 0x3e0;
    uVar9 = 0x7c00;
    iVar17 = 0x11;
  }
  else {
    uVar16 = 0x7e0;
    uVar9 = 0xf800;
    iVar17 = 0x12;
  }
  if (iVar7 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar20 = (longlong)iVar1;
        do {
          uVar6 = uVar11 & 0x7f;
          iVar7 = ((int)uVar11 >> 7) * 2;
          iVar10 = 0x80 - uVar6;
          uVar11 = uVar11 + uVar18;
          sVar2 = *(short *)(iVar7 + iVar19);
          uVar8 = (uint)*(short *)(iVar19 + 2 + iVar7);
          puVar14 = (undefined1 *)lVar13;
          *puVar14 = (char)(((longlong)(int)((int)sVar2 & 0x1f) * (longlong)iVar10 +
                             (longlong)(int)(uVar8 & 0x1f) * (longlong)(int)uVar6 & 0xffffffffU) >>
                           7);
          puVar14[1] = (char)(((longlong)(int)((int)sVar2 & uVar16) * (longlong)iVar10 +
                               (longlong)(int)(uVar8 & uVar16) * (longlong)(int)uVar6 & 0xffffffffU)
                             >> 0xc);
          puVar14[2] = (char)(((int)sVar2 & uVar9) * iVar10 + (uVar8 & uVar9) * uVar6 >> iVar17);
          lVar13 = lVar13 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (iVar1 < *(int *)(param_1 + 0x60)) {
        lVar20 = (longlong)iVar1;
        do {
          iVar7 = (int)uVar11 >> 7;
          lVar20 = lVar20 + 1;
          uVar11 = uVar11 + uVar18;
          sVar2 = *(short *)(iVar7 * 2 + iVar19);
          pbVar15 = (byte *)lVar13;
          *pbVar15 = (byte)sVar2 & 0x1f;
          pbVar15[1] = (byte)(uVar16 >> 5) & (byte)((uint)(int)sVar2 >> 5);
          pbVar15[2] = (byte)(((int)sVar2 & uVar9) >> (iVar17 - 7U & 0x3f));
          lVar13 = lVar13 + 3;
        } while ((int)lVar20 < *(int *)(param_1 + 0x60));
      }
      param_3 = param_3 + -1;
      lVar13 = lVar13 + ((longlong)iVar4 - (uVar12 + ((ulonglong)uVar3 & 0x7fffffff) * 2));
      iVar19 = iVar19 + iVar5;
    } while (param_3 != 0);
  }
  return;
}


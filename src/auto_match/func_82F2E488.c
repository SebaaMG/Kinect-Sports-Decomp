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


void fn_82F2E488(int param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  if (((uVar2 != 0) && (*(int *)(param_1 + 100) != 0)) && (*(int *)(param_1 + 0x60) != 0)) {
    uVar3 = *(uint *)(param_1 + 100);
    uVar18 = (uVar2 - 1) * uVar3;
    iVar4 = (int)((uint)*(ushort *)(*(int *)(param_1 + 0x74) + 0xe) * *(int *)(param_1 + 0x60) +
                  0x1f & 0xffffffe0) >> 3;
    trapWord(6,(ulonglong)uVar2,0);
    uVar12 = (int)(((ulonglong)uVar2 & 0xffffff) << 8) / (int)uVar3;
    trapWord(6,(ulonglong)uVar3,0);
    trapWord(5,(ulonglong)uVar3 &
               ~((((ulonglong)uVar2 & 0x7fffff) << 9 | ((ulonglong)uVar2 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(ulonglong)uVar2 &
               ~((((ulonglong)uVar18 & 0x7fffffff) << 1 | (ulonglong)(uVar18 >> 0x1f)) - 1),0xffff);
    lVar17 = (longlong)((int)uVar18 / (int)uVar2);
    if ((int)param_3 < (int)uVar18 / (int)uVar2) {
      lVar17 = param_3;
    }
    uVar16 = (ulonglong)(uVar12 >> 0x1f) - 1 & (longlong)(int)uVar12;
    iVar19 = (int)uVar16;
    if (*(int *)(param_1 + 0x68) == 0) {
      lVar9 = 0;
    }
    else {
      uVar12 = iVar19 - 0x100;
      lVar9 = (longlong)((int)uVar12 >> 1) + (ulonglong)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    }
    iVar6 = (int)param_2;
    lVar9 = (longlong)iVar19 * (longlong)iVar6 + lVar9;
    puVar11 = (undefined1 *)(iVar4 * iVar6 + *(int *)(param_1 + 0x7c));
    lVar8 = 0;
    if (lVar9 < 0) {
      if (iVar19 == 0) {
        uVar16 = 1;
      }
      uVar10 = uVar16 - lVar9;
      trapWord(6,uVar16,0);
      iVar19 = (int)uVar10 / (int)uVar16;
      lVar8 = (longlong)iVar19;
      trapWord(5,uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff
              );
      if (iVar6 < (int)(lVar8 + param_2)) {
        lVar7 = (lVar8 + param_2) - param_2;
        do {
          if (0 < iVar4) {
            puVar13 = (undefined1 *)(*(int *)(param_1 + 0x84) + -1);
            iVar6 = iVar4;
            do {
              puVar13 = puVar13 + 1;
              *puVar11 = *puVar13;
              puVar11 = puVar11 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar9 = (longlong)iVar19 * (longlong)(int)uVar16 + lVar9;
    }
    if ((int)(lVar8 + param_2) < (int)lVar17) {
      lVar8 = lVar17 - (lVar8 + param_2);
      do {
        uVar12 = (uint)lVar9 & 0xff;
        pbVar14 = (byte *)(((int)(uint)lVar9 >> 8) * iVar4 + *(int *)(param_1 + 0x84));
        iVar19 = iVar4;
        if (0 < iVar4) {
          do {
            pbVar15 = pbVar14 + iVar4;
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            *puVar11 = (char)(*pbVar15 * uVar12 + (uint)bVar1 * (0x100 - uVar12) >> 8);
            puVar11 = puVar11 + 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        lVar8 = lVar8 + -1;
        lVar9 = lVar9 + uVar16;
      } while (lVar8 != 0);
    }
    if ((int)lVar17 < (int)param_3) {
      param_3 = param_3 - lVar17;
      pbVar14 = puVar11 + -1;
      do {
        uVar12 = (uint)lVar9 & 0xff;
        iVar19 = (int)(uint)lVar9 >> 8;
        pbVar15 = (byte *)(iVar19 * iVar4 + *(int *)(param_1 + 0x84));
        if (iVar19 < (int)(uVar2 - 1)) {
          iVar19 = iVar4;
          if (0 < iVar4) {
            do {
              pbVar5 = pbVar15 + iVar4;
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + 1;
              pbVar14[1] = (byte)(*pbVar5 * uVar12 + (uint)bVar1 * (0x100 - uVar12) >> 8);
              pbVar14 = pbVar14 + 1;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
        }
        else if (0 < iVar4) {
          pbVar15 = pbVar15 + -1;
          iVar19 = iVar4;
          do {
            pbVar15 = pbVar15 + 1;
            pbVar14 = pbVar14 + 1;
            *pbVar14 = *pbVar15;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        param_3 = param_3 + -1;
        lVar9 = lVar9 + uVar16;
      } while (param_3 != 0);
    }
  }
  return;
}


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


void fn_82CC65D0(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  
  uVar11 = *(uint *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x20) * 2;
  trapWord(6,(ulonglong)uVar11,0);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  uVar17 = (uVar3 - 1) * uVar11;
  trapWord(6,(ulonglong)uVar3,0);
  iVar18 = (int)(((ulonglong)uVar3 & 0xffffff) << 8) / (int)uVar11;
  uVar15 = (ulonglong)iVar18;
  trapWord(5,(ulonglong)uVar11 &
             ~((((ulonglong)uVar3 & 0x7fffff) << 9 | ((ulonglong)uVar3 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(5,(ulonglong)uVar3 &
             ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)) - 1),0xffff);
  lVar16 = (longlong)((int)uVar17 / (int)uVar3);
  if ((int)param_3 < (int)uVar17 / (int)uVar3) {
    lVar16 = param_3;
  }
  if (0 < iVar18) {
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar8 = 0;
    }
    else {
      uVar11 = iVar18 - 0x100;
      lVar8 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
    }
    iVar6 = (int)param_2;
    lVar8 = (longlong)iVar18 * (longlong)iVar6 + lVar8;
    puVar10 = (undefined1 *)(iVar4 * iVar6 + *(int *)(param_1 + 0x38));
    lVar7 = param_2;
    if (lVar8 < 0) {
      uVar9 = uVar15 - lVar8;
      trapWord(6,uVar15,0);
      iVar1 = (int)uVar9 / iVar18;
      lVar7 = iVar1 + param_2;
      trapWord(5,uVar15 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (iVar6 < (int)lVar7) {
        param_2 = lVar7 - param_2;
        do {
          if (0 < iVar4) {
            puVar12 = (undefined1 *)(*(int *)(param_1 + 0x40) + -1);
            iVar6 = iVar4;
            do {
              puVar12 = puVar12 + 1;
              *puVar10 = *puVar12;
              puVar10 = puVar10 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      lVar8 = (longlong)iVar1 * (longlong)iVar18 + lVar8;
    }
    if ((int)lVar7 < (int)lVar16) {
      lVar7 = lVar16 - lVar7;
      do {
        uVar11 = (uint)lVar8 & 0xff;
        pbVar13 = (byte *)(((int)(uint)lVar8 >> 8) * iVar4 + *(int *)(param_1 + 0x40));
        iVar18 = iVar4;
        if (0 < iVar4) {
          do {
            pbVar14 = pbVar13 + iVar4;
            bVar2 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            *puVar10 = (char)(*pbVar14 * uVar11 + (uint)bVar2 * (0x100 - uVar11) >> 8);
            puVar10 = puVar10 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + uVar15;
      } while (lVar7 != 0);
    }
    if ((int)lVar16 < (int)param_3) {
      param_3 = param_3 - lVar16;
      pbVar13 = puVar10 + -1;
      do {
        uVar11 = (uint)lVar8 & 0xff;
        iVar18 = (int)(uint)lVar8 >> 8;
        pbVar14 = (byte *)(iVar18 * iVar4 + *(int *)(param_1 + 0x40));
        if (iVar18 < (int)(uVar3 - 1)) {
          iVar18 = iVar4;
          if (0 < iVar4) {
            do {
              pbVar5 = pbVar14 + iVar4;
              bVar2 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              pbVar13[1] = (byte)(*pbVar5 * uVar11 + (uint)bVar2 * (0x100 - uVar11) >> 8);
              pbVar13 = pbVar13 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
        }
        else if (0 < iVar4) {
          pbVar14 = pbVar14 + -1;
          iVar18 = iVar4;
          do {
            pbVar14 = pbVar14 + 1;
            pbVar13 = pbVar13 + 1;
            *pbVar13 = *pbVar14;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        param_3 = param_3 + -1;
        lVar8 = lVar8 + uVar15;
      } while (param_3 != 0);
    }
  }
  return;
}


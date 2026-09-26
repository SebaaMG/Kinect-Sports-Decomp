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


void fn_82F42F10(int param_1,byte *param_2,uint *param_3,longlong param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  
  iVar3 = (int)param_4;
  iVar6 = param_5 * 2;
  pbVar4 = param_2 + param_5 * 4;
  iVar11 = iVar3 + -4;
  pbVar5 = param_2 + param_5 * 6;
  *param_3 = (int)(((uint)*param_2 * 0x22 - ((uint)param_2[iVar6] + (uint)param_2[iVar6] * 2)) +
                   (uint)*pbVar4 + 0x10) >> 5;
  param_3[1] = (int)((uint)*param_2 * 0x19 + ((uint)param_2[iVar6] * 8 - (uint)param_2[iVar6]) +
                    0x10) >> 5;
  param_3[2] = (int)(((uint)*param_2 * 2 - (uint)*pbVar4) * 3 + (uint)param_2[iVar6] * 0x1c +
                     (uint)*pbVar5 + 0x10) >> 5;
  uVar15 = (((uint)*pbVar4 * 3 + (uint)param_2[iVar6] * 0xe) - (uint)*param_2) + 8;
  param_3[3] = (int)(uVar15 * 2 | uVar15 >> 0x1f) >> 5;
  if (4 < iVar11) {
    lVar14 = (ulonglong)(iVar3 - 9U >> 1) + 1;
    puVar16 = param_3 + 3;
    pbVar12 = param_2 + (param_5 & 0x7fffffff) * -2;
    pbVar13 = param_2 + param_5 * 8 + (param_5 & 0x7fffffff) * -2;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + iVar6;
      pbVar13 = pbVar13 + iVar6;
      puVar16[1] = (int)(((uint)*pbVar7 * 2 - (uint)*pbVar5) * 3 + (uint)*pbVar4 * 0x1c +
                         (uint)*pbVar13 + 0x10) >> 5;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + iVar6;
      pbVar12 = pbVar12 + iVar6;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + iVar6;
      puVar16 = puVar16 + 2;
      *puVar16 = (int)(((uint)bVar2 * 2 - (uint)*pbVar7) * 3 + (uint)bVar1 * 0x1c + (uint)*pbVar12 +
                      0x10) >> 5;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar8 = iVar11 * param_5;
  iVar6 = (iVar3 + -6) * param_5;
  iVar10 = (iVar3 + -2) * param_5;
  uVar15 = (((uint)param_2[iVar6] * 3 + (uint)param_2[iVar8] * 0xe) - (uint)param_2[iVar10]) + 8;
  param_3[iVar11] = (int)(uVar15 * 2 | uVar15 >> 0x1f) >> 5;
  param_3[iVar3 + -3] =
       (int)(((uint)param_2[iVar10] * 2 - (uint)param_2[iVar6]) * 3 +
             (uint)param_2[(iVar3 + -8) * param_5] + (uint)param_2[iVar8] * 0x1c + 0x10) >> 5;
  param_3[iVar3 + -2] =
       (int)((uint)param_2[iVar10] * 0x19 + ((uint)param_2[iVar8] * 8 - (uint)param_2[iVar8]) + 0x10
            ) >> 5;
  param_3[iVar3 + -1] =
       (int)(((uint)param_2[iVar10] * 0x22 - ((uint)param_2[iVar8] + (uint)param_2[iVar8] * 2)) +
             (uint)param_2[iVar6] + 0x10) >> 5;
  if (0 < iVar3) {
    puVar9 = (undefined1 *)(param_1 - param_5);
    do {
      uVar15 = *param_3;
      if (0xff < uVar15) {
        uVar15 = 0xffffffffU - ((int)uVar15 >> 0x1f) & 0xff;
      }
      param_3 = param_3 + 1;
      puVar9 = puVar9 + param_5;
      *puVar9 = (char)uVar15;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


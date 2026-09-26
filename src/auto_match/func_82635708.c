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
extern int fn_82637300();


void fn_82635708(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  byte abStack_d0 [16];
  byte abStack_c0 [48];
  byte abStack_90 [144];
  
  uVar19 = 0;
  uVar17 = 0x40;
  do {
    uVar20 = 0;
    lVar6 = (0x3f - uVar19 & 0x3fffffff) * 4;
    lVar11 = 0;
    pbVar15 = abStack_d0;
    lVar10 = (lVar6 + 0x30U & 0xfffffff) * 0x10;
    lVar7 = 4;
    lVar13 = lVar10 + param_1 + 0x170;
    do {
      if ((1 << ((uint)(lVar11 + lVar6) & 0x1f) &
          *(uint *)(((int)((lVar11 + lVar6 & 0xffffffffU) >> 5) + 0x8ee) * 4 +
                   (int)(param_1 + 0x170))) != 0) {
        puVar14 = (undefined4 *)lVar13;
        uVar20 = 1 << ((uint)lVar11 & 0x3f) | uVar20;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(undefined4 *)pbVar15 = *puVar14;
        *(undefined4 *)(pbVar15 + 4) = uVar3;
        *(undefined4 *)(pbVar15 + 8) = uVar4;
        *(undefined4 *)(pbVar15 + 0xc) = uVar5;
      }
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x10;
      pbVar15 = pbVar15 + 0x10;
    } while (lVar7 != 0);
    uVar8 = 0;
    lVar11 = 0;
    pbVar15 = abStack_90;
    lVar10 = lVar10 + param_1 + 0x2840;
    lVar7 = 4;
    do {
      if ((1 << ((uint)(lVar11 + lVar6) & 0x1f) &
          *(uint *)(((int)((lVar11 + lVar6 & 0xffffffffU) >> 5) + 0x8ee) * 4 +
                   (int)(param_1 + 0x2840))) != 0) {
        puVar14 = (undefined4 *)lVar10;
        uVar8 = 1 << ((uint)lVar11 & 0x3f) | uVar8;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(undefined4 *)pbVar15 = *puVar14;
        *(undefined4 *)(pbVar15 + 4) = uVar3;
        *(undefined4 *)(pbVar15 + 8) = uVar4;
        *(undefined4 *)(pbVar15 + 0xc) = uVar5;
      }
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
      pbVar15 = pbVar15 + 0x10;
    } while (lVar7 != 0);
    uVar18 = uVar17;
    if (uVar8 != 0 || uVar20 != 0) {
      if ((uVar8 & uVar20) != 0) {
        uVar9 = 0;
        uVar12 = 0;
        do {
          if ((1 << (uVar9 & 0x3f) & uVar8 & uVar20) != 0) {
            pbVar16 = abStack_d0 + uVar12;
            pbVar15 = abStack_90 + uVar12;
            do {
              bVar1 = *pbVar16;
              bVar2 = *pbVar15;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar16 = pbVar16 + 1;
              pbVar15 = pbVar15 + 1;
            } while (pbVar16 != abStack_c0 + uVar12);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) break;
          }
          uVar12 = uVar12 + 0x10;
          uVar9 = uVar9 + 1;
        } while (uVar12 < 0x40);
      }
      uVar18 = 0x3f - uVar19;
      if ((uVar8 & ~uVar20) != 0) break;
    }
    uVar19 = uVar19 + 1;
    uVar17 = uVar18;
  } while ((uVar19 & 0xffffffff) < 0x40);
  *(int *)((int)param_1 + 0x4de0) = (int)uVar17;
  *(undefined4 *)((int)param_1 + 0x4ddc) = 1;
  fn_82637300(param_1 + 0x4de4,0x40 - uVar17,param_1 + 0x4dbc);
  return;
}


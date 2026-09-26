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
extern int fn_827B6018();
extern unsigned int iStack0000002c;
extern unsigned int lbl_82015F50;
extern unsigned int lbl_82016150;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


void fn_827B7110(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  ulonglong uVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  int iStack0000002c;
  uint uStack00000034;
  uint uStack0000003c;
  
  uVar11 = param_6 - 1;
  uVar17 = param_5 - 1;
  iStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  iVar19 = param_4;
  uVar13 = param_6;
  if (param_7 != 0) {
    if (0xfe < param_7) {
      param_7 = 0xfe;
    }
    uVar16 = param_7 * 2 + 1;
    piVar18 = (int *)(param_1 + 0x2d4);
    uVar3 = *(ushort *)(&lbl_82015F50 + param_7 * 2);
    bVar1 = (&lbl_82016150)[param_7];
    fn_827B6018(piVar18,uVar16,0);
    *(uint *)(param_1 + 0x2d8) = uVar16;
    if (param_6 != 0) {
      do {
        iVar5 = 0;
        iVar19 = 0;
        iVar12 = param_4 * *(int *)(param_2 + 0x14) + param_3;
        iVar9 = 0;
        pbVar15 = (byte *)(iVar12 + *(int *)(param_2 + 0x18));
        bVar2 = *(byte *)(iVar12 + *(int *)(param_2 + 0x18));
        uVar13 = (uint)bVar2;
        iVar4 = (param_7 + 1) * (uint)bVar2;
        iVar12 = param_7 + 1;
        uVar14 = uVar13;
        do {
          iVar19 = uVar14 + iVar19;
          uVar14 = uVar14 + uVar13;
          *(byte *)(*piVar18 + iVar9) = bVar2;
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        uVar6 = 1;
        for (uVar14 = param_7; uVar14 != 0; uVar14 = uVar14 - 1) {
          if (uVar6 <= uVar17) {
            pbVar15 = pbVar15 + 1;
          }
          bVar2 = *pbVar15;
          uVar13 = (uint)bVar2;
          iVar5 = uVar13 + iVar5;
          *(byte *)(*piVar18 + uVar6 + param_7) = bVar2;
          iVar19 = ((param_7 - uVar6) + 1) * (uint)bVar2 + iVar19;
          uVar6 = uVar6 + 1;
        }
        uVar14 = param_7;
        if (uVar17 < param_7) {
          uVar14 = uVar17;
        }
        iVar12 = param_4 * *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18);
        pbVar15 = (byte *)(iVar12 + uVar14 + param_3);
        if (param_5 != 0) {
          uVar8 = (ulonglong)uStack00000034;
          puVar20 = (undefined1 *)(iVar12 + param_3 + -1);
          uVar6 = param_7;
          do {
            puVar20 = puVar20 + 1;
            *puVar20 = (char)(iVar19 * (uint)uVar3 >> (bVar1 & 0x3f));
            uVar10 = (uVar6 - param_7) + uVar16;
            if (uVar16 <= uVar10) {
              uVar10 = uVar10 - uVar16;
            }
            bVar2 = *(byte *)(*piVar18 + uVar10);
            if (uVar14 < uVar17) {
              pbVar15 = pbVar15 + 1;
              uVar13 = (uint)*pbVar15;
              uVar14 = uVar14 + 1;
            }
            *(char *)(*piVar18 + uVar10) = (char)uVar13;
            iVar19 = uVar13 + iVar5 + (iVar19 - iVar4);
            uVar6 = -(uint)(uVar6 + 1 < uVar16) & uVar6 + 1;
            iVar4 = (uint)*(byte *)(*piVar18 + uVar6) + (iVar4 - (uint)bVar2);
            iVar5 = (uVar13 + iVar5) - (uint)*(byte *)(*piVar18 + uVar6);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        param_6 = param_6 - 1;
        param_4 = param_4 + 1;
        iVar19 = iStack0000002c;
        param_5 = uStack00000034;
        uVar13 = uStack0000003c;
      } while (param_6 != 0);
    }
  }
  if (param_8 != 0) {
    if (0xfe < param_8) {
      param_8 = 0xfe;
    }
    uVar16 = param_8 * 2 + 1;
    piVar18 = (int *)(param_1 + 0x2d4);
    uVar3 = *(ushort *)(&lbl_82015F50 + param_8 * 2);
    bVar1 = (&lbl_82016150)[param_8];
    fn_827B6018(piVar18,uVar16,0);
    *(uint *)(param_1 + 0x2d8) = uVar16;
    uVar17 = 0;
    iVar5 = *(int *)(param_2 + 0x14);
    if (param_5 != 0) {
      do {
        iVar12 = 0;
        iVar4 = 0;
        iVar7 = 0;
        iVar9 = *(int *)(param_2 + 0x14) * iVar19 + uVar17 + param_3;
        pbVar15 = (byte *)(iVar9 + *(int *)(param_2 + 0x18));
        bVar2 = *(byte *)(iVar9 + *(int *)(param_2 + 0x18));
        uVar14 = (uint)bVar2;
        iVar21 = (param_8 + 1) * (uint)bVar2;
        iVar9 = param_8 + 1;
        uVar6 = uVar14;
        do {
          iVar4 = uVar6 + iVar4;
          uVar6 = uVar6 + uVar14;
          *(byte *)(*piVar18 + iVar7) = bVar2;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar10 = 1;
        for (uVar6 = param_8; uVar6 != 0; uVar6 = uVar6 - 1) {
          if (uVar10 <= uVar11) {
            pbVar15 = pbVar15 + iVar5;
          }
          bVar2 = *pbVar15;
          uVar14 = (uint)bVar2;
          iVar12 = uVar14 + iVar12;
          *(byte *)(*piVar18 + uVar10 + param_8) = bVar2;
          iVar4 = ((param_8 - uVar10) + 1) * (uint)bVar2 + iVar4;
          uVar10 = uVar10 + 1;
        }
        uVar6 = param_8;
        if (uVar11 < param_8) {
          uVar6 = uVar11;
        }
        pbVar15 = (byte *)((uVar6 + iVar19) * *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) +
                           uVar17 + param_3);
        if (uVar13 != 0) {
          uVar8 = (ulonglong)uStack0000003c;
          puVar20 = (undefined1 *)
                    ((*(int *)(param_2 + 0x14) * iVar19 + *(int *)(param_2 + 0x18) + uVar17 +
                     param_3) - iVar5);
          uVar13 = param_8;
          do {
            puVar20 = puVar20 + iVar5;
            *puVar20 = (char)(iVar4 * (uint)uVar3 >> (bVar1 & 0x3f));
            uVar10 = (uVar13 - param_8) + uVar16;
            if (uVar16 <= uVar10) {
              uVar10 = uVar10 - uVar16;
            }
            bVar2 = *(byte *)(*piVar18 + uVar10);
            if (uVar6 < uVar11) {
              pbVar15 = pbVar15 + iVar5;
              uVar14 = (uint)*pbVar15;
              uVar6 = uVar6 + 1;
            }
            *(char *)(*piVar18 + uVar10) = (char)uVar14;
            iVar4 = uVar14 + iVar12 + (iVar4 - iVar21);
            uVar13 = -(uint)(uVar13 + 1 < uVar16) & uVar13 + 1;
            iVar21 = (uint)*(byte *)(*piVar18 + uVar13) + (iVar21 - (uint)bVar2);
            iVar12 = (uVar14 + iVar12) - (uint)*(byte *)(*piVar18 + uVar13);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar17 = uVar17 + 1;
        iVar19 = iStack0000002c;
        uVar13 = uStack0000003c;
      } while (uVar17 < uStack00000034);
    }
  }
  return;
}


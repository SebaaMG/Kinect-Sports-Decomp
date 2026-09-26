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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT41(h,l) ((U64)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT51(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int uStack_c4;
extern unsigned int uStack_e0;


void fn_82C781F0(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte bVar24;
  int iVar22;
  int *piVar23;
  int iVar25;
  ulonglong *puVar26;
  int iVar27;
  byte *pbVar28;
  ulonglong uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  ulonglong uVar34;
  uint uVar36;
  byte bVar37;
  ulonglong uVar35;
  ulonglong uVar38;
  ulonglong uVar39;
  byte bVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint uStack_c4;
  
  uVar1 = *(ushort *)(param_2 + 0x32);
  uVar38 = 0;
  uVar35 = (ulonglong)(uVar1 >> 1);
  iVar19 = (uVar1 & 0x7ffffffe) << 1;
  uVar36 = (uint)(uVar1 >> 1);
  iStack_dc = uVar36 * param_4;
  uVar41 = (longlong)iVar19 * (longlong)(int)param_4;
  puVar26 = (ulonglong *)(*(int *)(param_2 + 0x520) + iStack_dc * 8);
  pbVar28 = (byte *)(*(int *)(param_2 + 0x524) + iStack_dc * 6);
  if (param_4 != 0) {
    uVar38 = (longlong)(int)(param_4 - 1) * (longlong)iVar19 + uVar35 * 2;
  }
  if (param_4 < param_5) {
    uVar18 = (uVar41 + uVar1 & 0x3fffffff) << 2;
    uVar38 = (uVar38 & 0x3fffffff) << 2;
    uVar41 = (uVar41 & 0x3fffffff) << 2;
    lVar20 = uVar35 << 3;
    uStack_c4 = param_4;
    while( true ) {
      iVar14 = (int)uVar41;
      iStack_d4 = (int)uVar18;
      uVar18 = (ulonglong)(uStack_c4 == 0);
      uVar15 = (uint)(uStack_c4 == 0);
      uVar16 = uVar15;
      iVar19 = iStack_d4;
      if (uVar35 != 0) {
        uVar13 = uVar18 - 1 & uVar35;
        uStack_e0 = (uint)uVar38;
        iStack_d8 = iStack_dc << 2;
        iVar25 = (int)lVar20;
        iVar14 = iVar25 + iVar14;
        iVar19 = iVar25 + iStack_d4;
        uVar17 = iVar25 + uStack_e0;
        iVar25 = 0;
        uVar42 = uVar35;
        while( true ) {
          uVar21 = *puVar26;
          uVar39 = uVar21 & 0xffff7f7f7f7f7f7f;
          uVar16 = (uint)uVar21 & 0x7f;
          uVar4 = (uint)(uVar39 >> 8) & 0xff;
          uVar5 = (uint)(uVar39 >> 0x10) & 0xff;
          uVar8 = (uint)(uVar39 >> 0x20);
          uVar6 = uVar8 & 0xff;
          uVar7 = (uint)(uVar39 >> 0x18) & 0xff;
          lVar20 = (longlong)(iVar25 >> 0x1f) + 1;
          uVar8 = uVar8 >> 8 & 0xff;
          uVar29 = puVar26[-(iVar25 >> 0x1f & 1U)] & 0xffff7f7f7f7f7f7f;
          uVar39 = (ulonglong)
                   CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar16 + 0x83176808)
                                                                ,*(undefined1 *)(uVar4 + 0x83176808)
                                                               ),*(undefined1 *)(uVar5 + 0x83176808)
                                                      ),*(undefined1 *)(uVar7 + 0x83176808)),
                                     *(undefined1 *)(uVar6 + 0x83176808)),
                            *(undefined1 *)(uVar8 + 0x83176808)) &
                   *(ulonglong *)((int)((uVar18 * 2 + lVar20 & 0xffffffff) << 3) + -0x7ce897a8);
          uVar34 = *(ulonglong *)((int)puVar26 - (int)(uVar13 << 3)) & 0xffff7f7f7f7f7f7f;
          bVar9 = (byte)(uVar39 >> 0x28);
          bVar24 = (byte)(uVar39 >> 0x20);
          bVar10 = (byte)(uVar39 >> 8);
          bVar11 = (byte)(uVar39 >> 0x10);
          bVar12 = (byte)(uVar39 >> 0x18);
          if (((uVar21 >> 0x30 & 0x40) == 0) || (**(int **)(param_2 + 0x15c) != 0x4000)) {
            iVar2 = *(int *)(param_2 + 0x15c);
            bVar30 = 0xff;
            bVar31 = 0xff;
            iVar22 = (int)uVar41 + iVar2;
            bVar32 = 0xff;
            bVar33 = 0xff;
            iVar3 = *(int *)((int)uVar41 + iVar2);
            bVar40 = 0xff;
            bVar37 = 0xff;
            iVar27 = (int)lVar20;
            if (iVar3 != 0x4000) {
              if (((int)uVar18 == 0) && (*(int *)((uint)uVar38 + iVar2) == iVar3)) {
                bVar30 = *(byte *)(((uint)(uVar34 >> 0x18) & 0xff) + 0x831767b8) |
                         *(byte *)(uVar8 + 0x83176778);
              }
              if ((iVar27 == 0) && (*(int *)(iVar22 + -4) == iVar3)) {
                uVar18 = (ulonglong)uVar15;
                bVar30 = bVar30 & (*(byte *)(((uint)(uVar29 >> 0x20) & 0xff) + 0x83176738) |
                                  *(byte *)(uVar8 + 0x831766f8));
              }
            }
            iVar22 = *(int *)(iVar22 + 4);
            if (iVar22 != 0x4000) {
              if (((int)uVar18 == 0) && (*(int *)(uStack_e0 + iVar2 + 4) == iVar22)) {
                bVar31 = *(byte *)(((uint)(uVar34 >> 0x10) & 0xff) + 0x831767b8) |
                         *(byte *)(uVar6 + 0x83176778);
              }
              if (iVar3 == iVar22) {
                bVar31 = bVar31 & (*(byte *)(uVar8 + 0x83176738) | *(byte *)(uVar6 + 0x831766f8));
              }
            }
            piVar23 = (int *)(iStack_d4 + iVar2);
            iVar2 = *piVar23;
            if (iVar2 != 0x4000) {
              if (iVar3 == iVar2) {
                bVar32 = *(byte *)(uVar8 + 0x831767b8) | *(byte *)(uVar7 + 0x83176778);
              }
              if ((iVar27 == 0) && (piVar23[-1] == iVar2)) {
                bVar32 = bVar32 & (*(byte *)(((uint)(uVar29 >> 0x10) & 0xff) + 0x83176738) |
                                  *(byte *)(uVar7 + 0x831766f8));
              }
            }
            iVar3 = piVar23[1];
            if (iVar3 != 0x4000) {
              if (iVar22 == iVar3) {
                bVar33 = *(byte *)(uVar6 + 0x831767b8) | *(byte *)(uVar5 + 0x83176778);
              }
              if (iVar2 == iVar3) {
                bVar33 = bVar33 & (*(byte *)(uVar6 + 0x83176738) | *(byte *)(uVar5 + 0x831766f8));
              }
            }
            piVar23 = (int *)(iStack_d8 + *(int *)(param_2 + 0x160));
            iVar2 = *piVar23;
            if (iVar2 != 0x4000) {
              if ((int)uVar18 == 0) {
                if (*(int *)((iStack_dc - uVar36) * 4 + *(int *)(param_2 + 0x160)) == iVar2) {
                  bVar40 = *(byte *)(((uint)(uVar34 >> 8) & 0xff) + 0x831767b8) |
                           *(byte *)(uVar4 + 0x83176778);
                  bVar37 = *(byte *)(((uint)uVar34 & 0xff) + 0x831767b8) |
                           *(byte *)(uVar16 + 0x83176778);
                }
              }
              if ((iVar27 == 0) && (piVar23[-1] == iVar2)) {
                bVar40 = bVar40 & (*(byte *)(((uint)(uVar29 >> 8) & 0xff) + 0x83176738) |
                                  *(byte *)(uVar4 + 0x831766f8));
                bVar37 = bVar37 & (*(byte *)(((uint)uVar29 & 0xff) + 0x83176738) |
                                  *(byte *)(uVar16 + 0x831766f8));
              }
            }
            *pbVar28 = (byte)uVar39 & bVar30;
            uVar35 = (ulonglong)uVar36;
            pbVar28[3] = bVar12 & bVar33;
            pbVar28[5] = bVar9 & bVar37;
            pbVar28[1] = bVar10 & bVar31;
            pbVar28[2] = bVar11 & bVar32;
            pbVar28[4] = bVar24 & bVar40;
          }
          else {
            *pbVar28 = (byte)uVar39;
            pbVar28[1] = bVar10;
            pbVar28[2] = bVar11;
            pbVar28[3] = bVar12;
            pbVar28[4] = bVar24;
            pbVar28[5] = bVar9;
            uStack_e0 = (uint)uVar38;
          }
          uVar16 = (uint)uVar18;
          uStack_e0 = uStack_e0 + 8;
          iVar25 = iVar25 + -1;
          iStack_dc = iStack_dc + 1;
          iStack_d8 = iStack_d8 + 4;
          iStack_d4 = iStack_d4 + 8;
          uVar41 = uVar41 + 8;
          pbVar28 = pbVar28 + 6;
          puVar26 = puVar26 + 1;
          uVar42 = uVar42 - 1;
          if (uVar42 == 0) break;
          uVar38 = (ulonglong)uStack_e0;
        }
        uVar38 = (ulonglong)uVar17;
      }
      lVar20 = uVar35 * 8;
      if (uVar16 == 0) {
        uVar38 = lVar20 + uVar38 & 0xffffffff;
      }
      uStack_c4 = uStack_c4 + 1;
      if (param_5 <= uStack_c4) break;
      uVar18 = (ulonglong)(uint)((int)lVar20 + iVar19);
      uVar41 = (ulonglong)(uint)((int)lVar20 + iVar14);
    }
  }
  return;
}


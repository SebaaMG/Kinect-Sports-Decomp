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
extern unsigned int iStack_c8;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82C77B70(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong *puVar27;
  byte *pbVar28;
  ulonglong uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uVar37;
  byte bVar38;
  ulonglong uVar36;
  ulonglong uVar39;
  byte bVar40;
  ulonglong uVar41;
  int iVar42;
  ulonglong uVar43;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  uint uStack_c4;
  
  uVar1 = *(ushort *)(param_2 + 0x32);
  uVar39 = 0;
  uVar36 = (ulonglong)(uVar1 >> 1);
  iVar42 = (uVar1 & 0x7ffffffe) << 1;
  uVar37 = (uint)(uVar1 >> 1);
  iStack_ec = uVar37 * param_4;
  uVar18 = (longlong)iVar42 * (longlong)(int)param_4;
  pbVar28 = (byte *)(iStack_ec * 6 + *(int *)(param_2 + 0x524));
  puVar27 = (ulonglong *)(iStack_ec * 8 + *(int *)(param_2 + 0x520));
  if (param_4 != 0) {
    uVar39 = (longlong)(int)(param_4 - 1) * (longlong)iVar42 + uVar36 * 2;
  }
  if (param_4 < param_5) {
    iStack_c8 = param_4 << 2;
    uVar16 = ((ulonglong)param_4 & 0x7fffff) * 0x200 + 0x100;
    uVar43 = ((ulonglong)(param_4 + 1) & 0xffffff) << 8;
    uStack_cc = (uint)uVar16;
    uVar25 = (uVar18 & 0x3fffffff) << 2;
    uStack_c4 = (uint)uVar43;
    uVar39 = (uVar39 & 0x3fffffff) << 2;
    uVar18 = (uVar18 + uVar1 & 0x3fffffff) << 2;
    lVar19 = uVar36 << 3;
    uStack_d0 = param_4;
    while( true ) {
      iVar42 = (int)uVar25;
      iStack_e0 = (int)uVar18;
      if ((uStack_d0 == 0) || (uVar21 = 0, *(int *)(*(int *)(param_2 + 0x518) + iStack_c8) != 0)) {
        uVar21 = 1;
      }
      uVar18 = (ulonglong)*(uint *)(param_2 + 0x15c);
      dataCacheBlockTouch((uVar16 - 0x80) + uVar18);
      dataCacheBlockTouch(uVar16 + uVar18);
      dataCacheBlockTouch(uVar16 + 0x80 + uVar18);
      dataCacheBlockTouch(uVar16 + 0x100 + uVar18);
      dataCacheBlockTouch((uVar43 - 0x80) + (ulonglong)*(uint *)(param_2 + 0x160));
      dataCacheBlockTouch(uVar43 + *(uint *)(param_2 + 0x160));
      iVar17 = 0;
      iVar22 = iStack_e0;
      if (uVar36 != 0) {
        uVar41 = (ulonglong)uVar21 - 1 & uVar36;
        iVar26 = (int)lVar19;
        iVar22 = iVar26 + iStack_e0;
        iVar42 = iVar26 + iVar42;
        iStack_e4 = iStack_ec << 2;
        iStack_e8 = (int)uVar39;
        uVar20 = iVar26 + iStack_e8;
        iVar26 = 0;
        uVar18 = uVar36;
        do {
          uVar39 = *puVar27;
          uVar34 = uVar39 & 0xffff7f7f7f7f7f7f;
          uVar4 = (uint)uVar39 & 0x7f;
          uVar5 = (uint)(uVar34 >> 8) & 0xff;
          uVar6 = (uint)(uVar34 >> 0x18) & 0xff;
          uVar7 = (uint)(uVar34 >> 0x10) & 0xff;
          uVar9 = (uint)(uVar34 >> 0x20);
          uVar8 = uVar9 & 0xff;
          bVar10 = iVar17 == 0;
          uVar9 = uVar9 >> 8 & 0xff;
          uVar29 = puVar27[-(iVar26 >> 0x1f & 1U)] & 0xffff7f7f7f7f7f7f;
          uVar34 = (ulonglong)
                   CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar4 + 0x83176808),
                                                                *(undefined1 *)(uVar5 + 0x83176808))
                                                       ,*(undefined1 *)(uVar7 + 0x83176808)),
                                              *(undefined1 *)(uVar6 + 0x83176808)),
                                     *(undefined1 *)(uVar8 + 0x83176808)),
                            *(undefined1 *)(uVar9 + 0x83176808)) &
                   *(ulonglong *)
                    (((int)(((ulonglong)uVar21 - 1 & 0xffffffff) << 1) + (uint)bVar10) * 8 +
                    -0x7ce89798);
          uVar35 = *(ulonglong *)((int)puVar27 - (int)(uVar41 << 3)) & 0xffff7f7f7f7f7f7f;
          bVar14 = (byte)(uVar34 >> 0x20);
          bVar15 = (byte)(uVar34 >> 0x28);
          bVar11 = (byte)(uVar34 >> 8);
          bVar12 = (byte)(uVar34 >> 0x10);
          bVar13 = (byte)(uVar34 >> 0x18);
          if ((uVar39 >> 0x30 & 0x40) == 0) {
            iVar2 = *(int *)(param_2 + 0x15c);
            bVar30 = 0xff;
            bVar31 = 0xff;
            iVar23 = (int)uVar25 + iVar2;
            bVar32 = 0xff;
            bVar33 = 0xff;
            iVar3 = *(int *)((int)uVar25 + iVar2);
            bVar40 = 0xff;
            bVar38 = 0xff;
            if (iVar3 != 0x4000) {
              if ((uVar21 == 0) && (*(int *)(iStack_e8 + iVar2) == iVar3)) {
                bVar30 = *(byte *)(((uint)(uVar35 >> 0x18) & 0xff) + 0x83176968) |
                         *(byte *)(uVar9 + 0x83176918);
              }
              if ((!bVar10) && (*(int *)(iVar23 + -4) == iVar3)) {
                bVar30 = bVar30 & (*(byte *)(((uint)(uVar29 >> 0x20) & 0xff) + 0x831768c8) |
                                  *(byte *)(uVar9 + 0x83176878));
              }
            }
            iVar23 = *(int *)(iVar23 + 4);
            if (iVar23 != 0x4000) {
              if ((uVar21 == 0) && (*(int *)(iStack_e8 + iVar2 + 4) == iVar23)) {
                bVar31 = *(byte *)(((uint)(uVar35 >> 0x10) & 0xff) + 0x83176968) |
                         *(byte *)(uVar8 + 0x83176918);
              }
              if (iVar3 == iVar23) {
                bVar31 = bVar31 & (*(byte *)(uVar9 + 0x831768c8) | *(byte *)(uVar8 + 0x83176878));
              }
            }
            piVar24 = (int *)(iStack_e0 + iVar2);
            iVar2 = *piVar24;
            if (iVar2 != 0x4000) {
              if (iVar3 == iVar2) {
                bVar32 = *(byte *)(uVar9 + 0x83176968) | *(byte *)(uVar6 + 0x83176918);
              }
              if ((!bVar10) && (piVar24[-1] == iVar2)) {
                bVar32 = bVar32 & (*(byte *)(((uint)(uVar29 >> 0x10) & 0xff) + 0x831768c8) |
                                  *(byte *)(uVar6 + 0x83176878));
              }
            }
            iVar3 = piVar24[1];
            if (iVar3 != 0x4000) {
              if (iVar23 == iVar3) {
                bVar33 = *(byte *)(uVar8 + 0x83176968) | *(byte *)(uVar7 + 0x83176918);
              }
              if (iVar2 == iVar3) {
                bVar33 = bVar33 & (*(byte *)(uVar6 + 0x831768c8) | *(byte *)(uVar7 + 0x83176878));
              }
            }
            piVar24 = (int *)(iStack_e4 + *(int *)(param_2 + 0x160));
            iVar2 = *piVar24;
            if (iVar2 != 0x4000) {
              if (uVar21 == 0) {
                if (*(int *)((iStack_ec - uVar37) * 4 + *(int *)(param_2 + 0x160)) == iVar2) {
                  bVar40 = *(byte *)(((uint)(uVar35 >> 8) & 0xff) + 0x83176968) |
                           *(byte *)(uVar5 + 0x83176918);
                  bVar38 = *(byte *)(((uint)uVar35 & 0xff) + 0x83176968) |
                           *(byte *)(uVar4 + 0x83176918);
                }
              }
              if ((!bVar10) && (piVar24[-1] == iVar2)) {
                bVar40 = bVar40 & (*(byte *)(((uint)(uVar29 >> 8) & 0xff) + 0x831768c8) |
                                  *(byte *)(uVar5 + 0x83176878));
                bVar38 = bVar38 & (*(byte *)(((uint)uVar29 & 0xff) + 0x831768c8) |
                                  *(byte *)(uVar4 + 0x83176878));
              }
            }
            uVar43 = (ulonglong)uStack_c4;
            uVar16 = (ulonglong)uStack_cc;
            *pbVar28 = (byte)uVar34 & bVar30;
            uVar36 = (ulonglong)uVar37;
            pbVar28[1] = bVar11 & bVar31;
            pbVar28[5] = bVar15 & bVar38;
            pbVar28[2] = bVar12 & bVar32;
            pbVar28[3] = bVar13 & bVar33;
            pbVar28[4] = bVar14 & bVar40;
          }
          else {
            *pbVar28 = (byte)uVar34;
            pbVar28[1] = bVar11;
            pbVar28[2] = bVar12;
            pbVar28[3] = bVar13;
            pbVar28[4] = bVar14;
            pbVar28[5] = bVar15;
          }
          iVar17 = iVar17 + 1;
          iVar26 = iVar26 + -1;
          iStack_ec = iStack_ec + 1;
          iStack_e4 = iStack_e4 + 4;
          iStack_e0 = iStack_e0 + 8;
          iStack_e8 = iStack_e8 + 8;
          uVar25 = uVar25 + 8;
          pbVar28 = pbVar28 + 6;
          puVar27 = puVar27 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar39 = (ulonglong)uVar20;
      }
      lVar19 = uVar36 * 8;
      if (uStack_d0 != 0) {
        uVar39 = lVar19 + uVar39 & 0xffffffff;
      }
      uStack_d0 = uStack_d0 + 1;
      uStack_cc = (int)uVar16 + 0x200;
      iStack_c8 = iStack_c8 + 4;
      uStack_c4 = (int)uVar43 + 0x100;
      if (param_5 <= uStack_d0) break;
      uVar25 = (ulonglong)(uint)((int)lVar19 + iVar42);
      uVar18 = (ulonglong)(uint)((int)lVar19 + iVar22);
      uVar43 = (ulonglong)uStack_c4;
      uVar16 = (ulonglong)uStack_cc;
    }
  }
  return;
}


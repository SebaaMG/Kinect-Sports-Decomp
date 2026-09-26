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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_470;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82E9F460();
extern int fn_82EFE140();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_454;
extern unsigned int iStack_498;
extern unsigned int iStack_4ac;
extern unsigned int lbl_831898B8;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_440;
extern unsigned int uStack_444;
extern unsigned int uStack_448;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_490;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4b0;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4cc;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;


/* WARNING: Removing unreachable block (ram,0x82eb5080) */
/* WARNING: Removing unreachable block (ram,0x82eb3c48) */
/* WARNING: Removing unreachable block (ram,0x82eb5254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EB3118(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                  ulonglong param_7,ulonglong param_8)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  short sVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar23;
  int *piVar24;
  ulonglong uVar22;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined2 *puVar31;
  longlong lVar29;
  longlong lVar30;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  int *piVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  uint *puVar40;
  int *piVar41;
  short sVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  int iVar46;
  longlong lVar45;
  ulonglong uVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  longlong lVar51;
  int iStack00000014;
  undefined4 uStack0000001c;
  uint uStack00000024;
  int iStack00000034;
  int iStack0000003c;
  uint uStack00000044;
  uint uStack0000004c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000074;
  uint in_stack_0000007c;
  int in_stack_00000084;
  uint in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  undefined4 in_stack_000000b4;
  int *in_stack_000000bc;
  int *in_stack_000000c4;
  uint *in_stack_000000cc;
  int in_stack_000000d4;
  code *pcStack_4f0;
  int *piStack_4e8;
  int *piStack_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  uint uStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  uint *puStack_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  int iStack_4ac;
  uint uStack_4a8;
  uint uStack_4a4;
  uint *puStack_4a0;
  code *pcStack_49c;
  int iStack_498;
  int *piStack_494;
  uint uStack_490;
  uint uStack_48c;
  uint uStack_488;
  uint uStack_484;
  uint uStack_480;
  uint auStack_470 [7];
  int iStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  int aiStack_410 [52];
  int aiStack_340 [52];
  int aiStack_270 [44];
  undefined1 auStack_1c0 [448];
  
  uVar44 = ZEXT48(&stack0x00000000);
  uVar23 = (uint)param_8;
  uVar32 = (uint)param_7;
  if ((*(uint *)(param_1 + 0x6db8) & 1) == 0) {
    uVar14 = in_stack_000000b4;
    if ((*(uint *)(param_1 + 0x6db8) & 4) == 0) {
      uVar14 = 0;
    }
  }
  else {
    uVar14 = 1;
  }
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  uStack00000044 = uVar32;
  uStack0000004c = uVar23;
  uStack_4c0 = fn_82EFE140(param_1,in_stack_000000ac,uVar14);
  pcStack_49c = *(code **)(in_stack_000000ac + 8);
  pcStack_4f0 = *(code **)(in_stack_000000ac + 0xc);
  lVar51 = 8;
  iStack_498 = (*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 + *(int *)(param_1 + 0x1e54);
  lVar36 = 0xfffffff;
  lVar27 = uVar44 - 0x474;
  do {
    lVar27 = lVar27 + 4;
    *(undefined4 *)lVar27 = 0xfffffff;
    lVar51 = lVar51 + -1;
  } while (lVar51 != 0);
  iVar18 = 0;
  iVar7 = ((int)uVar32 >> 2) + 2 >> 2;
  iVar6 = ((int)uVar23 >> 2) + 2 >> 2;
  if (in_stack_00000084 != 0) {
    iVar25 = ((int)in_stack_00000054 >> 2) + 2 >> 2;
    iVar11 = ((int)in_stack_0000005c >> 2) + 2 >> 2;
    if (0 < in_stack_00000094) {
      piVar24 = (int *)(param_4 + 0x100);
      do {
        if ((iVar25 == piVar24[-0x20]) && (iVar11 == *piVar24)) break;
        iVar18 = iVar18 + 1;
        piVar24 = piVar24 + 1;
      } while (iVar18 < in_stack_00000094);
    }
    if (iVar18 == in_stack_00000094) {
      in_stack_00000094 = in_stack_00000094 + 1;
      *(int *)((iVar18 + 0x20) * 4 + param_4) = iVar25;
      *(int *)((iVar18 + 0x40) * 4 + param_4) = iVar11;
    }
  }
  iVar18 = 0;
  if (0 < in_stack_00000094) {
    piVar24 = (int *)(param_4 + 0x100);
    do {
      if ((iVar7 == piVar24[-0x20]) && (iVar6 == *piVar24)) break;
      iVar18 = iVar18 + 1;
      piVar24 = piVar24 + 1;
    } while (iVar18 < in_stack_00000094);
  }
  if (iVar18 == in_stack_00000094) {
    in_stack_00000094 = in_stack_00000094 + 1;
    *(int *)((iVar18 + 0x20) * 4 + param_4) = iVar7;
    *(int *)((iVar18 + 0x40) * 4 + param_4) = iVar6;
  }
  uStack_4a4 = (int)uVar32 >> 1;
  uStack_4d0 = 0xfffffff;
  uStack_448 = (int)in_stack_00000054 >> 1;
  uStack_480 = (int)uVar23 >> 1;
  piStack_4e0 = aiStack_410;
  piStack_494 = aiStack_270;
  piStack_4e8 = aiStack_340;
  uStack_44c = (int)in_stack_0000005c >> 1;
  uStack_4b4 = 0;
  if (0 < in_stack_00000094) {
    puStack_4b8 = (uint *)(param_4 + 0x80);
    do {
      piVar24 = piStack_4e0;
      bVar48 = true;
      uVar34 = (ulonglong)in_stack_0000008c;
      uVar15 = (ulonglong)uStack_4b4;
      uVar17 = -uVar34;
      uVar32 = puStack_4b8[0x20];
      uVar23 = *puStack_4b8;
      lVar38 = ((ulonglong)uVar32 & 0x3fffffff) * 4;
      uStack_4a8 = (uint)uVar17;
      lVar27 = ((ulonglong)uVar23 & 0x3fffffff) * 4;
      uVar8 = (uint)lVar38;
      uStack_4b0 = in_stack_0000008c;
      uStack_4dc = in_stack_0000008c;
      lVar51 = (longlong)(int)uVar8 * (longlong)*(int *)(param_1 + 0x564) + lVar27 +
               (ulonglong)uStack00000024;
      uVar37 = uVar17;
      uStack_490 = uStack_4a8;
      if ((1 < (int)in_stack_0000008c) && (uVar43 = uVar34, puVar40 = puStack_4b8, uStack_4b4 != 0))
      {
        do {
          uStack_4b0 = (uint)uVar43;
          uStack_4dc = (uint)uVar34;
          if (!bVar48) break;
          uVar3 = puVar40[-1];
          if (uVar3 == uVar23) {
            if (puVar40[0x1f] == uVar32 - 1) {
              uVar37 = uVar37 + 1;
              bVar48 = false;
            }
            if (puVar40[0x1f] == uVar32 + 1) {
              uVar34 = uVar34 - 1;
LAB_82eb3440:
              bVar48 = false;
            }
          }
          else if (puVar40[0x1f] == uVar32) {
            if (uVar3 == uVar23 - 1) {
              uVar17 = uVar17 + 1;
              bVar48 = false;
            }
            if (uVar3 == uVar23 + 1) {
              uVar43 = uVar43 - 1;
              goto LAB_82eb3440;
            }
          }
          uStack_4b0 = (uint)uVar43;
          uStack_4dc = (uint)uVar34;
          uVar15 = uVar15 - 1;
          puVar40 = puVar40 + -1;
        } while (uVar15 != 0);
        uStack_490 = (uint)uVar37;
        uStack_4a8 = (uint)uVar17;
      }
      uVar3 = (uint)lVar27;
      if ((int)((int)uVar17 + uVar3) < (int)in_stack_00000064) {
        uVar17 = (ulonglong)in_stack_00000064 + ((ulonglong)uVar23 & 0x3fffffff) * -4;
        uStack_4a8 = (uint)uVar17;
      }
      if ((int)in_stack_0000006c < (int)(uStack_4b0 + uVar3)) {
        uStack_4b0 = in_stack_0000006c - uVar3;
      }
      uVar23 = uStack_4b0;
      if ((int)((int)uVar37 + uVar8) < (int)in_stack_00000074) {
        uVar37 = (ulonglong)in_stack_00000074 + ((ulonglong)uVar32 & 0x3fffffff) * -4;
        uStack_490 = (uint)uVar37;
      }
      uVar32 = (uint)uVar37;
      if ((int)in_stack_0000007c < (int)(uStack_4dc + uVar8)) {
        uStack_4dc = in_stack_0000007c - uVar8;
      }
      sVar4 = (short)lVar27;
      uStack_484 = uVar8;
      if (in_stack_00000084 == 0) {
        if ((int)uVar32 <= (int)uStack_4dc) {
          uVar34 = (uVar37 + lVar38 & 0x7fffffff) * 2 - (ulonglong)uStack_480;
          piVar35 = piStack_4e0;
          do {
            if ((int)uVar17 <= (int)uVar23) {
              uVar43 = (ulonglong)((int)uVar34 >> 0x1f);
              uVar43 = (uVar34 ^ uVar43) - uVar43;
              puVar40 = (uint *)(piVar35 + -1);
              uVar13 = (uVar17 + lVar27 & 0x7fffffff) * 2 - (ulonglong)uStack_4a4;
              uVar15 = uVar17;
              do {
                iVar6 = 7;
                iVar7 = (*pcStack_49c)(uStack0000001c,0x10,
                                       (longlong)*(int *)(param_1 + 0x564) *
                                       (longlong)(int)(uint)uVar37 + uVar15 + lVar51,
                                       *(int *)(param_1 + 0x564),lVar36);
                uVar16 = (ulonglong)((int)uVar13 >> 0x1f);
                uVar16 = (uVar13 ^ uVar16) - uVar16;
                if (((int)uVar16 < 0x9f) && ((int)uVar43 < 0x9f)) {
                  iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar43 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000a4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000a4);
                }
                else {
                  iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
                }
                uVar26 = iVar18 + iVar7;
                if ((int)uVar26 < iStack_454) {
                  lVar29 = uVar44 - 0x458;
                  do {
                    if (*(int *)lVar29 <= (int)uVar26) break;
                    iVar6 = iVar6 + -1;
                    lVar29 = lVar29 + -4;
                  } while (iVar6 != 0);
                  if (iVar6 < 7) {
                    iVar7 = 7 - iVar6;
                    puVar31 = (undefined2 *)(in_stack_000000d4 + 0x18);
                    do {
                      uVar1 = *puVar31;
                      uVar2 = puVar31[1];
                      *(undefined4 *)((int)auStack_470 + (4 - in_stack_000000d4) + (int)puVar31) =
                           *(undefined4 *)(((int)auStack_470 - in_stack_000000d4) + (int)puVar31);
                      puVar31[2] = uVar1;
                      puVar31[3] = uVar2;
                      puVar31 = puVar31 + -2;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                  }
                  *(short *)(iVar6 * 4 + in_stack_000000d4) = (short)uVar15 + sVar4;
                  auStack_470[iVar6] = uVar26;
                  *(short *)(iVar6 * 4 + in_stack_000000d4 + 2) = (short)uVar37 + (short)lVar38;
                  if (iVar6 == 0) {
                    uStack_48c = (uint)uVar15;
                    lVar36 = (ulonglong)auStack_470[0] + 1;
                    uStack_488 = (uint)uVar37;
                  }
                }
                uVar15 = uVar15 + 1;
                puVar40 = puVar40 + 1;
                *puVar40 = uVar26;
                uVar13 = uVar13 + 2;
              } while ((int)uVar15 <= (int)uVar23);
            }
            uVar37 = uVar37 + 1;
            uVar34 = uVar34 + 2;
            piVar35 = piVar35 + 7;
          } while ((int)uVar37 <= (int)uStack_4dc);
        }
      }
      else if ((int)uVar32 <= (int)uStack_4dc) {
        uVar15 = (ulonglong)uStack_44c;
        uVar34 = (ulonglong)uStack_480;
        uVar17 = (uVar37 + lVar38 & 0x7fffffff) * 2 - uVar15;
        piVar35 = piStack_494;
        do {
          uVar43 = (ulonglong)uStack_4a8;
          if ((int)uStack_4a8 <= (int)uStack_4b0) {
            uVar22 = (uVar15 - uVar34) + uVar17;
            uVar28 = (ulonglong)uStack_448;
            uVar19 = (ulonglong)((int)uVar22 >> 0x1f);
            uVar13 = (ulonglong)uStack_4a4;
            uVar16 = (ulonglong)((int)uVar17 >> 0x1f);
            uVar19 = (uVar22 ^ uVar19) - uVar19;
            uVar16 = (uVar17 ^ uVar16) - uVar16;
            sVar42 = (short)uVar37 + (short)uStack_484;
            uVar22 = ((ulonglong)uStack_4a8 + lVar27 & 0x7fffffff) * 2 - uVar28;
            iVar7 = (int)piStack_4e0 - (int)piStack_494;
            piVar41 = piVar35;
            do {
              uVar32 = (uint)uVar37;
              uVar47 = 7;
              iVar6 = (*pcStack_49c)(uStack0000001c,0x10,
                                     (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar32 +
                                     uVar43 + lVar51,*(int *)(param_1 + 0x564),lVar36);
              uVar21 = (uVar28 - uVar13) + uVar22;
              uVar20 = (ulonglong)((int)uVar21 >> 0x1f);
              uVar20 = (uVar21 ^ uVar20) - uVar20;
              if (((int)uVar20 < 0x9f) && ((int)uVar19 < 0x9f)) {
                iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar19 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000a4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000a4);
              }
              else {
                iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
              }
              iVar18 = iVar18 + iVar6;
              if (iVar18 < iStack_454) {
                lVar38 = uVar44 - 0x458;
                do {
                  if (*(int *)lVar38 <= iVar18) break;
                  uVar47 = uVar47 - 1;
                  lVar38 = lVar38 + -4;
                } while (uVar47 != 0);
                if ((int)uVar47 < 7) {
                  lVar38 = 7 - uVar47;
                  puVar31 = (undefined2 *)(in_stack_000000d4 + 0x18);
                  do {
                    uVar1 = *puVar31;
                    uVar2 = puVar31[1];
                    *(undefined4 *)((int)auStack_470 + (4 - in_stack_000000d4) + (int)puVar31) =
                         *(undefined4 *)(((int)auStack_470 - in_stack_000000d4) + (int)puVar31);
                    puVar31[2] = uVar1;
                    puVar31[3] = uVar2;
                    puVar31 = puVar31 + -2;
                    lVar38 = lVar38 + -1;
                  } while (lVar38 != 0);
                }
                iVar25 = (int)((uVar47 & 0xffffffff) << 2);
                *(short *)(iVar25 + in_stack_000000d4) = (short)uVar43 + sVar4;
                *(int *)((int)auStack_470 + iVar25) = iVar18;
                *(short *)(iVar25 + in_stack_000000d4 + 2) = sVar42;
                if ((int)uVar47 == 0) {
                  lVar36 = (ulonglong)auStack_470[0] + 1;
                  iStack_4ac = 0;
                  uStack_48c = (uint)uVar43;
                  uStack_488 = uVar32;
                }
              }
              uVar20 = (ulonglong)((int)uVar22 >> 0x1f);
              *(int *)(iVar7 + (int)piVar41) = iVar18;
              uVar20 = (uVar22 ^ uVar20) - uVar20;
              if (((int)uVar20 < 0x9f) && ((int)uVar16 < 0x9f)) {
                iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000a4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000a4);
              }
              else {
                iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
              }
              lVar38 = (uVar47 & 0x3fffffff) * 4;
              iVar18 = iVar18 + iVar6;
              lVar29 = lVar38 + (uVar44 - 0x470);
              if (iVar18 < *(int *)((int)lVar38 + (int)(uVar44 - 0x470))) {
                if ((int)uVar47 != 0) {
                  do {
                    lVar29 = lVar29 + -4;
                    if (*(int *)lVar29 <= iVar18) break;
                    uVar47 = uVar47 - 1;
                  } while (uVar47 != 0);
                }
                if ((int)uVar47 < 7) {
                  lVar38 = 7 - uVar47;
                  puVar31 = (undefined2 *)(in_stack_000000d4 + 0x18);
                  do {
                    uVar1 = *puVar31;
                    uVar2 = puVar31[1];
                    *(undefined4 *)((int)puVar31 + (int)auStack_470 + (4 - in_stack_000000d4)) =
                         *(undefined4 *)((int)puVar31 + ((int)auStack_470 - in_stack_000000d4));
                    puVar31[2] = uVar1;
                    puVar31[3] = uVar2;
                    puVar31 = puVar31 + -2;
                    lVar38 = lVar38 + -1;
                  } while (lVar38 != 0);
                }
                iVar6 = (int)((uVar47 & 0xffffffff) << 2);
                *(short *)(iVar6 + in_stack_000000d4) = (short)uVar43 + sVar4;
                *(int *)((int)auStack_470 + iVar6) = iVar18;
                *(short *)(iVar6 + in_stack_000000d4 + 2) = sVar42;
                if ((int)uVar47 == 0) {
                  lVar36 = (ulonglong)auStack_470[0] + 1;
                  iStack_4ac = 1;
                  uStack_48c = (uint)uVar43;
                  uStack_488 = uVar32;
                }
              }
              uVar43 = uVar43 + 1;
              *piVar41 = iVar18;
              uVar22 = uVar22 + 2;
              piVar41 = piVar41 + 1;
            } while ((int)uVar43 <= (int)uStack_4b0);
          }
          uVar37 = uVar37 + 1;
          uVar17 = uVar17 + 2;
          piVar35 = piVar35 + 7;
        } while ((int)uVar37 <= (int)uStack_4dc);
        uVar17 = (ulonglong)uStack_4a8;
        uVar8 = uStack_484;
        uVar32 = uStack_490;
        uVar23 = uStack_4b0;
      }
      piVar35 = piStack_494;
      if ((int)auStack_470[0] < (int)uStack_4d0) {
        uStack_4d0 = auStack_470[0];
        uStack_4c4 = uStack_48c;
        uStack_4cc = uStack_488;
        puStack_4a0 = (uint *)uVar17;
        uStack_444 = uStack_4dc;
        uStack_4c8 = uVar3;
        uStack_4bc = uVar8;
        uStack_450 = uVar32;
        uStack_440 = uVar23;
        if ((in_stack_00000084 == 0) || (iStack_4ac == 0)) {
          piStack_4e0 = piStack_4e8;
          piStack_4e8 = piVar24;
        }
        else {
          piStack_494 = piStack_4e8;
          piStack_4e8 = piVar35;
        }
      }
      uStack_4b4 = uStack_4b4 + 1;
      puStack_4b8 = puStack_4b8 + 1;
    } while ((int)uStack_4b4 < in_stack_00000094);
    param_7 = (ulonglong)uStack00000044;
    param_8 = (ulonglong)uStack0000004c;
  }
  uVar44 = (ulonglong)uStack_4c4 + (ulonglong)uStack_4c8;
  uVar37 = (ulonglong)uStack_4cc + (ulonglong)uStack_4bc;
  lVar36 = (uVar44 & 0x3fffffff) * 4;
  lVar27 = (uVar37 & 0x3fffffff) * 4;
  uVar23 = (uint)lVar36;
  uVar32 = (uint)lVar27;
  uStack_4b4 = uVar32;
  pcStack_49c = (code *)uVar23;
  if (in_stack_00000084 != 0) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0xa30);
    uVar34 = (ulonglong)*(uint *)(param_1 + 0xa2c);
    uVar8 = *(uint *)(param_1 + 0xa38);
    uVar3 = *(uint *)(param_1 + 0xa34);
    iVar7 = fn_82E9B140(param_1,((uVar34 - param_7) + lVar36 & (ulonglong)uVar3) - uVar34,
                          ((uVar15 - param_8) + lVar27 & (ulonglong)uVar8) - uVar15,1,1);
    iVar6 = fn_82E9B140(param_1,((uVar34 - in_stack_00000054) + lVar36 & (ulonglong)uVar3) -
                                  uVar34,
                          ((uVar15 - in_stack_0000005c) + lVar27 & (ulonglong)uVar8) - uVar15,1,1);
    if (iVar7 < iVar6) {
      iStack_4ac = 0;
    }
    else {
      iStack_4ac = 1;
      param_8 = (ulonglong)in_stack_0000005c;
      param_7 = (ulonglong)in_stack_00000054;
    }
  }
  if ((*(uint *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000b4 = 0;
    }
  }
  else {
    in_stack_000000b4 = 1;
  }
  uVar8 = fn_82EFE140(param_1,in_stack_000000ac,in_stack_000000b4);
  uStack_4c0 = uVar8 ^ uStack_4c0;
  iVar7 = (int)param_8;
  uVar8 = iVar7 >> 2;
  iVar6 = (int)param_7;
  uVar3 = iVar6 >> 2;
  if (uStack_4d0 == 0xfffffff) {
    uStack_4cc = 0;
    uStack_4c4 = 0;
    uStack_4d8 = (uint)(param_7 & 3);
    uStack_4d4 = (uint)(param_8 & 3);
    if (in_stack_0000009c == 1) {
      uStack_4c8 = uVar3;
      uStack_4bc = uVar8;
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      uStack_4c8 = uVar3;
      uStack_4bc = uVar8;
      (**(code **)(param_1 + 0x9c0))
                ((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar8 + (longlong)(int)uVar3 +
                 (ulonglong)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,param_7 & 3,
                 param_8 & 3,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
    }
    iVar7 = (*pcStack_4f0)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
    puVar40 = (uint *)(*(int *)(lbl_831898B8 * 4 + in_stack_000000a4) +
                       *(int *)(lbl_831898B8 * 4 + in_stack_000000a4) + iVar7);
  }
  else {
    bVar48 = in_stack_00000074 != uVar37;
    uVar34 = (ulonglong)*(uint *)(param_1 + 0x564);
    uStack_4a4 = (uint)(in_stack_0000007c != uVar37);
    bVar49 = in_stack_00000064 == uVar44;
    iVar18 = ((uVar23 - iVar6) + *(int *)(param_1 + 0xa2c) & *(uint *)(param_1 + 0xa34)) -
             *(int *)(param_1 + 0xa2c);
    uVar15 = ZEXT48(puStack_4a0);
    puStack_4a0 = (uint *)uStack00000024;
    bVar50 = in_stack_0000006c != uVar44;
    uVar44 = (ulonglong)uStack_4cc - (ulonglong)uStack_450;
    iVar25 = ((uVar32 - iVar7) + *(int *)(param_1 + 0xa30) & *(uint *)(param_1 + 0xa38)) -
             *(int *)(param_1 + 0xa30);
    uVar32 = iVar18 >> 1;
    lVar29 = (longlong)(int)uVar32;
    lVar27 = uStack_440 - uVar15;
    lVar36 = uStack_4c4 - uVar15;
    lVar51 = (longlong)(int)uVar37 * (longlong)(int)*(uint *)(param_1 + 0x564) +
             (ulonglong)uStack_4c4 + (ulonglong)uStack_4c8 + (ulonglong)uStack00000024;
    uVar23 = iVar25 >> 1;
    lVar38 = (longlong)(int)uVar23;
    iVar46 = (int)uVar44;
    iVar11 = (int)lVar27;
    iVar12 = (int)lVar36;
    uVar26 = iVar25 >> 0x1f;
    uVar33 = iVar18 >> 0x1f;
    if ((iVar46 == 0) && (bVar48)) {
      uVar15 = (ulonglong)((int)(lVar29 - 2U) >> 0x1f);
      uVar37 = (ulonglong)((int)(lVar38 - 2U) >> 0x1f);
      uVar15 = (lVar29 - 2U ^ uVar15) - uVar15;
      lVar30 = (lVar36 - uVar34) + lVar51;
      uVar37 = (lVar38 - 2U ^ uVar37) - uVar37;
      iVar18 = (int)uVar15;
      iVar25 = (int)uVar37;
      if ((iVar18 < 0x9f) && (iVar25 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar46 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30 + -1,uVar34,0x10);
      iVar10 = (uVar32 ^ uVar33) - uVar33;
      *(int *)((int)((lVar36 - 8U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar9 + iVar46;
      if ((iVar10 < 0x9f) && (iVar25 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + iVar10 * 4) * 4 + in_stack_000000a4);
      }
      else {
        iVar46 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar34 = (ulonglong)((int)(lVar29 + 2U) >> 0x1f);
      uVar34 = (lVar29 + 2U ^ uVar34) - uVar34;
      *(int *)((int)((lVar36 - 7U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar9 + iVar46;
      iVar46 = (int)uVar34;
      if ((iVar46 < 0x9f) && (iVar25 < 0x9f)) {
        iVar25 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar10 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30 + 1,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar14 = uStack0000001c;
      iVar9 = iStack00000014;
      *(int *)((int)((lVar36 - 6U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar10 + iVar25;
      if ((iVar12 != 0) || (bVar49)) {
        if ((iVar12 == iVar11) && (bVar50)) {
          iVar18 = (uVar23 ^ uVar26) - uVar26;
          if ((iVar46 < 0x9f) && (iVar18 < 0x9f)) {
            iVar18 = *(int *)(*(int *)(&lbl_831898B8 + iVar18 * 4) * 4 + in_stack_000000a4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4);
          }
          else {
            iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + 1,
                                  *(undefined4 *)(iStack00000014 + 0x564),0x10);
          uVar37 = (ulonglong)((int)(lVar38 + 2U) >> 0x1f);
          uVar37 = (lVar38 + 2U ^ uVar37) - uVar37;
          *(int *)((int)((lVar27 + 1U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar25 + iVar18;
          if ((iVar46 < 0x9f) && ((int)uVar37 < 0x9f)) {
            iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4);
          }
          else {
            iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          iVar25 = (*pcStack_4f0)(uVar14,0x10,(ulonglong)*(uint *)(iVar9 + 0x564) + lVar51 + 1,
                                  (ulonglong)*(uint *)(iVar9 + 0x564),0x10);
          *(int *)((int)((lVar27 + 8U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar25 + iVar18;
        }
      }
      else {
        iVar25 = (uVar23 ^ uVar26) - uVar26;
        if ((iVar18 < 0x9f) && (iVar25 < 0x9f)) {
          iVar25 = *(int *)(*(int *)(&lbl_831898B8 + iVar25 * 4) * 4 + in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + -1,*(undefined4 *)(param_1 + 0x564),
                                0x10);
        uVar37 = (ulonglong)((int)(lVar38 + 2U) >> 0x1f);
        piStack_4e8[-1] = iVar11 + iVar25;
        uVar37 = (lVar38 + 2U ^ uVar37) - uVar37;
        if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,
                                (ulonglong)*(uint *)(param_1 + 0x564) + lVar51 + -1,
                                (ulonglong)*(uint *)(param_1 + 0x564),0x10);
        piStack_4e8[6] = iVar25 + iVar18;
      }
    }
    else if ((iVar46 == uStack_444 - uStack_450) && (uStack_4a4 != 0)) {
      uVar15 = (ulonglong)((int)(lVar29 - 2U) >> 0x1f);
      uVar37 = (ulonglong)((int)(lVar38 + 2U) >> 0x1f);
      uVar15 = (lVar29 - 2U ^ uVar15) - uVar15;
      lVar30 = uVar34 + lVar36 + lVar51;
      uVar37 = (lVar38 + 2U ^ uVar37) - uVar37;
      iVar18 = (int)uVar15;
      iVar25 = (int)uVar37;
      if ((iVar18 < 0x9f) && (iVar25 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar46 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      lVar39 = (uVar44 & 0x1fffffff) * 8 - uVar44;
      lVar45 = lVar36 + lVar39;
      iVar9 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30 + -1,uVar34,0x10);
      iVar10 = (uVar32 ^ uVar33) - uVar33;
      *(int *)((int)((lVar45 + 6U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar9 + iVar46;
      if ((iVar10 < 0x9f) && (iVar25 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + iVar10 * 4) * 4 + in_stack_000000a4);
      }
      else {
        iVar46 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30,*(undefined4 *)(iStack00000014 + 0x564),0x10
                            );
      uVar34 = (ulonglong)((int)(lVar29 + 2U) >> 0x1f);
      uVar34 = (lVar29 + 2U ^ uVar34) - uVar34;
      *(int *)((int)((lVar45 + 7U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar9 + iVar46;
      iVar46 = (int)uVar34;
      if ((iVar46 < 0x9f) && (iVar25 < 0x9f)) {
        iVar25 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4f0)(uStack0000001c,0x10,lVar30 + 1,*(undefined4 *)(iStack00000014 + 0x564),
                             0x10);
      *(int *)((int)((lVar45 + 8U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar9 + iVar25;
      if ((iVar12 != 0) || (bVar49)) {
        if ((iVar12 == iVar11) && (bVar50)) {
          iVar18 = (uVar23 ^ uVar26) - uVar26;
          if ((iVar46 < 0x9f) && (iVar18 < 0x9f)) {
            iVar18 = *(int *)(*(int *)(&lbl_831898B8 + iVar18 * 4) * 4 + in_stack_000000a4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4);
          }
          else {
            iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          lVar39 = lVar39 + lVar27;
          iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + 1,
                                  *(undefined4 *)(iStack00000014 + 0x564),0x10);
          uVar37 = (ulonglong)((int)(lVar38 - 2U) >> 0x1f);
          uVar37 = (lVar38 - 2U ^ uVar37) - uVar37;
          *(int *)((int)((lVar39 + 1U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar25 + iVar18;
          if ((iVar46 < 0x9f) && ((int)uVar37 < 0x9f)) {
            iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000a4);
          }
          else {
            iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
          }
          iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,
                                  (lVar51 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + 1,
                                  (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
          *(int *)((int)((lVar39 - 6U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar25 + iVar18;
        }
      }
      else {
        iVar25 = (uVar23 ^ uVar26) - uVar26;
        if ((iVar18 < 0x9f) && (iVar25 < 0x9f)) {
          iVar25 = *(int *)(*(int *)(&lbl_831898B8 + iVar25 * 4) * 4 + in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar11 = (int)(((uVar44 & 0x1fffffff) * 8 - uVar44 & 0xffffffff) << 2);
        iVar12 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + -1,
                                *(undefined4 *)(iStack00000014 + 0x564),0x10);
        uVar37 = (ulonglong)((int)(lVar38 - 2U) >> 0x1f);
        *(int *)((int)piStack_4e8 + iVar11 + -4) = iVar12 + iVar25;
        uVar37 = (lVar38 - 2U ^ uVar37) - uVar37;
        if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,
                                (lVar51 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + -1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        *(int *)((int)piStack_4e8 + iVar11 + -0x20) = iVar25 + iVar18;
      }
    }
    else if ((iVar12 != 0) || (bVar49)) {
      if ((iVar12 == iVar11) && (bVar50)) {
        uVar34 = (ulonglong)((int)(lVar29 + 2U) >> 0x1f);
        uVar37 = (ulonglong)((int)(lVar38 - 2U) >> 0x1f);
        uVar34 = (lVar29 + 2U ^ uVar34) - uVar34;
        uVar37 = (lVar38 - 2U ^ uVar37) - uVar37;
        iVar18 = (int)uVar34;
        if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
          iVar25 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        lVar27 = ((uVar44 & 0x1fffffff) * 8 - uVar44) + lVar27;
        iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,
                                (lVar51 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + 1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        iVar12 = (uVar23 ^ uVar26) - uVar26;
        *(int *)((int)((lVar27 - 6U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar11 + iVar25;
        if ((iVar18 < 0x9f) && (iVar12 < 0x9f)) {
          iVar25 = *(int *)(*(int *)(&lbl_831898B8 + iVar12 * 4) * 4 + in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + 1,
                                *(undefined4 *)(iStack00000014 + 0x564),0x10);
        uVar37 = (ulonglong)((int)(lVar38 + 2U) >> 0x1f);
        uVar37 = (lVar38 + 2U ^ uVar37) - uVar37;
        *(int *)((int)((lVar27 + 1U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar11 + iVar25;
        if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
          iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000a4);
        }
        else {
          iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564) + lVar51 + 1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        *(int *)((int)((lVar27 + 8U & 0xffffffff) << 2) + (int)piStack_4e8) = iVar25 + iVar18;
      }
    }
    else {
      uVar34 = (ulonglong)((int)(lVar29 - 2U) >> 0x1f);
      uVar37 = (ulonglong)((int)(lVar38 - 2U) >> 0x1f);
      uVar34 = (lVar29 - 2U ^ uVar34) - uVar34;
      uVar37 = (lVar38 - 2U ^ uVar37) - uVar37;
      iVar18 = (int)uVar34;
      if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
        iVar25 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,
                              (lVar51 - (ulonglong)*(uint *)(param_1 + 0x564)) + -1,
                              (ulonglong)*(uint *)(param_1 + 0x564),0x10);
      piStack_4e8[iVar46 * 7 + -8] = iVar11 + iVar25;
      iVar25 = (uVar23 ^ uVar26) - uVar26;
      if ((iVar18 < 0x9f) && (iVar25 < 0x9f)) {
        iVar25 = *(int *)(*(int *)(&lbl_831898B8 + iVar25 * 4) * 4 + in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51 + -1,*(undefined4 *)(param_1 + 0x564),0x10)
      ;
      uVar37 = (ulonglong)((int)(lVar38 + 2U) >> 0x1f);
      piStack_4e8[iVar46 * 7 + -1] = iVar11 + iVar25;
      uVar37 = (lVar38 + 2U ^ uVar37) - uVar37;
      if ((iVar18 < 0x9f) && ((int)uVar37 < 0x9f)) {
        iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar18 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar25 = (*pcStack_4f0)(uStack0000001c,0x10,
                              (ulonglong)*(uint *)(param_1 + 0x564) + lVar51 + -1,
                              (ulonglong)*(uint *)(param_1 + 0x564),0x10);
      piStack_4e8[iVar46 * 7 + 6] = iVar25 + iVar18;
    }
    pcVar5 = pcStack_49c;
    iVar18 = iStack00000014;
    lVar38 = ((ZEXT48(pcStack_49c) - param_7) + (ulonglong)*(uint *)(iStack00000014 + 0xa2c) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa34)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa2c);
    lVar27 = ((uStack_4b4 - param_8) + (ulonglong)*(uint *)(iStack00000014 + 0xa30) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa38)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa30);
    if (*(int *)(iStack00000014 + 0x6d84) == 0) {
      if (uStack_4c0 != 0) {
        pcStack_4f0 = *(code **)(in_stack_000000ac + 0xc);
        uVar32 = (int)lVar38 >> 0x1f;
        uVar23 = (int)lVar27 >> 0x1f;
        iVar11 = ((int)lVar38 >> 1 ^ uVar32) - uVar32;
        iVar25 = ((int)lVar27 >> 1 ^ uVar23) - uVar23;
        if ((iVar11 < 0x9f) && (iVar25 < 0x9f)) {
          iVar25 = *(int *)(*(int *)(&lbl_831898B8 + iVar11 * 4) * 4 + in_stack_000000a4) +
                   *(int *)(*(int *)(&lbl_831898B8 + iVar25 * 4) * 4 + in_stack_000000a4);
        }
        else {
          iVar25 = *(int *)(in_stack_000000a4 + 0x14) << 1;
        }
        iVar11 = (*pcStack_4f0)(uStack0000001c,0x10,lVar51,*(undefined4 *)(iStack00000014 + 0x564),
                                0x10);
        uStack_4d0 = iVar11 + iVar25;
      }
      (**(code **)(iVar18 + 0x6f30))
                (iVar18,uStack0000001c,lVar51,lVar36,uVar44,uStack_4d0,bVar48,uStack_4a4);
      uVar23 = (uint)(param_7 & 3);
      uVar32 = (uint)(param_8 & 3);
      if (((uVar23 != 0) || (uVar32 != 0)) &&
         (((int)pcVar5 + uStack_4d8 != iVar6 || (uStack_4b4 + uStack_4d4 != iVar7)))) {
        uVar44 = (ulonglong)(int)uVar3;
        uVar26 = in_stack_00000064;
        if (((int)uVar3 < (int)in_stack_00000064) ||
           (uVar26 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar3)) {
          uVar44 = (ulonglong)uVar26;
        }
        uVar26 = in_stack_00000074;
        if (((int)uVar8 < (int)in_stack_00000074) ||
           (uVar33 = uVar8, uVar26 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar8)) {
          uVar33 = uVar26;
        }
        if (in_stack_0000009c == 1) {
          (**(code **)(iStack00000014 + 0x9b8))();
        }
        else {
          (**(code **)(iStack00000014 + 0x9c0))
                    ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar33 + uVar44 +
                     (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                     param_7 & 3,param_8 & 3,*(undefined4 *)(iStack00000014 + 0x904),
                     *(undefined4 *)(iStack00000014 + 0x618));
        }
        iVar7 = (*pcStack_4f0)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
        uVar26 = *(int *)(lbl_831898B8 * 4 + in_stack_000000a4) +
                 *(int *)(lbl_831898B8 * 4 + in_stack_000000a4) + iVar7;
        if ((int)uVar26 < (int)uStack_4d0) {
          uStack_4cc = 0;
          uStack_4c4 = 0;
          uStack_4d8 = uVar23;
          uStack_4d4 = uVar32;
          uStack_4d0 = uVar26;
          uStack_4c8 = uVar3;
          uStack_4bc = uVar8;
        }
      }
      puVar40 = (uint *)uStack_4d0;
      if (in_stack_00000084 != 0) {
        uVar32 = uStack00000044;
        uVar23 = uStack0000004c;
        if (iStack_4ac == 0) {
          uVar32 = in_stack_00000054;
          uVar23 = in_stack_0000005c;
        }
        uVar8 = uVar32 & 3;
        uVar3 = uVar23 & 3;
        if (((uVar8 != 0) || (uVar3 != 0)) &&
           (((uStack_4c4 + uStack_4c8) * 4 + uStack_4d8 != uVar32 ||
            ((uStack_4cc + uStack_4bc) * 4 + uStack_4d4 != uVar23)))) {
          uVar32 = (int)uVar32 >> 2;
          uVar44 = (ulonglong)(int)uVar32;
          uVar23 = (int)uVar23 >> 2;
          if (((int)uVar32 < (int)in_stack_00000064) ||
             (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar32)) {
            uVar44 = (ulonglong)in_stack_00000064;
          }
          if (((int)uVar23 < (int)in_stack_00000074) ||
             (uVar26 = uVar23, in_stack_00000074 = in_stack_0000007c,
             (int)in_stack_0000007c < (int)uVar23)) {
            uVar26 = in_stack_00000074;
          }
          if (in_stack_0000009c == 1) {
            (**(code **)(iStack00000014 + 0x9b8))();
          }
          else {
            (**(code **)(iStack00000014 + 0x9c0))
                      ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar26 + uVar44 +
                       (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                       uVar8,uVar3,*(undefined4 *)(iStack00000014 + 0x904),
                       *(undefined4 *)(iStack00000014 + 0x618));
          }
          iVar7 = (*pcStack_4f0)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
          uVar26 = *(int *)(lbl_831898B8 * 4 + in_stack_000000a4) +
                   *(int *)(lbl_831898B8 * 4 + in_stack_000000a4) + iVar7;
          puVar40 = (uint *)uStack_4d0;
          if ((int)uVar26 < (int)uStack_4d0) {
            uStack_4cc = 0;
            uStack_4c4 = 0;
            puVar40 = (uint *)uVar26;
            uStack_4d8 = uVar8;
            uStack_4d4 = uVar3;
            uStack_4c8 = uVar32;
            uStack_4bc = uVar23;
          }
        }
      }
    }
    else {
      (**(code **)(iStack00000014 + 0x9b8))
                (lVar51,*(undefined4 *)(iStack00000014 + 0x564),auStack_1c0,0x10,lVar38,lVar27,
                 *(undefined4 *)(iStack00000014 + 0x904),*(undefined4 *)(iStack00000014 + 0x618));
      iVar25 = iStack_498;
      uVar14 = uStack0000001c;
      fn_82E9AC18(iVar18,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iStack_498);
      iVar11 = fn_82E9B140(iVar18,lVar38,lVar27,piStack_4e0,1);
      pcStack_4f0 = pcStack_4f0 + iVar11;
      if (in_stack_00000084 != 0) {
        pcStack_4f0 = pcStack_4f0 + 1;
      }
      puStack_4a0 = &uStack_4d8;
      lVar27 = (longlong)(int)pcStack_4f0 * (longlong)*(int *)(iVar25 + 0x6c) +
               (ulonglong)uStack_4dc;
      puStack_4b8 = (uint *)lVar27;
      fn_82E9F460(iVar18,uVar14,lVar51,lVar36,uVar44,lVar27,bVar48,uStack_4a4);
      iVar18 = iStack00000014;
      if (((int)pcStack_49c + uStack_4d8 != iVar6) ||
         (puVar40 = puStack_4b8, uStack_4b4 + uStack_4d4 != iVar7)) {
        uVar44 = (ulonglong)(int)uVar3;
        uVar32 = in_stack_00000064;
        if (((int)uVar3 < (int)in_stack_00000064) ||
           (uVar32 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar3)) {
          uVar44 = (ulonglong)uVar32;
        }
        uVar32 = in_stack_00000074;
        if (((int)uVar8 < (int)in_stack_00000074) ||
           (uVar23 = uVar8, uVar32 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar8)) {
          uVar23 = uVar32;
        }
        if (in_stack_0000009c == 1) {
          (**(code **)(iStack00000014 + 0x9b8))();
        }
        else {
          (**(code **)(iStack00000014 + 0x9c0))
                    ((longlong)(int)uVar23 * (longlong)*(int *)(iStack00000014 + 0x564) + uVar44 +
                     (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                     param_7 & 3,param_8 & 3,*(undefined4 *)(iStack00000014 + 0x904),
                     *(undefined4 *)(iStack00000014 + 0x618));
        }
        iVar7 = iStack_498;
        fn_82E9AC18(iVar18,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iStack_498);
        iVar6 = fn_82E9B140(iVar18,0,0,piStack_4e0,1);
        pcStack_4f0 = pcStack_4f0 + iVar6;
        if (in_stack_00000084 != 0) {
          pcStack_4f0 = pcStack_4f0 + 1;
        }
        uVar32 = (int)pcStack_4f0 * *(int *)(iVar7 + 0x6c) + uStack_4dc;
        puVar40 = puStack_4b8;
        if ((int)uVar32 < (int)puStack_4b8) {
          uStack_4d8 = (uint)(param_7 & 3);
          uStack_4d4 = (uint)(param_8 & 3);
          uStack_4cc = 0;
          uStack_4c4 = 0;
          puVar40 = (uint *)uVar32;
          uStack_4c8 = uVar3;
          uStack_4bc = uVar8;
        }
      }
      iVar7 = iStack00000014;
      if (in_stack_00000084 != 0) {
        uVar32 = uStack00000044;
        uVar23 = uStack0000004c;
        if (iStack_4ac == 0) {
          uVar32 = in_stack_00000054;
          uVar23 = in_stack_0000005c;
        }
        if (((uStack_4c4 + uStack_4c8) * 4 + uStack_4d8 != uVar32) ||
           ((uStack_4cc + uStack_4bc) * 4 + uStack_4d4 != uVar23)) {
          uVar8 = (int)uVar32 >> 2;
          uVar44 = (ulonglong)(int)uVar8;
          uVar3 = (int)uVar23 >> 2;
          if (((int)uVar8 < (int)in_stack_00000064) ||
             (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar8)) {
            uVar44 = (ulonglong)in_stack_00000064;
          }
          if (((int)uVar3 < (int)in_stack_00000074) ||
             (uVar26 = uVar3, in_stack_00000074 = in_stack_0000007c,
             (int)in_stack_0000007c < (int)uVar3)) {
            uVar26 = in_stack_00000074;
          }
          if (in_stack_0000009c == 1) {
            (**(code **)(iStack00000014 + 0x9b8))();
          }
          else {
            (**(code **)(iStack00000014 + 0x9c0))
                      ((longlong)(int)uVar26 * (longlong)*(int *)(iStack00000014 + 0x564) + uVar44 +
                       (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                       uVar32 & 3,uVar23 & 3,*(undefined4 *)(iStack00000014 + 0x904),
                       *(undefined4 *)(iStack00000014 + 0x618));
          }
          iVar6 = iStack_498;
          fn_82E9AC18(iVar7,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iStack_498);
          iVar7 = fn_82E9B140(iVar7,0,0,piStack_4e0,1);
          uVar26 = (int)(pcStack_4f0 + iVar7 + 1) * *(int *)(iVar6 + 0x6c) + uStack_4dc;
          if ((int)uVar26 < (int)puVar40) {
            uStack_4cc = 0;
            uStack_4c4 = 0;
            puVar40 = (uint *)uVar26;
            uStack_4d8 = uVar32 & 3;
            uStack_4d4 = uVar23 & 3;
            uStack_4c8 = uVar8;
            uStack_4bc = uVar3;
          }
        }
      }
    }
  }
  *in_stack_000000bc = (uStack_4c4 + uStack_4c8) * 4 + uStack_4d8;
  *in_stack_000000c4 = (uStack_4cc + uStack_4bc) * 4 + uStack_4d4;
  *in_stack_000000cc = (uint)puVar40;
  return;
}


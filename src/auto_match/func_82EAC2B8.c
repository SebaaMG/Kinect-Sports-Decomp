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
extern unsigned int *auStack_460;
extern int fn_82E9AC18();
extern int fn_82E9B0D0();
extern int fn_82E9B140();
extern int fn_82EA44A8();
extern int fn_82EFE140();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_444;
extern unsigned int iStack_48c;
extern unsigned int lbl_831898B8;
extern unsigned int lbl_831AFCA0;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_440;
extern unsigned int uStack_470;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_480;
extern unsigned int uStack_488;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b0;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4b8;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4cc;
extern unsigned int uStack_4d0;


/* WARNING: Removing unreachable block (ram,0x82eae288) */
/* WARNING: Removing unreachable block (ram,0x82eaced4) */
/* WARNING: Removing unreachable block (ram,0x82eae424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EAC2B8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                  ulonglong param_7,ulonglong param_8)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  short sVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
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
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int *piVar24;
  ulonglong uVar23;
  uint uVar25;
  longlong lVar26;
  undefined2 *puVar30;
  longlong lVar27;
  ulonglong uVar28;
  int iVar31;
  longlong lVar29;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  int *piVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar40;
  longlong lVar39;
  int *piVar41;
  short sVar42;
  uint uVar43;
  int iVar45;
  int iVar46;
  longlong lVar44;
  ulonglong uVar47;
  int iVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  longlong lVar53;
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
  undefined4 in_stack_000000ac;
  int *in_stack_000000b4;
  int *in_stack_000000bc;
  uint *in_stack_000000c4;
  int in_stack_000000cc;
  code *pcStack_4e0;
  int *piStack_4d8;
  int *piStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  uint uStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  uint uStack_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  uint uStack_4a4;
  uint *puStack_4a0;
  uint *puStack_49c;
  undefined1 *puStack_498;
  code *pcStack_494;
  int *piStack_490;
  int iStack_48c;
  uint uStack_488;
  int *piStack_484;
  uint uStack_480;
  uint uStack_47c;
  uint uStack_478;
  undefined1 *puStack_474;
  uint uStack_470;
  uint auStack_460 [7];
  int iStack_444;
  uint uStack_440;
  int aiStack_410 [52];
  int aiStack_340 [52];
  int aiStack_270 [44];
  undefined1 auStack_1c0 [448];
  uint uVar4;
  
  uVar28 = ZEXT48(&stack0x00000000);
  puStack_498 = auStack_1c0;
  if ((*(uint *)(param_1 + 0x6db8) & 1) == 0) {
    uVar14 = in_stack_000000ac;
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
  uStack00000044 = (uint)param_7;
  uStack0000004c = (uint)param_8;
  uStack_4a4 = fn_82EFE140(param_1,in_stack_000000a4,uVar14);
  pcStack_494 = *(code **)(in_stack_000000a4 + 8);
  pcStack_4e0 = *(code **)(in_stack_000000a4 + 0xc);
  lVar53 = 8;
  iStack_48c = (*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 + *(int *)(param_1 + 0x1e54);
  lVar34 = 0xfffffff;
  lVar26 = uVar28 - 0x464;
  do {
    lVar26 = lVar26 + 4;
    *(undefined4 *)lVar26 = 0xfffffff;
    lVar53 = lVar53 + -1;
  } while (lVar53 != 0);
  iVar18 = 0;
  iVar8 = ((int)(uint)param_7 >> 2) + 2 >> 2;
  iVar7 = ((int)(uint)param_8 >> 2) + 2 >> 2;
  uVar3 = (int)in_stack_00000054 >> 2;
  uVar4 = (int)in_stack_0000005c >> 2;
  if (in_stack_00000084 != 0) {
    iVar31 = (int)(uVar3 + 2) >> 2;
    iVar48 = (int)(uVar4 + 2) >> 2;
    if (0 < in_stack_00000094) {
      piVar24 = (int *)(param_4 + 0x100);
      do {
        if ((iVar31 == piVar24[-0x20]) && (iVar48 == *piVar24)) break;
        iVar18 = iVar18 + 1;
        piVar24 = piVar24 + 1;
      } while (iVar18 < in_stack_00000094);
    }
    if (iVar18 == in_stack_00000094) {
      in_stack_00000094 = in_stack_00000094 + 1;
      *(int *)((iVar18 + 0x20) * 4 + param_4) = iVar31;
      *(int *)((iVar18 + 0x40) * 4 + param_4) = iVar48;
    }
  }
  iVar18 = 0;
  if (0 < in_stack_00000094) {
    piVar24 = (int *)(param_4 + 0x100);
    do {
      if ((iVar8 == piVar24[-0x20]) && (iVar7 == *piVar24)) break;
      iVar18 = iVar18 + 1;
      piVar24 = piVar24 + 1;
    } while (iVar18 < in_stack_00000094);
  }
  if (iVar18 == in_stack_00000094) {
    in_stack_00000094 = in_stack_00000094 + 1;
    *(int *)((iVar18 + 0x20) * 4 + param_4) = iVar8;
    *(int *)((iVar18 + 0x40) * 4 + param_4) = iVar7;
  }
  piStack_4d4 = aiStack_410;
  uStack_4c0 = 0xfffffff;
  piStack_490 = aiStack_270;
  uStack_47c = 0;
  piStack_4d8 = aiStack_340;
  if (0 < in_stack_00000094) {
    puStack_4a0 = (uint *)(param_4 + 0x80);
    do {
      piVar24 = piStack_4d4;
      bVar50 = true;
      uVar37 = (ulonglong)in_stack_0000008c;
      uVar15 = (ulonglong)uStack_47c;
      uVar17 = -uVar37;
      uVar43 = puStack_4a0[0x20];
      uVar19 = *puStack_4a0;
      lVar36 = ((ulonglong)uVar43 & 0x3fffffff) * 4;
      uStack_4c8 = (uint)uVar17;
      lVar26 = ((ulonglong)uVar19 & 0x3fffffff) * 4;
      uVar32 = (uint)lVar36;
      uStack_4d0 = in_stack_0000008c;
      uStack_4cc = in_stack_0000008c;
      lVar53 = (longlong)(int)uVar32 * (longlong)*(int *)(param_1 + 0x564) + lVar26 +
               (ulonglong)uStack00000024;
      uVar38 = uVar17;
      uStack_488 = uStack_4c8;
      if ((1 < (int)in_stack_0000008c) && (uVar13 = uVar37, puVar40 = puStack_4a0, uStack_47c != 0))
      {
        do {
          uStack_4d0 = (uint)uVar13;
          uStack_4cc = (uint)uVar37;
          if (!bVar50) break;
          uVar49 = puVar40[-1];
          if (uVar49 == uVar19) {
            if (puVar40[0x1f] == uVar43 - 1) {
              uVar38 = uVar38 + 1;
              bVar50 = false;
            }
            if (puVar40[0x1f] == uVar43 + 1) {
              uVar37 = uVar37 - 1;
LAB_82eac5cc:
              bVar50 = false;
            }
          }
          else if (puVar40[0x1f] == uVar43) {
            if (uVar49 == uVar19 - 1) {
              uVar17 = uVar17 + 1;
              bVar50 = false;
            }
            if (uVar49 == uVar19 + 1) {
              uVar13 = uVar13 - 1;
              goto LAB_82eac5cc;
            }
          }
          uStack_4d0 = (uint)uVar13;
          uStack_4cc = (uint)uVar37;
          uVar15 = uVar15 - 1;
          puVar40 = puVar40 + -1;
        } while (uVar15 != 0);
        uStack_488 = (uint)uVar38;
        uStack_4c8 = (uint)uVar17;
      }
      uVar49 = (uint)lVar26;
      if ((int)((int)uVar17 + uVar49) < (int)in_stack_00000064) {
        uVar17 = (ulonglong)in_stack_00000064 + ((ulonglong)uVar19 & 0x3fffffff) * -4;
        uStack_4c8 = (uint)uVar17;
      }
      if ((int)in_stack_0000006c < (int)(uStack_4d0 + uVar49)) {
        uStack_4d0 = in_stack_0000006c - uVar49;
      }
      if ((int)((int)uVar38 + uVar32) < (int)in_stack_00000074) {
        uVar38 = (ulonglong)in_stack_00000074 + ((ulonglong)uVar43 & 0x3fffffff) * -4;
        uStack_488 = (uint)uVar38;
      }
      uVar43 = (uint)uVar38;
      if ((int)in_stack_0000007c < (int)(uStack_4cc + uVar32)) {
        uStack_4cc = in_stack_0000007c - uVar32;
      }
      sVar5 = (short)lVar26;
      uStack_470 = uVar32;
      if (in_stack_00000084 == 0) {
        if ((int)uVar43 <= (int)uStack_4cc) {
          uVar37 = (uVar38 + lVar36 & 0x3fffffff) * 4 - (ulonglong)uStack0000004c;
          piVar35 = piStack_4d4;
          do {
            if ((int)uVar17 <= (int)uStack_4d0) {
              uVar13 = (ulonglong)((int)uVar37 >> 0x1f);
              uVar13 = (uVar37 ^ uVar13) - uVar13;
              puVar40 = (uint *)(piVar35 + -1);
              uVar16 = (uVar17 + lVar26 & 0x3fffffff) * 4 - (ulonglong)uStack00000044;
              uVar15 = uVar17;
              do {
                iVar7 = 7;
                iVar8 = (*pcStack_494)(uStack0000001c,0x10,
                                       (longlong)*(int *)(param_1 + 0x564) *
                                       (longlong)(int)(uint)uVar38 + uVar15 + lVar53,
                                       *(int *)(param_1 + 0x564),lVar34);
                uVar20 = (ulonglong)((int)uVar16 >> 0x1f);
                uVar20 = (uVar16 ^ uVar20) - uVar20;
                if (((int)uVar20 < 0x9f) && ((int)uVar13 < 0x9f)) {
                  iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4
                                   + in_stack_0000009c) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4
                                   + in_stack_0000009c);
                }
                else {
                  iVar18 = *(int *)(in_stack_0000009c + 0x14) << 1;
                }
                uVar19 = iVar18 + iVar8;
                if ((int)uVar19 < iStack_444) {
                  lVar27 = uVar28 - 0x448;
                  do {
                    if (*(int *)lVar27 <= (int)uVar19) break;
                    iVar7 = iVar7 + -1;
                    lVar27 = lVar27 + -4;
                  } while (iVar7 != 0);
                  if (iVar7 < 7) {
                    iVar8 = 7 - iVar7;
                    puVar30 = (undefined2 *)(in_stack_000000cc + 0x18);
                    do {
                      uVar1 = *puVar30;
                      uVar2 = puVar30[1];
                      *(undefined4 *)((int)auStack_460 + (4 - in_stack_000000cc) + (int)puVar30) =
                           *(undefined4 *)(((int)auStack_460 - in_stack_000000cc) + (int)puVar30);
                      puVar30[2] = uVar1;
                      puVar30[3] = uVar2;
                      puVar30 = puVar30 + -2;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                  }
                  *(short *)(iVar7 * 4 + in_stack_000000cc) = (short)uVar15 + sVar5;
                  auStack_460[iVar7] = uVar19;
                  *(short *)(iVar7 * 4 + in_stack_000000cc + 2) = (short)uVar38 + (short)lVar36;
                  if (iVar7 == 0) {
                    uStack_478 = (uint)uVar15;
                    lVar34 = (ulonglong)auStack_460[0] + 1;
                    uStack_480 = (uint)uVar38;
                  }
                }
                uVar15 = uVar15 + 1;
                puVar40 = puVar40 + 1;
                *puVar40 = uVar19;
                uVar16 = uVar16 + 4;
              } while ((int)uVar15 <= (int)uStack_4d0);
            }
            uVar38 = uVar38 + 1;
            uVar37 = uVar37 + 4;
            piVar35 = piVar35 + 7;
          } while ((int)uVar38 <= (int)uStack_4cc);
        }
      }
      else if ((int)uVar43 <= (int)uStack_4cc) {
        uVar37 = (ulonglong)uStack0000004c;
        uVar15 = (uVar38 + lVar36 & 0x3fffffff) * 4 - (ulonglong)in_stack_0000005c;
        piVar35 = piStack_490;
        do {
          uVar17 = (ulonglong)uStack_4c8;
          if ((int)uStack_4c8 <= (int)uStack_4d0) {
            uVar23 = (in_stack_0000005c - uVar37) + uVar15;
            uVar20 = (ulonglong)((int)uVar23 >> 0x1f);
            uVar13 = (ulonglong)uStack00000044;
            uVar16 = (ulonglong)((int)uVar15 >> 0x1f);
            uVar20 = (uVar23 ^ uVar20) - uVar20;
            uVar16 = (uVar15 ^ uVar16) - uVar16;
            sVar42 = (short)uVar38 + (short)uStack_470;
            uVar23 = ((ulonglong)uStack_4c8 + lVar26 & 0x3fffffff) * 4 -
                     (ulonglong)in_stack_00000054;
            iVar8 = (int)piStack_4d4 - (int)piStack_490;
            piVar41 = piVar35;
            do {
              uVar43 = (uint)uVar38;
              uVar47 = 7;
              iVar7 = (*pcStack_494)(uStack0000001c,0x10,
                                     (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar43 +
                                     uVar17 + lVar53,*(int *)(param_1 + 0x564),lVar34);
              uVar22 = uVar23 + (in_stack_00000054 - uVar13);
              uVar21 = (ulonglong)((int)uVar22 >> 0x1f);
              uVar21 = (uVar22 ^ uVar21) - uVar21;
              if (((int)uVar21 < 0x9f) && ((int)uVar20 < 0x9f)) {
                iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                                 in_stack_0000009c) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                                 in_stack_0000009c);
              }
              else {
                iVar18 = *(int *)(in_stack_0000009c + 0x14) << 1;
              }
              iVar18 = iVar18 + iVar7;
              if (iVar18 < iStack_444) {
                lVar36 = uVar28 - 0x448;
                do {
                  if (*(int *)lVar36 <= iVar18) break;
                  uVar47 = uVar47 - 1;
                  lVar36 = lVar36 + -4;
                } while (uVar47 != 0);
                if ((int)uVar47 < 7) {
                  lVar36 = 7 - uVar47;
                  puVar30 = (undefined2 *)(in_stack_000000cc + 0x18);
                  do {
                    uVar1 = *puVar30;
                    uVar2 = puVar30[1];
                    *(undefined4 *)((int)auStack_460 + (4 - in_stack_000000cc) + (int)puVar30) =
                         *(undefined4 *)(((int)auStack_460 - in_stack_000000cc) + (int)puVar30);
                    puVar30[2] = uVar1;
                    puVar30[3] = uVar2;
                    puVar30 = puVar30 + -2;
                    lVar36 = lVar36 + -1;
                  } while (lVar36 != 0);
                }
                iVar31 = (int)((uVar47 & 0xffffffff) << 2);
                *(short *)(iVar31 + in_stack_000000cc) = (short)uVar17 + sVar5;
                *(int *)((int)auStack_460 + iVar31) = iVar18;
                *(short *)(iVar31 + in_stack_000000cc + 2) = sVar42;
                if ((int)uVar47 == 0) {
                  lVar34 = (ulonglong)auStack_460[0] + 1;
                  uStack_4a8 = 0;
                  uStack_480 = uVar43;
                  uStack_478 = (uint)uVar17;
                }
              }
              uVar21 = (ulonglong)((int)uVar23 >> 0x1f);
              *(int *)((int)piVar41 + iVar8) = iVar18;
              uVar21 = (uVar23 ^ uVar21) - uVar21;
              if (((int)uVar21 < 0x9f) && ((int)uVar16 < 0x9f)) {
                iVar18 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                                 in_stack_0000009c) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                                 in_stack_0000009c);
              }
              else {
                iVar18 = *(int *)(in_stack_0000009c + 0x14) << 1;
              }
              lVar36 = (uVar47 & 0x3fffffff) * 4;
              iVar18 = iVar18 + iVar7;
              lVar27 = lVar36 + (uVar28 - 0x460);
              if (iVar18 < *(int *)((int)lVar36 + (int)(uVar28 - 0x460))) {
                if ((int)uVar47 != 0) {
                  do {
                    lVar27 = lVar27 + -4;
                    if (*(int *)lVar27 <= iVar18) break;
                    uVar47 = uVar47 - 1;
                  } while (uVar47 != 0);
                }
                if ((int)uVar47 < 7) {
                  lVar36 = 7 - uVar47;
                  puVar30 = (undefined2 *)(in_stack_000000cc + 0x18);
                  do {
                    uVar1 = *puVar30;
                    uVar2 = puVar30[1];
                    *(undefined4 *)((int)puVar30 + (int)auStack_460 + (4 - in_stack_000000cc)) =
                         *(undefined4 *)((int)puVar30 + ((int)auStack_460 - in_stack_000000cc));
                    puVar30[2] = uVar1;
                    puVar30[3] = uVar2;
                    puVar30 = puVar30 + -2;
                    lVar36 = lVar36 + -1;
                  } while (lVar36 != 0);
                }
                iVar7 = (int)((uVar47 & 0xffffffff) << 2);
                *(short *)(iVar7 + in_stack_000000cc) = (short)uVar17 + sVar5;
                *(int *)((int)auStack_460 + iVar7) = iVar18;
                *(short *)(iVar7 + in_stack_000000cc + 2) = sVar42;
                if ((int)uVar47 == 0) {
                  lVar34 = (ulonglong)auStack_460[0] + 1;
                  uStack_4a8 = 1;
                  uStack_480 = uVar43;
                  uStack_478 = (uint)uVar17;
                }
              }
              uVar17 = uVar17 + 1;
              *piVar41 = iVar18;
              uVar23 = uVar23 + 4;
              piVar41 = piVar41 + 1;
            } while ((int)uVar17 <= (int)uStack_4d0);
          }
          uVar38 = uVar38 + 1;
          uVar15 = uVar15 + 4;
          piVar35 = piVar35 + 7;
        } while ((int)uVar38 <= (int)uStack_4cc);
        uVar17 = (ulonglong)uStack_4c8;
        uVar32 = uStack_470;
        uVar43 = uStack_488;
      }
      piVar35 = piStack_490;
      if ((int)auStack_460[0] < (int)uStack_4c0) {
        uStack_4c0 = auStack_460[0];
        uStack_4b8 = uStack_478;
        uStack_4b0 = uStack_480;
        piStack_484 = (int *)uVar17;
        puStack_49c = (uint *)uStack_4cc;
        uStack_4b4 = uVar49;
        uStack_4ac = uVar32;
        puStack_474 = (undefined1 *)uStack_4d0;
        uStack_440 = uVar43;
        if ((in_stack_00000084 == 0) || (uStack_4a8 == 0)) {
          piStack_4d4 = piStack_4d8;
          piStack_4d8 = piVar24;
        }
        else {
          piStack_490 = piStack_4d8;
          piStack_4d8 = piVar35;
        }
      }
      uStack_47c = uStack_47c + 1;
      puStack_4a0 = puStack_4a0 + 1;
    } while ((int)uStack_47c < in_stack_00000094);
    param_8 = (ulonglong)uStack0000004c;
    param_7 = (ulonglong)uStack00000044;
  }
  uVar43 = uStack_4a4;
  uVar38 = (ulonglong)in_stack_0000005c;
  uVar37 = (ulonglong)in_stack_00000054;
  uVar15 = (ulonglong)uStack_4b8 + (ulonglong)uStack_4b4;
  uVar17 = (ulonglong)uStack_4b0 + (ulonglong)uStack_4ac;
  lVar34 = (uVar15 & 0x3fffffff) * 4;
  lVar26 = (uVar17 & 0x3fffffff) * 4;
  iVar7 = (int)lVar34;
  iVar8 = (int)lVar26;
  if (in_stack_00000084 != 0) {
    uVar16 = (ulonglong)*(uint *)(param_1 + 0xa34);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa38);
    lVar53 = ((lVar34 - param_7) + (ulonglong)*(uint *)(param_1 + 0xa2c) & uVar16) -
             (ulonglong)*(uint *)(param_1 + 0xa2c);
    lVar36 = ((lVar26 - param_8) + (ulonglong)*(uint *)(param_1 + 0xa30) & uVar13) -
             (ulonglong)*(uint *)(param_1 + 0xa30);
    iVar18 = (int)lVar53;
    if ((((iVar18 < 0x9f) && (-0x9f < iVar18)) && ((int)lVar36 < 0x9f)) && (-0x9f < (int)lVar36)) {
      fn_82E9B0D0(lVar53,uVar28 - 0x494);
      fn_82E9B0D0(lVar36,uVar28 - 0x4a8);
      lVar53 = ((ulonglong)uStack_4a8 + ((ulonglong)uStack_4a8 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
               ZEXT48(pcStack_494) + -1;
    }
    else {
      lVar53 = 0x22;
    }
    uVar20 = lVar53 + 0x25;
    iVar18 = (int)uVar20;
    if ((iVar18 == 0x22) || (iVar18 == 0x47)) {
      iVar31 = *(int *)(param_1 + 0x5154);
      iVar18 = *(int *)((int)((uVar20 & 0xffffffff) << 3) + iVar31 + 4) + *(int *)(param_1 + 0xa28)
               + *(int *)(param_1 + 0xa24);
    }
    else {
      iVar31 = *(int *)(param_1 + 0x5154);
      iVar18 = *(int *)((int)((uVar20 & 0xffffffff) << 3) + iVar31 + 4) +
               (uint)(byte)(&lbl_831AFCA0)[iVar18];
    }
    lVar53 = ((lVar34 - uVar37) + (ulonglong)*(uint *)(param_1 + 0xa2c) & uVar16) -
             (ulonglong)*(uint *)(param_1 + 0xa2c);
    lVar36 = ((lVar26 - uVar38) + (ulonglong)*(uint *)(param_1 + 0xa30) & uVar13) -
             (ulonglong)*(uint *)(param_1 + 0xa30);
    iVar48 = (int)lVar53;
    if (((iVar48 < 0x9f) && (-0x9f < iVar48)) && (((int)lVar36 < 0x9f && (-0x9f < (int)lVar36)))) {
      fn_82E9B0D0(lVar53,uVar28 - 0x494);
      fn_82E9B0D0(lVar36,uVar28 - 0x4a8);
      lVar53 = ((ulonglong)uStack_4a8 + ((ulonglong)uStack_4a8 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
               ZEXT48(pcStack_494) + -1;
    }
    else {
      lVar53 = 0x22;
    }
    uVar28 = lVar53 + 0x25;
    iVar48 = (int)uVar28;
    if ((iVar48 == 0x22) || (iVar48 == 0x47)) {
      uVar19 = *(uint *)(param_1 + 0xa24);
      iVar31 = *(int *)((int)((uVar28 & 0xffffffff) << 3) + iVar31 + 4) + *(int *)(param_1 + 0xa28);
    }
    else {
      uVar19 = (uint)(byte)(&lbl_831AFCA0)[iVar48];
      iVar31 = *(int *)((int)((uVar28 & 0xffffffff) << 3) + iVar31 + 4);
    }
    if ((int)(iVar31 + uVar19) <= iVar18) goto LAB_82eacdcc;
  }
  uVar38 = param_8;
  uVar37 = param_7;
LAB_82eacdcc:
  if ((*(uint *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000ac = 0;
    }
  }
  else {
    in_stack_000000ac = 1;
  }
  uStack_4a4 = fn_82EFE140(param_1,in_stack_000000a4,in_stack_000000ac);
  puVar6 = puStack_498;
  uStack_4a4 = uStack_4a4 ^ uVar43;
  iVar18 = (int)uVar38;
  iVar31 = (int)uVar37;
  uVar43 = iVar18 >> 2;
  uVar19 = iVar31 >> 2;
  if (uStack_4c0 == 0xfffffff) {
    uStack_4c4 = (uint)(uVar37 & 3);
    uStack_4b0 = 0;
    uStack_4b8 = 0;
    uStack_4bc = (uint)(uVar38 & 3);
    uStack_4b4 = uVar19;
    uStack_4ac = uVar43;
    (**(code **)(param_1 + 0x9b8))
              ((longlong)(int)uVar43 * (longlong)*(int *)(param_1 + 0x564) + (longlong)(int)uVar19 +
               (ulonglong)uStack00000024,*(int *)(param_1 + 0x564),puStack_498,0x10,uVar37 & 3,
               uVar38 & 3,1,*(undefined4 *)(param_1 + 0x618));
    iVar8 = (*pcStack_4e0)(uStack0000001c,0x10,puVar6,0x10,0x10);
    puVar40 = (uint *)(*(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                       *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar8);
  }
  else {
    uVar28 = (ulonglong)*(uint *)(param_1 + 0x564);
    bVar50 = in_stack_00000074 != uVar17;
    uStack_4a8 = (uint)(in_stack_0000007c != uVar17);
    bVar51 = in_stack_00000064 == uVar15;
    uVar13 = (ulonglong)uStack_4b0 - (ulonglong)uStack_440;
    bVar52 = in_stack_0000006c != uVar15;
    lVar53 = ZEXT48(puStack_474) - ZEXT48(piStack_484);
    lVar36 = (ulonglong)uStack_4b8 - ZEXT48(piStack_484);
    lVar27 = (longlong)(int)uVar17 * (longlong)(int)*(uint *)(param_1 + 0x564) +
             (ulonglong)uStack_4b8 + (ulonglong)uStack_4b4 + (ulonglong)uStack00000024;
    iVar12 = (int)uVar13;
    iVar48 = (int)lVar53;
    iVar11 = (int)lVar36;
    if ((iVar12 == 0) && (bVar50)) {
      uVar20 = lVar34 - uVar37;
      uVar16 = lVar26 - uVar38;
      uVar17 = (ulonglong)((int)(uVar20 - 4) >> 0x1f);
      uVar15 = (ulonglong)((int)(uVar16 - 4) >> 0x1f);
      uVar17 = (uVar20 - 4 ^ uVar17) - uVar17;
      lVar29 = (lVar36 - uVar28) + lVar27;
      uVar15 = (uVar16 - 4 ^ uVar15) - uVar15;
      iVar12 = (int)uVar17;
      iVar46 = (int)uVar15;
      if ((iVar12 < 0x9f) && (iVar46 < 0x9f)) {
        iVar45 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar45 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29 + -1,uVar28,0x10);
      uVar28 = (ulonglong)((int)uVar20 >> 0x1f);
      uVar28 = (uVar20 ^ uVar28) - uVar28;
      *(int *)((int)((lVar36 - 8U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar9 + iVar45;
      if (((int)uVar28 < 0x9f) && (iVar46 < 0x9f)) {
        iVar45 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar45 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar28 = (ulonglong)((int)(uVar20 + 4) >> 0x1f);
      uVar28 = (uVar20 + 4 ^ uVar28) - uVar28;
      *(int *)((int)((lVar36 - 7U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar9 + iVar45;
      iVar45 = (int)uVar28;
      if ((iVar45 < 0x9f) && (iVar46 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar46 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar10 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29 + 1,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar14 = uStack0000001c;
      iVar9 = iStack00000014;
      *(int *)((int)((lVar36 - 6U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar10 + iVar46;
      iVar46 = (int)uVar16 >> 0x1f;
      if ((iVar11 != 0) || (bVar51)) {
        if ((iVar11 == iVar48) && (bVar52)) {
          uVar15 = (uVar16 ^ (longlong)iVar46) - (longlong)iVar46;
          if ((iVar45 < 0x9f) && ((int)uVar15 < 0x9f)) {
            iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c);
          }
          else {
            iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
          }
          iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + 1,
                                  *(undefined4 *)(iStack00000014 + 0x564),0x10);
          uVar15 = (ulonglong)((int)(uVar16 + 4) >> 0x1f);
          uVar15 = (uVar16 + 4 ^ uVar15) - uVar15;
          *(int *)((int)((lVar53 + 1U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar11 + iVar48;
          if ((iVar45 < 0x9f) && ((int)uVar15 < 0x9f)) {
            iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c);
          }
          else {
            iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
          }
          iVar11 = (*pcStack_4e0)(uVar14,0x10,(ulonglong)*(uint *)(iVar9 + 0x564) + lVar27 + 1,
                                  (ulonglong)*(uint *)(iVar9 + 0x564),0x10);
          *(int *)((int)((lVar53 + 8U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar11 + iVar48;
        }
      }
      else {
        uVar28 = (uVar16 ^ (longlong)iVar46) - (longlong)iVar46;
        if ((iVar12 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + -1,*(undefined4 *)(param_1 + 0x564),
                                0x10);
        uVar28 = (ulonglong)((int)(uVar16 + 4) >> 0x1f);
        piStack_4d8[-1] = iVar11 + iVar48;
        uVar28 = (uVar16 + 4 ^ uVar28) - uVar28;
        if ((iVar12 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,
                                (ulonglong)*(uint *)(param_1 + 0x564) + lVar27 + -1,
                                (ulonglong)*(uint *)(param_1 + 0x564),0x10);
        piStack_4d8[6] = iVar11 + iVar48;
      }
    }
    else if ((iVar12 == (int)puStack_49c - uStack_440) && (uStack_4a8 != 0)) {
      uVar20 = lVar34 - uVar37;
      uVar16 = lVar26 - uVar38;
      uVar17 = (ulonglong)((int)(uVar20 - 4) >> 0x1f);
      uVar15 = (ulonglong)((int)(uVar16 + 4) >> 0x1f);
      uVar17 = (uVar20 - 4 ^ uVar17) - uVar17;
      lVar29 = uVar28 + lVar36 + lVar27;
      uVar15 = (uVar16 + 4 ^ uVar15) - uVar15;
      iVar12 = (int)uVar17;
      iVar46 = (int)uVar15;
      if ((iVar12 < 0x9f) && (iVar46 < 0x9f)) {
        iVar45 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar45 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      lVar39 = (uVar13 & 0x1fffffff) * 8 - uVar13;
      lVar44 = lVar39 + lVar36;
      iVar9 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29 + -1,uVar28,0x10);
      uVar28 = (ulonglong)((int)uVar20 >> 0x1f);
      uVar28 = (uVar20 ^ uVar28) - uVar28;
      *(int *)((int)((lVar44 + 6U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar9 + iVar45;
      if (((int)uVar28 < 0x9f) && (iVar46 < 0x9f)) {
        iVar45 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar45 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29,*(undefined4 *)(iStack00000014 + 0x564),0x10
                            );
      uVar28 = (ulonglong)((int)(uVar20 + 4) >> 0x1f);
      uVar28 = (uVar20 + 4 ^ uVar28) - uVar28;
      *(int *)((int)((lVar44 + 7U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar9 + iVar45;
      iVar45 = (int)uVar28;
      if ((iVar45 < 0x9f) && (iVar46 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar46 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcStack_4e0)(uStack0000001c,0x10,lVar29 + 1,*(undefined4 *)(iStack00000014 + 0x564),
                             0x10);
      *(int *)((int)((lVar44 + 8U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar9 + iVar46;
      iVar46 = (int)uVar16 >> 0x1f;
      if ((iVar11 != 0) || (bVar51)) {
        if ((iVar11 == iVar48) && (bVar52)) {
          uVar15 = (uVar16 ^ (longlong)iVar46) - (longlong)iVar46;
          if ((iVar45 < 0x9f) && ((int)uVar15 < 0x9f)) {
            iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c);
          }
          else {
            iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
          }
          lVar39 = lVar39 + lVar53;
          iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + 1,
                                  *(undefined4 *)(iStack00000014 + 0x564),0x10);
          uVar15 = (ulonglong)((int)(uVar16 - 4) >> 0x1f);
          uVar15 = (uVar16 - 4 ^ uVar15) - uVar15;
          *(int *)((int)((lVar39 + 1U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar11 + iVar48;
          if ((iVar45 < 0x9f) && ((int)uVar15 < 0x9f)) {
            iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                             in_stack_0000009c);
          }
          else {
            iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
          }
          iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,
                                  (lVar27 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + 1,
                                  (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
          *(int *)((int)((lVar39 - 6U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar11 + iVar48;
        }
      }
      else {
        uVar28 = (uVar16 ^ (longlong)iVar46) - (longlong)iVar46;
        if ((iVar12 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar11 = (int)(((uVar13 & 0x1fffffff) * 8 - uVar13 & 0xffffffff) << 2);
        iVar46 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + -1,
                                *(undefined4 *)(iStack00000014 + 0x564),0x10);
        uVar28 = (ulonglong)((int)(uVar16 - 4) >> 0x1f);
        *(int *)((int)piStack_4d8 + iVar11 + -4) = iVar46 + iVar48;
        uVar28 = (uVar16 - 4 ^ uVar28) - uVar28;
        if ((iVar12 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar12 = (*pcStack_4e0)(uStack0000001c,0x10,
                                (lVar27 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + -1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        *(int *)((int)piStack_4d8 + iVar11 + -0x20) = iVar12 + iVar48;
      }
    }
    else if ((iVar11 != 0) || (bVar51)) {
      if ((iVar11 == iVar48) && (bVar52)) {
        uVar16 = lVar26 - uVar38;
        uVar17 = (lVar34 - uVar37) + 4;
        uVar15 = (ulonglong)((int)uVar17 >> 0x1f);
        uVar28 = (ulonglong)((int)(uVar16 - 4) >> 0x1f);
        uVar15 = (uVar17 ^ uVar15) - uVar15;
        uVar28 = (uVar16 - 4 ^ uVar28) - uVar28;
        iVar48 = (int)uVar15;
        if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar11 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        lVar53 = ((uVar13 & 0x1fffffff) * 8 - uVar13) + lVar53;
        iVar12 = (*pcStack_4e0)(uStack0000001c,0x10,
                                (lVar27 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + 1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        uVar28 = (ulonglong)((int)uVar16 >> 0x1f);
        uVar28 = (uVar16 ^ uVar28) - uVar28;
        *(int *)((int)((lVar53 - 6U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar12 + iVar11;
        if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar11 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar12 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + 1,
                                *(undefined4 *)(iStack00000014 + 0x564),0x10);
        uVar28 = (ulonglong)((int)(uVar16 + 4) >> 0x1f);
        uVar28 = (uVar16 + 4 ^ uVar28) - uVar28;
        *(int *)((int)((lVar53 + 1U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar12 + iVar11;
        if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
          iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564) + lVar27 + 1,
                                (ulonglong)*(uint *)(iStack00000014 + 0x564),0x10);
        *(int *)((int)((lVar53 + 8U & 0xffffffff) << 2) + (int)piStack_4d8) = iVar11 + iVar48;
      }
    }
    else {
      uVar16 = lVar26 - uVar38;
      uVar17 = (lVar34 - uVar37) - 4;
      uVar15 = (ulonglong)((int)uVar17 >> 0x1f);
      uVar28 = (ulonglong)((int)(uVar16 - 4) >> 0x1f);
      uVar15 = (uVar17 ^ uVar15) - uVar15;
      uVar28 = (uVar16 - 4 ^ uVar28) - uVar28;
      iVar48 = (int)uVar15;
      if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
        iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar11 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar46 = (*pcStack_4e0)(uStack0000001c,0x10,
                              (lVar27 - (ulonglong)*(uint *)(param_1 + 0x564)) + -1,
                              (ulonglong)*(uint *)(param_1 + 0x564),0x10);
      uVar28 = (ulonglong)((int)uVar16 >> 0x1f);
      piStack_4d8[iVar12 * 7 + -8] = iVar46 + iVar11;
      uVar28 = (uVar16 ^ uVar28) - uVar28;
      if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
        iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar11 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar46 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27 + -1,*(undefined4 *)(param_1 + 0x564),0x10)
      ;
      uVar28 = (ulonglong)((int)(uVar16 + 4) >> 0x1f);
      piStack_4d8[iVar12 * 7 + -1] = iVar46 + iVar11;
      uVar28 = (uVar16 + 4 ^ uVar28) - uVar28;
      if ((iVar48 < 0x9f) && ((int)uVar28 < 0x9f)) {
        iVar48 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar28 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar48 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar11 = (*pcStack_4e0)(uStack0000001c,0x10,
                              (ulonglong)*(uint *)(param_1 + 0x564) + lVar27 + -1,
                              (ulonglong)*(uint *)(param_1 + 0x564),0x10);
      piStack_4d8[iVar12 * 7 + 6] = iVar11 + iVar48;
    }
    puVar6 = puStack_498;
    iVar48 = iStack00000014;
    uVar15 = ((lVar34 - uVar37) + (ulonglong)*(uint *)(iStack00000014 + 0xa2c) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa34)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa2c);
    uVar28 = ((lVar26 - uVar38) + (ulonglong)*(uint *)(iStack00000014 + 0xa30) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa38)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa30);
    if (*(int *)(iStack00000014 + 0x6d84) == 0) {
      if (uStack_4a4 != 0) {
        uVar16 = (ulonglong)((int)uVar15 >> 0x1f);
        uVar17 = (ulonglong)((int)uVar28 >> 0x1f);
        uVar16 = (uVar15 ^ uVar16) - uVar16;
        pcStack_4e0 = *(code **)(in_stack_000000a4 + 0xc);
        uVar17 = (uVar28 ^ uVar17) - uVar17;
        if (((int)uVar16 < 0x9f) && ((int)uVar17 < 0x9f)) {
          iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar16 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000009c);
        }
        else {
          iVar11 = *(int *)(in_stack_0000009c + 0x14) << 1;
        }
        iVar12 = (*pcStack_4e0)(uStack0000001c,0x10,lVar27,*(undefined4 *)(iStack00000014 + 0x564),
                                0x10);
        uStack_4c0 = iVar12 + iVar11;
      }
      puStack_49c = &uStack_4bc;
      puStack_474 = puStack_498;
      piStack_484 = piStack_4d8;
      (**(code **)(iVar48 + 0x6f28))
                (iVar48,uStack0000001c,lVar27,lVar36,uVar13,uStack_4c0,bVar50,uStack_4a8);
      puVar6 = puStack_498;
      uVar49 = (uint)(uVar37 & 3);
      uVar32 = (uint)(uVar38 & 3);
      if (((uVar49 != 0) || (uVar32 != 0)) &&
         ((iVar7 + uStack_4c4 != iVar31 || (iVar8 + uStack_4bc != iVar18)))) {
        uVar28 = (ulonglong)(int)uVar19;
        uVar25 = in_stack_00000064;
        if (((int)uVar19 < (int)in_stack_00000064) ||
           (uVar25 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar19)) {
          uVar28 = (ulonglong)uVar25;
        }
        uVar25 = in_stack_00000074;
        if (((int)uVar43 < (int)in_stack_00000074) ||
           (uVar33 = uVar43, uVar25 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar43)) {
          uVar33 = uVar25;
        }
        (**(code **)(iStack00000014 + 0x9b8))
                  ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar33 + uVar28 +
                   (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),puStack_498,0x10,
                   uVar37 & 3,uVar38 & 3,1,*(undefined4 *)(iStack00000014 + 0x618));
        iVar8 = (*pcStack_4e0)(uStack0000001c,0x10,puVar6,0x10,0x10);
        uVar25 = *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                 *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar8;
        if ((int)uVar25 < (int)uStack_4c0) {
          uStack_4b0 = 0;
          uStack_4b8 = 0;
          uStack_4c4 = uVar49;
          uStack_4c0 = uVar25;
          uStack_4bc = uVar32;
          uStack_4b4 = uVar19;
          uStack_4ac = uVar43;
        }
      }
      puVar6 = puStack_498;
      puVar40 = (uint *)uStack_4c0;
      if (in_stack_00000084 != 0) {
        uVar43 = in_stack_00000054 & 3;
        uVar19 = in_stack_0000005c & 3;
        if (((uVar43 != 0) || (uVar19 != 0)) &&
           (((uStack_4b8 + uStack_4b4) * 4 + uStack_4c4 != in_stack_00000054 ||
            ((uStack_4b0 + uStack_4ac) * 4 + uStack_4bc != in_stack_0000005c)))) {
          uVar28 = (ulonglong)(int)uVar3;
          if (((int)uVar3 < (int)in_stack_00000064) ||
             (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar3)) {
            uVar28 = (ulonglong)in_stack_00000064;
          }
          if (((int)uVar4 < (int)in_stack_00000074) ||
             (uVar32 = uVar4, in_stack_00000074 = in_stack_0000007c,
             (int)in_stack_0000007c < (int)uVar4)) {
            uVar32 = in_stack_00000074;
          }
          (**(code **)(iStack00000014 + 0x9b8))
                    ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar32 + uVar28 +
                     (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),puStack_498,0x10,
                     uVar43,uVar19,1,*(undefined4 *)(iStack00000014 + 0x618));
          iVar8 = (*pcStack_4e0)(uStack0000001c,0x10,puVar6,0x10,0x10);
          uVar32 = iVar8 + *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                           *(int *)(lbl_831898B8 * 4 + in_stack_0000009c);
          puVar40 = (uint *)uStack_4c0;
          if ((int)uVar32 < (int)uStack_4c0) {
            uStack_4b0 = 0;
            uStack_4b8 = 0;
            puVar40 = (uint *)uVar32;
            uStack_4c4 = uVar43;
            uStack_4bc = uVar19;
            uStack_4b4 = uVar3;
            uStack_4ac = uVar4;
          }
        }
      }
    }
    else {
      (**(code **)(iStack00000014 + 0x9c0))
                (lVar27,*(undefined4 *)(iStack00000014 + 0x564),puStack_498,0x10,iVar7,iVar8,1,
                 *(undefined4 *)(iStack00000014 + 0x618));
      iVar11 = iStack_48c;
      uVar14 = uStack0000001c;
      fn_82E9AC18(iVar48,uStack0000001c,0x10,puVar6,0x10,0x10,0x10,iStack_48c);
      iVar12 = fn_82E9B140(iVar48,uVar15,uVar28,uStack_4c8,0);
      pcStack_4e0 = pcStack_4e0 + iVar12;
      if (in_stack_00000084 != 0) {
        pcStack_4e0 = pcStack_4e0 + 1;
      }
      puStack_49c = &uStack_4c4;
      lVar26 = (longlong)*(int *)(iVar11 + 0x6c) * (longlong)(int)pcStack_4e0 +
               (ulonglong)uStack_4d0;
      puStack_4a0 = (uint *)lVar26;
      fn_82EA44A8(iVar48,uVar14,lVar27,lVar36,uVar13,lVar26,bVar50,uStack_4a8);
      puVar6 = puStack_498;
      iVar48 = iStack00000014;
      if ((iVar7 + uStack_4c4 != iVar31) || (puVar40 = puStack_4a0, iVar8 + uStack_4bc != iVar18)) {
        uVar28 = (ulonglong)(int)uVar19;
        uVar32 = in_stack_00000064;
        if (((int)uVar19 < (int)in_stack_00000064) ||
           (uVar32 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar19)) {
          uVar28 = (ulonglong)uVar32;
        }
        uVar32 = in_stack_00000074;
        if (((int)uVar43 < (int)in_stack_00000074) ||
           (uVar49 = uVar43, uVar32 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar43)) {
          uVar49 = uVar32;
        }
        (**(code **)(iStack00000014 + 0x9b8))
                  ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar49 + uVar28 +
                   (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),puStack_498,0x10,
                   uVar37 & 3,uVar38 & 3,1,*(undefined4 *)(iStack00000014 + 0x618));
        iVar8 = iStack_48c;
        fn_82E9AC18(iVar48,uStack0000001c,0x10,puVar6,0x10,0x10,0x10,iStack_48c);
        iVar7 = fn_82E9B140(iVar48,0,0,uStack_4c8,0);
        pcStack_4e0 = pcStack_4e0 + iVar7;
        if (in_stack_00000084 != 0) {
          pcStack_4e0 = pcStack_4e0 + 1;
        }
        uVar32 = *(int *)(iVar8 + 0x6c) * (int)pcStack_4e0 + uStack_4d0;
        puVar40 = puStack_4a0;
        if ((int)uVar32 < (int)puStack_4a0) {
          uStack_4c4 = (uint)(uVar37 & 3);
          uStack_4bc = (uint)(uVar38 & 3);
          uStack_4b0 = 0;
          uStack_4b8 = 0;
          puVar40 = (uint *)uVar32;
          uStack_4b4 = uVar19;
          uStack_4ac = uVar43;
        }
      }
      puVar6 = puStack_498;
      iVar8 = iStack00000014;
      if ((in_stack_00000084 != 0) &&
         (((uStack_4b8 + uStack_4b4) * 4 + uStack_4c4 != in_stack_00000054 ||
          ((uStack_4b0 + uStack_4ac) * 4 + uStack_4bc != in_stack_0000005c)))) {
        uVar28 = (ulonglong)(int)uVar3;
        if (((int)uVar3 < (int)in_stack_00000064) ||
           (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar3)) {
          uVar28 = (ulonglong)in_stack_00000064;
        }
        if (((int)uVar4 < (int)in_stack_00000074) ||
           (uVar43 = uVar4, in_stack_00000074 = in_stack_0000007c,
           (int)in_stack_0000007c < (int)uVar4)) {
          uVar43 = in_stack_00000074;
        }
        (**(code **)(iStack00000014 + 0x9b8))
                  ((longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar43 + uVar28 +
                   (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),puStack_498,0x10,
                   in_stack_00000054 & 3,in_stack_0000005c & 3,1,
                   *(undefined4 *)(iStack00000014 + 0x618));
        iVar7 = iStack_48c;
        fn_82E9AC18(iVar8,uStack0000001c,0x10,puVar6,0x10,0x10,0x10,iStack_48c);
        iVar8 = fn_82E9B140(iVar8,0,0,uStack_4c8,0);
        uVar43 = *(int *)(iVar7 + 0x6c) * (int)(pcStack_4e0 + iVar8 + 1) + uStack_4d0;
        if ((int)uVar43 < (int)puVar40) {
          uStack_4b0 = 0;
          uStack_4b8 = 0;
          puVar40 = (uint *)uVar43;
          uStack_4c4 = in_stack_00000054 & 3;
          uStack_4bc = in_stack_0000005c & 3;
          uStack_4b4 = uVar3;
          uStack_4ac = uVar4;
        }
      }
    }
  }
  *in_stack_000000b4 = (uStack_4b8 + uStack_4b4) * 4 + uStack_4c4;
  *in_stack_000000bc = (uStack_4b0 + uStack_4ac) * 4 + uStack_4bc;
  *in_stack_000000c4 = (uint)puVar40;
  return;
}


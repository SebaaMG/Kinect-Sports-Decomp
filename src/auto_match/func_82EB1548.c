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
extern unsigned int *auStack_270;
extern unsigned int *auStack_340;
extern unsigned int *auStack_410;
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82E9F460();
extern int fn_82EFE140();
extern unsigned int iStack00000034;
extern unsigned int *iStack0000003c;
extern unsigned int iStack_498;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_438;
extern unsigned int uStack_43c;
extern unsigned int uStack_440;
extern unsigned int uStack_444;
extern unsigned int uStack_448;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_454;
extern unsigned int uStack_458;
extern unsigned int uStack_464;
extern unsigned int uStack_470;
extern unsigned int uStack_474;
extern unsigned int uStack_478;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a4;


/* WARNING: Removing unreachable block (ram,0x82eb1e78) */
/* WARNING: Removing unreachable block (ram,0x82eb2ee0) */

void fn_82EB1548(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                  uint param_7,uint param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar14;
  longlong lVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
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
  int *in_stack_000000cc;
  code *pcStack_4b0;
  undefined1 *puStack_4ac;
  undefined1 *puStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  int *piStack_49c;
  int iStack_498;
  uint uStack_494;
  uint uStack_490;
  uint uStack_48c;
  uint uStack_488;
  uint uStack_484;
  uint uStack_480;
  uint *puStack_47c;
  uint uStack_478;
  uint uStack_474;
  uint uStack_470;
  undefined1 *puStack_46c;
  uint *puStack_468;
  uint uStack_464;
  code *pcStack_460;
  undefined1 *puStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  uint uStack_43c;
  uint uStack_438;
  undefined1 auStack_410 [208];
  undefined1 auStack_340 [208];
  undefined1 auStack_270 [176];
  undefined1 auStack_1c0 [448];
  
  puStack_45c = auStack_1c0;
  if ((*(uint *)(param_1 + 0x6db8) & 1) == 0) {
    uVar14 = in_stack_000000b4;
    if ((*(uint *)(param_1 + 0x6db8) & 4) == 0) {
      uVar14 = 0;
    }
  }
  else {
    uVar14 = 1;
  }
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  uStack_490 = fn_82EFE140(param_1,in_stack_000000ac,uVar14);
  pcStack_460 = *(code **)(in_stack_000000ac + 8);
  pcStack_4b0 = *(code **)(in_stack_000000ac + 0xc);
  iVar7 = ((int)param_7 >> 2) + 2 >> 2;
  puStack_468 = (uint *)((*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 +
                        *(int *)(param_1 + 0x1e54));
  iVar15 = 0;
  iVar8 = ((int)param_8 >> 2) + 2 >> 2;
  if (in_stack_00000084 != 0) {
    iVar10 = ((int)in_stack_00000054 >> 2) + 2 >> 2;
    iVar11 = ((int)in_stack_0000005c >> 2) + 2 >> 2;
    if (0 < in_stack_00000094) {
      piVar21 = (int *)(param_4 + 0x100);
      do {
        if ((iVar10 == piVar21[-0x20]) && (iVar11 == *piVar21)) break;
        iVar15 = iVar15 + 1;
        piVar21 = piVar21 + 1;
      } while (iVar15 < in_stack_00000094);
    }
    if (iVar15 == in_stack_00000094) {
      in_stack_00000094 = in_stack_00000094 + 1;
      *(int *)((iVar15 + 0x20) * 4 + param_4) = iVar10;
      *(int *)((iVar15 + 0x40) * 4 + param_4) = iVar11;
    }
  }
  iVar15 = 0;
  if (0 < in_stack_00000094) {
    piVar21 = (int *)(param_4 + 0x100);
    do {
      if ((iVar7 == piVar21[-0x20]) && (iVar8 == *piVar21)) break;
      iVar15 = iVar15 + 1;
      piVar21 = piVar21 + 1;
    } while (iVar15 < in_stack_00000094);
  }
  if (iVar15 == in_stack_00000094) {
    in_stack_00000094 = in_stack_00000094 + 1;
    *(int *)((iVar15 + 0x20) * 4 + param_4) = iVar7;
    *(int *)((iVar15 + 0x40) * 4 + param_4) = iVar8;
  }
  uStack_458 = (int)param_7 >> 1;
  uStack_440 = (int)in_stack_00000054 >> 1;
  uStack_464 = (int)param_8 >> 1;
  lVar32 = 0xfffffff;
  puStack_4a8 = auStack_410;
  puStack_46c = auStack_270;
  iStack_498 = 0xfffffff;
  puStack_4ac = auStack_340;
  uStack_448 = (int)in_stack_0000005c >> 1;
  uStack_474 = 0;
  piStack_49c = (int *)&lbl_831898B8;
  if (0 < in_stack_00000094) {
    puStack_47c = (uint *)(param_4 + 0x80);
    uVar30 = ZEXT48(puStack_468);
    uVar29 = ZEXT48(puStack_468);
    lVar38 = lVar32;
    do {
      pcVar5 = pcStack_460;
      puVar3 = puStack_4a8;
      uVar14 = uStack0000001c;
      bVar42 = true;
      uVar27 = (ulonglong)in_stack_0000008c;
      uVar17 = (ulonglong)uStack_474;
      uVar26 = -uVar27;
      uVar35 = puStack_47c[0x20];
      uVar39 = *puStack_47c;
      iVar7 = (int)((ulonglong)uVar35 & 0x3fffffff);
      uStack_454 = iVar7 * 4;
      uStack_4a4 = in_stack_0000008c;
      lVar12 = ((ulonglong)uVar39 & 0x3fffffff) * 4;
      uStack_44c = (uint)lVar12;
      uStack_478 = (uint)uVar26;
      lVar12 = (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uStack_454 + lVar12 +
               (ulonglong)uStack00000024;
      uVar37 = uVar26;
      uVar28 = in_stack_0000008c;
      if ((1 < (int)in_stack_0000008c) && (uVar18 = uVar27, puVar22 = puStack_47c, uStack_474 != 0))
      {
        do {
          uStack_4a4 = (uint)uVar27;
          uVar28 = (uint)uVar18;
          if (!bVar42) break;
          uVar28 = puVar22[-1];
          if (uVar28 == uVar39) {
            if (puVar22[0x1f] == uVar35 - 1) {
              uVar37 = uVar37 + 1;
              bVar42 = false;
            }
            if (puVar22[0x1f] == uVar35 + 1) {
              uVar27 = uVar27 - 1;
LAB_82eb1854:
              bVar42 = false;
            }
          }
          else if (puVar22[0x1f] == uVar35) {
            if (uVar28 == uVar39 - 1) {
              uVar26 = uVar26 + 1;
              bVar42 = false;
            }
            if (uVar28 == uVar39 + 1) {
              uVar18 = uVar18 - 1;
              goto LAB_82eb1854;
            }
          }
          uStack_4a4 = (uint)uVar27;
          uVar28 = (uint)uVar18;
          uVar17 = uVar17 - 1;
          puVar22 = puVar22 + -1;
        } while (uVar17 != 0);
        uStack_478 = (uint)uVar37;
      }
      if ((int)((int)uVar26 + uStack_44c) < (int)in_stack_00000064) {
        uVar26 = (ulonglong)in_stack_00000064 + ((ulonglong)uVar39 & 0x3fffffff) * -4;
      }
      if ((int)in_stack_0000006c < (int)(uVar28 + uStack_44c)) {
        uVar28 = in_stack_0000006c - uStack_44c;
      }
      if ((int)((int)uVar37 + uStack_454) < (int)in_stack_00000074) {
        uVar37 = (ulonglong)in_stack_00000074 + ((ulonglong)uVar35 & 0x3fffffff) * -4;
        uStack_478 = (uint)uVar37;
      }
      if ((int)in_stack_0000007c < (int)(uStack_4a4 + uStack_454)) {
        uStack_4a4 = in_stack_0000007c + iVar7 * -4;
      }
      uVar35 = (uint)uVar26;
      if (in_stack_00000084 == 0) {
        if ((int)uVar37 <= (int)uStack_4a4) {
          iVar7 = 0;
          uVar39 = (uStack_478 + uStack_454) * 2 - uStack_464;
          do {
            iVar8 = 0;
            if ((int)uVar35 <= (int)uVar28) {
              iVar15 = (uVar39 ^ (int)uVar39 >> 0x1f) - ((int)uVar39 >> 0x1f);
              uVar17 = (uVar26 + uStack_44c & 0x7fffffff) * 2 - (ulonglong)uStack_458;
              uVar27 = uVar26;
              do {
                lVar34 = (*pcVar5)(uVar14,0x10,
                                   (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar37 +
                                   uVar27 + lVar12,*(int *)(param_1 + 0x564),lVar32);
                uVar18 = (ulonglong)((int)uVar17 >> 0x1f);
                uVar18 = (uVar17 ^ uVar18) - uVar18;
                if (((int)uVar18 < 0x9f) && (iVar15 < 0x9f)) {
                  lVar6 = (ulonglong)*(uint *)(piStack_49c[iVar15] * 4 + in_stack_000000a4) +
                          (ulonglong)
                          *(uint *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + (int)piStack_49c) *
                                    4 + in_stack_000000a4);
                }
                else {
                  lVar6 = ((ulonglong)*(uint *)(in_stack_000000a4 + 0x14) & 0x7fffffff) << 1;
                }
                iVar10 = (int)(lVar6 + lVar34);
                if (iVar10 < (int)lVar38) {
                  lVar32 = lVar38 + 1;
                  uVar29 = uVar37;
                  uVar30 = uVar27;
                  lVar38 = lVar6 + lVar34;
                }
                iVar11 = iVar7 + iVar8;
                uVar27 = uVar27 + 1;
                uVar17 = uVar17 + 2;
                iVar8 = iVar8 + 1;
                *(int *)(puStack_4a8 + iVar11 * 4) = iVar10;
              } while ((int)uVar27 <= (int)uVar28);
            }
            uVar37 = uVar37 + 1;
            uVar39 = uVar39 + 2;
            iVar7 = iVar7 + 7;
          } while ((int)uVar37 <= (int)uStack_4a4);
        }
      }
      else if ((int)uVar37 <= (int)uStack_4a4) {
        iVar7 = 0;
        lVar34 = ((ulonglong)uStack_478 + (ulonglong)uStack_454 & 0x7fffffff) * 2;
        uVar27 = lVar34 - (ulonglong)uStack_448;
        do {
          iVar8 = 0;
          if ((int)uVar35 <= (int)uVar28) {
            uVar20 = (ulonglong)((int)uVar27 >> 0x1f);
            uVar23 = (ulonglong)uStack_440;
            uVar18 = (ulonglong)uStack_458;
            uVar20 = (uVar27 ^ uVar20) - uVar20;
            uVar40 = (uVar26 + uStack_44c & 0x7fffffff) * 2 - uVar23;
            uVar17 = uVar26;
            do {
              lVar6 = (*pcStack_460)(uStack0000001c,0x10,
                                     (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar37 +
                                     uVar17 + lVar12,*(int *)(param_1 + 0x564),lVar32);
              uVar19 = (uVar23 - uVar18) + uVar40;
              uVar16 = (ulonglong)((int)uVar19 >> 0x1f);
              uVar13 = (ulonglong)((int)(lVar34 - (ulonglong)uStack_464) >> 0x1f);
              uVar16 = (uVar19 ^ uVar16) - uVar16;
              uVar13 = (lVar34 - (ulonglong)uStack_464 ^ uVar13) - uVar13;
              if (((int)uVar16 < 0x9f) && ((int)uVar13 < 0x9f)) {
                lVar24 = (ulonglong)
                         *(uint *)(*(int *)((int)((uVar13 & 0xffffffff) << 2) + (int)piStack_49c) *
                                   4 + in_stack_000000a4) +
                         (ulonglong)
                         *(uint *)(*(int *)((int)((uVar16 & 0xffffffff) << 2) + (int)piStack_49c) *
                                   4 + in_stack_000000a4);
              }
              else {
                lVar24 = ((ulonglong)*(uint *)(in_stack_000000a4 + 0x14) & 0x7fffffff) << 1;
              }
              iVar15 = (int)(lVar24 + lVar6);
              if (iVar15 < (int)lVar38) {
                lVar32 = lVar38 + 1;
                uStack_470 = 0;
                uVar29 = uVar37;
                uVar30 = uVar17;
                lVar38 = lVar24 + lVar6;
              }
              uVar13 = (ulonglong)((int)uVar40 >> 0x1f);
              iVar10 = (iVar7 + iVar8) * 4;
              uVar13 = (uVar40 ^ uVar13) - uVar13;
              *(int *)(puStack_4a8 + iVar10) = iVar15;
              if (((int)uVar13 < 0x9f) && ((int)uVar20 < 0x9f)) {
                lVar24 = (ulonglong)
                         *(uint *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + (int)piStack_49c) *
                                   4 + in_stack_000000a4) +
                         (ulonglong)
                         *(uint *)(*(int *)((int)((uVar13 & 0xffffffff) << 2) + (int)piStack_49c) *
                                   4 + in_stack_000000a4);
              }
              else {
                lVar24 = ((ulonglong)*(uint *)(in_stack_000000a4 + 0x14) & 0x7fffffff) << 1;
              }
              iVar15 = (int)(lVar24 + lVar6);
              if (iVar15 < (int)lVar38) {
                lVar32 = lVar38 + 1;
                uStack_470 = 1;
                uVar29 = uVar37;
                uVar30 = uVar17;
                lVar38 = lVar24 + lVar6;
              }
              uVar17 = uVar17 + 1;
              uVar40 = uVar40 + 2;
              iVar8 = iVar8 + 1;
              *(int *)(puStack_46c + iVar10) = iVar15;
            } while ((int)uVar17 <= (int)uVar28);
          }
          uVar37 = uVar37 + 1;
          lVar34 = lVar34 + 2;
          uVar27 = uVar27 + 2;
          iVar7 = iVar7 + 7;
        } while ((int)uVar37 <= (int)uStack_4a4);
      }
      puVar4 = puStack_46c;
      iVar7 = (int)lVar38;
      if (iVar7 < iStack_498) {
        uStack_48c = uStack_454;
        uStack_484 = uStack_44c;
        uStack_480 = (uint)uVar30;
        uStack_488 = (uint)uVar29;
        uStack_450 = uStack_478;
        uStack_444 = uStack_4a4;
        iStack_498 = iVar7;
        uStack_43c = uVar28;
        uStack_438 = uVar35;
        if ((in_stack_00000084 == 0) || (uStack_470 == 0)) {
          puStack_4a8 = puStack_4ac;
          puStack_4ac = puVar3;
        }
        else {
          puStack_46c = puStack_4ac;
          puStack_4ac = puVar4;
        }
      }
      uStack_474 = uStack_474 + 1;
      puStack_47c = puStack_47c + 1;
    } while ((int)uStack_474 < in_stack_00000094);
  }
  uVar18 = (ulonglong)uStack_480;
  uVar26 = (ulonglong)uStack_484;
  uVar17 = (ulonglong)uStack_488;
  uVar20 = uVar18 + uVar26;
  uVar23 = uVar17 + uStack_48c;
  uVar37 = (ulonglong)uStack0000004c;
  lVar38 = (uVar20 & 0x3fffffff) * 4;
  uVar27 = (ulonglong)uStack00000044;
  lVar32 = (uVar23 & 0x3fffffff) * 4;
  uVar39 = (uint)lVar38;
  uVar35 = (uint)lVar32;
  uVar29 = uVar37;
  uVar30 = uVar27;
  pcStack_460 = (code *)uVar35;
  uStack_458 = uVar39;
  if (in_stack_00000084 != 0) {
    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa30);
    uVar40 = (ulonglong)*(uint *)(param_1 + 0xa2c);
    uVar28 = *(uint *)(param_1 + 0xa38);
    uVar1 = *(uint *)(param_1 + 0xa34);
    iVar7 = fn_82E9B140(param_1,((uVar40 - uVar27) + lVar38 & (ulonglong)uVar1) - uVar40,
                          ((uVar13 - uVar37) + lVar32 & (ulonglong)uVar28) - uVar13,1,1);
    uVar29 = (ulonglong)in_stack_0000005c;
    uVar30 = (ulonglong)in_stack_00000054;
    iVar8 = fn_82E9B140(param_1,((uVar40 - uVar30) + lVar38 & (ulonglong)uVar1) - uVar40,
                          ((uVar13 - uVar29) + lVar32 & (ulonglong)uVar28) - uVar13,1,1);
    if (iVar8 > iVar7) {
      uVar29 = uVar37;
      uVar30 = uVar27;
    }
    uStack_470 = (uint)(iVar8 <= iVar7);
  }
  if ((*(uint *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000b4 = 0;
    }
  }
  else {
    in_stack_000000b4 = 1;
  }
  uVar28 = fn_82EFE140(param_1,in_stack_000000ac,in_stack_000000b4);
  uVar41 = uStack_450;
  puVar3 = puStack_45c;
  uVar14 = uStack0000001c;
  uStack_490 = uVar28 ^ uStack_490;
  iVar7 = (int)uVar29;
  uVar28 = iVar7 >> 2;
  iVar8 = (int)uVar30;
  uVar1 = iVar8 >> 2;
  if (iStack_498 == 0xfffffff) {
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_4a0 = (uint)(uVar30 & 3);
    uStack_494 = (uint)(uVar29 & 3);
    if (in_stack_0000009c == 1) {
      uStack_48c = uVar28;
      uStack_484 = uVar1;
      (**(code **)(param_1 + 0x9b8))();
    }
    else {
      uStack_48c = uVar28;
      uStack_484 = uVar1;
      (**(code **)(param_1 + 0x9c0))
                ((longlong)(int)uVar28 * (longlong)*(int *)(param_1 + 0x564) + (longlong)(int)uVar1
                 + (ulonglong)uStack00000024,*(int *)(param_1 + 0x564),puStack_45c,0x10,uVar30 & 3,
                 uVar29 & 3,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
    }
    iVar7 = (*pcStack_4b0)(uStack0000001c,0x10,puVar3,0x10,0x10);
    puVar22 = (uint *)(*(int *)(*piStack_49c * 4 + in_stack_000000a4) +
                       *(int *)(*piStack_49c * 4 + in_stack_000000a4) + iVar7);
  }
  else {
    uVar37 = (ulonglong)*(uint *)(param_1 + 0x564);
    puStack_46c = (undefined1 *)(uint)(in_stack_00000074 != uVar23);
    uVar27 = (ulonglong)uStack_450;
    bVar42 = in_stack_00000064 == uVar20;
    uStack_474 = (uint)(in_stack_0000007c != uVar23);
    uStack_450 = uStack_43c;
    bVar43 = in_stack_0000006c != uVar20;
    iVar15 = ((*(int *)(param_1 + 0xa2c) - iVar8) + uVar39 & *(uint *)(param_1 + 0xa34)) -
             *(int *)(param_1 + 0xa2c);
    uVar17 = uVar17 - uVar27;
    uStack_464 = uStack_444 - uVar41;
    uVar39 = iVar15 >> 1;
    lVar12 = (longlong)(int)uVar39;
    lVar32 = (ulonglong)uStack_43c - (ulonglong)uStack_438;
    lVar38 = uVar18 - uStack_438;
    lVar6 = (longlong)(int)uVar23 * (longlong)(int)*(uint *)(param_1 + 0x564) + uVar18 + uVar26 +
            (ulonglong)uStack00000024;
    lVar34 = (longlong)
             ((int)(((*(int *)(param_1 + 0xa30) - iVar7) + uVar35 & *(uint *)(param_1 + 0xa38)) -
                   *(int *)(param_1 + 0xa30)) >> 1);
    iVar36 = (int)uVar17;
    iVar10 = (int)lVar32;
    iVar11 = (int)lVar38;
    uVar35 = iVar15 >> 0x1f;
    if ((iVar36 == 0) && (puStack_46c != (undefined1 *)0x0)) {
      uVar18 = lVar12 - 2;
      uVar26 = (ulonglong)((int)uVar18 >> 0x1f);
      uVar27 = (ulonglong)((int)(lVar34 - 2U) >> 0x1f);
      lVar24 = (lVar38 - uVar37) + lVar6;
      uVar26 = (uVar18 ^ uVar26) - uVar26;
      uVar27 = (lVar34 - 2U ^ uVar27) - uVar27;
      iVar15 = (int)uVar27;
      if (((int)uVar26 < 0x9f) && (iVar15 < 0x9f)) {
        iVar36 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)((int)((uVar26 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar36 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24 + -1,uVar37,0x10);
      iVar25 = (uVar39 ^ uVar35) - uVar35;
      *(int *)(puStack_4ac + (int)((lVar38 - 8U & 0xffffffff) << 2)) = iVar9 + iVar36;
      if ((iVar25 < 0x9f) && (iVar15 < 0x9f)) {
        iVar36 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) + *(int *)(piStack_49c[iVar25] * 4 + in_stack_000000a4);
      }
      else {
        iVar36 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar14 = uStack0000001c;
      uVar26 = lVar12 + 2;
      uVar37 = (ulonglong)((int)uVar26 >> 0x1f);
      uVar37 = (uVar26 ^ uVar37) - uVar37;
      *(int *)(puStack_4ac + (int)((lVar38 - 7U & 0xffffffff) << 2)) = iVar9 + iVar36;
      if (((int)uVar37 < 0x9f) && (iVar15 < 0x9f)) {
        iVar15 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)((int)((uVar37 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar15 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar36 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24 + 1,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar2 = uStack0000001c;
      *(int *)(puStack_4ac + (int)((lVar38 - 6U & 0xffffffff) << 2)) = iVar36 + iVar15;
      if ((iVar11 != 0) || (bVar42)) {
        if ((iVar11 == iVar10) && (bVar43)) {
          iVar15 = (*pcStack_4b0)(uStack0000001c,0x10,lVar6 + 1,*(undefined4 *)(param_1 + 0x564),
                                  0x10);
          iVar10 = fn_82E9AB00(param_1,uVar26,lVar34,in_stack_000000a4);
          uVar35 = *(uint *)(param_1 + 0x564);
          *(int *)(puStack_4ac + (int)((lVar32 + 1U & 0xffffffff) << 2)) = iVar15 + iVar10;
          iVar15 = (*pcStack_4b0)(uVar2,0x10,(ulonglong)uVar35 + lVar6 + 1,(ulonglong)uVar35,0x10);
          iVar10 = fn_82E9AB00(param_1,uVar26,lVar34 + 2,in_stack_000000a4);
          *(int *)(puStack_4ac + (int)((lVar32 + 8U & 0xffffffff) << 2)) = iVar15 + iVar10;
        }
      }
      else {
        iVar15 = (*pcStack_4b0)(uVar14,0x10,lVar6 + -1,*(undefined4 *)(param_1 + 0x564),0x10);
        iVar10 = fn_82E9AB00(param_1,uVar18,lVar34,in_stack_000000a4);
        uVar35 = *(uint *)(param_1 + 0x564);
        *(int *)(puStack_4ac + -4) = iVar15 + iVar10;
        iVar15 = (*pcStack_4b0)(uVar14,0x10,(ulonglong)uVar35 + lVar6 + -1,(ulonglong)uVar35,0x10);
        iVar10 = fn_82E9AB00(param_1,uVar18,lVar34 + 2,in_stack_000000a4);
        *(int *)(puStack_4ac + 0x18) = iVar15 + iVar10;
      }
    }
    else if ((iVar36 == uStack_464) && (uStack_474 != 0)) {
      uVar18 = lVar12 - 2;
      uVar26 = (ulonglong)((int)uVar18 >> 0x1f);
      uVar27 = (ulonglong)((int)(lVar34 + 2U) >> 0x1f);
      lVar24 = lVar38 + uVar37 + lVar6;
      uVar26 = (uVar18 ^ uVar26) - uVar26;
      uVar27 = (lVar34 + 2U ^ uVar27) - uVar27;
      iVar15 = (int)uVar27;
      if (((int)uVar26 < 0x9f) && (iVar15 < 0x9f)) {
        iVar36 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)((int)((uVar26 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar36 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      lVar31 = (uVar17 & 0x1fffffff) * 8 - uVar17;
      lVar33 = lVar31 + lVar38;
      iVar9 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24 + -1,uVar37,0x10);
      iVar25 = (uVar39 ^ uVar35) - uVar35;
      *(int *)(puStack_4ac + (int)((lVar33 + 6U & 0xffffffff) << 2)) = iVar9 + iVar36;
      if ((iVar25 < 0x9f) && (iVar15 < 0x9f)) {
        iVar36 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) + *(int *)(piStack_49c[iVar25] * 4 + in_stack_000000a4);
      }
      else {
        iVar36 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar9 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24,*(undefined4 *)(param_1 + 0x564),0x10);
      uVar14 = uStack0000001c;
      uVar26 = lVar12 + 2;
      uVar37 = (ulonglong)((int)uVar26 >> 0x1f);
      uVar37 = (uVar26 ^ uVar37) - uVar37;
      *(int *)(puStack_4ac + (int)((lVar33 + 7U & 0xffffffff) << 2)) = iVar9 + iVar36;
      if (((int)uVar37 < 0x9f) && (iVar15 < 0x9f)) {
        iVar15 = *(int *)(*(int *)((int)((uVar27 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4) +
                 *(int *)(*(int *)((int)((uVar37 & 0xffffffff) << 2) + (int)piStack_49c) * 4 +
                         in_stack_000000a4);
      }
      else {
        iVar15 = *(int *)(in_stack_000000a4 + 0x14) << 1;
      }
      iVar36 = (*pcStack_4b0)(uStack0000001c,0x10,lVar24 + 1,*(undefined4 *)(param_1 + 0x564),0x10);
      *(int *)(puStack_4ac + (int)((lVar33 + 8U & 0xffffffff) << 2)) = iVar36 + iVar15;
      if ((iVar11 != 0) || (bVar42)) {
        if ((iVar11 == iVar10) && (bVar43)) {
          lVar31 = lVar31 + lVar32;
          iVar15 = (*pcStack_4b0)(uVar14,0x10,lVar6 + 1,*(undefined4 *)(param_1 + 0x564),0x10);
          iVar10 = fn_82E9AB00(param_1,uVar26,lVar34,in_stack_000000a4);
          uVar35 = *(uint *)(param_1 + 0x564);
          *(int *)(puStack_4ac + (int)((lVar31 + 1U & 0xffffffff) << 2)) = iVar15 + iVar10;
          iVar15 = (*pcStack_4b0)(uVar14,0x10,(lVar6 - (ulonglong)uVar35) + 1,(ulonglong)uVar35,0x10
                                 );
          iVar10 = fn_82E9AB00(param_1,uVar26,lVar34 + -2,in_stack_000000a4);
          *(int *)(puStack_4ac + (int)((lVar31 - 6U & 0xffffffff) << 2)) = iVar15 + iVar10;
        }
      }
      else {
        iVar15 = (int)(((uVar17 & 0x1fffffff) * 8 - uVar17 & 0xffffffff) << 2);
        iVar10 = (*pcStack_4b0)(uVar14,0x10,lVar6 + -1,*(undefined4 *)(param_1 + 0x564),0x10);
        iVar11 = fn_82E9AB00(param_1,uVar18,lVar34,in_stack_000000a4);
        uVar35 = *(uint *)(param_1 + 0x564);
        *(int *)(puStack_4ac + iVar15 + -4) = iVar10 + iVar11;
        iVar10 = (*pcStack_4b0)(uVar14,0x10,(lVar6 - (ulonglong)uVar35) + -1,(ulonglong)uVar35,0x10)
        ;
        iVar11 = fn_82E9AB00(param_1,uVar18,lVar34 + -2,in_stack_000000a4);
        *(int *)(puStack_4ac + iVar15 + -0x20) = iVar10 + iVar11;
      }
    }
    else if ((iVar11 != 0) || (bVar42)) {
      if ((iVar11 == iVar10) && (bVar43)) {
        lVar12 = lVar12 + 2;
        lVar32 = ((uVar17 & 0x1fffffff) * 8 - uVar17) + lVar32;
        iVar15 = (*pcStack_4b0)(uStack0000001c,0x10,
                                (lVar6 - (ulonglong)*(uint *)(param_1 + 0x564)) + 1,
                                (ulonglong)*(uint *)(param_1 + 0x564),0x10);
        iVar10 = fn_82E9AB00(param_1,lVar12,lVar34 + -2,in_stack_000000a4);
        uVar2 = *(undefined4 *)(param_1 + 0x564);
        *(int *)(puStack_4ac + (int)((lVar32 - 6U & 0xffffffff) << 2)) = iVar15 + iVar10;
        iVar15 = (*pcStack_4b0)(uVar14,0x10,lVar6 + 1,uVar2,0x10);
        iVar10 = fn_82E9AB00(param_1,lVar12,lVar34,in_stack_000000a4);
        uVar35 = *(uint *)(param_1 + 0x564);
        *(int *)(puStack_4ac + (int)((lVar32 + 1U & 0xffffffff) << 2)) = iVar15 + iVar10;
        iVar15 = (*pcStack_4b0)(uVar14,0x10,(ulonglong)uVar35 + lVar6 + 1,(ulonglong)uVar35,0x10);
        iVar10 = fn_82E9AB00(param_1,lVar12,lVar34 + 2,in_stack_000000a4);
        *(int *)(puStack_4ac + (int)((lVar32 + 8U & 0xffffffff) << 2)) = iVar15 + iVar10;
      }
    }
    else {
      lVar12 = lVar12 + -2;
      iVar15 = (*pcStack_4b0)(uStack0000001c,0x10,
                              (lVar6 - (ulonglong)*(uint *)(param_1 + 0x564)) + -1,
                              (ulonglong)*(uint *)(param_1 + 0x564),0x10);
      iVar10 = fn_82E9AB00(param_1,lVar12,lVar34 + -2,in_stack_000000a4);
      uVar2 = *(undefined4 *)(param_1 + 0x564);
      *(int *)(puStack_4ac + iVar36 * 0x1c + -0x20) = iVar15 + iVar10;
      iVar15 = (*pcStack_4b0)(uVar14,0x10,lVar6 + -1,uVar2,0x10);
      iVar10 = fn_82E9AB00(param_1,lVar12,lVar34,in_stack_000000a4);
      uVar35 = *(uint *)(param_1 + 0x564);
      *(int *)(puStack_4ac + iVar36 * 0x1c + -4) = iVar15 + iVar10;
      iVar15 = (*pcStack_4b0)(uVar14,0x10,(ulonglong)uVar35 + lVar6 + -1,(ulonglong)uVar35,0x10);
      iVar10 = fn_82E9AB00(param_1,lVar12,lVar34 + 2,in_stack_000000a4);
      *(int *)(puStack_4ac + iVar36 * 0x1c + 0x18) = iVar15 + iVar10;
    }
    uVar35 = uStack_458;
    puVar3 = puStack_45c;
    pcVar5 = pcStack_460;
    lVar12 = ((*(uint *)(param_1 + 0xa2c) - uVar30) + (ulonglong)uStack_458 &
             (ulonglong)*(uint *)(param_1 + 0xa34)) - (ulonglong)*(uint *)(param_1 + 0xa2c);
    lVar32 = ((*(uint *)(param_1 + 0xa30) - uVar29) + ZEXT48(pcStack_460) &
             (ulonglong)*(uint *)(param_1 + 0xa38)) - (ulonglong)*(uint *)(param_1 + 0xa30);
    if (*(int *)(param_1 + 0x6d84) == 0) {
      uVar14 = uStack0000001c;
      if ((uStack_490 != 0) && (in_stack_00000084 == 0)) {
        pcStack_4b0 = *(code **)(in_stack_000000ac + 0xc);
        iVar15 = fn_82E9AB00(param_1,(int)lVar12 >> 1,(int)lVar32 >> 1,in_stack_000000a4);
        uVar14 = uStack0000001c;
        iStack_498 = (*pcStack_4b0)(uStack0000001c,0x10,lVar6,*(undefined4 *)(param_1 + 0x564),0x10)
        ;
        iStack_498 = iVar15 + iStack_498;
      }
      puVar3 = puStack_45c;
      puStack_468 = &uStack_4a0;
      (**(code **)(param_1 + 0x6f30))
                (param_1,uVar14,lVar6,lVar38,uVar17,iStack_498,puStack_46c,uStack_474);
      uVar41 = (uint)(uVar30 & 3);
      uVar39 = (uint)(uVar29 & 3);
      if (((uVar41 != 0) || (uVar39 != 0)) &&
         ((uVar35 + uStack_4a0 != iVar8 || ((int)pcVar5 + uStack_494 != iVar7)))) {
        uVar37 = (ulonglong)in_stack_00000064;
        if (((int)in_stack_00000064 <= (int)uVar1) &&
           (uVar37 = (longlong)(int)uVar1, (int)in_stack_0000006c < (int)uVar1)) {
          uVar37 = (ulonglong)in_stack_0000006c;
        }
        uVar35 = in_stack_00000074;
        if (((int)in_stack_00000074 <= (int)uVar28) &&
           (uVar35 = uVar28, (int)in_stack_0000007c < (int)uVar28)) {
          uVar35 = in_stack_0000007c;
        }
        if (in_stack_0000009c == 1) {
          (**(code **)(param_1 + 0x9b8))();
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    ((longlong)(int)uVar35 * (longlong)*(int *)(param_1 + 0x564) + uVar37 +
                     (ulonglong)uStack00000024,*(int *)(param_1 + 0x564),puVar3,0x10,uVar30 & 3,
                     uVar29 & 3,*(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        }
        iVar7 = (*pcStack_4b0)(uVar14,0x10,puVar3,0x10,0x10);
        iVar7 = *(int *)(*piStack_49c * 4 + in_stack_000000a4) +
                *(int *)(*piStack_49c * 4 + in_stack_000000a4) + iVar7;
        if (iVar7 < iStack_498) {
          uStack_488 = 0;
          uStack_480 = 0;
          uStack_4a0 = uVar41;
          iStack_498 = iVar7;
          uStack_494 = uVar39;
          uStack_48c = uVar28;
          uStack_484 = uVar1;
        }
      }
      uVar29 = (ulonglong)in_stack_00000064;
      puVar22 = (uint *)iStack_498;
      if (in_stack_00000084 != 0) {
        uVar35 = uStack00000044;
        uVar39 = uStack0000004c;
        if (uStack_470 == 0) {
          uVar35 = in_stack_00000054;
          uVar39 = in_stack_0000005c;
        }
        uVar28 = uVar35 & 3;
        uVar1 = uVar39 & 3;
        if (((uVar28 != 0) || (uVar1 != 0)) &&
           (((uStack_480 + uStack_484) * 4 + uStack_4a0 != uVar35 ||
            ((uStack_488 + uStack_48c) * 4 + uStack_494 != uVar39)))) {
          uVar35 = (int)uVar35 >> 2;
          uVar39 = (int)uVar39 >> 2;
          if (((int)in_stack_00000064 <= (int)uVar35) &&
             (uVar29 = (longlong)(int)uVar35, (int)in_stack_0000006c < (int)uVar35)) {
            uVar29 = (ulonglong)in_stack_0000006c;
          }
          if (((int)in_stack_00000074 <= (int)uVar39) &&
             (in_stack_00000074 = uVar39, (int)in_stack_0000007c < (int)uVar39)) {
            in_stack_00000074 = in_stack_0000007c;
          }
          iVar7 = *(int *)(param_1 + 0x564);
          lVar32 = (longlong)(int)in_stack_00000074 * (longlong)iVar7 + uVar29 +
                   (ulonglong)uStack00000024;
          if (in_stack_0000009c == 1) {
            (**(code **)(param_1 + 0x9b8))(lVar32,iVar7,puVar3);
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (lVar32,iVar7,puVar3,0x10,uVar28,uVar1,*(undefined4 *)(param_1 + 0x904),
                       *(undefined4 *)(param_1 + 0x618));
          }
          iVar7 = (*pcStack_4b0)(uVar14,0x10,puVar3,0x10,0x10);
          iVar8 = fn_82E9AB00(param_1,0,0,in_stack_000000a4);
          puVar22 = (uint *)iStack_498;
          if (iVar8 + iVar7 < iStack_498) {
            uStack_488 = 0;
            uStack_480 = 0;
            puVar22 = (uint *)(iVar8 + iVar7);
            uStack_4a0 = uVar28;
            uStack_494 = uVar1;
            uStack_48c = uVar39;
            uStack_484 = uVar35;
          }
        }
      }
    }
    else {
      iVar10 = (*(int *)(param_1 + 0x2d4) * iStack0000003c + iStack00000034) * 0x114 +
               *(int *)(param_1 + 0x1e54);
      (**(code **)(param_1 + 0x9b8))
                (lVar6,*(undefined4 *)(param_1 + 0x564),puStack_45c,0x10,lVar12,lVar32,
                 *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uStack0000001c,0x10,puVar3,0x10,0x10,0x10,iVar10);
      iVar15 = fn_82E9B140(param_1,lVar12,lVar32,puStack_4a8,1);
      puVar3 = puStack_45c;
      uVar14 = uStack0000001c;
      pcStack_4b0 = pcStack_4b0 + iVar15;
      if (in_stack_00000084 != 0) {
        pcStack_4b0 = pcStack_4b0 + 1;
      }
      lVar32 = (longlong)*(int *)(iVar10 + 0x6c) * (longlong)(int)pcStack_4b0 +
               (ulonglong)uStack_4a4;
      puStack_47c = (uint *)lVar32;
      fn_82E9F460(param_1,uStack0000001c,lVar6,lVar38,uVar17,lVar32,puStack_46c,uStack_474);
      if ((uStack_458 + uStack_4a0 != iVar8) ||
         (puVar22 = puStack_47c, (int)pcStack_460 + uStack_494 != iVar7)) {
        uVar37 = (ulonglong)in_stack_00000064;
        if (((int)in_stack_00000064 <= (int)uVar1) &&
           (uVar37 = (longlong)(int)uVar1, (int)in_stack_0000006c < (int)uVar1)) {
          uVar37 = (ulonglong)in_stack_0000006c;
        }
        uVar35 = in_stack_00000074;
        if (((int)in_stack_00000074 <= (int)uVar28) &&
           (uVar35 = uVar28, (int)in_stack_0000007c < (int)uVar28)) {
          uVar35 = in_stack_0000007c;
        }
        iVar7 = *(int *)(param_1 + 0x564);
        lVar32 = (longlong)(int)uVar35 * (longlong)iVar7 + uVar37 + (ulonglong)uStack00000024;
        if (in_stack_0000009c == 1) {
          (**(code **)(param_1 + 0x9b8))(lVar32,iVar7,puVar3);
        }
        else {
          (**(code **)(param_1 + 0x9c0))
                    (lVar32,iVar7,puVar3,0x10,uVar30 & 3,uVar29 & 3,*(undefined4 *)(param_1 + 0x904)
                     ,*(undefined4 *)(param_1 + 0x618));
        }
        fn_82E9AC18(param_1,uVar14,0x10,puVar3,0x10,0x10,0x10,iVar10);
        iVar7 = fn_82E9B140(param_1,0,0,puStack_4a8,1);
        pcStack_4b0 = pcStack_4b0 + iVar7;
        if (in_stack_00000084 != 0) {
          pcStack_4b0 = pcStack_4b0 + 1;
        }
        iVar7 = *(int *)(iVar10 + 0x6c) * (int)pcStack_4b0 + uStack_4a4;
        puVar22 = puStack_47c;
        if (iVar7 < (int)puStack_47c) {
          uStack_4a0 = (uint)(uVar30 & 3);
          uStack_494 = (uint)(uVar29 & 3);
          uStack_488 = 0;
          uStack_480 = 0;
          puVar22 = (uint *)iVar7;
          uStack_48c = uVar28;
          uStack_484 = uVar1;
        }
      }
      uVar29 = (ulonglong)in_stack_00000064;
      if (in_stack_00000084 != 0) {
        uVar35 = uStack00000044;
        uVar39 = uStack0000004c;
        if (uStack_470 == 0) {
          uVar35 = in_stack_00000054;
          uVar39 = in_stack_0000005c;
        }
        if (((uStack_480 + uStack_484) * 4 + uStack_4a0 != uVar35) ||
           ((uStack_488 + uStack_48c) * 4 + uStack_494 != uVar39)) {
          uVar28 = (int)uVar35 >> 2;
          uVar1 = (int)uVar39 >> 2;
          if (((int)in_stack_00000064 <= (int)uVar28) &&
             (uVar29 = (longlong)(int)uVar28, (int)in_stack_0000006c < (int)uVar28)) {
            uVar29 = (ulonglong)in_stack_0000006c;
          }
          if (((int)in_stack_00000074 <= (int)uVar1) &&
             (in_stack_00000074 = uVar1, (int)in_stack_0000007c < (int)uVar1)) {
            in_stack_00000074 = in_stack_0000007c;
          }
          iVar7 = *(int *)(param_1 + 0x564);
          lVar32 = (longlong)(int)in_stack_00000074 * (longlong)iVar7 + uVar29 +
                   (ulonglong)uStack00000024;
          if (in_stack_0000009c == 1) {
            (**(code **)(param_1 + 0x9b8))(lVar32,iVar7,puVar3);
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      (lVar32,iVar7,puVar3,0x10,uVar35 & 3,uVar39 & 3,
                       *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,uVar14,0x10,puVar3,0x10,0x10,0x10,iVar10);
          iVar7 = fn_82E9B140(param_1,0,0,puStack_4a8,1);
          iVar7 = *(int *)(iVar10 + 0x6c) * (int)(pcStack_4b0 + iVar7 + 1) + uStack_4a4;
          if (iVar7 < (int)puVar22) {
            uStack_488 = 0;
            uStack_480 = 0;
            puVar22 = (uint *)iVar7;
            uStack_4a0 = uVar35 & 3;
            uStack_494 = uVar39 & 3;
            uStack_48c = uVar1;
            uStack_484 = uVar28;
          }
        }
      }
    }
  }
  *in_stack_000000bc = (uStack_480 + uStack_484) * 4 + uStack_4a0;
  *in_stack_000000c4 = (uStack_488 + uStack_48c) * 4 + uStack_494;
  *in_stack_000000cc = (int)puVar22;
  return;
}


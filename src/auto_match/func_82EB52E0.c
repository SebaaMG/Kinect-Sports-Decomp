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
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_4c0;
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EA8848();
extern int fn_82EFE140();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_538;
extern unsigned int iStack_548;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e0;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4e8;
extern unsigned int uStack_4f4;
extern unsigned int uStack_510;
extern unsigned int uStack_518;
extern unsigned int uStack_520;
extern unsigned int uStack_524;
extern unsigned int uStack_528;
extern unsigned int uStack_530;
extern unsigned int uStack_534;
extern unsigned int uStack_53c;
extern unsigned int uStack_540;
extern unsigned int uStack_544;
extern unsigned int uStack_54c;
extern unsigned int uStack_550;
extern unsigned int uStack_554;
extern unsigned int uStack_560;


/* WARNING: Removing unreachable block (ram,0x82eb6084) */
/* WARNING: Removing unreachable block (ram,0x82eb6fe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EB52E0(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6,
                  ulonglong param_7,ulonglong param_8)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 uVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar20;
  ulonglong uVar19;
  ulonglong uVar21;
  int iVar23;
  longlong lVar22;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  int *piVar29;
  ulonglong uVar27;
  longlong lVar28;
  int iVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  ulonglong uVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  int iStack00000014;
  undefined4 uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
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
  undefined4 *in_stack_000000a4;
  undefined4 in_stack_000000ac;
  int *in_stack_000000b4;
  int *in_stack_000000bc;
  int *in_stack_000000c4;
  uint uStack_560;
  int *piStack_55c;
  uint uStack_554;
  uint uStack_550;
  uint uStack_54c;
  int iStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  int iStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_528;
  uint uStack_524;
  uint uStack_520;
  uint uStack_518;
  int *piStack_514;
  uint uStack_510;
  int *piStack_4fc;
  uint uStack_4f4;
  uint uStack_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  undefined1 auStack_4c0 [176];
  int aiStack_410 [52];
  int aiStack_340 [52];
  int aiStack_270 [44];
  undefined1 auStack_1c0 [448];
  
  if ((*(uint *)(param_1 + 0x6db8) & 1) == 0) {
    uVar15 = in_stack_000000ac;
    if ((*(uint *)(param_1 + 0x6db8) & 4) == 0) {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 1;
  }
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  uStack00000044 = (uint)param_7;
  uStack0000004c = (uint)param_8;
  iVar6 = fn_82EFE140(param_1,in_stack_000000a4,uVar15);
  pcVar1 = (code *)in_stack_000000a4[1];
  pcVar2 = (code *)*in_stack_000000a4;
  pcVar3 = (code *)in_stack_000000a4[4];
  iVar7 = ((int)(uint)param_7 >> 2) + 2 >> 2;
  iVar23 = (*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 + *(int *)(param_1 + 0x1e54);
  iVar30 = 0;
  iVar8 = ((int)(uint)param_8 >> 2) + 2 >> 2;
  if (in_stack_00000084 != 0) {
    iVar34 = ((int)in_stack_00000054 >> 2) + 2 >> 2;
    iVar10 = ((int)in_stack_0000005c >> 2) + 2 >> 2;
    if (0 < in_stack_00000094) {
      piVar29 = (int *)(param_4 + 0x100);
      do {
        if ((iVar34 == piVar29[-0x20]) && (iVar10 == *piVar29)) break;
        iVar30 = iVar30 + 1;
        piVar29 = piVar29 + 1;
      } while (iVar30 < in_stack_00000094);
    }
    if (iVar30 == in_stack_00000094) {
      in_stack_00000094 = in_stack_00000094 + 1;
      *(int *)((iVar30 + 0x20) * 4 + param_4) = iVar34;
      *(int *)((iVar30 + 0x40) * 4 + param_4) = iVar10;
    }
  }
  iVar30 = 0;
  if (0 < in_stack_00000094) {
    piVar29 = (int *)(param_4 + 0x100);
    do {
      if ((iVar7 == piVar29[-0x20]) && (iVar8 == *piVar29)) break;
      iVar30 = iVar30 + 1;
      piVar29 = piVar29 + 1;
    } while (iVar30 < in_stack_00000094);
  }
  if (iVar30 == in_stack_00000094) {
    in_stack_00000094 = in_stack_00000094 + 1;
    *(int *)((iVar30 + 0x20) * 4 + param_4) = iVar7;
    *(int *)((iVar30 + 0x40) * 4 + param_4) = iVar8;
  }
  uStack_510 = 0;
  lVar38 = 0xfffffff;
  piStack_514 = aiStack_270;
  piStack_4fc = aiStack_410;
  iStack_548 = 0xfffffff;
  piStack_55c = aiStack_340;
  if (0 < in_stack_00000094) {
    lVar33 = lVar38;
    do {
      piVar5 = piStack_4fc;
      piVar29 = piStack_514;
      iVar30 = iStack00000014;
      uVar16 = (ulonglong)uStack_510;
      bVar45 = true;
      uStack_554 = -in_stack_0000008c;
      iVar7 = *(int *)((int)((uVar16 + 0x40 & 0xffffffff) << 2) + uStack0000002c);
      iVar8 = *(int *)((int)((uVar16 + 0x20 & 0xffffffff) << 2) + uStack0000002c);
      uVar31 = iVar7 * 4;
      uStack_54c = iVar8 * 4;
      uStack_534 = in_stack_0000008c;
      uStack_550 = in_stack_0000008c;
      uStack_4f4 = uVar31 * *(int *)(iStack00000014 + 0x564) + uStack_54c + uStack00000024;
      uStack_518 = uStack_554;
      if ((1 < (int)in_stack_0000008c) && (uStack_510 != 0)) {
        lVar18 = (uVar16 + 0x1f & 0x3fffffff) * 4 + (ulonglong)uStack0000002c;
        do {
          if (!bVar45) break;
          piVar20 = (int *)lVar18;
          iVar34 = *piVar20;
          if (iVar34 == iVar8) {
            if (piVar20[0x20] == iVar7 + -1) {
              uStack_554 = uStack_554 + 1;
              bVar45 = false;
            }
            if (piVar20[0x20] == iVar7 + 1) {
              uStack_550 = uStack_550 - 1;
LAB_82eb5608:
              bVar45 = false;
            }
          }
          else if (piVar20[0x20] == iVar7) {
            if (iVar34 == iVar8 + -1) {
              uStack_518 = uStack_518 + 1;
              bVar45 = false;
            }
            if (iVar34 == iVar8 + 1) {
              uStack_534 = uStack_534 - 1;
              goto LAB_82eb5608;
            }
          }
          lVar18 = lVar18 + -4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if ((int)(uStack_518 + uStack_54c) < (int)in_stack_00000064) {
        uStack_518 = in_stack_00000064 + iVar8 * -4;
      }
      if ((int)in_stack_0000006c < (int)(uStack_534 + uStack_54c)) {
        uStack_534 = in_stack_0000006c + iVar8 * -4;
      }
      if ((int)(uStack_554 + uVar31) < (int)in_stack_00000074) {
        uStack_554 = in_stack_00000074 + iVar7 * -4;
      }
      if ((int)in_stack_0000007c < (int)(uStack_550 + uVar31)) {
        uStack_550 = in_stack_0000007c + iVar7 * -4;
      }
      uStack_4dc = uStack_4f4;
      (**(code **)(iStack00000014 + 0x1bbc))(auStack_4c0,uStack0000001c,0x10);
      uStack_4f4 = uStack_554 * *(int *)(iVar30 + 0x564) + uStack_518 + uStack_4f4;
      if (in_stack_00000084 == 0) {
        if ((int)uStack_554 <= (int)uStack_550) {
          lVar18 = 0;
          uVar16 = ((ulonglong)uStack_554 + (ulonglong)uVar31 & 0x3fffffff) * 4 -
                   (ulonglong)uStack0000004c;
          piVar20 = piStack_514;
          uVar26 = uStack_554;
          do {
            lVar22 = 0;
            uVar35 = (ulonglong)uStack_4f4;
            uVar37 = (ulonglong)uStack_518;
            uStack_4f4 = *(int *)(iStack00000014 + 0x564) + uStack_4f4;
            iVar7 = (int)uVar16 >> 0x1f;
            if ((uStack_534 - uStack_518 & 1) != 1) {
              lVar22 = (*pcVar1)(uStack0000001c,0x10,uVar35,*(int *)(iStack00000014 + 0x564),lVar38)
              ;
              uVar35 = uVar35 + 1;
              uVar13 = (uVar37 + uStack_54c & 0x3fffffff) * 4 - (ulonglong)uStack00000044;
              uVar42 = (ulonglong)((int)uVar13 >> 0x1f);
              uVar42 = (uVar13 ^ uVar42) - uVar42;
              uVar13 = (uVar16 ^ (longlong)iVar7) - (longlong)iVar7;
              if (((int)uVar42 < 0x9f) && ((int)uVar13 < 0x9f)) {
                lVar28 = (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar42 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar28 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              iVar8 = (int)(lVar28 + lVar22);
              if (iVar8 < (int)lVar33) {
                lVar38 = lVar33 + 1;
                uStack_524 = uStack_518;
                lVar33 = lVar28 + lVar22;
                uStack_560 = uVar26;
              }
              *piVar20 = iVar8;
              uVar37 = uVar37 + 1;
              lVar22 = 1;
            }
            if ((int)uVar37 <= (int)uStack_534) {
              uVar42 = (uVar16 ^ (longlong)iVar7) - (longlong)iVar7;
              uVar13 = (uVar37 + uStack_54c & 0x3fffffff) * 4 - (ulonglong)uStack00000044;
              do {
                (*pcVar3)(auStack_4c0,uVar35,*(undefined4 *)(iStack00000014 + 0x564),&uStack_4e8);
                uVar17 = (ulonglong)((int)uVar13 >> 0x1f);
                uVar35 = uVar35 + 2;
                uVar17 = (uVar13 ^ uVar17) - uVar17;
                if (((int)uVar17 < 0x9f) && ((int)uVar42 < 0x9f)) {
                  lVar28 = (ulonglong)
                           *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar42 & 0xffffffff) << 2)) * 4
                                    + in_stack_0000009c) +
                           (ulonglong)
                           *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4
                                    + in_stack_0000009c);
                }
                else {
                  lVar28 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
                }
                uVar17 = (ulonglong)uStack_4e8;
                uStack_4e8 = (uint)(lVar28 + uVar17);
                if ((int)uStack_4e8 < (int)lVar33) {
                  lVar38 = lVar33 + 1;
                  lVar33 = lVar28 + uVar17;
                  uStack_560 = uVar26;
                  uStack_524 = (uint)uVar37;
                }
                uVar17 = (ulonglong)((int)(uVar13 + 4) >> 0x1f);
                uVar17 = (uVar13 + 4 ^ uVar17) - uVar17;
                lVar28 = lVar22 + 1;
                *(uint *)((int)((lVar18 + lVar22 & 0xffffffffU) << 2) + (int)piStack_514) =
                     uStack_4e8;
                if (((int)uVar17 < 0x9f) && ((int)uVar42 < 0x9f)) {
                  lVar25 = (ulonglong)
                           *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar42 & 0xffffffff) << 2)) * 4
                                    + in_stack_0000009c) +
                           (ulonglong)
                           *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4
                                    + in_stack_0000009c);
                }
                else {
                  lVar25 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
                }
                uVar17 = (ulonglong)uStack_4e4;
                uStack_4e4 = (uint)(lVar25 + uVar17);
                if ((int)uStack_4e4 < (int)lVar33) {
                  lVar38 = lVar33 + 1;
                  lVar33 = lVar25 + uVar17;
                  uStack_560 = uVar26;
                  uStack_524 = (uint)uVar37 + 1;
                }
                uVar37 = uVar37 + 2;
                uVar13 = uVar13 + 8;
                lVar22 = lVar22 + 2;
                *(uint *)((int)((lVar18 + lVar28 & 0xffffffffU) << 2) + (int)piStack_514) =
                     uStack_4e4;
              } while ((int)uVar37 <= (int)uStack_534);
            }
            uVar26 = uVar26 + 1;
            uVar16 = uVar16 + 4;
            lVar18 = lVar18 + 7;
            piVar20 = piVar20 + 7;
          } while ((int)uVar26 <= (int)uStack_550);
        }
      }
      else if ((int)uStack_554 <= (int)uStack_550) {
        iVar7 = 0;
        uVar16 = (ulonglong)uStack0000004c;
        uVar35 = ((ulonglong)uStack_554 + (ulonglong)uVar31 & 0x3fffffff) * 4 -
                 (ulonglong)in_stack_0000005c;
        piVar20 = piStack_4fc;
        uVar26 = uStack_554;
        do {
          iVar30 = 0;
          uVar37 = (ulonglong)uStack_4f4;
          uVar42 = (ulonglong)uStack_518;
          uStack_4f4 = uStack_4f4 + *(int *)(iStack00000014 + 0x564);
          iVar8 = (int)uVar35 >> 0x1f;
          if ((uStack_534 - uStack_518 & 1) != 1) {
            lVar18 = (*pcVar1)(uStack0000001c,0x10,
                               (longlong)*(int *)(iStack00000014 + 0x564) * (longlong)(int)uVar26 +
                               uVar42 + (ulonglong)uStack_4dc,*(int *)(iStack00000014 + 0x564),
                               lVar38);
            uVar17 = (in_stack_0000005c - uVar16) + uVar35;
            uVar37 = uVar37 + 1;
            lVar22 = (uVar42 + uStack_54c & 0x3fffffff) * 4;
            uVar13 = lVar22 - (ulonglong)uStack00000044;
            uVar27 = (ulonglong)((int)uVar13 >> 0x1f);
            uVar24 = (ulonglong)((int)uVar17 >> 0x1f);
            uVar27 = (uVar13 ^ uVar27) - uVar27;
            uVar24 = (uVar17 ^ uVar24) - uVar24;
            if (((int)uVar27 < 0x9f) && ((int)uVar24 < 0x9f)) {
              lVar28 = (ulonglong)
                       *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                                in_stack_0000009c) +
                       (ulonglong)
                       *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar27 & 0xffffffff) << 2)) * 4 +
                                in_stack_0000009c);
            }
            else {
              lVar28 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
            }
            iVar30 = (int)(lVar28 + lVar18);
            if (iVar30 < (int)lVar33) {
              uStack_524 = uStack_518;
              lVar38 = lVar33 + 1;
              iStack_538 = 0;
              lVar33 = lVar28 + lVar18;
              uStack_560 = uVar26;
            }
            *(int *)(((int)piStack_514 - (int)piStack_4fc) + (int)piVar20) = iVar30;
            uVar17 = lVar22 - (ulonglong)in_stack_00000054;
            uVar13 = (ulonglong)((int)uVar17 >> 0x1f);
            uVar13 = (uVar17 ^ uVar13) - uVar13;
            uVar17 = (uVar35 ^ (longlong)iVar8) - (longlong)iVar8;
            if (((int)uVar13 < 0x9f) && ((int)uVar17 < 0x9f)) {
              lVar22 = (ulonglong)
                       *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                                in_stack_0000009c) +
                       (ulonglong)
                       *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar13 & 0xffffffff) << 2)) * 4 +
                                in_stack_0000009c);
            }
            else {
              lVar22 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
            }
            iVar30 = (int)(lVar22 + lVar18);
            if (iVar30 < (int)lVar33) {
              uStack_524 = uStack_518;
              lVar38 = lVar33 + 1;
              iStack_538 = 1;
              lVar33 = lVar22 + lVar18;
              uStack_560 = uVar26;
            }
            *piVar20 = iVar30;
            uVar42 = uVar42 + 1;
            iVar30 = 1;
          }
          if ((int)uVar42 <= (int)uStack_534) {
            uVar13 = (ulonglong)uStack00000044;
            lVar18 = (uVar42 + uStack_54c & 0x3fffffff) * 4;
            uVar17 = (uVar35 ^ (longlong)iVar8) - (longlong)iVar8;
            uVar24 = lVar18 - uVar13;
            uVar27 = (lVar18 - (ulonglong)in_stack_00000054) + 4;
            do {
              (*pcVar3)(auStack_4c0,uVar37,*(undefined4 *)(iStack00000014 + 0x564),&uStack_4e8);
              uVar21 = (ulonglong)((int)uVar24 >> 0x1f);
              uVar37 = uVar37 + 2;
              uVar19 = (uVar35 + in_stack_0000005c) - (ulonglong)uStack0000004c;
              uVar14 = (ulonglong)((int)uVar19 >> 0x1f);
              uVar21 = (uVar24 ^ uVar21) - uVar21;
              uVar14 = (uVar19 ^ uVar14) - uVar14;
              if (((int)uVar21 < 0x9f) && ((int)uVar14 < 0x9f)) {
                lVar18 = (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar18 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              lVar18 = lVar18 + (ulonglong)uStack_4e8;
              iVar8 = (int)lVar18;
              uVar43 = (uint)uVar42;
              if (iVar8 < (int)lVar33) {
                lVar38 = lVar33 + 1;
                iStack_538 = 0;
                lVar33 = lVar18;
                uStack_560 = uVar26;
                uStack_524 = uVar43;
              }
              uVar19 = (ulonglong)((int)(uVar27 - 4) >> 0x1f);
              uVar19 = (uVar27 - 4 ^ uVar19) - uVar19;
              piStack_514[iVar30 + iVar7] = iVar8;
              if (((int)uVar19 < 0x9f) && ((int)uVar17 < 0x9f)) {
                lVar18 = (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar19 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar18 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              lVar18 = lVar18 + (ulonglong)uStack_4e8;
              iVar8 = (int)lVar18;
              if (iVar8 < (int)lVar33) {
                lVar38 = lVar33 + 1;
                iStack_538 = 1;
                lVar33 = lVar18;
                uStack_560 = uVar26;
                uStack_524 = uVar43;
              }
              uVar21 = (in_stack_00000054 - uVar13) + uVar27;
              uVar19 = (ulonglong)((int)uVar21 >> 0x1f);
              uVar19 = (uVar21 ^ uVar19) - uVar19;
              piStack_4fc[iVar30 + iVar7] = iVar8;
              if (((int)uVar19 < 0x9f) && ((int)uVar14 < 0x9f)) {
                lVar18 = (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar19 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar18 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              lVar18 = lVar18 + (ulonglong)uStack_4e4;
              iVar8 = (int)lVar18;
              if (iVar8 < (int)lVar33) {
                uStack_524 = uVar43 + 1;
                lVar38 = lVar33 + 1;
                iStack_538 = 0;
                lVar33 = lVar18;
                uStack_560 = uVar26;
              }
              uVar14 = (ulonglong)((int)uVar27 >> 0x1f);
              (piStack_514 + iVar30 + iVar7)[1] = iVar8;
              uVar14 = (uVar27 ^ uVar14) - uVar14;
              if (((int)uVar14 < 0x9f) && ((int)uVar17 < 0x9f)) {
                lVar18 = (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar17 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (ulonglong)
                         *(uint *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar18 = ((ulonglong)*(uint *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              lVar18 = lVar18 + (ulonglong)uStack_4e4;
              iVar8 = (int)lVar18;
              if (iVar8 < (int)lVar33) {
                uStack_524 = uVar43 + 1;
                lVar38 = lVar33 + 1;
                iStack_538 = 1;
                lVar33 = lVar18;
                uStack_560 = uVar26;
              }
              uVar42 = uVar42 + 2;
              (piStack_4fc + iVar30 + iVar7)[1] = iVar8;
              uVar24 = uVar24 + 8;
              uVar27 = uVar27 + 8;
              iVar30 = iVar30 + 2;
            } while ((int)uVar42 <= (int)uStack_534);
          }
          uVar26 = uVar26 + 1;
          uVar35 = uVar35 + 4;
          iVar7 = iVar7 + 7;
          piVar20 = piVar20 + 7;
        } while ((int)uVar26 <= (int)uStack_550);
      }
      iVar7 = (int)lVar33;
      if (iVar7 < iStack_548) {
        uStack_530 = uStack_524;
        uStack_53c = uStack_560;
        uStack_4e0 = uStack_518;
        uStack_4d0 = uStack_554;
        uStack_4d8 = uStack_534;
        uStack_4d4 = uStack_550;
        iStack_548 = iVar7;
        uStack_528 = uStack_54c;
        uStack_520 = uVar31;
        if ((in_stack_00000084 == 0) || (iStack_538 == 0)) {
          piStack_514 = piStack_55c;
          piStack_55c = piVar29;
        }
        else {
          piStack_4fc = piStack_55c;
          piStack_55c = piVar5;
        }
      }
      uStack_510 = uStack_510 + 1;
    } while ((int)uStack_510 < in_stack_00000094);
    param_8 = (ulonglong)uStack0000004c;
    param_7 = (ulonglong)uStack00000044;
    param_1 = iStack00000014;
  }
  uVar16 = (ulonglong)uStack_530 + (ulonglong)uStack_528;
  uVar35 = (ulonglong)uStack_53c + (ulonglong)uStack_520;
  lVar33 = (uVar16 & 0x3fffffff) * 4;
  lVar38 = (uVar35 & 0x3fffffff) * 4;
  if (in_stack_00000084 != 0) {
    uVar42 = (ulonglong)*(uint *)(param_1 + 0xa30);
    uVar37 = (ulonglong)*(uint *)(param_1 + 0xa2c);
    uVar31 = *(uint *)(param_1 + 0xa38);
    uVar26 = *(uint *)(param_1 + 0xa34);
    iVar7 = fn_82E9B140(param_1,((uVar37 - param_7) + lVar33 & (ulonglong)uVar26) - uVar37,
                          ((uVar42 - param_8) + lVar38 & (ulonglong)uVar31) - uVar42,1,0);
    iVar8 = fn_82E9B140(param_1,((uVar37 - in_stack_00000054) + lVar33 & (ulonglong)uVar26) -
                                  uVar37,
                          ((uVar42 - in_stack_0000005c) + lVar38 & (ulonglong)uVar31) - uVar42,1,0);
    if (iVar7 < iVar8) {
      iStack_538 = 0;
    }
    else {
      iStack_538 = 1;
      param_8 = (ulonglong)in_stack_0000005c;
      param_7 = (ulonglong)in_stack_00000054;
    }
  }
  if ((*(uint *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000ac = 0;
    }
  }
  else {
    in_stack_000000ac = 1;
  }
  iVar8 = fn_82EFE140(param_1,in_stack_000000a4,in_stack_000000ac);
  uVar15 = uStack0000001c;
  iVar7 = iStack00000014;
  iVar30 = (int)param_8;
  iVar34 = (int)param_7;
  uVar26 = iVar30 >> 2;
  uVar31 = iVar34 >> 2;
  if (iStack_548 == 0xfffffff) {
    uStack_53c = 0;
    uStack_530 = 0;
    (**(code **)(param_1 + 0xa5c))
              ((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar26 + (longlong)(int)uVar31 +
               (ulonglong)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,param_7 & 3,
               param_8 & 3,*(undefined4 *)(param_1 + 0x618));
    iVar7 = (*pcVar2)(uStack0000001c,0x10,auStack_1c0,0x10);
    iStack_548 = *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                 *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar7;
    uStack_544 = (uint)(param_8 & 3);
    uStack_540 = (uint)(param_7 & 3);
    uStack_528 = uVar31;
    uStack_520 = uVar26;
  }
  else {
    bVar45 = in_stack_00000074 != uVar35;
    bVar46 = in_stack_0000007c != uVar35;
    uVar43 = *(uint *)(iStack00000014 + 0x564);
    bVar47 = in_stack_00000064 == uVar16;
    bVar48 = in_stack_0000006c != uVar16;
    uVar16 = (ulonglong)uStack_53c - (ulonglong)uStack_4d0;
    lVar18 = (ulonglong)uStack_4d8 - (ulonglong)uStack_4e0;
    lVar22 = (ulonglong)uStack_530 - (ulonglong)uStack_4e0;
    lVar28 = (longlong)(int)uVar35 * (longlong)(int)uVar43 + (ulonglong)uStack_530 +
             (ulonglong)uStack_528 + (ulonglong)uStack00000024;
    iVar12 = (int)uVar16;
    iVar10 = (int)lVar18;
    iVar11 = (int)lVar22;
    if ((iVar12 == 0) && (bVar45)) {
      uVar13 = lVar33 - param_7;
      lVar39 = lVar38 - param_8;
      uVar42 = uVar13 - 4;
      uVar37 = (ulonglong)((int)uVar42 >> 0x1f);
      uVar35 = (ulonglong)((int)(lVar39 - 4U) >> 0x1f);
      lVar25 = (lVar22 - (ulonglong)uVar43) + lVar28;
      uVar37 = (uVar42 ^ uVar37) - uVar37;
      uVar35 = (lVar39 - 4U ^ uVar35) - uVar35;
      iVar12 = (int)uVar35;
      if (((int)uVar37 < 0x9f) && (iVar12 < 0x9f)) {
        iVar41 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar41 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcVar2)(uStack0000001c,0x10,lVar25 + -1);
      uVar37 = (ulonglong)((int)uVar13 >> 0x1f);
      uVar37 = (uVar13 ^ uVar37) - uVar37;
      *(int *)((int)((lVar22 - 8U & 0xffffffff) << 2) + (int)piStack_55c) = iVar9 + iVar41;
      if (((int)uVar37 < 0x9f) && (iVar12 < 0x9f)) {
        iVar41 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar41 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcVar2)(uStack0000001c,0x10,lVar25,*(undefined4 *)(iVar7 + 0x564));
      uVar15 = uStack0000001c;
      uVar13 = uVar13 + 4;
      uVar37 = (ulonglong)((int)uVar13 >> 0x1f);
      uVar37 = (uVar13 ^ uVar37) - uVar37;
      *(int *)((int)((lVar22 - 7U & 0xffffffff) << 2) + (int)piStack_55c) = iVar9 + iVar41;
      if (((int)uVar37 < 0x9f) && (iVar12 < 0x9f)) {
        iVar12 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar12 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcVar2)(uStack0000001c,0x10,lVar25 + 1,*(undefined4 *)(iVar7 + 0x564));
      uVar4 = uStack0000001c;
      iVar41 = iStack00000014;
      *(int *)((int)((lVar22 - 6U & 0xffffffff) << 2) + (int)piStack_55c) = iVar9 + iVar12;
      if ((iVar11 != 0) || (bVar47)) {
        if ((iVar11 == iVar10) && (bVar48)) {
          iVar7 = (*pcVar2)(uStack0000001c,0x10,lVar28 + 1,*(undefined4 *)(iStack00000014 + 0x564));
          iVar10 = fn_82E9AB00(iVar41,uVar13,lVar39,in_stack_0000009c);
          uVar43 = *(uint *)(iVar41 + 0x564);
          *(int *)((int)((lVar18 + 1U & 0xffffffff) << 2) + (int)piStack_55c) = iVar7 + iVar10;
          iVar7 = (*pcVar2)(uVar4,0x10,(ulonglong)uVar43 + lVar28 + 1);
          iVar10 = fn_82E9AB00(iVar41,uVar13,lVar39 + 4,in_stack_0000009c);
          *(int *)((int)((lVar18 + 8U & 0xffffffff) << 2) + (int)piStack_55c) = iVar7 + iVar10;
        }
      }
      else {
        iVar10 = (*pcVar2)(uVar15,0x10,lVar28 + -1,*(undefined4 *)(iVar7 + 0x564));
        iVar11 = fn_82E9AB00(iVar7,uVar42,lVar39,in_stack_0000009c);
        uVar43 = *(uint *)(iVar7 + 0x564);
        piStack_55c[-1] = iVar10 + iVar11;
        iVar10 = (*pcVar2)(uVar15,0x10,(ulonglong)uVar43 + lVar28 + -1);
        iVar7 = fn_82E9AB00(iVar7,uVar42,lVar39 + 4,in_stack_0000009c);
        piStack_55c[6] = iVar10 + iVar7;
      }
    }
    else if ((iVar12 == uStack_4d4 - uStack_4d0) && (bVar46)) {
      uVar13 = lVar33 - param_7;
      lVar39 = lVar38 - param_8;
      uVar42 = uVar13 - 4;
      uVar37 = (ulonglong)((int)uVar42 >> 0x1f);
      uVar35 = (ulonglong)((int)(lVar39 + 4U) >> 0x1f);
      lVar25 = (ulonglong)uVar43 + lVar22 + lVar28;
      uVar37 = (uVar42 ^ uVar37) - uVar37;
      uVar35 = (lVar39 + 4U ^ uVar35) - uVar35;
      iVar7 = (int)uVar35;
      if (((int)uVar37 < 0x9f) && (iVar7 < 0x9f)) {
        iVar12 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar12 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      lVar36 = (uVar16 & 0x1fffffff) * 8 - uVar16;
      lVar40 = lVar36 + lVar22;
      iVar41 = (*pcVar2)(uStack0000001c,0x10,lVar25 + -1);
      uVar37 = (ulonglong)((int)uVar13 >> 0x1f);
      uVar37 = (uVar13 ^ uVar37) - uVar37;
      *(int *)((int)((lVar40 + 6U & 0xffffffff) << 2) + (int)piStack_55c) = iVar41 + iVar12;
      if (((int)uVar37 < 0x9f) && (iVar7 < 0x9f)) {
        iVar12 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar12 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar9 = (*pcVar2)(uStack0000001c,0x10,lVar25,*(undefined4 *)(iStack00000014 + 0x564));
      iVar41 = iStack00000014;
      uVar13 = uVar13 + 4;
      uVar37 = (ulonglong)((int)uVar13 >> 0x1f);
      uVar37 = (uVar13 ^ uVar37) - uVar37;
      *(int *)((int)((lVar40 + 7U & 0xffffffff) << 2) + (int)piStack_55c) = iVar9 + iVar12;
      if (((int)uVar37 < 0x9f) && (iVar7 < 0x9f)) {
        iVar7 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar35 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000009c) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar37 & 0xffffffff) << 2)) * 4 +
                        in_stack_0000009c);
      }
      else {
        iVar7 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar12 = (*pcVar2)(uStack0000001c,0x10,lVar25 + 1,*(undefined4 *)(iStack00000014 + 0x564));
      uVar15 = uStack0000001c;
      *(int *)((int)((lVar40 + 8U & 0xffffffff) << 2) + (int)piStack_55c) = iVar12 + iVar7;
      if ((iVar11 != 0) || (bVar47)) {
        if ((iVar11 == iVar10) && (bVar48)) {
          lVar36 = lVar36 + lVar18;
          iVar7 = (*pcVar2)(uStack0000001c,0x10,lVar28 + 1,*(undefined4 *)(iVar41 + 0x564));
          iVar10 = fn_82E9AB00(iVar41,uVar13,lVar39,in_stack_0000009c);
          uVar43 = *(uint *)(iVar41 + 0x564);
          *(int *)((int)((lVar36 + 1U & 0xffffffff) << 2) + (int)piStack_55c) = iVar7 + iVar10;
          iVar7 = (*pcVar2)(uVar15,0x10,(lVar28 - (ulonglong)uVar43) + 1);
          iVar10 = fn_82E9AB00(iVar41,uVar13,lVar39 + -4,in_stack_0000009c);
          *(int *)((int)((lVar36 - 6U & 0xffffffff) << 2) + (int)piStack_55c) = iVar7 + iVar10;
        }
      }
      else {
        iVar7 = (int)(((uVar16 & 0x1fffffff) * 8 - uVar16 & 0xffffffff) << 2);
        iVar10 = (*pcVar2)(uStack0000001c,0x10,lVar28 + -1,*(undefined4 *)(iVar41 + 0x564));
        iVar11 = fn_82E9AB00(iVar41,uVar42,lVar39,in_stack_0000009c);
        uVar43 = *(uint *)(iVar41 + 0x564);
        *(int *)((int)piStack_55c + iVar7 + -4) = iVar10 + iVar11;
        iVar10 = (*pcVar2)(uVar15,0x10,(lVar28 - (ulonglong)uVar43) + -1);
        iVar11 = fn_82E9AB00(iVar41,uVar42,lVar39 + -4,in_stack_0000009c);
        *(int *)((int)piStack_55c + iVar7 + -0x20) = iVar10 + iVar11;
      }
    }
    else if ((iVar11 != 0) || (bVar47)) {
      if ((iVar11 == iVar10) && (bVar48)) {
        lVar25 = lVar38 - param_8;
        lVar39 = (lVar33 - param_7) + 4;
        lVar18 = ((uVar16 & 0x1fffffff) * 8 - uVar16) + lVar18;
        iVar10 = (*pcVar2)(uStack0000001c,0x10,
                           (lVar28 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + 1);
        iVar11 = fn_82E9AB00(iVar7,lVar39,lVar25 + -4,in_stack_0000009c);
        uVar4 = *(undefined4 *)(iVar7 + 0x564);
        *(int *)((int)((lVar18 - 6U & 0xffffffff) << 2) + (int)piStack_55c) = iVar10 + iVar11;
        iVar10 = (*pcVar2)(uVar15,0x10,lVar28 + 1,uVar4);
        iVar11 = fn_82E9AB00(iVar7,lVar39,lVar25,in_stack_0000009c);
        uVar43 = *(uint *)(iVar7 + 0x564);
        *(int *)((int)((lVar18 + 1U & 0xffffffff) << 2) + (int)piStack_55c) = iVar10 + iVar11;
        iVar10 = (*pcVar2)(uVar15,0x10,lVar28 + (ulonglong)uVar43 + 1);
        iVar7 = fn_82E9AB00(iVar7,lVar39,lVar25 + 4,in_stack_0000009c);
        *(int *)((int)((lVar18 + 8U & 0xffffffff) << 2) + (int)piStack_55c) = iVar10 + iVar7;
      }
    }
    else {
      lVar18 = lVar38 - param_8;
      lVar25 = (lVar33 - param_7) + -4;
      iVar10 = (*pcVar2)(uStack0000001c,0x10,
                         (lVar28 - (ulonglong)*(uint *)(iStack00000014 + 0x564)) + -1);
      iVar11 = fn_82E9AB00(iVar7,lVar25,lVar18 + -4,in_stack_0000009c);
      uVar4 = *(undefined4 *)(iVar7 + 0x564);
      piStack_55c[iVar12 * 7 + -8] = iVar10 + iVar11;
      iVar10 = (*pcVar2)(uVar15,0x10,lVar28 + -1,uVar4);
      iVar11 = fn_82E9AB00(iVar7,lVar25,lVar18,in_stack_0000009c);
      uVar43 = *(uint *)(iVar7 + 0x564);
      piStack_55c[iVar12 * 7 + -1] = iVar10 + iVar11;
      iVar10 = (*pcVar2)(uVar15,0x10,lVar28 + (ulonglong)uVar43 + -1);
      iVar7 = fn_82E9AB00(iVar7,lVar25,lVar18 + 4,in_stack_0000009c);
      piStack_55c[iVar12 * 7 + 6] = iVar10 + iVar7;
    }
    iVar7 = iStack00000014;
    lVar25 = ((lVar33 - param_7) + (ulonglong)*(uint *)(iStack00000014 + 0xa2c) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa34)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa2c);
    lVar18 = ((lVar38 - param_8) + (ulonglong)*(uint *)(iStack00000014 + 0xa30) &
             (ulonglong)*(uint *)(iStack00000014 + 0xa38)) -
             (ulonglong)*(uint *)(iStack00000014 + 0xa30);
    if (*(int *)(iStack00000014 + 0x6d84) == 0) {
      uVar15 = uStack0000001c;
      if ((iVar8 != iVar6) && (in_stack_00000084 == 0)) {
        pcVar2 = (code *)*in_stack_000000a4;
        iStack_548 = fn_82E9AB00(iStack00000014,lVar25,lVar18,in_stack_0000009c);
        uVar15 = uStack0000001c;
        iVar8 = (*pcVar2)(uStack0000001c,0x10,lVar28,*(undefined4 *)(iVar7 + 0x564));
        iStack_548 = iStack_548 + iVar8;
      }
      (**(code **)(iVar7 + 0x6f2c))(iVar7,uVar15,lVar28,lVar22,uVar16,iStack_548,bVar45,bVar46);
      uVar44 = (uint)(param_7 & 3);
      uVar43 = (uint)(param_8 & 3);
      if (((uVar44 != 0) || (uVar43 != 0)) &&
         (((int)lVar33 + uStack_540 != iVar34 || ((int)lVar38 + uStack_544 != iVar30)))) {
        uVar16 = (ulonglong)in_stack_00000064;
        if (((int)in_stack_00000064 <= (int)uVar31) &&
           (uVar16 = (longlong)(int)uVar31, (int)in_stack_0000006c < (int)uVar31)) {
          uVar16 = (ulonglong)in_stack_0000006c;
        }
        uVar32 = in_stack_00000074;
        if (((int)in_stack_00000074 <= (int)uVar26) &&
           (uVar32 = uVar26, (int)in_stack_0000007c < (int)uVar26)) {
          uVar32 = in_stack_0000007c;
        }
        (**(code **)(iVar7 + 0xa5c))
                  ((longlong)(int)uVar32 * (longlong)*(int *)(iVar7 + 0x564) + uVar16 +
                   (ulonglong)uStack00000024,*(int *)(iVar7 + 0x564),auStack_1c0,0x10,param_7 & 3,
                   param_8 & 3,*(undefined4 *)(iVar7 + 0x618));
        iVar8 = (*pcVar2)(uVar15,0x10,auStack_1c0,0x10);
        iVar8 = *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar8;
        if (iVar8 < iStack_548) {
          uStack_53c = 0;
          uStack_530 = 0;
          iStack_548 = iVar8;
          uStack_544 = uVar43;
          uStack_540 = uVar44;
          uStack_528 = uVar31;
          uStack_520 = uVar26;
        }
      }
      uVar16 = (ulonglong)in_stack_00000064;
      if (in_stack_00000084 != 0) {
        uVar31 = uStack00000044;
        uVar26 = uStack0000004c;
        if (iStack_538 == 0) {
          uVar31 = in_stack_00000054;
          uVar26 = in_stack_0000005c;
        }
        uVar43 = uVar31 & 3;
        uVar44 = uVar26 & 3;
        if (((uVar43 != 0) || (uVar44 != 0)) &&
           (((uStack_530 + uStack_528) * 4 + uStack_540 != uVar31 ||
            ((uStack_53c + uStack_520) * 4 + uStack_544 != uVar26)))) {
          uVar31 = (int)uVar31 >> 2;
          uVar26 = (int)uVar26 >> 2;
          if (((int)in_stack_00000064 <= (int)uVar31) &&
             (uVar16 = (longlong)(int)uVar31, (int)in_stack_0000006c < (int)uVar31)) {
            uVar16 = (ulonglong)in_stack_0000006c;
          }
          if (((int)in_stack_00000074 <= (int)uVar26) &&
             (in_stack_00000074 = uVar26, (int)in_stack_0000007c < (int)uVar26)) {
            in_stack_00000074 = in_stack_0000007c;
          }
          (**(code **)(iVar7 + 0xa5c))
                    ((longlong)(int)in_stack_00000074 * (longlong)*(int *)(iVar7 + 0x564) + uVar16 +
                     (ulonglong)uStack00000024,*(int *)(iVar7 + 0x564),auStack_1c0,0x10,uVar43,
                     uVar44,*(undefined4 *)(iVar7 + 0x618));
          iVar8 = (*pcVar2)(uVar15,0x10,auStack_1c0,0x10);
          iVar7 = fn_82E9AB00(iVar7,0,0,in_stack_0000009c);
          if (iVar7 + iVar8 < iStack_548) {
            uStack_53c = 0;
            uStack_530 = 0;
            iStack_548 = iVar7 + iVar8;
            uStack_544 = uVar44;
            uStack_540 = uVar43;
            uStack_528 = uVar31;
            uStack_520 = uVar26;
          }
        }
      }
    }
    else {
      (**(code **)(iStack00000014 + 0xa5c))
                (lVar28,*(undefined4 *)(iStack00000014 + 0x564),auStack_1c0,0x10,lVar25,lVar18,
                 *(undefined4 *)(iStack00000014 + 0x618));
      uVar15 = uStack0000001c;
      fn_82E9AC18(iVar7,uStack0000001c,0x10,auStack_1c0,0x10,8,8,iVar23);
      iVar8 = fn_82E9B140(iVar7,lVar25,lVar18,uStack_54c,0);
      uStack_560 = iVar8 + uStack_560;
      if (in_stack_00000084 != 0) {
        uStack_560 = uStack_560 + 1;
      }
      lVar18 = (longlong)(int)uStack_560 * (longlong)*(int *)(iVar23 + 0x6c) + (ulonglong)uStack_550
      ;
      iStack_548 = (int)lVar18;
      fn_82EA8848(iVar7,uVar15,lVar28,lVar22,uVar16,lVar18,bVar45,bVar46);
      iVar7 = iStack00000014;
      if (((int)lVar33 + uStack_540 != iVar34) || ((int)lVar38 + uStack_544 != iVar30)) {
        uVar16 = (ulonglong)(int)uVar31;
        uVar43 = in_stack_00000064;
        if (((int)uVar31 < (int)in_stack_00000064) ||
           (uVar43 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar31)) {
          uVar16 = (ulonglong)uVar43;
        }
        uVar43 = in_stack_00000074;
        if (((int)uVar26 < (int)in_stack_00000074) ||
           (uVar44 = uVar26, uVar43 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar26)) {
          uVar44 = uVar43;
        }
        (**(code **)(iStack00000014 + 0xa5c))
                  ((longlong)(int)uVar44 * (longlong)*(int *)(iStack00000014 + 0x564) + uVar16 +
                   (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                   param_7 & 3,param_8 & 3,*(undefined4 *)(iStack00000014 + 0x618));
        fn_82E9AC18(iVar7,uStack0000001c,0x10,auStack_1c0,0x10,8,8,iVar23);
        iVar7 = fn_82E9B140(iVar7,0,0,uStack_54c,0);
        uStack_560 = iVar7 + uStack_560;
        if (in_stack_00000084 != 0) {
          uStack_560 = uStack_560 + 1;
        }
        iVar7 = uStack_560 * *(int *)(iVar23 + 0x6c) + uStack_550;
        if (iVar7 < iStack_548) {
          uStack_540 = (uint)(param_7 & 3);
          uStack_544 = (uint)(param_8 & 3);
          uStack_53c = 0;
          uStack_530 = 0;
          iStack_548 = iVar7;
          uStack_528 = uVar31;
          uStack_520 = uVar26;
        }
      }
      iVar7 = iStack00000014;
      if (in_stack_00000084 != 0) {
        uVar31 = uStack00000044;
        uVar26 = uStack0000004c;
        if (iStack_538 == 0) {
          uVar31 = in_stack_00000054;
          uVar26 = in_stack_0000005c;
        }
        if (((uStack_530 + uStack_528) * 4 + uStack_540 != uVar31) ||
           ((uStack_53c + uStack_520) * 4 + uStack_544 != uVar26)) {
          uVar43 = (int)uVar31 >> 2;
          uVar16 = (ulonglong)(int)uVar43;
          uVar44 = (int)uVar26 >> 2;
          if (((int)uVar43 < (int)in_stack_00000064) ||
             (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar43)) {
            uVar16 = (ulonglong)in_stack_00000064;
          }
          if (((int)uVar44 < (int)in_stack_00000074) ||
             (uVar32 = uVar44, in_stack_00000074 = in_stack_0000007c,
             (int)in_stack_0000007c < (int)uVar44)) {
            uVar32 = in_stack_00000074;
          }
          (**(code **)(iStack00000014 + 0xa5c))
                    ((longlong)(int)uVar32 * (longlong)*(int *)(iStack00000014 + 0x564) + uVar16 +
                     (ulonglong)uStack00000024,*(int *)(iStack00000014 + 0x564),auStack_1c0,0x10,
                     uVar31 & 3,uVar26 & 3,*(undefined4 *)(iStack00000014 + 0x618));
          fn_82E9AC18(iVar7,uStack0000001c,0x10,auStack_1c0,0x10,8,8,iVar23);
          iVar7 = fn_82E9B140(iVar7,0,0,uStack_54c,0);
          iVar7 = (iVar7 + uStack_560 + 1) * *(int *)(iVar23 + 0x6c) + uStack_550;
          if (iVar7 < iStack_548) {
            uStack_53c = 0;
            uStack_530 = 0;
            iStack_548 = iVar7;
            uStack_544 = uVar26 & 3;
            uStack_540 = uVar31 & 3;
            uStack_528 = uVar43;
            uStack_520 = uVar44;
          }
        }
      }
    }
  }
  *in_stack_000000b4 = (uStack_530 + uStack_528) * 4 + uStack_540;
  *in_stack_000000bc = (uStack_53c + uStack_520) * 4 + uStack_544;
  *in_stack_000000c4 = iStack_548;
  return;
}


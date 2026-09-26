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
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_5b0;
extern unsigned int *auStack_680;
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EA4B28();
extern int fn_82EAA320();
extern int fn_82EFE140();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack0000003c;
extern unsigned int iStack00000044;
extern unsigned int iStack_6b0;
extern unsigned int iStack_70c;
extern unsigned int iStack_738;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000004c;
extern unsigned int uStack_6a4;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned int uStack_6e4;
extern unsigned int uStack_6ec;
extern unsigned int uStack_6f0;
extern unsigned int uStack_6f4;
extern unsigned int uStack_6f8;
extern unsigned int uStack_700;
extern unsigned int uStack_708;
extern unsigned int uStack_710;
extern unsigned int uStack_714;
extern unsigned int uStack_724;
extern unsigned int uStack_728;
extern unsigned int uStack_72c;
extern unsigned int uStack_730;
extern unsigned int uStack_750;
extern unsigned int uStack_758;
extern unsigned int uStack_75c;
extern unsigned int uStack_76c;
extern unsigned int *uStack_770;
extern unsigned int uStack_77c;
extern unsigned int uStack_780;
extern unsigned int uStack_784;
extern unsigned int uStack_788;


/* WARNING: Removing unreachable block (ram,0x82ebf09c) */
/* WARNING: Removing unreachable block (ram,0x82ebcfe4) */
/* WARNING: Removing unreachable block (ram,0x82ebde84) */
/* WARNING: Removing unreachable block (ram,0x82ebe1f0) */

void fn_82EBBDA0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                  ,int param_6,int param_7,uint param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 uVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  int *piVar21;
  bool bVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  code *pcVar26;
  code *pcVar27;
  code *pcVar28;
  uint uVar29;
  code *pcVar30;
  ulonglong uVar31;
  code *pcVar32;
  code *pcVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  uint uVar40;
  int iVar41;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  int iStack0000003c;
  int iStack00000044;
  uint uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  code *in_stack_00000064;
  code *in_stack_0000006c;
  code *in_stack_00000074;
  code *in_stack_0000007c;
  code *in_stack_00000084;
  code *in_stack_0000008c;
  code *in_stack_00000094;
  code *in_stack_0000009c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  uint in_stack_000000b4;
  int in_stack_000000bc;
  int in_stack_000000c4;
  int in_stack_000000cc;
  uint in_stack_000000d4;
  int in_stack_000000dc;
  int in_stack_000000e4;
  undefined4 *in_stack_000000ec;
  undefined4 in_stack_000000f4;
  undefined4 *in_stack_000000fc;
  int *in_stack_00000104;
  undefined4 *in_stack_0000010c;
  int *in_stack_00000114;
  int *in_stack_0000011c;
  undefined4 *in_stack_00000124;
  code *pcStack_790;
  code *pcStack_78c;
  uint uStack_788;
  uint uStack_784;
  uint uStack_780;
  uint uStack_77c;
  code *pcStack_778;
  undefined1 *puStack_774;
  uint uStack_770;
  uint uStack_76c;
  undefined1 *puStack_768;
  code *pcStack_764;
  code *pcStack_760;
  uint uStack_75c;
  uint uStack_758;
  code *pcStack_754;
  uint uStack_750;
  code *pcStack_74c;
  code *pcStack_748;
  code *pcStack_744;
  code *pcStack_740;
  code *pcStack_73c;
  int iStack_738;
  code *pcStack_734;
  uint uStack_730;
  uint uStack_72c;
  uint uStack_728;
  uint uStack_724;
  code *pcStack_720;
  code *pcStack_71c;
  undefined1 *puStack_718;
  uint uStack_714;
  uint uStack_710;
  int iStack_70c;
  uint uStack_708;
  code *pcStack_704;
  uint uStack_700;
  code *pcStack_6fc;
  uint uStack_6f8;
  uint uStack_6f4;
  uint uStack_6f0;
  uint uStack_6ec;
  code *pcStack_6e8;
  uint uStack_6e4;
  uint uStack_6e0;
  uint uStack_6dc;
  code *apcStack_6d0 [4];
  code *apcStack_6c0 [4];
  int iStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  undefined1 auStack_680 [208];
  undefined1 auStack_5b0 [208];
  undefined1 auStack_4e0 [208];
  undefined1 auStack_410 [208];
  undefined1 auStack_340 [208];
  undefined1 auStack_270 [176];
  undefined1 auStack_1c0 [448];
  
  puStack_768 = auStack_1c0;
  iStack_738 = 0;
  if ((*(uint *)(param_1 + 0x6db8) & 1) == 0) {
    uVar18 = in_stack_000000f4;
    if ((*(uint *)(param_1 + 0x6db8) & 4) == 0) {
      uVar18 = 0;
    }
  }
  else {
    uVar18 = 1;
  }
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iStack0000003c = param_6;
  iStack00000044 = param_7;
  uStack0000004c = param_8;
  uStack_728 = fn_82EFE140(param_1,in_stack_000000ec,uVar18);
  iVar13 = 0;
  pcStack_734 = (code *)in_stack_000000ec[1];
  pcStack_6e8 = (code *)in_stack_000000ec[2];
  iStack_70c = (*(int *)(param_1 + 0x2d4) * in_stack_0000005c + in_stack_00000054) * 0x114 +
               *(int *)(param_1 + 0x1e54);
  if (in_stack_000000c4 != 0) {
    iVar15 = ((int)in_stack_00000074 >> 2) + 2 >> 2;
    iVar8 = ((int)in_stack_0000007c >> 2) + 2 >> 2;
    if (0 < in_stack_000000dc) {
      piVar21 = (int *)(param_8 + 0x100);
      do {
        if ((iVar15 == piVar21[-0x20]) && (iVar8 == *piVar21)) break;
        iVar13 = iVar13 + 1;
        piVar21 = piVar21 + 1;
      } while (iVar13 < in_stack_000000dc);
    }
    if (iVar13 == in_stack_000000dc) {
      in_stack_000000dc = in_stack_000000dc + 1;
      *(int *)((iVar13 + 0x20) * 4 + param_8) = iVar15;
      *(int *)((iVar13 + 0x40) * 4 + param_8) = iVar8;
    }
  }
  iVar8 = 0;
  iVar13 = ((int)in_stack_00000064 >> 2) + 2 >> 2;
  iVar15 = ((int)in_stack_0000006c >> 2) + 2 >> 2;
  if (0 < in_stack_000000dc) {
    piVar21 = (int *)(param_8 + 0x100);
    do {
      if ((iVar13 == piVar21[-0x20]) && (iVar15 == *piVar21)) break;
      iVar8 = iVar8 + 1;
      piVar21 = piVar21 + 1;
    } while (iVar8 < in_stack_000000dc);
  }
  if (iVar8 == in_stack_000000dc) {
    in_stack_000000dc = in_stack_000000dc + 1;
    *(int *)((iVar8 + 0x20) * 4 + param_8) = iVar13;
    *(int *)((iVar8 + 0x40) * 4 + param_8) = iVar15;
  }
  iVar13 = 0;
  if (in_stack_000000cc != 0) {
    iVar15 = ((int)in_stack_00000094 >> 2) + 2 >> 2;
    iVar8 = ((int)in_stack_0000009c >> 2) + 2 >> 2;
    if (0 < in_stack_000000dc) {
      piVar21 = (int *)(param_8 + 0x100);
      do {
        if ((iVar15 == piVar21[-0x20]) && (iVar8 == *piVar21)) break;
        iVar13 = iVar13 + 1;
        piVar21 = piVar21 + 1;
      } while (iVar13 < in_stack_000000dc);
    }
    if (iVar13 == in_stack_000000dc) {
      in_stack_000000dc = in_stack_000000dc + 1;
      *(int *)((iVar13 + 0x20) * 4 + param_8) = iVar15;
      *(int *)((iVar13 + 0x40) * 4 + param_8) = iVar8;
    }
  }
  iVar8 = 0;
  iVar13 = ((int)in_stack_00000084 >> 2) + 2 >> 2;
  iVar15 = ((int)in_stack_0000008c >> 2) + 2 >> 2;
  if (0 < in_stack_000000dc) {
    piVar21 = (int *)(param_8 + 0x100);
    do {
      if ((iVar13 == piVar21[-0x20]) && (iVar15 == *piVar21)) break;
      iVar8 = iVar8 + 1;
      piVar21 = piVar21 + 1;
    } while (iVar8 < in_stack_000000dc);
  }
  if (iVar8 == in_stack_000000dc) {
    in_stack_000000dc = in_stack_000000dc + 1;
    *(int *)((iVar8 + 0x20) * 4 + param_8) = iVar13;
    *(int *)((iVar8 + 0x40) * 4 + param_8) = iVar15;
  }
  pcStack_790 = (code *)0x0;
  pcVar26 = (code *)0xfffffff;
  pcStack_754 = (code *)auStack_270;
  puStack_774 = auStack_680;
  pcStack_744 = (code *)0xfffffff;
  puStack_718 = auStack_410;
  pcStack_73c = (code *)0xfffffff;
  pcStack_74c = (code *)auStack_5b0;
  pcStack_778 = (code *)auStack_4e0;
  pcStack_720 = (code *)auStack_340;
  pcStack_760 = (code *)&lbl_831898B8;
  if (0 < in_stack_000000dc) {
    uVar31 = (ulonglong)uStack_750;
    uVar14 = uStack_750;
    pcVar27 = pcVar26;
    pcVar32 = pcVar26;
    do {
      pcVar33 = pcStack_734;
      uVar39 = ZEXT48(pcStack_790);
      bVar22 = true;
      uVar19 = (ulonglong)in_stack_000000d4;
      iVar15 = (int)((uVar39 + 0x20 & 0xffffffff) << 2);
      uVar24 = -uVar19;
      uStack_780 = (uint)uVar24;
      uVar9 = *(uint *)(iVar15 + uStack0000004c);
      iVar13 = (int)((uVar39 + 0x40 & 0x3fffffff) << 2);
      uVar34 = *(uint *)(iVar13 + uStack0000004c);
      uStack_784 = in_stack_000000d4;
      pcStack_764 = (code *)in_stack_000000d4;
      uVar6 = ((ulonglong)uVar34 & 0x3fffffff) * 4;
      iVar8 = *(int *)(param_1 + 0x568) * uVar34 * 2 + uVar9 * 2;
      pcVar7 = (code *)uVar6;
      uStack_6f4 = iVar8 + iStack00000044;
      uStack_6f0 = iVar8 + iStack0000003c;
      uVar16 = ((ulonglong)uVar9 & 0x3fffffff) << 2;
      iVar8 = uVar9 * 8;
      uVar9 = (uint)uVar16;
      lVar17 = ((ulonglong)uVar34 & 0x1fffffff) * 8;
      uStack_6f8 = *(int *)(param_1 + 0x564) * (int)pcVar7 + uVar9 + uStack00000034;
      uStack_6ec = (uint)lVar17;
      uVar35 = uVar24;
      pcStack_748 = (code *)uStack_780;
      if ((1 < (int)in_stack_000000d4) && (pcStack_790 != (code *)0x0)) {
        lVar20 = (uVar39 + 0x1f & 0x3fffffff) * 4 + (ulonglong)uStack0000004c;
        uVar25 = uVar19;
        do {
          pcStack_764 = (code *)uVar19;
          uStack_784 = (uint)uVar25;
          uStack_780 = (uint)uVar24;
          if (!bVar22) break;
          piVar21 = (int *)lVar20;
          iVar10 = *piVar21;
          iVar11 = *(int *)(iVar15 + uStack0000004c);
          if (iVar10 == iVar11) {
            if (piVar21[0x20] == *(int *)(iVar13 + uStack0000004c) + -1) {
              uVar35 = uVar35 + 1;
              bVar22 = false;
            }
            if (piVar21[0x20] == *(int *)(iVar13 + uStack0000004c) + 1) {
              uVar19 = uVar19 - 1;
LAB_82ebc234:
              bVar22 = false;
            }
          }
          else if (piVar21[0x20] == *(int *)(iVar13 + uStack0000004c)) {
            if (iVar10 == iVar11 + -1) {
              uVar24 = uVar24 + 1;
              bVar22 = false;
            }
            if (iVar10 == iVar11 + 1) {
              uVar25 = uVar25 - 1;
              goto LAB_82ebc234;
            }
          }
          pcStack_764 = (code *)uVar19;
          uStack_784 = (uint)uVar25;
          uStack_780 = (uint)uVar24;
          lVar20 = lVar20 + -4;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
        pcStack_748 = (code *)uVar35;
      }
      if ((int)(uStack_780 + uVar9) < in_stack_000000a4) {
        uStack_780 = in_stack_000000a4 - uVar9;
      }
      if (in_stack_000000ac < (int)(uStack_784 + uVar9)) {
        uStack_784 = in_stack_000000ac - uVar9;
      }
      if ((int)(pcVar7 + (int)uVar35) < (int)in_stack_000000b4) {
        uVar35 = (ulonglong)in_stack_000000b4 + ((ulonglong)uVar34 & 0x3fffffff) * -4;
        pcStack_748 = (code *)uVar35;
      }
      if (in_stack_000000bc < (int)(pcVar7 + (int)pcStack_764)) {
        pcStack_764 = (code *)(in_stack_000000bc - (int)pcVar7);
      }
      pcStack_78c = pcVar7;
      uStack_788 = uVar9;
      iStack_6b0 = iVar8;
      if (*(int *)(param_1 + 0x6d94) == 0) {
        if ((int)uVar35 <= (int)pcStack_764) {
          iVar13 = 0;
          lVar17 = (ZEXT48(pcStack_748) & 0x7fffffff) * 2 + lVar17;
          do {
            uVar19 = (ulonglong)uStack_780;
            iVar15 = 0;
            if ((int)uStack_780 <= (int)uStack_784) {
              iVar10 = uStack_780 * 2 + iVar8;
              do {
                uVar34 = (uint)uVar35;
                uVar9 = 0;
                iVar11 = (*pcStack_6e8)(uStack0000001c,0x10,
                                        (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar34
                                        + uVar19 + (ulonglong)uStack_6f8,*(int *)(param_1 + 0x564),
                                        pcVar26);
                puVar36 = puStack_768;
                uVar40 = (uint)uVar19;
                if (((uVar35 & 1) == 0) && ((uVar19 & 1) == 0)) {
                  if (((*(uint *)(param_1 + 0x6dc4) & 1) != 0) && (iVar11 < (int)pcVar26)) {
                    uVar9 = (*pcStack_734)(uStack00000024,8,
                                           (longlong)((int)uVar34 >> 1) *
                                           (longlong)*(int *)(param_1 + 0x568) +
                                           (longlong)((int)uVar40 >> 1) + (ulonglong)uStack_6f0,
                                           *(int *)(param_1 + 0x568),(int)pcVar26 - iVar11);
                  }
                  if (((*(uint *)(param_1 + 0x6dc4) & 2) != 0) &&
                     ((int)(iVar11 + uVar9) < (int)pcVar26)) {
                    iVar12 = *(int *)(param_1 + 0x568);
                    uVar6 = (longlong)((int)uVar34 >> 1) * (longlong)iVar12 +
                            (longlong)((int)uVar40 >> 1) + (ulonglong)uStack_6f4;
                    iVar41 = -uVar9 - iVar11;
LAB_82ebc8a0:
                    iVar12 = (*pcStack_734)(uStack0000002c,8,uVar6,iVar12,pcVar26 + iVar41);
                    uVar9 = iVar12 + uVar9;
                  }
                }
                else {
                  if (((*(uint *)(param_1 + 0x6dc4) & 1) != 0) && (iVar11 < (int)pcVar26)) {
                    fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),
                                      puStack_768,8,iVar10,lVar17,0);
                    uVar9 = (*pcStack_734)(uStack00000024,8,puVar36,8,(int)pcVar26 - iVar11);
                  }
                  if (((*(uint *)(param_1 + 0x6dc4) & 2) != 0) &&
                     ((int)(iVar11 + uVar9) < (int)pcVar26)) {
                    fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),
                                      puStack_768,8,iVar10,lVar17,0);
                    uVar6 = ZEXT48(puStack_768);
                    iVar12 = 8;
                    iVar41 = -uVar9 - iVar11;
                    goto LAB_82ebc8a0;
                  }
                }
                uVar16 = (ulonglong)uStack_788;
                uVar6 = ZEXT48(pcStack_78c);
                lVar23 = (uVar19 + uVar16 & 0x3fffffff) * 4;
                lVar20 = (uVar35 + uVar6 & 0x3fffffff) * 4;
                uVar39 = (ulonglong)((int)(lVar23 - ZEXT48(in_stack_00000064)) >> 0x1f);
                uVar24 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_0000006c)) >> 0x1f);
                uVar39 = (lVar23 - ZEXT48(in_stack_00000064) ^ uVar39) - uVar39;
                uVar24 = (lVar20 - ZEXT48(in_stack_0000006c) ^ uVar24) - uVar24;
                if (((int)uVar39 < 0x9f) && ((int)uVar24 < 0x9f)) {
                  iVar12 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4);
                }
                else {
                  iVar12 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                }
                pcVar33 = (code *)(iVar12 + iVar11 + uVar9);
                if ((int)pcVar33 < (int)pcVar32) {
                  pcVar26 = pcVar27;
                  if ((int)pcVar27 <= (int)pcVar32) {
                    pcVar26 = pcVar32;
                  }
                  pcVar26 = pcVar26 + 1;
                  iStack_738 = 0;
                  uStack_770 = uVar9;
                  uStack_76c = uVar34;
                  pcStack_740 = (code *)uVar40;
                  pcVar32 = pcVar33;
                }
                iVar12 = (iVar13 + iVar15) * 4;
                *(code **)(pcStack_754 + iVar12) = pcVar33;
                if (in_stack_000000c4 != 0) {
                  uVar39 = (ulonglong)((int)(lVar23 - ZEXT48(in_stack_00000074)) >> 0x1f);
                  uVar24 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_0000007c)) >> 0x1f);
                  uVar39 = (lVar23 - ZEXT48(in_stack_00000074) ^ uVar39) - uVar39;
                  uVar24 = (lVar20 - ZEXT48(in_stack_0000007c) ^ uVar24) - uVar24;
                  if (((int)uVar39 < 0x9f) && ((int)uVar24 < 0x9f)) {
                    iVar41 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000e4) +
                             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000e4);
                  }
                  else {
                    iVar41 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                  }
                  pcVar33 = (code *)(iVar41 + iVar11 + uVar9);
                  if ((int)pcVar33 < (int)pcVar32) {
                    pcVar26 = pcVar27;
                    if ((int)pcVar27 <= (int)pcVar32) {
                      pcVar26 = pcVar32;
                    }
                    pcVar26 = pcVar26 + 1;
                    iStack_738 = 1;
                    uStack_770 = uVar9;
                    uStack_76c = uVar34;
                    pcStack_740 = (code *)uVar40;
                    pcVar32 = pcVar33;
                  }
                  *(code **)(puStack_774 + iVar12) = pcVar33;
                }
                uVar39 = (ulonglong)((int)(lVar23 - ZEXT48(in_stack_00000084)) >> 0x1f);
                uVar24 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_0000008c)) >> 0x1f);
                uVar39 = (lVar23 - ZEXT48(in_stack_00000084) ^ uVar39) - uVar39;
                uVar24 = (lVar20 - ZEXT48(in_stack_0000008c) ^ uVar24) - uVar24;
                if (((int)uVar39 < 0x9f) && ((int)uVar24 < 0x9f)) {
                  iVar41 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4);
                }
                else {
                  iVar41 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                }
                pcVar33 = (code *)(iVar41 + iVar11 + uVar9);
                if ((int)pcVar33 < (int)pcVar27) {
                  if ((int)pcVar27 <= (int)pcVar32) {
                    pcVar27 = pcVar32;
                  }
                  pcVar26 = pcVar27 + 1;
                  pcStack_71c = (code *)0x0;
                  uVar31 = uVar19;
                  uStack_77c = uVar34;
                  uVar14 = uVar9;
                  pcVar27 = pcVar33;
                }
                *(code **)(pcStack_74c + iVar12) = pcVar33;
                if (in_stack_000000cc != 0) {
                  uVar39 = (ulonglong)((int)(lVar23 - ZEXT48(in_stack_00000094)) >> 0x1f);
                  uVar24 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_0000009c)) >> 0x1f);
                  uVar39 = (lVar23 - ZEXT48(in_stack_00000094) ^ uVar39) - uVar39;
                  uVar24 = (lVar20 - ZEXT48(in_stack_0000009c) ^ uVar24) - uVar24;
                  if (((int)uVar39 < 0x9f) && ((int)uVar24 < 0x9f)) {
                    iVar41 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000e4) +
                             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000e4);
                  }
                  else {
                    iVar41 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                  }
                  pcVar33 = (code *)(iVar41 + iVar11 + uVar9);
                  if ((int)pcVar33 < (int)pcVar27) {
                    if ((int)pcVar27 <= (int)pcVar32) {
                      pcVar27 = pcVar32;
                    }
                    pcVar26 = pcVar27 + 1;
                    pcStack_71c = (code *)0x1;
                    uVar31 = uVar19;
                    uStack_77c = uVar34;
                    uVar14 = uVar9;
                    pcVar27 = pcVar33;
                  }
                  *(code **)(pcStack_778 + iVar12) = pcVar33;
                }
                uVar19 = uVar19 + 1;
                iVar10 = iVar10 + 2;
                iVar15 = iVar15 + 1;
              } while ((int)uVar19 <= (int)uStack_784);
            }
            pcVar7 = (code *)uVar6;
            uVar9 = (uint)uVar16;
            uVar35 = uVar35 + 1;
            lVar17 = lVar17 + 2;
            iVar13 = iVar13 + 7;
          } while ((int)uVar35 <= (int)pcStack_764);
        }
      }
      else if ((int)uVar35 <= (int)pcStack_764) {
        uVar19 = (ulonglong)uStack_6f0;
        iVar13 = 0;
        do {
          uVar24 = (ulonglong)uStack_780;
          iVar15 = 0;
          if ((int)uStack_780 <= (int)uStack_784) {
            do {
              uVar34 = (uint)uVar35;
              uVar9 = 0;
              iVar8 = (*pcStack_6e8)(uStack0000001c,0x10,
                                     (longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar34 +
                                     uVar24 + (ulonglong)uStack_6f8,*(int *)(param_1 + 0x564),
                                     pcVar26);
              uVar40 = (uint)uVar24;
              if (((*(uint *)(param_1 + 0x6dc4) & 1) != 0) && (iVar8 < (int)pcVar26)) {
                uVar9 = (*pcVar33)(uStack00000024,8,
                                   (longlong)((int)uVar34 >> 1) *
                                   (longlong)*(int *)(param_1 + 0x568) +
                                   (longlong)((int)uVar40 >> 1) + uVar19,*(int *)(param_1 + 0x568),
                                   (int)pcVar26 - iVar8);
              }
              if (((*(uint *)(param_1 + 0x6dc4) & 2) != 0) && ((int)(iVar8 + uVar9) < (int)pcVar26))
              {
                iVar10 = (*pcVar33)(uStack0000002c,8,
                                    (longlong)((int)uVar34 >> 1) *
                                    (longlong)*(int *)(param_1 + 0x568) +
                                    (longlong)((int)uVar40 >> 1) + (ulonglong)uStack_6f4,
                                    *(int *)(param_1 + 0x568),pcVar26 + (-uVar9 - iVar8));
                uVar9 = iVar10 + uVar9;
              }
              uVar16 = (ulonglong)uStack_788;
              uVar6 = ZEXT48(pcStack_78c);
              lVar20 = (uVar24 + uVar16 & 0x3fffffff) * 4;
              lVar17 = (uVar35 + uVar6 & 0x3fffffff) * 4;
              uVar25 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_00000064)) >> 0x1f);
              uVar39 = (ulonglong)((int)(lVar17 - ZEXT48(in_stack_0000006c)) >> 0x1f);
              uVar25 = (lVar20 - ZEXT48(in_stack_00000064) ^ uVar25) - uVar25;
              uVar39 = (lVar17 - ZEXT48(in_stack_0000006c) ^ uVar39) - uVar39;
              if (((int)uVar25 < 0x9f) && ((int)uVar39 < 0x9f)) {
                iVar10 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000e4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar25 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000e4);
              }
              else {
                iVar10 = *(int *)(in_stack_000000e4 + 0x14) << 1;
              }
              pcVar7 = (code *)(iVar10 + iVar8 + uVar9);
              if ((int)pcVar7 < (int)pcVar32) {
                pcVar26 = pcVar27;
                if ((int)pcVar27 <= (int)pcVar32) {
                  pcVar26 = pcVar32;
                }
                pcVar26 = pcVar26 + 1;
                iStack_738 = 0;
                uStack_770 = uVar9;
                uStack_76c = uVar34;
                pcStack_740 = (code *)uVar40;
                pcVar32 = pcVar7;
              }
              iVar10 = (iVar15 + iVar13) * 4;
              *(code **)(pcStack_754 + iVar10) = pcVar7;
              if (in_stack_000000c4 != 0) {
                uVar25 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_00000074)) >> 0x1f);
                uVar39 = (ulonglong)((int)(lVar17 - ZEXT48(in_stack_0000007c)) >> 0x1f);
                uVar25 = (lVar20 - ZEXT48(in_stack_00000074) ^ uVar25) - uVar25;
                uVar39 = (lVar17 - ZEXT48(in_stack_0000007c) ^ uVar39) - uVar39;
                if (((int)uVar25 < 0x9f) && ((int)uVar39 < 0x9f)) {
                  iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar25 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4);
                }
                else {
                  iVar11 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                }
                pcVar7 = (code *)(iVar11 + iVar8 + uVar9);
                if ((int)pcVar7 < (int)pcVar32) {
                  pcVar26 = pcVar27;
                  if ((int)pcVar27 <= (int)pcVar32) {
                    pcVar26 = pcVar32;
                  }
                  pcVar26 = pcVar26 + 1;
                  iStack_738 = 1;
                  uStack_770 = uVar9;
                  uStack_76c = uVar34;
                  pcStack_740 = (code *)uVar40;
                  pcVar32 = pcVar7;
                }
                *(code **)(puStack_774 + iVar10) = pcVar7;
              }
              uVar25 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_00000084)) >> 0x1f);
              uVar39 = (ulonglong)((int)(lVar17 - ZEXT48(in_stack_0000008c)) >> 0x1f);
              uVar25 = (lVar20 - ZEXT48(in_stack_00000084) ^ uVar25) - uVar25;
              uVar39 = (lVar17 - ZEXT48(in_stack_0000008c) ^ uVar39) - uVar39;
              if (((int)uVar25 < 0x9f) && ((int)uVar39 < 0x9f)) {
                iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000e4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar25 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000e4);
              }
              else {
                iVar11 = *(int *)(in_stack_000000e4 + 0x14) << 1;
              }
              pcVar7 = (code *)(iVar11 + iVar8 + uVar9);
              if ((int)pcVar7 < (int)pcVar27) {
                if ((int)pcVar27 <= (int)pcVar32) {
                  pcVar27 = pcVar32;
                }
                pcVar26 = pcVar27 + 1;
                pcStack_71c = (code *)0x0;
                uVar31 = uVar24;
                uStack_77c = uVar34;
                uVar14 = uVar9;
                pcVar27 = pcVar7;
              }
              *(code **)(pcStack_74c + iVar10) = pcVar7;
              if (in_stack_000000cc != 0) {
                uVar25 = (ulonglong)((int)(lVar20 - ZEXT48(in_stack_00000094)) >> 0x1f);
                uVar39 = (ulonglong)((int)(lVar17 - ZEXT48(in_stack_0000009c)) >> 0x1f);
                uVar25 = (lVar20 - ZEXT48(in_stack_00000094) ^ uVar25) - uVar25;
                uVar39 = (lVar17 - ZEXT48(in_stack_0000009c) ^ uVar39) - uVar39;
                if (((int)uVar25 < 0x9f) && ((int)uVar39 < 0x9f)) {
                  iVar11 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar39 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar25 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000e4);
                }
                else {
                  iVar11 = *(int *)(in_stack_000000e4 + 0x14) << 1;
                }
                pcVar7 = (code *)(iVar11 + iVar8 + uVar9);
                if ((int)pcVar7 < (int)pcVar27) {
                  if ((int)pcVar27 <= (int)pcVar32) {
                    pcVar27 = pcVar32;
                  }
                  pcVar26 = pcVar27 + 1;
                  pcStack_71c = (code *)0x1;
                  uVar31 = uVar24;
                  uStack_77c = uVar34;
                  uVar14 = uVar9;
                  pcVar27 = pcVar7;
                }
                *(code **)(pcStack_778 + iVar10) = pcVar7;
              }
              uVar24 = uVar24 + 1;
              iVar15 = iVar15 + 1;
            } while ((int)uVar24 <= (int)uStack_784);
          }
          pcVar7 = (code *)uVar6;
          uVar9 = (uint)uVar16;
          uVar35 = uVar35 + 1;
          iVar13 = iVar13 + 7;
        } while ((int)uVar35 <= (int)pcStack_764);
      }
      pcVar1 = pcStack_74c;
      pcVar30 = pcStack_754;
      puVar36 = puStack_774;
      pcVar33 = pcStack_778;
      if ((int)pcVar32 < (int)pcStack_744) {
        uStack_75c = uStack_76c;
        uStack_758 = (uint)pcStack_740;
        uStack_6e0 = uStack_770;
        uStack_72c = uStack_780;
        uStack_724 = (uint)pcStack_748;
        uStack_6e4 = uStack_784;
        uStack_6dc = (uint)pcStack_764;
        pcStack_744 = pcVar32;
        pcStack_704 = pcVar7;
        uStack_700 = uVar9;
        if ((in_stack_000000c4 == 0) || (iStack_738 == 0)) {
          pcStack_754 = (code *)puStack_718;
          puStack_718 = pcVar30;
        }
        else {
          puStack_774 = puStack_718;
          puStack_718 = puVar36;
        }
      }
      if ((int)pcVar27 < (int)pcStack_73c) {
        uStack_750 = uStack_780;
        uStack_708 = (uint)uVar31;
        uStack_710 = uStack_77c;
        uStack_6ac = (uint)pcStack_748;
        uStack_6a8 = uStack_784;
        uStack_730 = (uint)pcStack_764;
        pcStack_73c = pcVar27;
        uStack_714 = uVar9;
        pcStack_6fc = pcVar7;
        uStack_6a4 = uVar14;
        if ((in_stack_000000cc == 0) || (pcStack_71c == (code *)0x0)) {
          pcStack_74c = pcStack_720;
          pcStack_720 = pcVar1;
        }
        else {
          pcStack_778 = pcStack_720;
          pcStack_720 = pcVar33;
        }
      }
      pcStack_790 = pcStack_790 + 1;
    } while ((int)pcStack_790 < in_stack_000000dc);
  }
  pcVar26 = in_stack_00000064;
  pcVar27 = in_stack_0000006c;
  if (in_stack_000000c4 != 0) {
    iVar13 = *(int *)(param_1 + 0xa30);
    iVar15 = *(int *)(param_1 + 0xa2c);
    uVar34 = (uStack_758 + uStack_700) * 4;
    uVar14 = *(uint *)(param_1 + 0xa38);
    pcVar32 = (code *)((int)(pcStack_704 + uStack_75c) * 4);
    uVar9 = *(uint *)(param_1 + 0xa34);
    pcStack_78c = pcVar32;
    uStack_788 = uVar34;
    iVar8 = fn_82E9B140(param_1,((iVar15 - (int)in_stack_00000074) + uVar34 & uVar9) - iVar15,
                          ((uint)(pcVar32 + (iVar13 - (int)in_stack_0000007c)) & uVar14) - iVar13,1,
                          0);
    iVar13 = fn_82E9B140(param_1,((iVar15 - (int)in_stack_00000064) + uVar34 & uVar9) - iVar15,
                           ((uint)(pcVar32 + (iVar13 - (int)in_stack_0000006c)) & uVar14) - iVar13,1
                           ,0);
    if (iVar13 < iVar8) {
      iStack_738 = 0;
    }
    else {
      iStack_738 = 1;
      pcVar26 = in_stack_00000074;
      pcVar27 = in_stack_0000007c;
    }
  }
  pcVar32 = in_stack_00000084;
  pcVar33 = in_stack_0000008c;
  if (in_stack_000000cc != 0) {
    iVar13 = *(int *)(param_1 + 0xa30);
    iVar15 = *(int *)(param_1 + 0xa2c);
    uVar34 = (uStack_708 + uStack_714) * 4;
    uVar14 = *(uint *)(param_1 + 0xa38);
    pcVar7 = (code *)((int)(pcStack_6fc + uStack_710) * 4);
    uVar9 = *(uint *)(param_1 + 0xa34);
    pcStack_78c = pcVar7;
    uStack_788 = uVar34;
    iVar8 = fn_82E9B140(param_1,((iVar15 - (int)in_stack_00000094) + uVar34 & uVar9) - iVar15,
                          ((uint)(pcVar7 + (iVar13 - (int)in_stack_0000009c)) & uVar14) - iVar13,1,0
                         );
    iVar13 = fn_82E9B140(param_1,((iVar15 - (int)in_stack_00000084) + uVar34 & uVar9) - iVar15,
                           ((uint)(pcVar7 + (iVar13 - (int)in_stack_0000008c)) & uVar14) - iVar13,1,
                           0);
    if (iVar13 < iVar8) {
      iStack_738 = 0;
    }
    else {
      iStack_738 = 1;
      pcVar32 = in_stack_00000094;
      pcVar33 = in_stack_0000009c;
    }
  }
  if ((*(uint *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000f4 = 0;
    }
  }
  else {
    in_stack_000000f4 = 1;
  }
  pcStack_764 = pcVar33;
  pcStack_748 = pcVar32;
  uVar14 = fn_82EFE140(param_1,in_stack_000000ec,in_stack_000000f4);
  uVar9 = uStack_700;
  puVar36 = puStack_768;
  iVar8 = iStack00000044;
  iVar15 = iStack0000003c;
  pcVar7 = (code *)*in_stack_000000ec;
  uStack_728 = uVar14 ^ uStack_728;
  pcVar30 = (code *)in_stack_000000ec[3];
  iVar13 = *(int *)(param_1 + 0x564);
  uVar14 = (int)pcVar26 >> 2;
  pcVar1 = (code *)((int)pcVar27 >> 2);
  pcStack_754 = pcVar30;
  pcStack_740 = pcVar7;
  if (pcStack_744 == (code *)0xfffffff) {
    uVar35 = (ulonglong)(int)uVar14;
    uVar31 = (ulonglong)(int)pcVar1;
    pcStack_74c = (code *)((uint)pcVar26 & 3);
    pcStack_734 = (code *)((uint)pcVar27 & 3);
    uVar16 = 0;
    uVar6 = 0;
    (**(code **)(param_1 + 0x9b8))
              ((longlong)iVar13 * (longlong)(int)pcVar1 + uVar35 + (ulonglong)uStack00000034,iVar13,
               puStack_768,0x10,pcStack_74c,pcStack_734,*(undefined4 *)(param_1 + 0x904),
               *(undefined4 *)(param_1 + 0x618));
    iVar13 = (*pcVar30)(uStack0000001c,0x10,puVar36,0x10,0x10);
    pcVar30 = pcStack_74c;
    pcVar28 = pcStack_734;
    pcStack_744 = (code *)(*(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) +
                           *(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) + iVar13);
  }
  else {
    pcVar32 = pcStack_704 + uStack_75c;
    iVar10 = uStack_758 + uStack_700;
    pcStack_790 = *(code **)(param_1 + 0x6d84);
    pcStack_6e8 = *(code **)(param_1 + 0xa38);
    pcStack_78c = (code *)((int)pcVar32 * 4);
    uStack_6f8 = in_stack_000000ac - iVar10;
    uVar34 = iVar10 * 4;
    iVar10 = ((int)pcVar32 >> 1) * *(int *)(param_1 + 0x568) + (iVar10 >> 1);
    uStack_6f0 = iVar10 + iStack0000003c;
    iVar11 = ((uint)(pcStack_78c + (*(int *)(param_1 + 0xa30) - (int)pcVar27)) & (uint)pcStack_6e8)
             - *(int *)(param_1 + 0xa30);
    uStack_6f4 = iVar10 + iStack00000044;
    iVar12 = ((*(int *)(param_1 + 0xa2c) - (int)pcVar26) + uVar34 & *(uint *)(param_1 + 0xa34)) -
             *(int *)(param_1 + 0xa2c);
    iVar10 = (int)pcVar32 * iVar13 + uStack_758 + uStack_700 + uStack00000034;
    uStack_788 = uVar34;
    pcStack_778 = pcStack_78c;
    if (pcStack_790 == (code *)0x0) {
      if ((uStack_728 != 0) && (in_stack_000000c4 == 0)) {
        iVar13 = *(int *)(param_1 + 0x564);
        iVar41 = ((int)pcStack_78c >> 2) * iVar13 + ((int)uVar34 >> 2) + uStack00000034;
        pcVar32 = (code *)in_stack_000000ec[3];
        pcStack_754 = pcVar32;
        iVar10 = fn_82E9AB00(param_1,iVar12,iVar11,in_stack_000000e4);
        iVar13 = (*pcVar32)(uStack0000001c,0x10,iVar41,iVar13,0x10);
        puVar36 = puStack_768;
        pcStack_744 = (code *)(iVar10 + iVar13);
        fn_82F26F98(param_1,iVar15,*(undefined4 *)(param_1 + 0x568),puStack_768,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        iVar13 = (*pcVar7)(uStack00000024,8,puVar36,8);
        fn_82F26F98(param_1,iVar8,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        iVar15 = (*pcVar7)(uStack0000002c,8,puVar36,8);
        pcStack_744 = (code *)(iVar15 + iVar13 + (int)pcStack_744);
      }
      puVar36 = puStack_768;
      uVar18 = uStack0000001c;
      (**(code **)(param_1 + 0x6f34))
                (param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034,iStack0000003c,
                 iStack00000044,uVar9);
      pcVar32 = (code *)((uint)pcVar26 & 3);
      uVar35 = (ulonglong)((int)uStack_788 >> 2);
      pcVar33 = (code *)((uint)pcVar27 & 3);
      uVar31 = (ulonglong)((int)pcStack_78c >> 2);
      pcVar30 = (code *)(uStack_788 & 3);
      pcVar28 = (code *)((uint)pcStack_78c & 3);
      pcVar7 = pcStack_740;
      if (((pcVar32 != (code *)0x0) || (pcVar33 != (code *)0x0)) &&
         ((pcVar30 + ((int)uStack_788 >> 2) * 4 != pcVar26 ||
          (pcVar28 + ((int)pcStack_78c >> 2) * 4 != pcVar27)))) {
        pcStack_790 = pcVar26;
        pcStack_78c = pcVar1;
        uStack_788 = uVar14;
        pcStack_778 = pcVar27;
        fn_82F261D8(param_1,&pcStack_790,&pcStack_778,in_stack_00000054,in_stack_0000005c);
        (**(code **)(param_1 + 0x9b8))
                  (((int)pcStack_778 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                   uStack00000034,*(int *)(param_1 + 0x564),puVar36,0x10,pcVar32,pcVar33,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar13 = (*pcStack_754)(uVar18,0x10,puVar36,0x10,0x10);
        apcStack_6c0[0] = pcStack_790;
        apcStack_6d0[0] = pcStack_778;
        fn_82EAA320(param_1,apcStack_6c0,apcStack_6d0,&uStack_724,&uStack_72c,1);
        uVar9 = uStack_724;
        uVar14 = uStack_72c;
        pcVar7 = pcStack_740;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                            uStack_724,uStack_72c,0);
          pcVar7 = pcStack_740;
          iVar15 = (*pcStack_740)(uStack00000024,8,puVar36,8);
          iVar13 = iVar15 + iVar13;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar36,8,uVar9,
                            uVar14,0);
          iVar15 = (*pcVar7)(uStack0000002c,8,puVar36,8);
          iVar13 = iVar15 + iVar13;
        }
        pcVar26 = (code *)(*(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) +
                           *(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) + iVar13);
        if ((int)pcVar26 < (int)pcStack_744) {
          uVar35 = (ulonglong)uStack_788;
          uVar31 = ZEXT48(pcStack_78c);
          pcStack_744 = pcVar26;
          pcVar30 = pcVar32;
          pcVar28 = pcVar33;
        }
      }
      uVar16 = 0;
      uVar6 = 0;
      pcVar32 = pcStack_748;
      pcVar33 = pcStack_764;
      if (in_stack_000000c4 != 0) {
        if (iStack_738 == 0) {
          in_stack_00000064 = in_stack_00000074;
          in_stack_0000006c = in_stack_0000007c;
        }
        pcVar26 = (code *)((uint)in_stack_00000064 & 3);
        pcVar27 = (code *)((uint)in_stack_0000006c & 3);
        if (((pcVar26 != (code *)0x0) || (pcVar27 != (code *)0x0)) &&
           ((pcVar30 + (int)((uVar35 & 0xffffffff) << 2) != in_stack_00000064 ||
            (pcVar28 + (int)((uVar31 & 0xffffffff) << 2) != in_stack_0000006c)))) {
          uStack_788 = (int)in_stack_00000064 >> 2;
          pcStack_78c = (code *)((int)in_stack_0000006c >> 2);
          pcStack_790 = in_stack_00000064;
          pcStack_778 = in_stack_0000006c;
          fn_82F261D8(param_1,&pcStack_790,&pcStack_778,in_stack_00000054,in_stack_0000005c);
          (**(code **)(param_1 + 0x9b8))
                    (((int)pcStack_778 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                     uStack00000034,*(int *)(param_1 + 0x564),puVar36,0x10,pcVar26,pcVar27,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          iVar13 = (*pcStack_754)(uVar18,0x10,puVar36,0x10,0x10);
          apcStack_6c0[0] = pcStack_790;
          apcStack_6d0[0] = pcStack_778;
          fn_82EAA320(param_1,apcStack_6c0,apcStack_6d0,&uStack_724,&uStack_72c,1);
          uVar9 = uStack_724;
          uVar14 = uStack_72c;
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                              uStack_724,uStack_72c,0);
            iVar15 = (*pcVar7)(uStack00000024,8,puVar36,8);
            iVar13 = iVar15 + iVar13;
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                              uVar9,uVar14,0);
            iVar15 = (*pcVar7)(uStack0000002c,8,puVar36,8);
            iVar13 = iVar15 + iVar13;
          }
          iVar15 = fn_82E9AB00(param_1,0,0,in_stack_000000e4);
          pcVar32 = pcStack_748;
          pcVar33 = pcStack_764;
          if (iVar15 + iVar13 < (int)pcStack_744) {
            uVar35 = (ulonglong)uStack_788;
            uVar31 = ZEXT48(pcStack_78c);
            uVar16 = 0;
            uVar6 = 0;
            pcVar30 = pcVar26;
            pcVar28 = pcVar27;
            pcStack_744 = (code *)(iVar15 + iVar13);
          }
        }
      }
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (iVar10,iVar13,puStack_768,0x10,uVar34,pcStack_78c,*(undefined4 *)(param_1 + 0x904),
                 *(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uStack0000001c,0x10,puVar36,0x10,0x10,0x10,iStack_70c);
      uVar9 = uStack_770;
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        fn_82E9AC18(param_1,uStack00000024,8,puVar36,8,8,8,iStack_70c);
        puStack_774 = puStack_774 + uStack_784;
        uStack_77c = uStack_780 | uStack_77c;
        uVar9 = uStack_76c + uStack_770;
      }
      puVar36 = puStack_774;
      uVar40 = uStack_77c;
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puStack_768,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        fn_82E9AC18(param_1,uStack0000002c,8,puStack_768,8,8,8,iStack_70c);
        uVar9 = uStack_76c + uVar9;
        puStack_774 = puVar36 + uStack_784;
        uStack_77c = uStack_780 | uVar40;
      }
      puVar36 = puStack_774;
      iVar15 = fn_82E9B140(param_1,iVar12,iVar11,uStack_77c,0);
      iVar13 = iStack_70c;
      uVar29 = uStack_758;
      uVar40 = uStack_75c;
      puVar5 = puStack_768;
      uVar3 = uStack0000002c;
      uVar2 = uStack00000024;
      uVar18 = uStack0000001c;
      uStack_770 = iVar15 + uVar9;
      if (in_stack_000000c4 != 0) {
        uStack_770 = uStack_770 + 1;
      }
      pcStack_71c = (code *)(puVar36 + *(int *)(iStack_70c + 0x6c) * uStack_770);
      fn_82EA4B28(param_1,uStack0000001c,uStack00000024,uStack0000002c,iVar10,uStack_6f0,
                    uStack_6f4,uStack_758 - uStack_72c);
      if ((pcStack_74c + uVar34 != pcVar26) ||
         (pcVar32 = pcStack_71c, pcStack_778 + (int)pcStack_734 != pcVar27)) {
        pcStack_790 = pcVar26;
        pcStack_78c = pcVar1;
        uStack_788 = uVar14;
        pcStack_778 = pcVar27;
        fn_82F261D8(param_1,&pcStack_790,&pcStack_778,in_stack_00000054,in_stack_0000005c);
        (**(code **)(param_1 + 0x9b8))
                  (((int)pcStack_778 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                   uStack00000034,*(int *)(param_1 + 0x564),puVar5,0x10,(code *)((uint)pcVar26 & 3),
                   (code *)((uint)pcVar27 & 3),*(undefined4 *)(param_1 + 0x904),
                   *(undefined4 *)(param_1 + 0x618));
        fn_82E9AC18(param_1,uVar18,0x10,puVar5,0x10,0x10,0x10,iVar13);
        apcStack_6c0[0] = pcStack_790;
        apcStack_6d0[0] = pcStack_778;
        fn_82EAA320(param_1,apcStack_6c0,apcStack_6d0,&iStack_6b0,&uStack_6ec,1);
        iVar15 = iStack_6b0;
        uVar14 = uStack_6ec;
        uVar9 = uStack_770;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                            iStack_6b0,uStack_6ec,0);
          fn_82E9AC18(param_1,uVar2,8,puVar5,8,8,8,iVar13);
          puStack_774 = puStack_774 + uStack_784;
          uStack_77c = uStack_780 | uStack_77c;
          uVar9 = uStack_76c + uStack_770;
        }
        puVar36 = puStack_774;
        uVar34 = uStack_77c;
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar5,8,iVar15,
                            uVar14,0);
          fn_82E9AC18(param_1,uVar3,8,puVar5,8,8,8,iVar13);
          puStack_774 = puVar36 + uStack_784;
          uStack_77c = uStack_780 | uVar34;
          uVar9 = uStack_76c + uVar9;
        }
        puVar36 = puStack_774;
        iVar15 = fn_82E9B140(param_1,0,0,uStack_77c,0);
        uStack_770 = iVar15 + uVar9;
        if (in_stack_000000c4 != 0) {
          uStack_770 = uStack_770 + 1;
        }
        pcVar32 = pcStack_71c;
        if ((int)(puVar36 + *(int *)(iVar13 + 0x6c) * uStack_770) < (int)pcStack_71c) {
          uVar40 = 0;
          uVar29 = 0;
          uStack_75c = 0;
          uStack_700 = uStack_788;
          pcStack_704 = pcStack_78c;
          uStack_758 = 0;
          pcVar32 = (code *)(puVar36 + *(int *)(iVar13 + 0x6c) * uStack_770);
          pcStack_74c = (code *)((uint)pcVar26 & 3);
          pcStack_734 = (code *)((uint)pcVar27 & 3);
        }
      }
      if (in_stack_000000c4 != 0) {
        if (iStack_738 == 0) {
          in_stack_00000064 = in_stack_00000074;
          in_stack_0000006c = in_stack_0000007c;
        }
        if ((pcStack_74c + (uVar29 + uStack_700) * 4 != in_stack_00000064) ||
           (pcStack_734 + (int)(pcStack_704 + uVar40) * 4 != in_stack_0000006c)) {
          uStack_788 = (int)in_stack_00000064 >> 2;
          pcStack_78c = (code *)((int)in_stack_0000006c >> 2);
          pcStack_790 = in_stack_00000064;
          pcStack_778 = in_stack_0000006c;
          fn_82F261D8(param_1,&pcStack_790,&pcStack_778,in_stack_00000054,in_stack_0000005c);
          (**(code **)(param_1 + 0x9b8))
                    (((int)pcStack_778 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                     uStack00000034,*(int *)(param_1 + 0x564),puVar5,0x10,
                     (code *)((uint)in_stack_00000064 & 3),(code *)((uint)in_stack_0000006c & 3),
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uVar18,0x10,puVar5,0x10,0x10,0x10,iVar13);
          apcStack_6d0[0] = pcStack_790;
          apcStack_6c0[0] = pcStack_778;
          fn_82EAA320(param_1,apcStack_6d0,apcStack_6c0,&uStack_724,&uStack_72c,1);
          uVar34 = uStack_724;
          uVar9 = uStack_72c;
          puVar36 = puStack_774;
          uVar14 = uStack_77c;
          uVar40 = uStack_770;
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                              uStack_724,uStack_72c,0);
            fn_82E9AC18(param_1,uVar2,8,puVar5,8,8,8,iVar13);
            puVar36 = puStack_774 + uStack_784;
            uVar14 = uStack_780 | uStack_77c;
            uVar40 = uStack_76c + uStack_770;
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                              uVar34,uVar9,0);
            fn_82E9AC18(param_1,uVar3,8,puVar5,8,8,8,iVar13);
            uVar40 = uStack_76c + uVar40;
            puVar36 = puVar36 + uStack_784;
            uVar14 = uStack_780 | uVar14;
          }
          iVar15 = fn_82E9B140(param_1,0,0,uVar14,0);
          if ((int)(puVar36 + *(int *)(iVar13 + 0x6c) * (iVar15 + uVar40 + 1)) < (int)pcVar32) {
            uStack_75c = 0;
            uStack_700 = uStack_788;
            pcStack_704 = pcStack_78c;
            uStack_758 = 0;
            pcVar32 = (code *)(puVar36 + *(int *)(iVar13 + 0x6c) * (iVar15 + uVar40 + 1));
            pcStack_74c = (code *)((uint)in_stack_00000064 & 3);
            pcStack_734 = (code *)((uint)in_stack_0000006c & 3);
          }
        }
      }
      uVar35 = (ulonglong)uStack_700;
      uVar31 = ZEXT48(pcStack_704);
      uVar6 = (ulonglong)uStack_758;
      uVar16 = (ulonglong)uStack_75c;
      pcVar30 = pcStack_74c;
      pcVar28 = pcStack_734;
      pcStack_744 = pcVar32;
      pcVar32 = pcStack_748;
      pcVar33 = pcStack_764;
    }
  }
  puVar36 = puStack_768;
  iVar8 = iStack00000044;
  iVar15 = iStack0000003c;
  *in_stack_000000fc = pcVar30 + (int)((uVar6 + uVar35 & 0xffffffff) << 2);
  *in_stack_00000104 = (int)(pcVar28 + (int)((uVar16 + uVar31 & 0xffffffff) << 2));
  *in_stack_0000010c = pcStack_744;
  iVar13 = *(int *)(param_1 + 0x564);
  uVar14 = (int)pcVar33 >> 2;
  if (pcStack_73c == (code *)0xfffffff) {
    uVar16 = (ulonglong)((int)pcVar32 >> 2);
    uVar6 = (ulonglong)(int)uVar14;
    uStack_758 = (uint)pcVar32 & 3;
    uStack_75c = (uint)pcVar33 & 3;
    uVar35 = 0;
    uVar31 = 0;
    (**(code **)(param_1 + 0x9b8))
              ((longlong)(int)uVar14 * (longlong)iVar13 + uVar16 + (ulonglong)uStack00000034,iVar13,
               puStack_768,0x10,uStack_758,uStack_75c,*(undefined4 *)(param_1 + 0x904),
               *(undefined4 *)(param_1 + 0x618));
    iVar13 = (*pcStack_754)(uStack0000001c,0x10,puVar36,0x10,0x10);
    pcVar26 = (code *)(*(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) +
                       *(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) + iVar13);
    uVar9 = uStack_758;
    uVar34 = uStack_75c;
  }
  else {
    pcVar26 = pcStack_6fc + uStack_710;
    iVar11 = uStack_708 + uStack_714;
    uStack_6dc = *(int *)(param_1 + 0x6d84);
    uStack_724 = *(uint *)(param_1 + 0xa34);
    uStack_6e4 = *(uint *)(param_1 + 0xa38);
    uVar9 = iVar11 * 4;
    pcStack_78c = (code *)((int)pcVar26 * 4);
    iVar10 = ((int)pcVar26 >> 1) * *(int *)(param_1 + 0x568) + (iVar11 >> 1);
    uStack_6f0 = iVar10 + iStack0000003c;
    uStack_6f4 = iVar10 + iStack00000044;
    uStack_6e0 = (uint)(in_stack_000000a4 != iVar11);
    uStack_72c = (uint)(in_stack_000000ac != iVar11);
    iVar10 = (int)pcVar26 * iVar13 + uStack_708 + uStack_714 + uStack00000034;
    iVar12 = ((uVar9 - (int)pcVar32) + *(int *)(param_1 + 0xa2c) & uStack_724) -
             *(int *)(param_1 + 0xa2c);
    iVar11 = (((int)pcStack_78c - (int)pcVar33) + *(int *)(param_1 + 0xa30) & uStack_6e4) -
             *(int *)(param_1 + 0xa30);
    uStack_788 = uVar9;
    uStack_6ec = (uint)pcStack_78c;
    if (uStack_6dc == 0) {
      if ((uStack_728 != 0) && (in_stack_000000cc == 0)) {
        iVar13 = *(int *)(param_1 + 0x564);
        pcVar26 = (code *)in_stack_000000ec[3];
        pcVar27 = (code *)*in_stack_000000ec;
        iVar41 = ((int)pcStack_78c >> 2) * iVar13 + ((int)uVar9 >> 2) + uStack00000034;
        pcStack_754 = pcVar26;
        pcStack_740 = pcVar27;
        iVar10 = fn_82E9AB00(param_1,iVar12,iVar11,in_stack_000000e4);
        iVar13 = (*pcVar26)(uStack0000001c,0x10,iVar41,iVar13,0x10);
        puVar36 = puStack_768;
        pcStack_73c = (code *)(iVar10 + iVar13);
        fn_82F26F98(param_1,iVar15,*(undefined4 *)(param_1 + 0x568),puStack_768,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        iVar13 = (*pcVar27)(uStack00000024,8,puVar36,8);
        fn_82F26F98(param_1,iVar8,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        iVar15 = (*pcVar27)(uStack0000002c,8,puVar36,8);
        uStack_6a4 = iVar15 + iVar13;
        pcStack_73c = (code *)(uStack_6a4 + (int)pcStack_73c);
      }
      puVar36 = puStack_768;
      uVar18 = uStack0000001c;
      (**(code **)(param_1 + 0x6f34))
                (param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034,iStack0000003c,
                 iStack00000044,uStack_714);
      uVar40 = (uint)pcVar32 & 3;
      uVar16 = (ulonglong)((int)uStack_788 >> 2);
      uVar29 = (uint)pcVar33 & 3;
      uVar6 = (ulonglong)((int)pcStack_78c >> 2);
      uVar9 = uStack_788 & 3;
      uVar34 = (uint)pcStack_78c & 3;
      if (((uVar40 != 0) || (uVar29 != 0)) &&
         (((code *)(((int)uStack_788 >> 2) * 4 + uVar9) != pcVar32 ||
          ((code *)(((int)pcStack_78c >> 2) * 4 + uVar34) != pcVar33)))) {
        pcStack_790 = pcVar32;
        pcStack_78c = (code *)uVar14;
        uStack_788 = (int)pcVar32 >> 2;
        pcStack_778 = pcVar33;
        fn_82F261D8(param_1,&pcStack_790,&pcStack_778,in_stack_00000054,in_stack_0000005c);
        (**(code **)(param_1 + 0x9b8))
                  (((int)pcStack_778 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                   uStack00000034,*(int *)(param_1 + 0x564),puVar36,0x10,uVar40,uVar29,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        iVar13 = (*pcStack_754)(uVar18,0x10,puVar36,0x10,0x10);
        apcStack_6c0[0] = pcStack_790;
        apcStack_6d0[0] = pcStack_778;
        fn_82EAA320(param_1,apcStack_6c0,apcStack_6d0,&uStack_730,&uStack_750,1);
        uVar38 = uStack_730;
        uVar14 = uStack_750;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                            uStack_730,uStack_750,0);
          iVar15 = (*pcStack_740)(uStack00000024,8,puVar36,8);
          iVar13 = iVar15 + iVar13;
        }
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar36,8,uVar38
                            ,uVar14,0);
          iVar15 = (*pcStack_740)(uStack0000002c,8,puVar36,8);
          iVar13 = iVar15 + iVar13;
        }
        pcVar26 = (code *)(*(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) +
                           *(int *)(*(int *)pcStack_760 * 4 + in_stack_000000e4) + iVar13);
        if ((int)pcVar26 < (int)pcStack_73c) {
          uVar16 = (ulonglong)uStack_788;
          uVar6 = ZEXT48(pcStack_78c);
          pcStack_73c = pcVar26;
          uVar9 = uVar40;
          uVar34 = uVar29;
        }
      }
      uVar35 = 0;
      uVar31 = 0;
      pcVar26 = pcStack_73c;
      if (in_stack_000000cc != 0) {
        pcStack_790 = in_stack_00000084;
        pcStack_760 = in_stack_0000008c;
        if (iStack_738 == 0) {
          pcStack_790 = in_stack_00000094;
          pcStack_760 = in_stack_0000009c;
        }
        uVar14 = (uint)pcStack_790 & 3;
        uVar40 = (uint)pcStack_760 & 3;
        if (((uVar14 != 0) || (uVar40 != 0)) &&
           (((code *)((int)((uVar16 & 0xffffffff) << 2) + uVar9) != pcStack_790 ||
            ((code *)((int)((uVar6 & 0xffffffff) << 2) + uVar34) != pcStack_760)))) {
          uStack_788 = (int)pcStack_790 >> 2;
          pcStack_78c = (code *)((int)pcStack_760 >> 2);
          fn_82F261D8(param_1,&pcStack_790,&pcStack_760,in_stack_00000054,in_stack_0000005c);
          puVar36 = puStack_768;
          (**(code **)(param_1 + 0x9b8))
                    (((int)pcStack_760 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                     uStack00000034,*(int *)(param_1 + 0x564),puStack_768,0x10,uVar14,uVar40,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          lVar17 = (*pcStack_754)(uStack0000001c,0x10,puVar36,0x10,0x10);
          apcStack_6c0[0] = pcStack_790;
          apcStack_6d0[0] = pcStack_760;
          fn_82EAA320(param_1,apcStack_6c0,apcStack_6d0,&uStack_730,&uStack_750,1);
          uVar38 = uStack_730;
          uVar29 = uStack_750;
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                              uStack_730,uStack_750,0);
            lVar20 = (*pcStack_740)(uStack00000024,8,puVar36,8);
            lVar17 = lVar20 + lVar17;
          }
          if ((((*(uint *)(param_1 + 0x6dc4) & 2) != 0) && (*(int *)(param_1 + 0x6d8c) != 0)) &&
             (0 < (longlong)(ZEXT48(pcStack_73c) - lVar17))) {
            fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                              uVar38,uVar29,0);
            lVar20 = (*pcStack_740)(uStack0000002c,8,puVar36,8);
            lVar17 = lVar20 + lVar17;
          }
          pcVar26 = pcStack_73c;
          iVar13 = fn_82E9AB00(param_1,0,0,in_stack_000000e4);
          pcVar27 = (code *)(iVar13 + (int)lVar17);
          if ((int)pcVar27 < (int)pcVar26) {
            uVar16 = (ulonglong)uStack_788;
            uVar6 = ZEXT48(pcStack_78c);
            uVar35 = 0;
            uVar31 = 0;
            pcVar26 = pcVar27;
            uVar9 = uVar14;
            uVar34 = uVar40;
          }
        }
      }
    }
    else {
      iVar8 = (*(int *)(param_1 + 0x2d4) * in_stack_0000005c + in_stack_00000054) * 0x114 +
              *(int *)(param_1 + 0x1e54);
      (**(code **)(param_1 + 0x9c0))
                (iVar10,iVar13,puStack_768,0x10,uVar9,pcStack_78c,*(undefined4 *)(param_1 + 0x904),
                 *(undefined4 *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uStack0000001c,0x10,puVar36,0x10,0x10,0x10,iVar8);
      uVar14 = uStack_77c;
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,iVar15,*(undefined4 *)(param_1 + 0x568),puVar36,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        fn_82E9AC18(param_1,uStack00000024,8,puVar36,8,8,8,iVar8);
        puStack_774 = puStack_774 + uStack_784;
        uStack_770 = uStack_76c | uStack_770;
        uVar14 = uStack_780 + uStack_77c;
      }
      puVar5 = puStack_768;
      uVar34 = uStack_770;
      puVar36 = puStack_774;
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puStack_768,8,
                          (int)uStack_788 >> 1,(int)pcStack_78c >> 1,0);
        fn_82E9AC18(param_1,uStack0000002c,8,puVar5,8,8,8,iVar8);
        uVar14 = uStack_780 + uVar14;
        puStack_774 = puVar36 + uStack_784;
        uStack_770 = uStack_76c | uVar34;
      }
      puVar36 = puStack_774;
      iVar13 = fn_82E9B140(param_1,iVar12,iVar11,uStack_770,0);
      uVar40 = uStack_708;
      uVar34 = uStack_710;
      uVar2 = uStack00000024;
      uVar18 = uStack0000001c;
      uStack_77c = iVar13 + uVar14;
      if (in_stack_000000cc != 0) {
        uStack_77c = uStack_77c + 1;
      }
      iVar13 = uStack_730 - uStack_6ac;
      pcStack_778 = (code *)(puVar36 + uStack_77c * *(int *)(iVar8 + 0x6c));
      uStack_730 = uStack_710 - uStack_6ac;
      iVar15 = uStack_708 - uStack_750;
      uStack_750 = iVar13 + 1;
      fn_82EA4B28(param_1,uStack0000001c,uStack00000024,uStack0000002c,iVar10,uStack_6f0,
                    uStack_6f4,iVar15);
      if (((code *)(uVar9 + uStack_758) != pcStack_748) ||
         (pcVar26 = pcStack_778, (code *)(uStack_6ec + uStack_75c) != pcStack_764)) {
        uStack_788 = (int)pcStack_748 >> 2;
        pcStack_790 = pcStack_748;
        pcStack_78c = (code *)((int)pcStack_764 >> 2);
        pcStack_760 = pcStack_764;
        uVar14 = (uint)pcStack_748 & 3;
        uVar9 = (uint)pcStack_764 & 3;
        fn_82F261D8(param_1,&pcStack_790,&pcStack_760,in_stack_00000054,in_stack_0000005c);
        (**(code **)(param_1 + 0x9b8))
                  (((int)pcStack_760 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                   uStack00000034,*(int *)(param_1 + 0x564),puVar5,0x10,uVar14,uVar9,
                   *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
        fn_82E9AC18(param_1,uVar18,0x10,puVar5,0x10,0x10,0x10,iVar8);
        apcStack_6d0[0] = pcStack_790;
        apcStack_6c0[0] = pcStack_760;
        fn_82EAA320(param_1,apcStack_6d0,apcStack_6c0,&uStack_730,&uStack_750,1);
        uVar38 = uStack_730;
        uVar29 = uStack_750;
        uVar37 = uStack_77c;
        if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                            uStack_730,uStack_750,0);
          fn_82E9AC18(param_1,uVar2,8,puVar5,8,8,8,iVar8);
          puStack_774 = puStack_774 + uStack_784;
          uStack_770 = uStack_76c | uStack_770;
          uVar37 = uStack_780 + uStack_77c;
        }
        uVar4 = uStack_770;
        puVar36 = puStack_774;
        if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar5,8,uVar38,
                            uVar29,0);
          fn_82E9AC18(param_1,uStack0000002c,8,puVar5,8,8,8,iVar8);
          puStack_774 = puVar36 + uStack_784;
          uStack_770 = uStack_76c | uVar4;
          uVar37 = uStack_780 + uVar37;
        }
        puVar36 = puStack_774;
        iVar13 = fn_82E9B140(param_1,0,0,uStack_770,0);
        uStack_77c = iVar13 + uVar37;
        if (in_stack_000000cc != 0) {
          uStack_77c = uStack_77c + 1;
        }
        pcVar26 = pcStack_778;
        if ((int)(puVar36 + uStack_77c * *(int *)(iVar8 + 0x6c)) < (int)pcStack_778) {
          uVar34 = 0;
          uVar40 = 0;
          uStack_710 = 0;
          uStack_714 = uStack_788;
          pcStack_6fc = pcStack_78c;
          uStack_708 = 0;
          pcVar26 = (code *)(puVar36 + uStack_77c * *(int *)(iVar8 + 0x6c));
          uStack_75c = uVar9;
          uStack_758 = uVar14;
        }
      }
      if (in_stack_000000cc != 0) {
        pcStack_790 = in_stack_00000084;
        pcStack_760 = in_stack_0000008c;
        if (iStack_738 == 0) {
          pcStack_790 = in_stack_00000094;
          pcStack_760 = in_stack_0000009c;
        }
        if (((code *)((uVar40 + uStack_714) * 4 + uStack_758) != pcStack_790) ||
           ((code *)((int)(pcStack_6fc + uVar34) * 4 + uStack_75c) != pcStack_760)) {
          uStack_788 = (int)pcStack_790 >> 2;
          pcStack_78c = (code *)((int)pcStack_760 >> 2);
          uVar9 = (uint)pcStack_790 & 3;
          uVar34 = (uint)pcStack_760 & 3;
          fn_82F261D8(param_1,&pcStack_790,&pcStack_760,in_stack_00000054,in_stack_0000005c);
          (**(code **)(param_1 + 0x9b8))
                    (((int)pcStack_760 >> 2) * *(int *)(param_1 + 0x564) + ((int)pcStack_790 >> 2) +
                     uStack00000034,*(int *)(param_1 + 0x564),puVar5,0x10,uVar9,uVar34,
                     *(undefined4 *)(param_1 + 0x904),*(undefined4 *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uVar18,0x10,puVar5,0x10,0x10,0x10,iVar8);
          apcStack_6d0[0] = pcStack_790;
          apcStack_6c0[0] = pcStack_760;
          fn_82EAA320(param_1,apcStack_6d0,apcStack_6c0,&uStack_730,&uStack_750,1);
          uVar29 = uStack_730;
          uVar40 = uStack_750;
          uVar14 = uStack_770;
          uVar38 = uStack_77c;
          puVar36 = puStack_774;
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,iStack0000003c,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                              uStack_730,uStack_750,0);
            fn_82E9AC18(param_1,uVar2,8,puVar5,8,8,8,iVar8);
            uVar14 = uStack_76c | uStack_770;
            uVar38 = uStack_780 + uStack_77c;
            puVar36 = puStack_774 + uStack_784;
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,iStack00000044,*(undefined4 *)(param_1 + 0x568),puVar5,8,
                              uVar29,uVar40,0);
            fn_82E9AC18(param_1,uStack0000002c,8,puVar5,8,8,8,iVar8);
            uVar38 = uStack_780 + uVar38;
            puVar36 = puVar36 + uStack_784;
            uVar14 = uStack_76c | uVar14;
          }
          iVar13 = fn_82E9B140(param_1,0,0,uVar14,0);
          if ((int)(puVar36 + (iVar13 + uVar38 + 1) * *(int *)(iVar8 + 0x6c)) < (int)pcVar26) {
            uStack_710 = 0;
            uStack_714 = uStack_788;
            pcStack_6fc = pcStack_78c;
            uStack_708 = 0;
            pcVar26 = (code *)(puVar36 + (iVar13 + uVar38 + 1) * *(int *)(iVar8 + 0x6c));
            uStack_75c = uVar34;
            uStack_758 = uVar9;
          }
        }
      }
      uVar16 = (ulonglong)uStack_714;
      uVar6 = ZEXT48(pcStack_6fc);
      uVar31 = (ulonglong)uStack_708;
      uVar35 = (ulonglong)uStack_710;
      uVar9 = uStack_758;
      uVar34 = uStack_75c;
    }
  }
  *in_stack_00000114 = (int)((uVar31 + uVar16 & 0xffffffff) << 2) + uVar9;
  *in_stack_0000011c = (int)((uVar35 + uVar6 & 0xffffffff) << 2) + uVar34;
  *in_stack_00000124 = pcVar26;
  return;
}


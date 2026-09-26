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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_460;
extern unsigned int *auStack_4d0;
extern int fn_82AA8F30();
extern int fn_82AA9058();
extern int fn_82AA9100();
extern int fn_82B67650();
extern int fn_82B67E60();
extern int fn_82B68798();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_4d4;
extern unsigned int iStack_4e0;
extern unsigned int iStack_4f0;
extern unsigned int iStack_4fc;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;


int fn_82AA9308(int param_1,int param_2,longlong param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  ulonglong uVar14;
  ushort uVar18;
  longlong lVar15;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  uint *puVar32;
  ulonglong uVar33;
  uint uVar35;
  longlong lVar34;
  ulonglong uVar36;
  byte *pbVar37;
  uint uVar38;
  undefined4 *puVar39;
  int iStack0000001c;
  int iStack0000002c;
  int iStack00000034;
  int iStack0000003c;
  int iStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  int iStack_4f0;
  uint uStack_4e4;
  int iStack_4e0;
  byte *pbStack_4dc;
  uint uStack_4d8;
  int iStack_4d4;
  undefined1 auStack_4d0 [44];
  int aiStack_4a4 [17];
  undefined1 auStack_460 [128];
  undefined1 auStack_3e0 [992];
  
  iVar17 = *(int *)(param_1 + 0xe0);
  uVar18 = *(ushort *)(param_1 + 0x5e);
  uVar27 = (ulonglong)uVar18;
  iVar16 = 0x3c;
  uVar3 = *(uint *)(iVar17 + 0x38);
  do {
    iVar19 = (int)param_3;
    if (*(int *)(iVar17 + iVar16) != 0) {
      iStack_4fc = 1;
      uStack_4d8 = param_2 * iVar19 * param_4;
      goto LAB_82aa9378;
    }
    iVar16 = iVar16 + 4;
  } while (iVar16 < 0x45);
  iStack_4fc = 0;
LAB_82aa9378:
  iVar16 = 0x34;
  do {
    if (*(int *)(iVar17 + iVar16) != 0) {
      bVar7 = true;
      goto LAB_82aa9398;
    }
    iVar16 = iVar16 + 4;
  } while (iVar16 < 0x39);
  bVar7 = false;
LAB_82aa9398:
  uVar2 = *(ushort *)(param_1 + 0x5c);
  iVar17 = 0;
  iStack_4f0 = 0;
  if (uVar2 != 0) {
    piVar24 = aiStack_4a4;
    do {
      iVar17 = iVar17 + 1;
      piVar24 = piVar24 + 1;
      *piVar24 = 0;
    } while (iVar17 < (int)(uint)uVar2);
  }
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  trapWord(6,uVar27,0);
  uVar11 = (uVar27 + param_3) - 1;
  iVar17 = (int)uVar11 / (int)(uint)uVar18;
  trapWord(5,uVar27 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iStack0000001c = param_2;
  iStack0000002c = param_4;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  if (0 < iVar17) {
    uVar11 = (ulonglong)uVar3;
    do {
      if (uStack_4f8 == iVar17 - 1U) {
        uVar27 = param_3 - (ulonglong)uStack_4f4;
      }
      iVar16 = *(int *)(param_1 + 0xe0);
      uVar36 = (ulonglong)*(uint *)(param_1 + 0x6c);
      uVar26 = (ulonglong)*(uint *)(param_1 + 0x78);
      iVar8 = fn_82AA8F30(param_1,(longlong)(*(int *)(iVar16 + 0x18) + iStack0000001c) *
                                    (longlong)*(int *)(iVar16 + 0x14) +
                                    (ulonglong)*(uint *)(iVar16 + 0x1c) + (ulonglong)uStack_4f8);
      iVar16 = iStack00000034;
      iVar28 = (int)uVar27;
      if (-1 < iVar8) {
        uVar35 = (uint)*(ushort *)(param_1 + 0x5c);
        lVar21 = 0;
        if (*(ushort *)(param_1 + 0x5c) != 0) {
          lVar23 = 0;
          puVar20 = (uint *)(iStack00000034 + 0x40);
          piVar24 = aiStack_4a4;
          do {
            iVar8 = (int)((uVar27 & 0xffffffff) << 4);
            pbVar37 = (byte *)uVar36;
            uVar29 = 0;
            iVar22 = (int)lVar21;
            uVar30 = (longlong)iVar8 * (longlong)iVar22;
            pbStack_4dc = pbVar37;
            fn_82AA9058(param_1 + 0x28,lVar21,&uStack_4e4,&iStack_4d4,&iStack_4e0);
            iVar6 = iStack_4e0;
            uVar25 = 0;
            if (iStack_4fc != 0) {
              uVar25 = (longlong)(int)(uint)(*(ushort *)(param_1 + 0x5e) >> 2) *
                       (longlong)(int)uStack_4f8 + (longlong)(iVar19 >> 2) * (longlong)iVar22;
            }
            if (iStack_4e0 == 0) {
              bVar1 = *pbVar37;
              if ((bVar1 & 1) == 0) {
                uVar14 = (ulonglong)bVar1 << 2;
                uVar36 = uVar36 + 1;
                uVar29 = 1;
              }
              else {
                uVar36 = uVar36 + 2;
                uVar29 = 2;
                uVar14 = ((ulonglong)CONCAT11(pbVar37[1],bVar1) & 0xfffe) << 2;
              }
            }
            else {
              uVar14 = (ulonglong)(iVar8 >> 2);
            }
            uVar10 = (ulonglong)uStack_4e4;
            if (uStack_4e4 == 0) {
              iVar8 = *(int *)(param_1 + 0x40);
            }
            else {
              iVar8 = *(int *)(param_1 + 0x44);
            }
            iVar31 = (int)uVar14;
            if (iVar31 != 0) {
              if (iVar22 == uVar35 - 1) {
                uVar33 = *(uint *)(param_1 + 0x78) - uVar26;
              }
              else {
                puVar4 = (undefined1 *)uVar36;
                uVar29 = uVar29 + 2;
                uVar36 = uVar36 + 2;
                uVar33 = (ulonglong)CONCAT11(puVar4[1],*puVar4);
              }
              uVar11 = (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0xcc);
              uVar18 = *(ushort *)(param_1 + 0x3e);
              if (uStack_4e4 != 0) {
                uVar18 = uVar18 >> 2;
              }
              uVar18 = uVar18 & 3;
              if (iStack_4e0 != 0) {
                uVar18 = 2;
              }
              if (uVar18 == 0) {
                if (iVar28 < iVar31) {
                  lVar34 = fn_82B67650(auStack_460,uVar36,uVar26,0,uVar11,uVar27,1);
                  if (bVar7) {
                    lVar9 = fn_82B67650(auStack_460,lVar34 + uVar36,uVar26 - lVar34,0,
                                              (uVar27 & 0x3fffffff) * 4 + uVar11,uVar14 - uVar27,1);
                    goto LAB_82aa9760;
                  }
LAB_82aa976c:
                  lVar9 = uVar33 - lVar34;
                  uVar29 = uVar33;
LAB_82aa9774:
                  uVar26 = (uVar26 - lVar9) - lVar34;
                  goto LAB_82aa9790;
                }
                lVar34 = fn_82B67650(auStack_460,uVar36,uVar26,0,uVar11,uVar14,1);
              }
              else if (uVar18 == 1) {
                uVar12 = 320000;
                uVar35 = 320000 >> (0x10 - *(ushort *)(param_1 + 0x5a) & 0x3f);
                lVar34 = (longlong)(int)uVar35;
                iVar22 = iVar8 >> 4;
                if (iVar28 < iVar31) {
                  if (iVar8 != 0) {
                    uVar13 = (longlong)iVar22 + 1;
                    uVar10 = (((ulonglong)uVar35 & 0x7fffffff) << 1 | (ulonglong)(uVar35 >> 0x1f)) -
                             1;
                    trapWord(6,uVar13,0);
                    uVar12 = uVar13 & ~uVar10;
                    lVar34 = (longlong)((int)uVar35 / (int)uVar13) + 1;
                    trapWord(5,uVar12,0xffff);
                  }
                  lVar34 = fn_82B67E60(auStack_4d0,uVar36,uVar26,uVar11,uVar27,lVar34,uVar10,
                                             uVar12);
                  if (!bVar7) goto LAB_82aa976c;
                  uVar35 = 24000 >> (0x10 - *(ushort *)(param_1 + 0x5a) & 0x3f);
                  lVar9 = (longlong)(int)uVar35;
                  if (iVar8 != 0) {
                    uVar10 = (longlong)iVar22 + 1;
                    trapWord(6,uVar10,0);
                    lVar9 = (longlong)((int)uVar35 / (int)uVar10) + 1;
                    trapWord(5,uVar10 & ~((((ulonglong)uVar35 & 0x7fffffff) << 1 |
                                          (ulonglong)(uVar35 >> 0x1f)) - 1),0xffff);
                  }
                  lVar9 = fn_82B67E60(auStack_4d0,lVar34 + uVar36,uVar26 - lVar34,
                                            (uVar27 & 0x3fffffff) * 4 + uVar11,uVar14 - uVar27,lVar9
                                           );
LAB_82aa9760:
                  uVar29 = lVar9 + lVar34 + uVar29;
                  goto LAB_82aa9774;
                }
                if (iVar8 != 0) {
                  uVar10 = (longlong)iVar22 + 1;
                  uVar12 = uVar10 & ~((((ulonglong)uVar35 & 0x7fffffff) << 1 |
                                      (ulonglong)(uVar35 >> 0x1f)) - 1);
                  trapWord(6,uVar10,0);
                  lVar34 = (longlong)((int)uVar35 / (int)uVar10) + 1;
                  trapWord(5,uVar12,0xffff);
                }
                lVar34 = fn_82B67E60(auStack_4d0,uVar36,uVar26,uVar11,uVar14,lVar34,uVar10,
                                           uVar12);
              }
              else {
                if (2 < uVar18) {
                  if (uVar18 == 3) {
                    lVar34 = (uVar14 & 0x3fffffff) * 4;
                    fn_82F68CC0(uVar11,uVar36,lVar34);
                    uVar29 = lVar34 + uVar29;
                  }
                  goto LAB_82aa9790;
                }
                lVar34 = fn_82B68798(auStack_3e0,uVar36,uVar26,uVar11,
                                           *(undefined4 *)(param_1 + 200),0x10,uVar27);
              }
              uVar29 = lVar34 + uVar29;
              uVar26 = uVar26 - lVar34;
            }
LAB_82aa9790:
            if (iVar6 == 0) {
              uVar36 = (longlong)(iVar28 >> 4) + (ulonglong)(iVar28 < 0 && (uVar27 & 0xf) != 0);
              if (iVar31 < (int)uVar36) {
                uVar36 = uVar14;
              }
              if (1 < (int)uVar36) {
                lVar34 = uVar36 - 1;
                uVar36 = uVar11;
                do {
                  piVar5 = (int *)uVar36;
                  uVar36 = uVar36 + 4;
                  *(int *)uVar36 = piVar5[1] + *piVar5;
                  lVar34 = lVar34 + -1;
                } while (lVar34 != 0);
              }
              if (iVar8 != 0) {
                if (iStack_4d4 != 0) {
                  iVar8 = iVar8 << 1;
                }
                if (0 < iVar31) {
                  lVar34 = (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0xcc) + -4;
                  uVar36 = uVar14;
                  do {
                    iVar6 = (int)lVar34;
                    lVar34 = lVar34 + 4;
                    *(int *)lVar34 = *(int *)(iVar6 + 4) * iVar8;
                    uVar36 = uVar36 - 1;
                  } while (uVar36 != 0);
                }
              }
              if (bVar7) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0((uVar14 & 0x3fffffff) * 4 +
                             (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0xcc),0,
                             ((uVar27 & 0xfffffff) * 0x10 - uVar14 & 0x3fffffff) << 2);
              }
              lVar34 = 0;
              if (iStack_4fc != 0) {
                lVar34 = (ulonglong)*(uint *)(param_1 + 0xbc) +
                         ((ulonglong)uStack_4d8 & 0x3fffffff) * 4;
              }
              fn_82AA9100(*(undefined4 *)(param_1 + 200),
                            (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0xcc),
                            (uVar25 & 0x3fffffff) * 4 + lVar34,uVar27,
                            (longlong)iVar19 * (longlong)iStack0000002c,iStack_4fc,0);
              uVar38 = piVar24[1];
              lVar34 = (uVar27 & 0x3fffffff) * 4;
              puVar32 = (uint *)(iVar16 + 0x3c);
              lVar9 = 0x10;
              uVar36 = (ulonglong)*(uint *)(param_1 + 200);
              do {
                puVar32 = puVar32 + 1;
                fn_82F68CC0((ulonglong)*puVar32 + ((ulonglong)uVar38 + lVar23 & 0x3fffffff) * 4,
                             uVar36,lVar34);
                lVar9 = lVar9 + -1;
                uVar36 = lVar34 + uVar36;
              } while (lVar9 != 0);
            }
            else {
              uVar38 = piVar24[1];
              lVar34 = (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0xcc) + -1;
              lVar9 = 0x10;
              puVar32 = puVar20;
              do {
                uVar11 = (ulonglong)*puVar32 + ((ulonglong)uVar38 + lVar23 & 0x3fffffff) * 4;
                if (*(ushort *)(param_1 + 0x58) == 1) {
                  if (0 < iVar28) {
                    lVar15 = uVar11 - 4;
                    uVar36 = uVar27;
                    do {
                      iVar8 = (int)lVar34;
                      lVar34 = lVar34 + 1;
                      lVar15 = lVar15 + 4;
                      *(uint *)lVar15 = (uint)*(byte *)(iVar8 + 1);
                      uVar36 = uVar36 - 1;
                    } while (uVar36 != 0);
                  }
                }
                else {
                  iVar8 = (1 << (*(ushort *)(param_1 + 0x58) - 1 & 0x3f)) + -1;
                  uVar36 = uVar11;
                  uVar25 = uVar27;
                  if (0 < iVar28) {
                    do {
                      lVar34 = lVar34 + 1;
                      if (*(char *)lVar34 == '\x01') {
                        *(int *)uVar36 = iVar8;
                      }
                      else {
                        *(int *)uVar36 = -1 - iVar8;
                      }
                      uVar25 = uVar25 - 1;
                      uVar36 = uVar36 + 4;
                    } while (uVar25 != 0);
                  }
                }
                lVar9 = lVar9 + -1;
                puVar32 = puVar32 + 1;
              } while (lVar9 != 0);
            }
            uVar35 = (uint)*(ushort *)(param_1 + 0x5c);
            lVar21 = lVar21 + 1;
            iStack_4f0 = (int)uVar29 + iStack_4f0;
            piVar24 = piVar24 + 1;
            *piVar24 = uVar38 + iVar28;
            lVar23 = lVar23 + param_3;
            uVar36 = ZEXT48(pbStack_4dc) + uVar29;
          } while ((int)lVar21 < (int)uVar35);
        }
      }
      uStack_4f8 = uStack_4f8 + 1;
      uStack_4f4 = uStack_4f4 + iVar28;
    } while ((int)uStack_4f8 < iVar17);
  }
  if (uVar3 != 0) {
    lVar23 = 0x10;
    lVar21 = (longlong)iStack0000002c;
    puVar39 = (undefined4 *)(iStack0000003c + 0x40);
    iVar17 = iStack00000034 - iStack0000003c;
    do {
      fn_82F68CC0(*puVar39,*(undefined4 *)(iVar17 + (int)puVar39),
                   (iVar19 * lVar21 & 0x3fffffffU) << 2);
      lVar23 = lVar23 + -1;
      puVar39 = puVar39 + 1;
    } while (lVar23 != 0);
  }
  return iStack_4f0;
}


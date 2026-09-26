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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_520;
extern unsigned int *auStack_9a0;
extern int fn_82C75948();
extern int fn_82C8B9D8();
extern int fn_82C9B1F8();
extern int fn_82CC46D0();
extern int fn_830B9FA0();
extern int fn_830BA0B0();
extern int fn_830D95E8();
extern int fn_830D96C8();
extern int fn_830DBB28();
extern int fn_830E2088();
extern int fn_830E2148();
extern unsigned int iStack00000014;
extern unsigned int iStack_9c8;
extern unsigned int iStack_9d0;
extern unsigned int iStack_9d4;
extern unsigned int iStack_9dc;
extern unsigned int iStack_9e4;
extern unsigned int uStack_9b0;
extern unsigned int uStack_9b4;
extern unsigned int uStack_9b8;
extern unsigned int uStack_9d8;
extern unsigned int uStack_9e8;
extern unsigned int uStack_9ec;


undefined8 fn_830B90E8(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  int iVar27;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar28;
  longlong lVar29;
  int iVar32;
  ulonglong uVar30;
  ulonglong uVar31;
  short *psVar33;
  ushort *puVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  int *piVar40;
  longlong lVar41;
  int iStack00000014;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  int iStack_9e4;
  int iStack_9dc;
  uint uStack_9d8;
  int iStack_9d4;
  int iStack_9d0;
  short *psStack_9cc;
  int iStack_9c8;
  ulonglong *puStack_9c4;
  undefined4 uStack_9b8;
  uint uStack_9b4;
  uint uStack_9b0;
  undefined1 auStack_9a0 [1152];
  undefined1 auStack_520 [1312];
  
  puStack_9c4 = *(ulonglong **)(param_2 + 0x520);
  bVar11 = true;
  if ((((*(int *)(param_1 + 0xecc) == 0) || (*(int *)(param_1 + 0xed0) == 0)) ||
      (*(int *)(param_1 + 0xed4) == 0)) ||
     (psStack_9cc = *(short **)(param_1 + 0xc10), psStack_9cc == (short *)0x0)) {
    uVar12 = 1;
  }
  else {
    iStack_9d0 = 0;
    iStack_9c8 = 0;
    iStack_9d4 = 0;
    param_3[5] = *(int *)(param_1 + 0x56f8);
    param_3[6] = *(int *)(param_1 + 0x5704);
    param_3[9] = *(int *)(param_2 + 0x268);
    param_3[10] = *(int *)(param_2 + 0x1ac);
    param_3[0xb] = *(int *)(param_2 + 0x48c);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    uVar2 = *(ushort *)(param_2 + 0x4a);
    uStack_9b0 = (uint)(*(ushort *)(param_2 + 0x34) >> 1);
    uVar7 = (uint)(*(ushort *)(param_2 + 0x32) >> 1);
    iStack_9dc = 0;
    uVar22 = (uint)uVar2;
    iStack00000014 = param_1;
    if (uStack_9b0 != 0) {
      do {
        *(undefined2 *)((int)param_3 + 0x12) = 0;
        param_3[2] = iStack_9d0;
        param_3[3] = iStack_9c8;
        if ((*(int *)(iStack00000014 + 0x55b4) != 0) &&
           (*(int *)(*(int *)(param_2 + 0x518) + iStack_9dc * 4) != 0)) {
          bVar11 = true;
        }
        uStack_9d8 = 0;
        if (uVar7 != 0) {
          do {
            puVar20 = puStack_9c4 + 1;
            uVar37 = *puStack_9c4;
            uVar16 = uVar37 >> 0x36 & 3 | uVar37 >> 0x3d & 4;
            lVar17 = ((ulonglong)CONCAT24(uVar2,uVar22) & 0x7fffffff) * 2;
            iVar9 = (int)uVar16;
            lVar41 = 2;
            lVar24 = ((longlong)*(short *)(((uStack_9d8 & 7) + 0x24c) * 2 + param_2) & 0x3ffffffU) *
                     0x40;
            puVar23 = (uint *)(param_2 + 0x1d8);
            uVar39 = (ulonglong)*(byte *)(iVar9 + param_2 + 0x6d7);
            lVar18 = ((longlong)*(short *)(((uStack_9d8 & 0xf) + 0x254) * 2 + param_2) & 0x3ffffffU)
                     * 0x40;
            do {
              if ((uVar39 & 1) != 0) {
                lVar29 = (ulonglong)(uint)param_3[2] + (ulonglong)puVar23[-2];
                dataCacheBlockTouch(lVar24 + lVar29);
                dataCacheBlockTouch(lVar24 + (ulonglong)uVar22 + lVar29);
                dataCacheBlockTouch(lVar24 + lVar17 + lVar29);
                dataCacheBlockTouch(lVar24 + lVar17 + (ulonglong)uVar22 + lVar29);
                dataCacheBlockTouch(lVar18 + (ulonglong)(uint)param_3[3] + (ulonglong)*puVar23);
                dataCacheBlockTouch(lVar18 + (ulonglong)(uint)param_3[3] + (ulonglong)puVar23[2]);
              }
              puVar23 = puVar23 + 1;
              uVar39 = uVar39 >> 1;
              lVar41 = lVar41 + -1;
            } while (lVar41 != 0);
            iVar15 = iStack_9d4 * 4;
            uVar13 = *(uint *)(iVar15 + *(int *)(param_2 + 0x6f8));
            if (uVar13 != 0x4000) {
              uVar14 = *(uint *)(iVar15 + *(int *)(param_2 + 0x6fc));
              if (*(char *)(param_2 + 0x1e) != '\0') {
                uVar13 = (uVar13 & 0xffff7fff) << 1;
                uVar14 = (uVar14 & 0xffff7fff) << 1;
              }
              sVar3 = *psStack_9cc;
              iVar32 = (int)psStack_9cc[1] * *(int *)(param_2 + 0x63c);
              iVar27 = (int)sVar3 * *(int *)(param_2 + 0x63c);
              iVar8 = iVar32 + ((int)psStack_9cc[1] & 0xffffffU) * -0x100;
              if (*(int *)(param_2 + 0x88c) == 0) {
                uStack_9ec = CONCAT22((short)((uint)(iVar27 + 0x80) >> 8),
                                      (short)((uint)(iVar32 + 0x80) >> 8));
                uStack_9e8 = CONCAT22((short)((uint)(iVar27 + sVar3 * -0x100 + 0x80) >> 8),
                                      (short)((uint)(iVar8 + 0x80) >> 8));
              }
              else {
                uStack_9ec = CONCAT22((short)(iVar27 + 0xff >> 9) << 1,
                                      (short)(iVar32 + 0xff >> 9) << 1);
                uStack_9e8 = CONCAT22((short)(iVar27 + sVar3 * -0x100 + 0xff >> 9) << 1,
                                      (short)(iVar8 + 0xff >> 9) << 1);
              }
              uVar28 = param_3[4];
              iVar8 = *(int *)(param_2 + 0x6e4);
              iVar27 = *(int *)(param_2 + 0x6f0);
              if ((((iVar27 + (uVar28 & 0x7ffffff) * -0x20) - uStack_9ec |
                   iVar8 + (uStack_9ec & 0x8000) * -2 + uVar28 * 0x20 + uStack_9ec) & 0x80008000) !=
                  0) {
                uStack_9ec = fn_82C9B1F8(param_2,2,uStack_9ec,param_3);
              }
              if ((((iVar27 + (uVar28 & 0x7ffffff) * -0x20) - uStack_9e8 |
                   iVar8 + (uStack_9e8 & 0x8000) * -2 + uVar28 * 0x20 + uStack_9e8) & 0x80008000) !=
                  0) {
                uStack_9e8 = fn_82C9B1F8(param_2,2,uStack_9e8,param_3);
              }
              piVar40 = (int *)(param_2 + 0x6f8);
              **(uint **)(param_2 + 4) = uVar13;
              *(uint *)(*(int *)(param_2 + 4) + 4) = uVar14;
              *(uint *)(iVar15 + *(int *)(param_2 + 0x6f8)) = uStack_9ec;
              *(uint *)(iVar15 + *(int *)(param_2 + 0x6fc)) = uStack_9e8;
              if (uVar16 == 1) {
                **(uint **)(param_2 + 4) = uStack_9ec;
                *(uint *)(*(int *)(param_2 + 4) + 4) = uStack_9e8;
              }
              else {
                uVar39 = 5 - uVar16;
                if (uVar16 == 2) {
                  uStack_9b4 = uVar13;
                  uStack_9b8 = uVar14;
                }
                else {
                  uStack_9b8 = uVar13;
                  uStack_9b4 = uVar14;
                }
                psVar33 = (short *)&uStack_9b8;
                lVar17 = 2;
                do {
                  if ((uVar39 & 1) != 0) {
                    iVar8 = *piVar40;
                    *(int *)(param_2 + 0x6f4) = iVar8;
                    if (bVar11) {
                      uVar13 = 0;
                      if (*(short *)((int)param_3 + 0x12) != 0) {
                        uVar14 = *(uint *)((param_3[1] + -1) * 4 + iVar8);
                        uVar30 = (ulonglong)uVar14;
                        if (uVar14 != 0x4000) {
                          uVar25 = (ulonglong)*(uint *)(param_2 + 0x890);
                          lVar18 = uVar25 + 1;
                          uVar26 = (ulonglong)(uint)(param_3[4] << (5 - ((uint)lVar18 & 1) & 0x3f));
                          uVar13 = uVar14;
                          if ((((*(uint *)((int)((uVar25 + 0x1bb & 0xffffffff) << 2) + param_2) -
                                uVar30) - uVar26 |
                               (ulonglong)
                               *(uint *)((int)((uVar25 + 0x1b8 & 0xffffffff) << 2) + param_2) +
                               ((ulonglong)uVar14 & 0x8000) * -2 + uVar30 + uVar26) & 0x80008000) !=
                              0) {
                            if (((uint)lVar18 != 0) || (*(int *)(param_2 + 0x490) != 7))
                            goto LAB_830b97a4;
                            uVar13 = fn_830D95E8(param_2,uVar30,param_3);
                          }
                        }
                      }
                    }
                    else {
                      uVar4 = *(ushort *)((int)param_3 + 0x12) >> 1;
                      uVar25 = (ulonglong)(*(ushort *)(param_2 + 0x32) >> 1);
                      uVar26 = uVar25 - 1;
                      uVar25 = (uint)param_3[1] - uVar25;
                      uVar13 = *(uint *)((int)((uVar25 & 0xffffffff) << 2) + iVar8);
                      uVar30 = (ulonglong)uVar13;
                      uVar31 = (ulonglong)*(uint *)(param_3[1] * 4 + iVar8 + -4) &
                               (longlong)((int)-(uint)uVar4 >> 0x1f);
                      uVar14 = *(uint *)((int)(((((((~uVar26 & 0xffffffff) >> 0x1f) +
                                                  (ulonglong)(uVar26 <= uVar4)) * 2 & 2) + uVar25) -
                                                1 & 0xffffffff) << 2) + iVar8);
                      uVar25 = (ulonglong)uVar14;
                      lVar18 = ((ulonglong)(uVar14 >> 1 ^ uVar14) & 0x4000) +
                               ((ulonglong)(uVar13 >> 1 ^ uVar13) & 0x4000) +
                               ((uVar31 >> 1 ^ uVar31) & 0x4000);
                      if (lVar18 != 0) {
                        if ((int)lVar18 != 0x4000) {
                          uVar13 = 0;
                          goto LAB_830b97b0;
                        }
                        if (uVar30 == 0x4000) {
                          uVar30 = 0;
                        }
                        else if (uVar25 == 0x4000) {
                          uVar25 = 0;
                        }
                        else if (uVar31 == 0x4000) {
                          uVar31 = 0;
                        }
                      }
                      uVar14 = (uint)uVar31;
                      uVar13 = (uint)uVar25;
                      uVar26 = (ulonglong)*(uint *)(param_2 + 0x890);
                      uVar38 = (uint)uVar30;
                      uVar36 = (uVar25 & 0xffff) << 0x10;
                      uVar25 = (uVar31 & 0xffff) << 0x10;
                      uVar30 = (uVar30 & 0xffff) << 0x10;
                      uVar21 = uVar13 - uVar14 ^ uVar13 - uVar38;
                      uVar19 = uVar14 - uVar38 ^ uVar13 - uVar38;
                      iVar27 = (int)uVar25;
                      iVar8 = (int)uVar36;
                      iVar32 = (int)uVar30;
                      uVar28 = iVar8 - iVar32;
                      uVar35 = iVar8 - iVar27 ^ uVar28;
                      uVar28 = iVar27 - iVar32 ^ uVar28;
                      lVar18 = uVar26 + 1;
                      uVar25 = ((longlong)((int)uVar28 >> 0x1f) & uVar30 |
                                (longlong)((int)uVar35 >> 0x1f) & uVar36 |
                               ~(longlong)((int)(uVar35 | uVar28) >> 0x1f) & uVar25) >> 0x10;
                      uVar30 = uVar25 | ((ulonglong)
                                         (uint)((int)((int)uVar21 >> 0x1f & uVar13 |
                                                      (int)uVar19 >> 0x1f & uVar38 |
                                                     ~((int)(uVar21 | uVar19) >> 0x1f) & uVar14) >>
                                               0x10) & 0xffff) << 0x10;
                      uVar13 = (uint)uVar30;
                      uVar31 = (ulonglong)(uint)(param_3[4] << (5 - ((uint)lVar18 & 1) & 0x3f));
                      if ((((*(uint *)((int)((uVar26 + 0x1bb & 0xffffffff) << 2) + param_2) - uVar30
                            ) - uVar31 |
                           (ulonglong)*(uint *)((int)((uVar26 + 0x1b8 & 0xffffffff) << 2) + param_2)
                           + (uVar25 & 0x8000) * -2 + uVar30 + uVar31) & 0x80008000) != 0) {
                        if (((uint)lVar18 == 0) && (*(int *)(param_2 + 0x490) == 7)) {
                          uVar13 = fn_830D95E8(param_2,uVar30,param_3);
                        }
                        else {
LAB_830b97a4:
                          uVar13 = fn_82C9B1F8(param_2,lVar18,uVar30,param_3);
                        }
                      }
                    }
LAB_830b97b0:
                    if ((uVar37 >> 0x2f & 1) == 0) {
                      uVar13 = ((((int)uVar13 >> 0x10) + (int)*psVar33 +
                                 (uint)*(ushort *)(param_2 + 0x40) &
                                (uint)*(ushort *)(param_2 + 0x44)) -
                               (uint)*(ushort *)(param_2 + 0x40)) * 0x10000 |
                               ((int)(short)uVar13 + (int)psVar33[1] +
                                (uint)*(ushort *)(param_2 + 0x3e) &
                               (uint)*(ushort *)(param_2 + 0x42)) -
                               (uint)*(ushort *)(param_2 + 0x3e) & 0xffff;
                    }
                    psVar33 = psVar33 + 2;
                    *(uint *)(*(int *)(param_2 + 4) + (-0x6f8 - param_2) + (int)piVar40) = uVar13;
                    *(uint *)(iVar15 + *piVar40) = uVar13;
                  }
                  uVar39 = (ulonglong)((int)uVar39 >> 1);
                  lVar17 = lVar17 + -1;
                  piVar40 = piVar40 + 1;
                } while (lVar17 != 0);
              }
              *(undefined1 **)(param_2 + 0x884) = auStack_9a0;
              *(int *)(param_2 + 700) = param_2 + 0x6bc;
              *(undefined1 **)(param_2 + 0x888) = auStack_520;
              uVar39 = uVar37 >> 0x30 & 0x3f;
              lVar17 = ((uVar37 >> 0x38 & 0x3f) + (uVar37 >> 0x38 & 0x3f) * 4) * 4 +
                       (ulonglong)*(uint *)(param_2 + 0x184);
              puVar23 = (uint *)(param_2 + 0x1d0);
              uVar13 = (uint)*(byte *)(iVar9 + param_2 + 0x6d7);
              lVar18 = 2;
              do {
                if ((uVar13 & 1) != 0) {
                  uVar14 = *(uint *)((int)puVar23 + *(int *)(param_2 + 4) + (-0x1d0 - param_2));
                  if ((((*(int *)(param_2 + 0x6e8) + (param_3[4] & 0x7ffffffU) * -0x20) - uVar14 |
                       *(int *)(param_2 + 0x6dc) + (uVar14 & 0x8000) * -2 + param_3[4] * 0x20 +
                       uVar14) & 0x80008000) != 0) {
                    if (*(int *)(param_2 + 0x490) == 7) {
                      uVar14 = fn_830D95E8(param_2,uVar14,param_3);
                    }
                    else {
                      uVar14 = fn_82C9B1F8(param_2,0,uVar14,param_3);
                    }
                  }
                  uVar28 = (int)uVar14 >> 0x10;
                  uVar25 = (ulonglong)puVar23[0x1ad];
                  uVar38 = (uint)(short)uVar14;
                  if ((ulonglong)*puVar23 != 0) {
                    uVar19 = uVar38 & 3;
                    uVar21 = uVar28 & 3;
                    lVar24 = (longlong)((int)uVar14 >> 0x12) *
                             (longlong)(int)(uint)*(ushort *)(param_2 + 0x5a) +
                             (longlong)((int)(short)uVar14 >> 2) + (ulonglong)(uint)param_3[2] +
                             (ulonglong)*puVar23;
                    if (*(char *)(param_2 + 0x30) == '\x01') {
                      iVar15 = (**(code **)(((uVar19 + 0x2c) * 4 + uVar21) * 4 + param_2))();
                      if (iVar15 != 0) {
                        fn_82CC46D0(lVar24,*(undefined2 *)(param_2 + 0x5a),uVar25,uVar19,
                                          uVar21,*(undefined1 *)(param_2 + 0x23),1);
                      }
                    }
                    else {
                      (**(code **)(((uVar19 + 0x30) * 4 + uVar21) * 4 + param_2))
                                (lVar24,*(ushort *)(param_2 + 0x5a),uVar25,param_2,1);
                    }
                  }
                  if (*(int *)(param_2 + 0x494) != 0) {
                    psVar33 = (short *)((int)puVar23 + *(int *)(param_2 + 4) + (-0x1d0 - param_2));
                    uVar28 = (uint)*psVar33;
                    uVar38 = (uint)psVar33[1];
                  }
                  uVar14 = (int)(*(byte *)((uVar38 & 3) + param_2 + 0x6d4) + uVar38) >> 1;
                  uVar28 = (int)(*(byte *)((uVar28 & 3) + param_2 + 0x6d4) + uVar28) >> 1;
                  if (*(char *)(param_2 + 0x1f) != '\0') {
                    uVar38 = uVar14 & 1;
                    if (0 < (int)uVar14) {
                      uVar38 = -uVar38;
                    }
                    uVar14 = uVar14 + uVar38;
                    if ((int)uVar28 < 1) {
                      uVar28 = (uVar28 & 1) + uVar28;
                    }
                    else {
                      uVar28 = uVar28 - (uVar28 & 1);
                    }
                  }
                  iStack_9e4 = CONCAT22((short)uVar28,(short)uVar14);
                  if ((*(int *)(param_2 + 0x494) != 0) &&
                     ((((*(int *)(param_2 + 0x898) + (param_3[4] & 0xfffffffU) * -0x10) - iStack_9e4
                       | param_3[4] * 0x10 + *(int *)(param_2 + 0x894) + (uVar14 & 0x8000) * -2 +
                         iStack_9e4) & 0x80008000) != 0)) {
                    iStack_9e4 = fn_830D96C8(param_2,iStack_9e4,param_3);
                  }
                  lVar24 = (longlong)(iStack_9e4 >> 0x12) *
                           (longlong)(int)(uint)*(ushort *)(param_2 + 0x5c) +
                           (longlong)((int)(short)iStack_9e4 >> 2) + (ulonglong)(uint)param_3[3];
                  if ((ulonglong)puVar23[2] != 0) {
                    iVar15 = ((((int)(short)iStack_9e4 & 3U) + 0x30) * 4 + (iStack_9e4 >> 0x10 & 3U)
                             ) * 4;
                    (**(code **)(iVar15 + param_2))
                              ((ulonglong)puVar23[2] + lVar24,*(ushort *)(param_2 + 0x5c),
                               uVar25 + 0x300,param_2,0);
                    (**(code **)(iVar15 + param_2))
                              ((ulonglong)puVar23[4] + lVar24,*(undefined2 *)(param_2 + 0x5c),
                               uVar25 + 0x310,param_2,0);
                  }
                }
                uVar13 = (int)uVar13 >> 1;
                lVar18 = lVar18 + -1;
                puVar23 = puVar23 + 1;
              } while (lVar18 != 0);
              iVar15 = 0;
              do {
                lVar24 = (longlong)(iVar15 >> 2);
                lVar18 = (ulonglong)*(uint *)((int)((lVar24 + 2U & 0xffffffff) << 2) + (int)param_3)
                         + (ulonglong)*(uint *)((iVar15 + 0x8c) * 4 + param_2);
                if ((uVar39 & 1) == 0) {
                  if (uVar16 < 3) {
                    fn_830B9FA0(lVar18,*(undefined4 *)(param_2 + 0x884),
                                    *(undefined4 *)(param_2 + 0x888),
                                    *(undefined1 *)(*(int *)(param_2 + 700) + iVar15),
                                    *(undefined2 *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                  else {
                    fn_830E2088(lVar18,(ulonglong)
                                           *(uint *)(((-iVar9 & 1U) + 0x221) * 4 + param_2) +
                                           (ulonglong)*(byte *)(*(int *)(param_2 + 700) + iVar15) *
                                           4,*(undefined2 *)
                                              ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2))
                    ;
                  }
                }
                else {
                  if ((uVar37 >> 0x2c & 7) == 0) {
                    iVar8 = *(int *)(param_2 + 0x1bc);
                    iVar27 = 0;
                    uVar5 = *(undefined4 *)lVar17;
                    uVar6 = ((undefined4 *)lVar17)[1];
                    uVar14 = 0;
                    uVar28 = 0;
                    uVar13 = param_3[10];
                    uVar30 = (ulonglong)uVar13;
                    bVar1 = *(byte *)param_3[6];
                    uVar25 = (ulonglong)bVar1;
                    puVar34 = (ushort *)param_3[5];
                    param_3[6] = (int)((byte *)param_3[6] + 1);
                    dataCacheBlockClearToZero(uVar30);
                    if (uVar25 < 0x80) {
                      if (bVar1 != 0) {
                        do {
                          uVar4 = *puVar34;
                          puVar34 = puVar34 + 1;
                          uVar28 = (uVar4 & 0x3f) + iVar27 & 0x3f;
                          uVar10 = uVar4 >> 7 & 1;
                          bVar1 = *(byte *)(uVar28 + iVar8);
                          iVar27 = uVar28 + 1;
                          uVar28 = *(byte *)((uint)bVar1 + param_2 + 0xa8) | uVar14;
                          *(ushort *)((uint)bVar1 * 2 + uVar13) =
                               ((uVar4 >> 8) * (short)uVar5 + (short)uVar6 ^ -uVar10) + uVar10;
                          uVar25 = uVar25 - 1;
                          uVar14 = uVar28;
                        } while (uVar25 != 0);
                      }
                      param_3[5] = (int)puVar34;
                    }
                    else {
                      uVar28 = fn_82C75948(param_2,iVar8,param_2 + 0xa8,lVar17,param_3);
                    }
                    if (uVar28 == 0) {
                      fn_82C8B9D8();
                    }
                    else {
                      fn_830DBB28(uVar30,uVar30);
                    }
                  }
                  else {
                    uVar30 = (ulonglong)(uint)param_3[9];
                    uVar25 = uVar37 >> 0x28 & 0xf;
                    (**(code **)((((uint)(uVar37 >> 0x2c) & 6) +
                                  (uint)*(byte *)((int)uVar25 + param_2 + 0x140) + 0x9e) * 4 +
                                param_2))(param_2,lVar17,uVar25,param_3);
                  }
                  if (uVar16 < 3) {
                    fn_830BA0B0(lVar18,*(undefined4 *)(param_2 + 0x884),
                                    *(undefined4 *)(param_2 + 0x888),uVar30,
                                    *(undefined2 *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2),
                                    *(undefined1 *)(*(int *)(param_2 + 700) + iVar15));
                  }
                  else {
                    fn_830E2148(lVar18,(ulonglong)
                                           *(uint *)(((-iVar9 & 1U) + 0x221) * 4 + param_2) +
                                           (ulonglong)*(byte *)(*(int *)(param_2 + 700) + iVar15) *
                                           4,uVar30,
                                    *(undefined2 *)
                                     ((int)((lVar24 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                }
                iVar15 = iVar15 + 1;
                uVar39 = uVar39 >> 1;
                uVar37 = uVar37 << 8;
              } while (iVar15 < 6);
            }
            uStack_9d8 = uStack_9d8 + 1;
            psStack_9cc = psStack_9cc + 2;
            iStack_9d4 = iStack_9d4 + 1;
            *param_3 = *param_3 + 2;
            param_3[1] = param_3[1] + 1;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            puStack_9c4 = puVar20;
          } while ((int)uStack_9d8 < (int)uVar7);
        }
        iStack_9c8 = uVar22 * 4 + iStack_9c8;
        iStack_9d0 = uVar22 * 0x10 + iStack_9d0;
        *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
        iStack_9dc = iStack_9dc + 1;
        bVar11 = false;
        *param_3 = (uint)*(ushort *)(param_2 + 0x32) + *param_3;
      } while (iStack_9dc < (int)uStack_9b0);
    }
    uVar12 = 0;
  }
  return uVar12;
}


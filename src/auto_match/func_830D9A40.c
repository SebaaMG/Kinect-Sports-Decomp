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
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_600;
extern unsigned int *auStack_880;
extern int fn_82C75948();
extern int fn_82C75B70();
extern int fn_82C8B9D8();
extern int fn_82CC46D0();
extern int fn_82CC52A8();
extern int fn_830D95E8();
extern int fn_830D96C8();
extern int fn_830D97A0();
extern int fn_830DBB28();
extern int fn_830E2088();
extern int fn_830E2148();
extern unsigned int uStack0000003c;
extern unsigned int uStack_8ec;
extern unsigned int uStack_8f0;
extern unsigned int uStack_8fc;
extern unsigned int uStack_900;
extern unsigned int uStack_908;
extern unsigned int uStack_918;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_830D9A40(int param_1,int param_2,int *param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  longlong lVar11;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar12;
  short sVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  int iVar21;
  short sVar22;
  short sVar25;
  int iVar23;
  int iVar24;
  ulonglong uVar26;
  short sVar29;
  int iVar27;
  uint uVar28;
  longlong lVar30;
  uint *puVar31;
  int iVar32;
  int iVar36;
  longlong lVar33;
  uint uVar37;
  ulonglong uVar34;
  ulonglong uVar35;
  ushort *puVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uStack0000003c;
  uint uStack_918;
  uint uStack_908;
  undefined4 uStack_900;
  uint uStack_8fc;
  uint uStack_8f0;
  undefined4 uStack_8ec;
  undefined1 auStack_880 [640];
  undefined1 auStack_600 [592];
  undefined1 auStack_3b0 [944];
  
  puVar20 = *(ulonglong **)(param_2 + 0x520);
  if (((*(int *)(param_1 + 0xecc) == 0) || (*(int *)(param_1 + 0xed0) == 0)) ||
     (*(int *)(param_1 + 0xed4) == 0)) {
LAB_830daa10:
    uVar12 = 1;
  }
  else {
    param_3[9] = (int)auStack_600;
    param_3[10] = (int)auStack_880;
    param_3[0xb] = (int)auStack_3b0;
    uVar2 = *(ushort *)(param_2 + 0x4a);
    uVar3 = *(ushort *)(param_2 + 0x4c);
    uVar10 = *(ushort *)(param_2 + 0x32) >> 1;
    if (param_4 == 0) {
      iVar21 = 0;
      iVar36 = 0;
      param_3[5] = *(int *)(param_1 + 0x56f8);
      param_3[6] = *(int *)(param_1 + 0x5704);
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined2 *)(param_3 + 4) = 0;
    }
    else {
      iVar36 = (param_4 + 0x5c) * 0x10;
      iVar15 = iVar36 + param_2;
      param_3[5] = *(int *)(iVar36 + param_2);
      puVar20 = puVar20 + uVar10 * param_5;
      iVar21 = (uint)uVar2 * 0x10 * param_5;
      iVar36 = (uint)uVar3 * 8 * param_5;
      param_3[6] = *(int *)(iVar15 + 4);
      param_3[7] = *(int *)(iVar15 + 8);
      param_3[8] = *(int *)(iVar15 + 0xc);
      *param_3 = (uint)uVar10 * 4 * param_5;
      param_3[1] = uVar10 * param_5;
      *(short *)(param_3 + 4) = (short)param_5 << 1;
    }
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    uStack0000003c = param_6;
    if (param_5 < param_6) {
      do {
        uStack_918 = (uint)uVar10;
        param_3[2] = iVar21;
        param_3[3] = iVar36;
        uStack_908 = 0;
        *(undefined2 *)((int)param_3 + 0x12) = 0;
        puVar19 = puVar20;
        if (uVar10 != 0) {
          do {
            uVar4 = *(ushort *)((int)param_3 + 0x12);
            puVar20 = puVar19 + 1;
            uVar39 = *puVar19;
            lVar33 = (ulonglong)*(uint *)(param_2 + 0x1d0) + (ulonglong)(uint)param_3[2];
            uVar26 = (ulonglong)*(ushort *)(param_2 + 0x4a);
            uVar35 = uVar39 >> 0x37 & 1;
            uVar40 = 0;
            lVar30 = ((longlong)*(short *)(((uVar4 >> 1 & 7) + 0x24c) * 2 + param_2) & 0x3ffffffU) *
                     0x40;
            lVar11 = ((longlong)*(short *)(((uVar4 >> 1 & 0xf) + 0x254) * 2 + param_2) & 0x3ffffffU)
                     * 0x40;
            dataCacheBlockTouch(lVar30 + lVar33);
            dataCacheBlockTouch(lVar30 + uVar26 + lVar33);
            dataCacheBlockTouch(lVar30 + uVar26 * 2 + lVar33);
            dataCacheBlockTouch(lVar30 + uVar26 * 3 + lVar33);
            dataCacheBlockTouch(lVar11 + (ulonglong)(uint)param_3[3] +
                                         (ulonglong)*(uint *)(param_2 + 0x1e0));
            dataCacheBlockTouch(lVar11 + (ulonglong)*(uint *)(param_2 + 0x1e4) +
                                         (ulonglong)(uint)param_3[3]);
            iVar15 = (int)uVar35;
            puVar31 = (uint *)(*param_3 * 4 + *(int *)(param_2 + 0x15c));
            if (iVar15 == 0) {
              uVar5 = *(ushort *)(param_2 + 0x32);
              uStack_900 = *puVar31;
              puVar31 = puVar31 + 1;
              uStack_8fc = *puVar31;
              uVar26 = (ulonglong)(uint)((int)uStack_900 >> 0xf ^ (int)uStack_900 >> 0xe);
              uVar6 = (puVar31 + uVar5)[-1];
              uVar28 = puVar31[uVar5];
              uVar43 = (ulonglong)(uint)((int)uStack_8fc >> 0xf ^ (int)uStack_8fc >> 0xe);
              uVar34 = (ulonglong)(uint)((int)uVar6 >> 0xf ^ (int)uVar6 >> 0xe);
              uVar44 = (ulonglong)(uint)((int)uVar28 >> 0xf ^ (int)uVar28 >> 0xe);
              uVar40 = (uVar44 & 1) << 2 | (uVar34 & 1) << 3 | (uVar43 & 1) << 4 | (uVar26 & 1) << 5
              ;
              if ((uVar44 & 1) + (uVar34 & 1) + (uVar43 & 1) + (uVar26 & 1) == 0) {
                sVar29 = (short)uStack_900;
                uVar37 = (uint)sVar29;
                sVar25 = (short)uStack_8fc;
                sVar22 = (short)uVar6;
                sVar18 = (short)uVar28;
                uVar17 = (int)sVar25;
                if ((sVar25 <= sVar29) && (uVar17 = uVar37, sVar25 < sVar29)) {
                  uVar37 = (int)sVar25;
                }
                uVar13 = (int)sVar22;
                if (((int)sVar22 <= (int)uVar17) && (uVar13 = uVar17, (int)sVar22 < (int)uVar37)) {
                  uVar37 = (int)sVar22;
                }
                uVar17 = (int)sVar18;
                if (((int)sVar18 <= (int)uVar13) && (uVar17 = uVar13, (int)sVar18 < (int)uVar37)) {
                  uVar37 = (int)sVar18;
                }
                uVar13 = (((int)sVar18 - uVar37) - uVar17) + (int)sVar22 + (int)sVar25 + (int)sVar29
                ;
                iVar16 = (int)uStack_900 >> 0x10;
                iVar42 = (int)uStack_8fc >> 0x10;
                iVar9 = (int)uVar6 >> 0x10;
                iVar32 = (int)uVar28 >> 0x10;
                iVar24 = iVar42;
                iVar27 = iVar16;
                if ((iVar42 <= iVar16) && (iVar24 = iVar16, iVar42 < iVar16)) {
                  iVar27 = iVar42;
                }
                iVar23 = iVar9;
                if ((iVar9 <= iVar24) && (iVar23 = iVar24, iVar9 < iVar27)) {
                  iVar27 = iVar9;
                }
                iVar24 = iVar32;
                if ((iVar32 <= iVar23) && (iVar24 = iVar23, iVar32 < iVar27)) {
                  iVar27 = iVar32;
                }
                uVar6 = param_3[4];
                iVar23 = *(int *)(param_2 + 0x6b4);
                iVar7 = *(int *)(param_2 + 0x6b0);
                uVar28 = ((iVar32 - iVar27) - iVar24) + iVar9 + iVar42 + iVar16;
                uVar26 = ((longlong)((int)uVar28 >> 1) +
                          (ulonglong)((int)uVar28 < 0 && (uVar28 & 1) != 0) & 0xffff) << 0x10 |
                         (longlong)((int)uVar13 >> 1) +
                         (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0) & 0xffffffff0000ffff;
                if ((((iVar23 + (uVar6 & 0x7ffffff) * -0x20) - (iVar24 << 0x10 | uVar17 & 0xffff) |
                     (uVar6 - 0x800) * 0x20 + (iVar27 << 0x10 | uVar37 & 0xffff) + iVar7) &
                    0x80008000) != 0) {
                  lVar11 = 3;
                  puVar31 = &uStack_8f0;
                  do {
                    uVar28 = puVar31[-1];
                    if ((((iVar23 + (uVar6 & 0x7ffffff) * -0x20) - uVar28 |
                         uVar6 * 0x20 + (uVar28 & 0x8000) * -2 + uVar28 + iVar7) & 0x80008000) != 0)
                    {
                      if (*(int *)(param_2 + 0x490) == 7) {
                        uVar28 = fn_830D95E8(param_2,uVar28,param_3);
                      }
                      else {
                        sVar18 = (short)uVar28;
                        uVar37 = (uint)sVar18;
                        iVar16 = (int)uVar28 >> 0x10;
                        uVar28 = (uint)uVar4 * 0x20 + (int)sVar18 & 0xfffffffc;
                        iVar42 = (uint)uVar5 * 0x20;
                        uVar17 = (uint)*(ushort *)(param_3 + 4) * 0x20 + iVar16 & 0xfffffffc;
                        if ((int)uVar28 < -0x40) {
                          uVar37 = ((int)sVar18 - uVar28) - 0x40;
                        }
                        else if (iVar42 < (int)uVar28) {
                          uVar37 = (iVar42 - uVar28) + (int)sVar18;
                        }
                        if ((int)uVar17 < -0x40) {
                          iVar16 = (iVar16 - uVar17) + -0x40;
                        }
                        else if ((int)((uint)*(ushort *)(param_2 + 0x34) << 5) < (int)uVar17) {
                          iVar16 = ((uint)*(ushort *)(param_2 + 0x34) * 0x20 - uVar17) + iVar16;
                        }
                        uVar28 = iVar16 << 0x10 | uVar37 & 0xffff;
                      }
                    }
                    lVar11 = lVar11 + -1;
                    puVar31 = puVar31 + -1;
                    *puVar31 = uVar28;
                  } while (-1 < lVar11);
                }
              }
              else {
                uVar26 = fn_830D97A0(param_2,param_3,&uStack_900,uVar40);
                if ((int)uVar26 == 0x4000) goto LAB_830d9f64;
              }
LAB_830da088:
              uVar6 = (int)uVar26 >> 0x10;
              uVar28 = (int)((uint)*(byte *)(((int)(short)uVar26 & 3U) + param_2 + 0x134) +
                            (int)(short)uVar26) >> 1;
              uVar43 = (ulonglong)(int)uVar28;
              uVar6 = (int)(*(byte *)((uVar6 & 3) + param_2 + 0x134) + uVar6) >> 1;
              uVar34 = (ulonglong)(int)uVar6;
              if (*(char *)(param_2 + 0x1f) != '\0') {
                uVar43 = (uVar28 >> 0x1f) + uVar43 & 0xfffffffe;
                uVar34 = (uVar6 >> 0x1f) + uVar34 & 0xfffffffe;
              }
              uVar34 = (uVar34 & 0xffff) << 0x10 | uVar43 & 0xffffffff0000ffff;
              iVar16 = param_3[1];
              if (*(char *)(param_2 + 0x20) != '\0') {
                if (*(int *)(param_2 + 0x490) == 7) {
                  *(int *)(iVar16 * 4 + *(int *)(param_2 + 0x178)) = (int)uVar26;
                }
                else {
                  uVar14 = fn_82C75B70(param_2,4,0,uVar26,param_3);
                  *(undefined4 *)(iVar16 * 4 + *(int *)(param_2 + 0x178)) = uVar14;
                }
              }
              if (*(int *)(param_2 + 0x490) == 7) {
                *(int *)(iVar16 * 4 + *(int *)(param_2 + 0x160)) = (int)uVar34;
                uVar14 = (int)uVar34;
                if (((((ulonglong)*(uint *)(param_2 + 0x6bc) +
                      ((ulonglong)(uint)param_3[4] & 0xfffffff) * -0x10) - uVar34 |
                     ((ulonglong)(uint)param_3[4] & 0xfffffff) * 0x10 +
                     (ulonglong)*(uint *)(param_2 + 0x6b8) + (uVar43 & 0x8000) * -2 + uVar34) &
                    0x80008000) != 0) {
                  if (*(int *)(param_2 + 0x490) == 7) {
                    uVar14 = fn_830D96C8(param_2,uVar34,param_3);
                  }
                  else {
                    uVar14 = fn_82C75B70(param_2,4,0,uVar34,param_3);
                  }
                }
              }
              else {
                if (((((ulonglong)*(uint *)(param_2 + 0x6bc) +
                      ((ulonglong)(uint)param_3[4] & 0xfffffff) * -0x10) - uVar34 |
                     ((ulonglong)(uint)param_3[4] & 0xfffffff) * 0x10 +
                     (ulonglong)*(uint *)(param_2 + 0x6b8) + (uVar43 & 0x8000) * -2 + uVar34) &
                    0x80008000) != 0) {
                  uVar34 = fn_82C75B70(param_2,4,0,uVar34,param_3);
                }
                *(int *)(iVar16 * 4 + *(int *)(param_2 + 0x160)) = (int)uVar34;
                uVar14 = (int)uVar34;
              }
            }
            else {
              uStack_900 = *puVar31;
              uVar26 = (ulonglong)uStack_900;
              if (uStack_900 != 0x4000) {
                if (((((ulonglong)*(uint *)(param_2 + 0x6b4) +
                      ((ulonglong)(uint)param_3[4] & 0x7ffffff) * -0x20) - uVar26 |
                     ((ulonglong)(uint)param_3[4] & 0x7ffffff) * 0x20 +
                     (ulonglong)*(uint *)(param_2 + 0x6b0) + ((ulonglong)uStack_900 & 0x8000) * -2 +
                     uVar26) & 0x80008000) != 0) {
                  if (*(int *)(param_2 + 0x490) == 7) {
                    uStack_900 = fn_830D95E8(param_2,uVar26,param_3);
                  }
                  else {
                    sVar18 = (short)uStack_900;
                    uVar17 = (uint)sVar18;
                    iVar16 = (int)uStack_900 >> 0x10;
                    uVar6 = (uint)uVar4 * 0x20 + (int)sVar18 & 0xfffffffc;
                    iVar42 = (uint)*(ushort *)(param_2 + 0x32) * 0x20;
                    uVar28 = (uint)*(ushort *)(param_3 + 4) * 0x20 + iVar16 & 0xfffffffc;
                    if ((int)uVar6 < -0x40) {
                      uVar17 = ((int)sVar18 - uVar6) - 0x40;
                    }
                    else if (iVar42 < (int)uVar6) {
                      uVar17 = (iVar42 - uVar6) + (int)sVar18;
                    }
                    if ((int)uVar28 < -0x40) {
                      iVar16 = (iVar16 - uVar28) + -0x40;
                    }
                    else if ((int)((uint)*(ushort *)(param_2 + 0x34) << 5) < (int)uVar28) {
                      iVar16 = ((uint)*(ushort *)(param_2 + 0x34) * 0x20 - uVar28) + iVar16;
                    }
                    uStack_900 = iVar16 << 0x10 | uVar17 & 0xffff;
                  }
                }
                goto LAB_830da088;
              }
              uVar40 = 0x3c;
LAB_830d9f64:
              if (*(int *)(*(int *)(param_2 + 0x160) + param_3[1] * 4) != 0x4000) goto LAB_830daa10;
              uVar40 = uVar40 | 3;
              uVar14 = uStack_8ec;
              if (*(char *)(param_2 + 0x20) != '\0') {
                *(undefined4 *)(*(int *)(param_2 + 0x178) + param_3[1] * 4) = 0;
              }
            }
            uStack_8ec = uVar14;
            uVar26 = uVar39 >> 0x30 & 0x3f;
            if (((iVar15 == 0) || (uVar26 != 0)) || ((uVar40 & 3) != 0)) {
              iVar16 = param_2 + 0x6c6;
              lVar11 = ((uVar39 >> 0x38 & 0x3f) + (uVar39 >> 0x38 & 0x3f) * 4) * 4 +
                       (ulonglong)*(uint *)(param_2 + 0x184);
              if (((uVar40 & 0x20) == 0) && (iVar15 == 1)) {
                uVar6 = (int)(((U64)(uStack_900) >> 16) & 0xFFFF) & 3;
                uVar28 = (int)(short)(((U64)(uStack_900) >> 0) & 0xFFFF) & 3;
                lVar30 = (longlong)((int)(short)(((U64)(uStack_900) >> 0) & 0xFFFF) >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x5a) +
                         (longlong)((int)(((U64)(uStack_900) >> 16) & 0xFFFF) >> 2) +
                         (ulonglong)*(uint *)(param_2 + 0x1d0) + (ulonglong)(uint)param_3[2];
                if (*(char *)(param_2 + 0x30) == '\x01') {
                  iVar15 = (**(code **)(((uVar6 + 0x2c) * 4 + uVar28) * 4 + param_2))();
                  if (iVar15 != 0) {
                    fn_82CC46D0(lVar30,*(undefined2 *)(param_2 + 0x5a),param_3[0xb],uVar6,
                                      uVar28,*(undefined1 *)(param_2 + 0x23),1);
                  }
                }
                else {
                  (**(code **)(((uVar6 + 0x30) * 4 + uVar28) * 4 + param_2))
                            (lVar30,*(ushort *)(param_2 + 0x5a),param_3[0xb],param_2,1);
                }
                uVar35 = 2;
                iVar16 = param_2 + 0x6c0;
              }
              uVar43 = 0;
              do {
                iVar42 = (int)uVar43;
                iVar15 = iVar42 >> 2;
                lVar33 = (longlong)iVar15;
                uVar35 = uVar35 - lVar33;
                lVar30 = (ulonglong)*(uint *)((int)((lVar33 + 2U & 0xffffffff) << 2) + (int)param_3)
                         + (ulonglong)*(uint *)((int)((uVar43 + 0x8c & 0xffffffff) << 2) + param_2);
                if ((uVar40 & 0x20) == 0) {
                  if ((uVar26 & 1) == 0) {
                    if ((int)uVar35 < 2) {
                      iVar9 = (int)((uVar43 & 0xffffffff) << 2);
                      sVar18 = *(short *)((int)&uStack_900 + iVar9);
                      iVar32 = (int)((lVar33 + 0x2dU & 0xffffffff) << 1);
                      sVar22 = *(short *)((int)&uStack_900 + iVar9 + 2);
                      uVar4 = *(ushort *)(iVar32 + param_2);
                      uVar6 = (int)sVar22 & 3;
                      uVar28 = (int)sVar18 & 3;
                      lVar41 = (ulonglong)
                               *(uint *)((int)((lVar33 + 2U & 0xffffffff) << 2) + (int)param_3) +
                               (ulonglong)
                               *(uint *)((int)((uVar43 + 0x74 & 0xffffffff) << 2) + param_2) +
                               (longlong)((int)sVar18 >> 2) * (longlong)(int)(uint)uVar4 +
                               (longlong)((int)sVar22 >> 2);
                      if (*(char *)(iVar15 + param_2 + 0x30) == '\x01') {
                        iVar15 = (**(code **)(((uVar6 + 0x2c) * 4 + uVar28) * 4 + param_2))();
                        if (iVar15 != 0) {
                          fn_82CC46D0(lVar41,*(undefined2 *)(iVar32 + param_2),param_3[0xb],
                                            uVar6,uVar28,*(undefined1 *)(param_2 + 0x23),0);
                        }
                      }
                      else {
                        (**(code **)(((uVar6 + 0x30) * 4 + uVar28) * 4 + param_2))
                                  (lVar41,uVar4,param_3[0xb],param_2,0);
                      }
                    }
                    fn_830E2088(lVar30,(ulonglong)*(byte *)(iVar42 + iVar16) * 4 +
                                           (ulonglong)(uint)param_3[0xb],
                                    *(undefined2 *)
                                     ((int)((lVar33 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                  else {
                    if ((uVar39 >> 0x2c & 7) == 0) {
                      uVar6 = param_3[10];
                      uVar44 = (ulonglong)uVar6;
                      iVar32 = 0;
                      iVar9 = *(int *)(param_2 + 0x1bc);
                      uVar14 = *(undefined4 *)lVar11;
                      uVar8 = ((undefined4 *)lVar11)[1];
                      uVar28 = 0;
                      uVar17 = 0;
                      bVar1 = *(byte *)param_3[6];
                      uVar34 = (ulonglong)bVar1;
                      puVar38 = (ushort *)param_3[5];
                      param_3[6] = (int)((byte *)param_3[6] + 1);
                      dataCacheBlockClearToZero(uVar44);
                      if (uVar34 < 0x80) {
                        if (bVar1 != 0) {
                          do {
                            uVar4 = *puVar38;
                            puVar38 = puVar38 + 1;
                            uVar17 = (uVar4 & 0x3f) + iVar32 & 0x3f;
                            uVar5 = uVar4 >> 7 & 1;
                            bVar1 = *(byte *)(uVar17 + iVar9);
                            iVar32 = uVar17 + 1;
                            uVar17 = *(byte *)((uint)bVar1 + param_2 + 0xa8) | uVar28;
                            *(ushort *)((uint)bVar1 * 2 + uVar6) =
                                 ((uVar4 >> 8) * (short)uVar14 + (short)uVar8 ^ -uVar5) + uVar5;
                            uVar34 = uVar34 - 1;
                            uVar28 = uVar17;
                          } while (uVar34 != 0);
                        }
                        param_3[5] = (int)puVar38;
                      }
                      else {
                        uVar17 = fn_82C75948(param_2,iVar9,param_2 + 0xa8,lVar11,param_3);
                      }
                      if (uVar17 == 0) {
                        fn_82C8B9D8();
                      }
                      else {
                        fn_830DBB28(uVar44,uVar44);
                      }
                    }
                    else {
                      uVar44 = (ulonglong)(uint)param_3[9];
                      uVar34 = uVar39 >> 0x28 & 0xf;
                      (**(code **)((((uint)(uVar39 >> 0x2c) & 6) +
                                    (uint)*(byte *)((int)uVar34 + param_2 + 0x140) + 0x9e) * 4 +
                                  param_2))(param_2,lVar11,uVar34,param_3);
                    }
                    if ((int)uVar35 < 2) {
                      iVar9 = (int)((uVar43 & 0xffffffff) << 2);
                      sVar18 = *(short *)((int)&uStack_900 + iVar9);
                      iVar32 = (int)(((longlong)iVar15 + 0x2dU & 0xffffffff) << 1);
                      sVar22 = *(short *)((int)&uStack_900 + iVar9 + 2);
                      uVar4 = *(ushort *)(iVar32 + param_2);
                      uVar6 = (int)sVar22 & 3;
                      lVar41 = (ulonglong)
                               *(uint *)((int)(((longlong)iVar15 + 2U & 0xffffffff) << 2) +
                                        (int)param_3) +
                               (ulonglong)
                               *(uint *)((int)((uVar43 + 0x74 & 0xffffffff) << 2) + param_2) +
                               (longlong)((int)sVar18 >> 2) * (longlong)(int)(uint)uVar4 +
                               (longlong)((int)sVar22 >> 2);
                      uVar28 = (int)sVar18 & 3;
                      if (*(char *)(iVar15 + param_2 + 0x30) == '\x01') {
                        iVar15 = (**(code **)(((uVar6 + 0x2c) * 4 + uVar28) * 4 + param_2))();
                        if (iVar15 != 0) {
                          fn_82CC46D0(lVar41,*(undefined2 *)(iVar32 + param_2),param_3[0xb],
                                            uVar6,uVar28,*(undefined1 *)(param_2 + 0x23),0);
                        }
                      }
                      else {
                        (**(code **)(((uVar6 + 0x30) * 4 + uVar28) * 4 + param_2))
                                  (lVar41,uVar4,param_3[0xb],param_2,0);
                      }
                    }
                    fn_830E2148(lVar30,(ulonglong)*(byte *)(iVar42 + iVar16) * 4 +
                                           (ulonglong)(uint)param_3[0xb],uVar44,
                                    *(undefined2 *)
                                     ((int)((lVar33 + 0x2dU & 0xffffffff) << 1) + param_2));
                  }
                }
                uVar43 = uVar43 + 1;
                uVar26 = uVar26 >> 1;
                uVar39 = uVar39 << 8;
                uVar40 = (uVar40 & 0x7fffffff) << 1;
              } while ((int)uVar43 < 6);
            }
            else {
              puVar38 = (ushort *)&uStack_900;
              uVar39 = (ulonglong)(uint)param_3[2];
              if (uStack_900 == 0) {
                uVar35 = (ulonglong)(uint)param_3[3];
                fn_82CC52A8(*(uint *)(param_2 + 0x230) + uVar39,
                                *(uint *)(param_2 + 0x240) + uVar35,
                                *(uint *)(param_2 + 0x244) + uVar35,
                                *(uint *)(param_2 + 0x1d0) + uVar39,
                                uVar35 + *(uint *)(param_2 + 0x1e0),
                                *(uint *)(param_2 + 0x1e4) + uVar35,uVar2,uVar3);
              }
              else {
                uVar6 = (int)(((U64)(uStack_900) >> 16) & 0xFFFF) & 3;
                uVar28 = (int)(short)(((U64)(uStack_900) >> 0) & 0xFFFF) & 3;
                lVar11 = (longlong)((int)(short)(((U64)(uStack_900) >> 0) & 0xFFFF) >> 2) *
                         (longlong)(int)(uint)*(ushort *)(param_2 + 0x5a) +
                         (longlong)((int)(((U64)(uStack_900) >> 16) & 0xFFFF) >> 2) +
                         (ulonglong)*(uint *)(param_2 + 0x1d0) + uVar39;
                if (*(char *)(param_2 + 0x30) == '\x01') {
                  iVar15 = (**(code **)(((uVar6 + 0x2c) * 4 + uVar28) * 4 + param_2))();
                  if (iVar15 != 0) {
                    fn_82CC46D0(lVar11,*(undefined2 *)(param_2 + 0x5a),param_3[0xb],uVar6,
                                      uVar28,*(undefined1 *)(param_2 + 0x23),1);
                  }
                }
                else {
                  (**(code **)(((uVar6 + 0x30) * 4 + uVar28) * 4 + param_2))
                            (lVar11,*(ushort *)(param_2 + 0x5a),param_3[0xb],param_2,1);
                }
                iVar15 = 0;
                puVar31 = (uint *)(param_2 + 0x22c);
                do {
                  iVar16 = iVar15 >> 2;
                  lVar11 = (longlong)iVar16;
                  if (iVar16 != 0) {
                    iVar42 = (int)((lVar11 + 0x2dU & 0xffffffff) << 1);
                    uVar4 = *(ushort *)(iVar42 + param_2);
                    uVar6 = puVar38[1] & 3;
                    uVar28 = *puVar38 & 3;
                    lVar30 = (ulonglong)
                             *(uint *)((int)((lVar11 + 2U & 0xffffffff) << 2) + (int)param_3) +
                             (longlong)((int)(short)*puVar38 >> 2) * (longlong)(int)(uint)uVar4 +
                             (longlong)((int)(short)puVar38[1] >> 2) + (ulonglong)puVar31[-0x17];
                    if (*(char *)(iVar16 + param_2 + 0x30) == '\x01') {
                      iVar16 = (**(code **)(((uVar6 + 0x2c) * 4 + uVar28) * 4 + param_2))();
                      if (iVar16 != 0) {
                        fn_82CC46D0(lVar30,*(undefined2 *)(iVar42 + param_2),param_3[0xb],
                                          uVar6,uVar28,*(undefined1 *)(param_2 + 0x23),0);
                      }
                    }
                    else {
                      (**(code **)(((uVar6 + 0x30) * 4 + uVar28) * 4 + param_2))
                                (lVar30,uVar4,param_3[0xb],param_2,0);
                    }
                  }
                  puVar31 = puVar31 + 1;
                  fn_830E2088((ulonglong)
                                  *(uint *)((int)((lVar11 + 2U & 0xffffffff) << 2) + (int)param_3) +
                                  (ulonglong)*puVar31,
                                  (ulonglong)*(byte *)(iVar15 + param_2 + 0x6c0) * 4 +
                                  (ulonglong)(uint)param_3[0xb],
                                  *(undefined2 *)
                                   ((int)((lVar11 + 0x2dU & 0xffffffff) << 1) + param_2));
                  iVar15 = iVar15 + 1;
                  puVar38 = puVar38 + 2;
                } while (iVar15 < 6);
              }
            }
            uStack_908 = uStack_908 + 1;
            param_3[1] = param_3[1] + 1;
            *param_3 = *param_3 + 2;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            param_6 = uStack0000003c;
            puVar19 = puVar20;
          } while (uStack_908 < uStack_918);
        }
        iVar36 = (uint)uVar3 * 8 + iVar36;
        *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
        param_5 = param_5 + 1;
        iVar21 = (uint)uVar2 * 0x10 + iVar21;
        *param_3 = (uint)*(ushort *)(param_2 + 0x32) + *param_3;
      } while (param_5 < param_6);
    }
    uVar12 = 0;
  }
  return uVar12;
}


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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_82CC4B78();
extern unsigned int uStack0000003c;
extern unsigned int uStack_10c;


undefined8
fn_830FE568(undefined8 param_1,int param_2,int *param_3,int param_4,uint param_5,uint param_6)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar25;
  ulonglong uVar20;
  short sVar27;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar26;
  ulonglong uVar24;
  ulonglong uVar28;
  ulonglong uVar29;
  short *psVar30;
  ulonglong *puVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uStack0000003c;
  uint uStack_10c;
  uint auStack_e0 [4];
  uint auStack_d0 [4];
  uint auStack_c0 [4];
  uint auStack_b0 [44];
  
  iVar9 = *(int *)(param_2 + 0x520);
  if ((*(int *)(param_2 + 0x570) == 2) || (iVar32 = 0, *(int *)(param_2 + 0x570) == 3)) {
    iVar32 = 1;
  }
  uVar2 = *(ushort *)(param_2 + 0x4a);
  uVar3 = *(ushort *)(param_2 + 0x4c);
  uVar7 = (2 - *(int *)(param_2 + 0x558)) * 2;
  uVar4 = *(ushort *)(param_2 + 0x32) >> 1;
  uVar24 = (ulonglong)uVar4;
  uVar11 = (uint)uVar3;
  uVar33 = (uint)uVar4;
  uStack_10c = uVar7;
  if (iVar32 != 0) {
    uStack_10c = uVar7 + *(int *)(param_2 + 0x558) * -2 + 1;
  }
  if (param_4 == 0) {
    iVar13 = 0;
    *param_3 = 0;
    iVar12 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
  }
  else {
    iVar12 = (param_4 + 0x5c) * 0x10;
    iVar35 = iVar12 + param_2;
    param_3[5] = *(int *)(iVar12 + param_2);
    iVar13 = (uint)uVar2 * 0x10 * param_5;
    param_3[6] = *(int *)(iVar35 + 4);
    iVar12 = (uint)uVar3 * 8 * param_5;
    param_3[7] = *(int *)(iVar35 + 8);
    param_3[8] = *(int *)(iVar35 + 0xc);
    *param_3 = (uint)uVar4 * 4 * param_5;
    param_3[1] = uVar33 * param_5;
    *(short *)(param_3 + 4) = (short)param_5 << 1;
  }
  *(undefined2 *)((int)param_3 + 0x12) = 0;
  param_3[9] = *(int *)(param_2 + 0x268);
  param_3[10] = *(int *)(param_2 + 0x1ac);
  param_3[0xb] = *(int *)(param_2 + 0x48c);
  if (param_5 < param_6) {
    uVar29 = (ulonglong)uVar11;
    puVar31 = (ulonglong *)(uVar33 * param_5 * 8 + iVar9 + -8);
    uStack0000003c = param_6;
    do {
      uVar28 = 0;
      param_3[2] = iVar13;
      param_3[3] = iVar12;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      if (uVar24 != 0) {
        do {
          puVar31 = puVar31 + 1;
          psVar30 = (short *)(*param_3 * 4 + *(int *)(param_2 + 0x15c));
          if (*(int *)(*param_3 * 4 + *(int *)(param_2 + 0x15c)) != 0x4000) {
            if ((*puVar31 >> 0x37 & 1) == 0) {
              lVar22 = 0;
              lVar21 = 0;
              uVar26 = 0;
              puVar34 = (uint *)(param_2 + 0x1d0);
              uVar24 = (((ulonglong)param_5 & 0x7fff) << 0x11 | uVar28 & 0xffffffff) & 0x3ffffff;
              iVar35 = 0;
              iVar9 = 0;
              do {
                uVar4 = *(ushort *)(param_2 + 0x32);
                uVar5 = psVar30[((uint)(uVar4 >> 1) * (uVar26 & 2) + (uVar26 & 1)) * 2];
                uVar6 = (psVar30 + ((uint)(uVar4 >> 1) * (uVar26 & 2) + (uVar26 & 1)) * 2)[1];
                bVar1 = (uVar5 & 1) == 0;
                if (bVar1) {
                  uVar15 = (ulonglong)(uint)((int)(short)uVar5 >> 1) & 3 |
                           (longlong)(short)uVar5 & 0xfffffff8U;
                  lVar21 = lVar21 + 1;
                  *(int *)((int)auStack_c0 + iVar9) = (int)(short)uVar6;
                  *(uint *)((int)auStack_b0 + iVar9) =
                       (uint)uVar15 & 3 | (int)(uint)uVar15 >> 1 & 0xfffffffcU;
                  iVar9 = iVar9 + 4;
                }
                else {
                  iVar10 = *(int *)(param_2 + 0x558);
                  uVar15 = (longlong)(short)uVar5 - (ulonglong)uVar7;
                  uVar25 = (int)((int)(short)uVar5 - uStack_10c & 6 | 8) >> 1;
                  lVar22 = lVar22 + 1;
                  *(int *)((int)auStack_e0 + iVar35) = (int)(short)uVar6;
                  uVar15 = (longlong)((int)((uint)uVar15 & 6 | 8) >> 1) | uVar15 & 0xfffffffc;
                  *(uint *)((int)auStack_d0 + iVar35) =
                       (((int)(iVar10 * 8 + (uVar25 | (int)(short)uVar5 - uStack_10c & 0xfffffffc) +
                              -4) >> 3) << 2 | uVar25 & 3) + iVar10 * -4 + 2;
                  iVar35 = iVar35 + 4;
                }
                uVar15 = (uVar15 & 0xffff) << 0x10 | (longlong)(short)uVar6 & 0xffffffff0000ffffU;
                uVar25 = (uint)uVar15;
                if (((uVar24 * 0x40 + ((ulonglong)uVar6 & 0x8000) * -2 + uVar15 + 0x800038 |
                     ((ulonglong)*(uint *)(param_2 + 300) + uVar24 * -0x40) - uVar15) & 0x80008000)
                    != 0) {
                  uVar39 = (int)uVar25 >> 0x10;
                  sVar27 = (short)((longlong)(short)uVar6 & 0xffffffff0000ffffU);
                  uVar14 = (uint)sVar27;
                  bVar8 = false;
                  if (*(int *)(param_2 + 0x558) == 0) {
                    iVar10 = (uint)*(ushort *)(param_2 + 0x34) * 0x10;
                    if ((uVar39 & 4) == 0) {
LAB_830fef1c:
                      iVar10 = iVar10 + 2;
                      iVar17 = -0x24;
                    }
                    else {
                      iVar17 = -0x23;
                      iVar10 = iVar10 + 3;
                    }
                  }
                  else {
                    iVar10 = (uint)*(ushort *)(param_2 + 0x34) * 0x10;
                    if ((uVar39 & 4) == 0) goto LAB_830fef1c;
                    iVar17 = -0x25;
                    iVar10 = iVar10 + 1;
                  }
                  lVar18 = (longlong)((int)sVar27 >> 2) + (uVar28 & 0xfffffff) * 0x10;
                  iVar16 = ((int)uVar25 >> 0x12) + param_5 * 0x20;
                  if ((int)lVar18 < -0x11) {
                    lVar19 = -0x11;
LAB_830fef54:
                    bVar8 = true;
                    lVar18 = lVar19;
                  }
                  else {
                    lVar19 = (ulonglong)uVar4 << 3;
                    if ((int)lVar19 < (int)lVar18) goto LAB_830fef54;
                  }
                  if (((iVar16 < iVar17) || (iVar17 = iVar10, iVar10 < iVar16)) ||
                     (iVar17 = iVar16, bVar8)) {
                    uVar14 = (int)((lVar18 + (uVar28 & 0xfffffff) * -0x10 & 0xffffffff) << 2) +
                             ((int)sVar27 & 3U);
                    uVar39 = (iVar17 + (param_5 & 0x7ffffff) * -0x20) * 4 + (uVar39 & 3);
                  }
                  uVar25 = uVar39 << 0x10 | uVar14 & 0xffff;
                }
                uVar15 = (ulonglong)*(ushort *)(param_2 + 0x5a);
                if (bVar1) {
                  uVar39 = *puVar34;
                }
                else {
                  uVar39 = puVar34[6];
                }
                if ((ulonglong)uVar39 == 0) {
                  return 1;
                }
                lVar18 = (ulonglong)puVar34[0x18] + (ulonglong)(uint)param_3[2];
                lVar19 = (longlong)((int)(uint)*(ushort *)(param_2 + 0x5a) >> 1) *
                         (longlong)((int)uVar25 >> 0x12) + (longlong)((int)(short)uVar25 >> 2) +
                         (ulonglong)uVar39 + (ulonglong)(uint)param_3[2];
                dataCacheBlockTouch(lVar19 + 0x80);
                dataCacheBlockTouch(uVar15 + 0x80 + lVar19);
                dataCacheBlockTouch((uVar15 + 0x40) * 2 + lVar19);
                dataCacheBlockTouch(uVar15 * 3 + 0x80 + lVar19);
                dataCacheBlockTouch((uVar15 + 0x20) * 4 + lVar19);
                dataCacheBlockTouch(uVar15 * 5 + 0x80 + lVar19);
                dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
                dataCacheBlockTouch(uVar15 * 7 + 0x80 + lVar19);
                uVar39 = (int)(short)uVar25 & 3;
                uVar25 = (int)uVar25 >> 0x10 & 3;
                if (*(char *)(param_2 + 0x30) == '\x01') {
                  iVar10 = (**(code **)(((uVar39 + 0x34) * 4 + uVar25) * 4 + param_2))();
                  if (iVar10 != 0) {
                    fn_82CC4B78(lVar19,uVar15,lVar18,uVar39,uVar25,
                                      *(undefined1 *)(param_2 + 0x23),0);
                  }
                }
                else {
                  (**(code **)(((uVar39 + 0x38) * 4 + uVar25) * 4 + param_2))
                            (lVar19,uVar15,lVar18,param_2,0);
                }
                uVar26 = uVar26 + 1;
                puVar34 = puVar34 + 1;
              } while ((int)uVar26 < 4);
              uVar26 = (uint)uVar29;
              if ((int)lVar21 < (int)lVar22) {
                uVar24 = lVar22 - 1;
                iVar9 = 1;
                if ((uVar24 & 0xffffffff) < 4) {
                  bVar1 = (int)uVar24 != 0;
                  if (lVar22 == 2 && bVar1) {
                    uVar26 = auStack_e0[1] + auStack_e0[0];
                    uVar11 = auStack_d0[1] + auStack_d0[0];
                    uVar26 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0);
                    uVar11 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
                  }
                  else if (uVar24 == 2 && bVar1) {
                    uVar26 = auStack_e0[1] - auStack_e0[2] ^ auStack_e0[1] - auStack_e0[0];
                    uVar11 = auStack_e0[2] - auStack_e0[0] ^ auStack_e0[1] - auStack_e0[0];
                    uVar25 = auStack_d0[1] - auStack_d0[2] ^ auStack_d0[1] - auStack_d0[0];
                    uVar39 = auStack_d0[2] - auStack_d0[0] ^ auStack_d0[1] - auStack_d0[0];
                    uVar26 = auStack_e0[2] & ~((int)(uVar26 | uVar11) >> 0x1f) |
                             (int)uVar26 >> 0x1f & auStack_e0[1] |
                             (int)uVar11 >> 0x1f & auStack_e0[0];
                    uVar11 = auStack_d0[2] & ~((int)(uVar25 | uVar39) >> 0x1f) |
                             (int)uVar25 >> 0x1f & auStack_d0[1] |
                             (int)uVar39 >> 0x1f & auStack_d0[0];
                  }
                  else {
                    uVar26 = auStack_e0[0];
                    uVar11 = auStack_d0[0];
                    if (bVar1) {
                      uVar11 = (int)(auStack_e0[1] - auStack_e0[0]) >> 0x1f;
                      uVar26 = (int)(auStack_e0[2] - auStack_e0[1]) >> 0x1f;
                      uVar25 = ~((int)(auStack_e0[2] - auStack_e0[0]) >> 0x1f);
                      uVar39 = ~uVar26;
                      uVar37 = ~((int)(auStack_e0[0] - auStack_e0[1]) >> 0x1f);
                      uVar14 = ~((int)(auStack_e0[1] - auStack_e0[2]) >> 0x1f);
                      uVar40 = ~((int)(auStack_e0[0] - auStack_e0[2]) >> 0x1f);
                      uVar36 = ~uVar11 & uVar25 & auStack_e0[0] | uVar37 & uVar39 & auStack_e0[1] |
                               uVar14 & uVar40 & auStack_e0[2];
                      uVar37 = ~uVar11 & uVar14 & auStack_e0[1] | uVar25 & uVar39 & auStack_e0[2] |
                               uVar37 & uVar40 & auStack_e0[0];
                      uVar14 = ~((int)(uVar37 - auStack_e0[3] ^ auStack_e0[3] - uVar36) >> 0x1f);
                      uVar25 = ~((int)(uVar36 - uVar37 ^ auStack_e0[3] - uVar36) >> 0x1f);
                      uVar25 = (uVar37 & ~(uVar14 | uVar25) | uVar36 & uVar25 |
                               uVar14 & auStack_e0[3]) +
                               ((uVar40 ^ uVar26) & auStack_e0[2] |
                                (uVar39 ^ uVar11) & auStack_e0[1] |
                               (uVar40 ^ uVar11) & auStack_e0[0]);
                      uVar11 = (int)(auStack_d0[1] - auStack_d0[0]) >> 0x1f;
                      uVar26 = (int)(auStack_d0[2] - auStack_d0[1]) >> 0x1f;
                      uVar39 = ~uVar26;
                      uVar41 = ~((int)(auStack_d0[0] - auStack_d0[2]) >> 0x1f);
                      uVar36 = ~((int)(auStack_d0[1] - auStack_d0[2]) >> 0x1f);
                      uVar14 = ~((int)(auStack_d0[2] - auStack_d0[0]) >> 0x1f);
                      uVar40 = ~((int)(auStack_d0[0] - auStack_d0[1]) >> 0x1f);
                      uVar37 = uVar36 & uVar41 & auStack_d0[2] | ~uVar11 & uVar14 & auStack_d0[0] |
                               uVar40 & uVar39 & auStack_d0[1];
                      uVar36 = uVar40 & uVar41 & auStack_d0[0] | ~uVar11 & uVar36 & auStack_d0[1] |
                               uVar14 & uVar39 & auStack_d0[2];
                      uVar14 = ~((int)(uVar36 - auStack_d0[3] ^ auStack_d0[3] - uVar37) >> 0x1f);
                      uVar40 = ~((int)(uVar37 - uVar36 ^ auStack_d0[3] - uVar37) >> 0x1f);
                      uVar11 = (uVar36 & ~(uVar14 | uVar40) | uVar37 & uVar40 |
                               uVar14 & auStack_d0[3]) +
                               ((uVar41 ^ uVar26) & auStack_d0[2] |
                                (uVar39 ^ uVar11) & auStack_d0[1] |
                               (uVar41 ^ uVar11) & auStack_d0[0]);
                      uVar26 = ((int)uVar25 >> 1) + (uint)((int)uVar25 < 0 && (uVar25 & 1) != 0);
                      uVar11 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
                    }
                  }
                }
              }
              else {
                uVar24 = lVar21 - 1;
                iVar9 = 0;
                if ((uVar24 & 0xffffffff) < 4) {
                  bVar1 = (int)uVar24 != 0;
                  if (lVar21 == 2 && bVar1) {
                    uVar26 = auStack_c0[1] + auStack_c0[0];
                    uVar11 = auStack_b0[1] + auStack_b0[0];
                    uVar26 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0);
                    uVar11 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
                  }
                  else if (uVar24 == 2 && bVar1) {
                    uVar26 = auStack_c0[1] - auStack_c0[2] ^ auStack_c0[1] - auStack_c0[0];
                    uVar11 = auStack_c0[2] - auStack_c0[0] ^ auStack_c0[1] - auStack_c0[0];
                    uVar25 = auStack_b0[1] - auStack_b0[2] ^ auStack_b0[1] - auStack_b0[0];
                    uVar39 = auStack_b0[2] - auStack_b0[0] ^ auStack_b0[1] - auStack_b0[0];
                    uVar26 = auStack_c0[2] & ~((int)(uVar26 | uVar11) >> 0x1f) |
                             (int)uVar26 >> 0x1f & auStack_c0[1] |
                             (int)uVar11 >> 0x1f & auStack_c0[0];
                    uVar11 = auStack_b0[2] & ~((int)(uVar25 | uVar39) >> 0x1f) |
                             (int)uVar25 >> 0x1f & auStack_b0[1] |
                             (int)uVar39 >> 0x1f & auStack_b0[0];
                  }
                  else {
                    uVar26 = auStack_c0[0];
                    uVar11 = auStack_b0[0];
                    if (bVar1) {
                      uVar11 = (int)(auStack_c0[1] - auStack_c0[0]) >> 0x1f;
                      uVar26 = (int)(auStack_c0[2] - auStack_c0[1]) >> 0x1f;
                      uVar25 = ~((int)(auStack_c0[2] - auStack_c0[0]) >> 0x1f);
                      uVar39 = ~uVar26;
                      uVar37 = ~((int)(auStack_c0[0] - auStack_c0[1]) >> 0x1f);
                      uVar14 = ~((int)(auStack_c0[1] - auStack_c0[2]) >> 0x1f);
                      uVar40 = ~((int)(auStack_c0[0] - auStack_c0[2]) >> 0x1f);
                      uVar36 = ~uVar11 & uVar25 & auStack_c0[0] | uVar37 & uVar39 & auStack_c0[1] |
                               uVar14 & uVar40 & auStack_c0[2];
                      uVar37 = uVar14 & ~uVar11 & auStack_c0[1] | uVar25 & uVar39 & auStack_c0[2] |
                               uVar37 & uVar40 & auStack_c0[0];
                      uVar14 = ~((int)(uVar37 - auStack_c0[3] ^ auStack_c0[3] - uVar36) >> 0x1f);
                      uVar25 = ~((int)(uVar36 - uVar37 ^ auStack_c0[3] - uVar36) >> 0x1f);
                      uVar25 = (uVar37 & ~(uVar14 | uVar25) | uVar36 & uVar25 |
                               uVar14 & auStack_c0[3]) +
                               ((uVar40 ^ uVar26) & auStack_c0[2] |
                                (uVar39 ^ uVar11) & auStack_c0[1] |
                               (uVar40 ^ uVar11) & auStack_c0[0]);
                      uVar11 = (int)(auStack_b0[1] - auStack_b0[0]) >> 0x1f;
                      uVar26 = (int)(auStack_b0[2] - auStack_b0[1]) >> 0x1f;
                      uVar39 = ~uVar26;
                      uVar41 = ~((int)(auStack_b0[0] - auStack_b0[2]) >> 0x1f);
                      uVar14 = ~((int)(auStack_b0[2] - auStack_b0[0]) >> 0x1f);
                      uVar40 = ~((int)(auStack_b0[0] - auStack_b0[1]) >> 0x1f);
                      uVar36 = ~((int)(auStack_b0[1] - auStack_b0[2]) >> 0x1f);
                      uVar37 = ~uVar11 & uVar14 & auStack_b0[0] | uVar40 & uVar39 & auStack_b0[1] |
                               uVar36 & uVar41 & auStack_b0[2];
                      uVar14 = ~uVar11 & uVar36 & auStack_b0[1] | uVar14 & uVar39 & auStack_b0[2] |
                               uVar40 & uVar41 & auStack_b0[0];
                      uVar40 = ~((int)(uVar14 - auStack_b0[3] ^ auStack_b0[3] - uVar37) >> 0x1f);
                      uVar36 = ~((int)(uVar37 - uVar14 ^ auStack_b0[3] - uVar37) >> 0x1f);
                      uVar11 = (uVar14 & ~(uVar40 | uVar36) | uVar40 & auStack_b0[3] |
                               uVar37 & uVar36) +
                               ((uVar41 ^ uVar26) & auStack_b0[2] |
                                (uVar39 ^ uVar11) & auStack_b0[1] |
                               (uVar41 ^ uVar11) & auStack_b0[0]);
                      uVar26 = ((int)uVar25 >> 1) + (uint)((int)uVar25 < 0 && (uVar25 & 1) != 0);
                      uVar11 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
                    }
                  }
                }
              }
              uVar26 = (int)(((int)((uVar26 & 3) + 1) >> 2) + uVar26) >> 1;
              uVar29 = (ulonglong)(int)uVar26;
              uVar11 = (int)(((int)((uVar11 & 3) + 1) >> 2) + uVar11) >> 1;
              if (*(char *)(param_2 + 0x1f) != '\0') {
                if ((uVar26 & 1) != 0) {
                  if ((int)uVar26 < 1) {
                    uVar29 = uVar29 + 1;
                  }
                  else {
                    uVar29 = uVar29 - 1;
                  }
                }
                if ((uVar11 & 1) != 0) {
                  if ((int)uVar11 < 1) {
                    uVar11 = uVar11 + 1;
                  }
                  else {
                    uVar11 = uVar11 - 1;
                  }
                }
              }
              if (iVar9 != 0) {
                uVar11 = (*(int *)(param_2 + 0x558) * 4 + uVar11) - 2;
              }
              sVar27 = (short)uVar29;
              iVar35 = uVar11 * 2 + iVar9;
              uVar11 = iVar35 >> 1;
              uVar15 = ((ulonglong)uVar11 & 0xffff) << 0x10 | uVar29 & 0xffff;
              uVar26 = (uint)uVar15;
              uVar24 = (((ulonglong)param_5 & 0xffff) << 0x10 | uVar28 & 0xffffffff) & 0x7ffffff;
              *(uint *)(*(int *)(param_2 + 0x160) + param_3[1] * 4) =
                   iVar35 * 0x10000 | (uint)(uVar29 & 0xffff);
              if (((uVar24 * 0x20 + (uVar29 & 0x8000) * -2 + uVar15 + 0x180014 |
                   ((ulonglong)*(uint *)(param_2 + 0x13c) + uVar24 * -0x20) - uVar15) & 0x80008000)
                  != 0) {
                iVar35 = (int)uVar26 >> 0x10;
                uVar25 = (uint)sVar27;
                lVar21 = (longlong)((int)sVar27 >> 2) + (uVar28 & 0x1fffffff) * 8;
                iVar10 = (uint)*(ushort *)(param_2 + 0x34) * 4 + 1;
                iVar17 = ((int)uVar26 >> 0x12) + param_5 * 8;
                if ((int)lVar21 < -8) {
                  uVar25 = (int)sVar27 - (int)((lVar21 + 8U & 0xffffffff) << 2);
                }
                else if ((int)((uint)*(ushort *)(param_2 + 0x32) << 2) < (int)lVar21) {
                  uVar25 = (int)(((ulonglong)*(ushort *)(param_2 + 0x32) * 4 - lVar21 & 0xffffffff)
                                << 2) + (int)sVar27;
                }
                if (iVar17 < -9) {
                  iVar35 = iVar35 + (iVar17 + 9U & 0x3fffffff) * -4;
                }
                else if (iVar10 < iVar17) {
                  iVar35 = (iVar10 - iVar17) * 4 + iVar35;
                }
                uVar26 = iVar35 << 0x10 | uVar25 & 0xffff;
              }
              uVar24 = (ulonglong)*(ushort *)(param_2 + 0x5c);
              sVar27 = (short)uVar26;
              if (iVar9 == 1) {
                uVar25 = *(uint *)(param_2 + 0x1f8);
              }
              else {
                uVar25 = *(uint *)(param_2 + 0x1e0);
              }
              if ((ulonglong)uVar25 == 0) {
                return 1;
              }
              lVar21 = (longlong)((int)uVar26 >> 0x12) *
                       (longlong)(int)(uint)*(ushort *)(param_2 + 0x5c) +
                       (longlong)((int)sVar27 >> 2) + (ulonglong)uVar25 +
                       (ulonglong)(uint)param_3[3];
              dataCacheBlockTouch(lVar21 + 0x80);
              dataCacheBlockTouch(uVar24 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar24 + 0x40) * 2 + lVar21);
              dataCacheBlockTouch(uVar24 * 3 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar24 + 0x20) * 4 + lVar21);
              dataCacheBlockTouch(uVar24 * 5 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar24 * 6 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar24 * 7 + 0x80 + lVar21);
              (**(code **)(((((int)sVar27 & 3U) + 0x38) * 4 + ((int)uVar26 >> 0x10 & 3U)) * 4 +
                          param_2))
                        (lVar21,uVar24,
                         (ulonglong)*(uint *)(param_2 + 0x240) + (ulonglong)(uint)param_3[3],param_2
                         ,0);
              uVar24 = (ulonglong)*(ushort *)(param_2 + 0x5c);
              if (iVar9 == 1) {
                uVar25 = *(uint *)(param_2 + 0x1fc);
              }
              else {
                uVar25 = *(uint *)(param_2 + 0x1e4);
              }
              if ((ulonglong)uVar25 == 0) {
                return 1;
              }
              lVar21 = (longlong)((int)uVar26 >> 0x12) *
                       (longlong)(int)(uint)*(ushort *)(param_2 + 0x5c) +
                       (longlong)((int)sVar27 >> 2) + (ulonglong)uVar25 +
                       (ulonglong)(uint)param_3[3];
              dataCacheBlockTouch(lVar21 + 0x80);
              dataCacheBlockTouch(uVar24 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar24 + 0x40) * 2 + lVar21);
              dataCacheBlockTouch(uVar24 * 3 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar24 + 0x20) * 4 + lVar21);
              dataCacheBlockTouch(uVar24 * 5 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar24 * 6 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar24 * 7 + 0x80 + lVar21);
              (**(code **)(((((int)sVar27 & 3U) + 0x38) * 4 + ((int)uVar26 >> 0x10 & 3U)) * 4 +
                          param_2))
                        (lVar21,uVar24,
                         (ulonglong)*(uint *)(param_2 + 0x244) + (ulonglong)(uint)param_3[3],param_2
                         ,0);
              uVar24 = (ulonglong)uVar33;
            }
            else {
              uVar25 = (uint)*psVar30;
              uVar26 = (int)psVar30[1] << iVar32;
              bVar1 = (uVar25 & 1) == 0;
              if (bVar1) {
                uVar15 = (ulonglong)(uint)((int)(uVar25 << iVar32) >> 1) & 3 |
                         (ulonglong)(uVar25 << iVar32) & 0xfffffff8;
              }
              else {
                uVar15 = (ulonglong)(uVar25 << iVar32) - (ulonglong)uStack_10c;
                uVar15 = (longlong)((int)((uint)uVar15 & 6 | 8) >> 1) | uVar15 & 0xfffffffc;
              }
              bVar1 = !bVar1;
              uVar38 = (ulonglong)uVar26 & 0xffffffff0000ffff;
              uVar20 = (uVar15 & 0xffff) << 0x10 | uVar38;
              uVar25 = (uint)uVar20;
              uVar23 = (((ulonglong)param_5 & 0x7fff) << 0x11 | uVar28 & 0xffffffff) & 0x3ffffff;
              if (((uVar20 + ((ulonglong)uVar26 & 0x8000) * -2 + uVar23 * 0x40 + 0x800038 |
                   (*(uint *)(param_2 + 300) - uVar20) + uVar23 * -0x40) & 0x80008000) != 0) {
                uVar39 = (int)uVar25 >> 0x10;
                sVar27 = (short)uVar38;
                uVar14 = (uint)sVar27;
                bVar8 = false;
                if (*(int *)(param_2 + 0x558) == 0) {
                  iVar9 = (uint)*(ushort *)(param_2 + 0x34) * 0x10;
                  if ((uVar39 & 4) == 0) {
LAB_830fe808:
                    iVar9 = iVar9 + 2;
                    iVar35 = -0x24;
                  }
                  else {
                    iVar35 = -0x23;
                    iVar9 = iVar9 + 3;
                  }
                }
                else {
                  iVar9 = (uint)*(ushort *)(param_2 + 0x34) * 0x10;
                  if ((uVar39 & 4) == 0) goto LAB_830fe808;
                  iVar35 = -0x25;
                  iVar9 = iVar9 + 1;
                }
                lVar21 = (longlong)((int)sVar27 >> 2) + (uVar28 & 0xfffffff) * 0x10;
                iVar10 = ((int)uVar25 >> 0x12) + param_5 * 0x20;
                if ((int)lVar21 < -0x11) {
                  lVar22 = -0x11;
LAB_830fe844:
                  bVar8 = true;
                  lVar21 = lVar22;
                }
                else {
                  lVar22 = (ulonglong)*(ushort *)(param_2 + 0x32) << 3;
                  if ((int)((uint)*(ushort *)(param_2 + 0x32) << 3) < (int)lVar21)
                  goto LAB_830fe844;
                }
                if (((iVar10 < iVar35) || (iVar35 = iVar9, iVar9 < iVar10)) ||
                   (iVar35 = iVar10, bVar8)) {
                  uVar14 = (int)((lVar21 + (uVar28 & 0xfffffff) * -0x10 & 0xffffffff) << 2) +
                           ((int)sVar27 & 3U);
                  uVar39 = (iVar35 + (param_5 & 0x7ffffff) * -0x20) * 4 + (uVar39 & 3);
                }
                uVar25 = uVar39 << 0x10 | uVar14 & 0xffff;
              }
              uVar38 = (ulonglong)*(ushort *)(param_2 + 0x5a);
              if (bVar1) {
                uVar39 = *(uint *)(param_2 + 0x1e8);
              }
              else {
                uVar39 = *(uint *)(param_2 + 0x1d0);
              }
              if ((ulonglong)uVar39 == 0) {
                return 1;
              }
              lVar21 = (ulonglong)*(uint *)(param_2 + 0x230) + (ulonglong)(uint)param_3[2];
              lVar22 = (longlong)((int)(uint)*(ushort *)(param_2 + 0x5a) >> 1) *
                       (longlong)((int)uVar25 >> 0x12) + (longlong)((int)(short)uVar25 >> 2) +
                       (ulonglong)(uint)param_3[2] + (ulonglong)uVar39;
              dataCacheBlockTouch(lVar22 + 0x80);
              dataCacheBlockTouch(uVar38 + 0x80 + lVar22);
              dataCacheBlockTouch((uVar38 + 0x40) * 2 + lVar22);
              dataCacheBlockTouch(uVar38 * 3 + 0x80 + lVar22);
              dataCacheBlockTouch((uVar38 + 0x20) * 4 + lVar22);
              dataCacheBlockTouch(uVar38 * 5 + 0x80 + lVar22);
              dataCacheBlockTouch(uVar38 * 6 + 0x80 + lVar22);
              dataCacheBlockTouch(uVar38 * 7 + 0x80 + lVar22);
              uVar39 = (int)(short)uVar25 & 3;
              uVar25 = (int)uVar25 >> 0x10 & 3;
              if (*(char *)(param_2 + 0x30) == '\x01') {
                iVar9 = (**(code **)(((uVar39 + 0x34) * 4 + uVar25) * 4 + param_2))();
                if (iVar9 != 0) {
                  fn_82CC4B78(lVar22,uVar38,lVar21,uVar39,uVar25,
                                    *(undefined1 *)(param_2 + 0x23),1);
                }
              }
              else {
                (**(code **)(((uVar39 + 0x38) * 4 + uVar25) * 4 + param_2))
                          (lVar22,uVar38,lVar21,param_2,1);
              }
              uVar25 = (uint)uVar15;
              if (bVar1) {
                uVar25 = (((int)(*(int *)(param_2 + 0x558) * 8 + uVar25 + -4) >> 3) << 2 |
                         uVar25 & 3) + *(int *)(param_2 + 0x558) * -4 + 2;
              }
              else {
                uVar25 = ((int)uVar25 >> 3) << 2 | uVar25 & 3;
              }
              uVar26 = (int)(((int)((uVar26 & 3) + 1) >> 2) + uVar26) >> 1;
              uVar15 = (ulonglong)(int)uVar26;
              uVar25 = (int)(((int)((uVar25 & 3) + 1) >> 2) + uVar25) >> 1;
              uVar38 = (ulonglong)(int)uVar25;
              if (*(char *)(param_2 + 0x1f) != '\0') {
                if ((uVar26 & 1) != 0) {
                  if ((int)uVar26 < 1) {
                    uVar15 = uVar15 + 1;
                  }
                  else {
                    uVar15 = uVar15 - 1;
                  }
                }
                if ((uVar25 & 1) != 0) {
                  if ((int)uVar25 < 1) {
                    uVar38 = uVar38 + 1;
                  }
                  else {
                    uVar38 = uVar38 - 1;
                  }
                }
              }
              if (bVar1) {
                uVar38 = (((ulonglong)*(uint *)(param_2 + 0x558) & 0x3fffffff) * 4 + uVar38) - 2;
              }
              sVar27 = (short)uVar15;
              lVar21 = (uVar38 & 0x7fffffff) * 2 + (ulonglong)bVar1;
              uVar23 = lVar21 * 0x8000 & 0xffff0000U | uVar15 & 0xffff;
              uVar26 = (uint)uVar23;
              uVar38 = (((ulonglong)param_5 & 0xffff) << 0x10 | uVar28 & 0xffffffff) & 0x7ffffff;
              *(uint *)(*(int *)(param_2 + 0x160) + param_3[1] * 4) =
                   (int)lVar21 * 0x10000 | (uint)(uVar15 & 0xffff);
              if (((uVar38 * 0x20 + (uVar15 & 0x8000) * -2 + uVar23 + 0x180014 |
                   ((ulonglong)*(uint *)(param_2 + 0x13c) + uVar38 * -0x20) - uVar23) & 0x80008000)
                  != 0) {
                iVar9 = (int)uVar26 >> 0x10;
                uVar25 = (uint)sVar27;
                lVar21 = (longlong)((int)sVar27 >> 2) + (uVar28 & 0x1fffffff) * 8;
                iVar35 = (uint)*(ushort *)(param_2 + 0x34) * 4 + 1;
                iVar10 = ((int)uVar26 >> 0x12) + param_5 * 8;
                if ((int)lVar21 < -8) {
                  uVar25 = (int)sVar27 - (int)((lVar21 + 8U & 0xffffffff) << 2);
                }
                else if ((int)((uint)*(ushort *)(param_2 + 0x32) << 2) < (int)lVar21) {
                  uVar25 = (int)(((ulonglong)*(ushort *)(param_2 + 0x32) * 4 - lVar21 & 0xffffffff)
                                << 2) + (int)sVar27;
                }
                if (iVar10 < -9) {
                  iVar9 = iVar9 + (iVar10 + 9U & 0x3fffffff) * -4;
                }
                else if (iVar35 < iVar10) {
                  iVar9 = (iVar35 - iVar10) * 4 + iVar9;
                }
                uVar26 = iVar9 << 0x10 | uVar25 & 0xffff;
              }
              uVar15 = (ulonglong)*(ushort *)(param_2 + 0x5c);
              sVar27 = (short)uVar26;
              if (bVar1) {
                uVar25 = *(uint *)(param_2 + 0x1f8);
              }
              else {
                uVar25 = *(uint *)(param_2 + 0x1e0);
              }
              if ((ulonglong)uVar25 == 0) {
                return 1;
              }
              lVar21 = (longlong)((int)uVar26 >> 0x12) *
                       (longlong)(int)(uint)*(ushort *)(param_2 + 0x5c) +
                       (longlong)((int)sVar27 >> 2) + (ulonglong)(uint)param_3[3] +
                       (ulonglong)uVar25;
              dataCacheBlockTouch(lVar21 + 0x80);
              dataCacheBlockTouch(uVar15 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar15 + 0x40) * 2 + lVar21);
              dataCacheBlockTouch(uVar15 * 3 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar15 + 0x20) * 4 + lVar21);
              dataCacheBlockTouch(uVar15 * 5 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar15 * 7 + 0x80 + lVar21);
              (**(code **)(((((int)sVar27 & 3U) + 0x38) * 4 + ((int)uVar26 >> 0x10 & 3U)) * 4 +
                          param_2))
                        (lVar21,uVar15,
                         (ulonglong)*(uint *)(param_2 + 0x240) + (ulonglong)(uint)param_3[3],param_2
                         ,0);
              uVar15 = (ulonglong)*(ushort *)(param_2 + 0x5c);
              if (bVar1) {
                uVar25 = *(uint *)(param_2 + 0x1fc);
              }
              else {
                uVar25 = *(uint *)(param_2 + 0x1e4);
              }
              if ((ulonglong)uVar25 == 0) {
                return 1;
              }
              lVar21 = (longlong)((int)uVar26 >> 0x12) *
                       (longlong)(int)(uint)*(ushort *)(param_2 + 0x5c) +
                       (longlong)((int)sVar27 >> 2) + (ulonglong)(uint)param_3[3] +
                       (ulonglong)uVar25;
              dataCacheBlockTouch(lVar21 + 0x80);
              dataCacheBlockTouch(uVar15 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar15 + 0x40) * 2 + lVar21);
              dataCacheBlockTouch(uVar15 * 3 + 0x80 + lVar21);
              dataCacheBlockTouch((uVar15 + 0x20) * 4 + lVar21);
              dataCacheBlockTouch(uVar15 * 5 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar21);
              dataCacheBlockTouch(uVar15 * 7 + 0x80 + lVar21);
              (**(code **)(((((int)sVar27 & 3U) + 0x38) * 4 + ((int)uVar26 >> 0x10 & 3U)) * 4 +
                          param_2))
                        (lVar21,uVar15,
                         (ulonglong)*(uint *)(param_2 + 0x244) + (ulonglong)(uint)param_3[3],param_2
                         ,0);
            }
          }
          uVar28 = uVar28 + 1;
          *param_3 = *param_3 + 2;
          param_3[1] = param_3[1] + 1;
          param_3[2] = param_3[2] + 0x10;
          param_3[3] = param_3[3] + 8;
          *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
          param_6 = uStack0000003c;
        } while ((uVar28 & 0xffffffff) < uVar24);
      }
      iVar12 = (uint)uVar3 * 8 + iVar12;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      param_5 = param_5 + 1;
      iVar13 = (uint)uVar2 * 0x10 + iVar13;
      *param_3 = (uint)*(ushort *)(param_2 + 0x32) + *param_3;
    } while (param_5 < param_6);
  }
  return 0;
}


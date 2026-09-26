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
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82CDB448();
extern int fn_82CDB7E0();
extern int fn_82CDBCA0();
extern int fn_82CDC788();
extern int fn_82CDDCA8();
extern int fn_82CDE4C8();
extern int fn_82CDED68();
extern unsigned int iStack_b4;
extern unsigned int uStack_c0;
extern unsigned int *uStack_d8;


void fn_82CC7BB0(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar14;
  ulonglong uVar13;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar19;
  uint uVar23;
  byte *pbVar26;
  uint uVar27;
  longlong lVar24;
  longlong lVar25;
  byte *pbVar28;
  byte *pbVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  byte *pbVar36;
  uint uVar38;
  ulonglong uVar37;
  byte *pbVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  int iVar45;
  ulonglong uVar46;
  byte *pbVar47;
  undefined1 *puVar48;
  uint uStack_d8;
  uint uStack_c0;
  int iStack_b4;
  
  uVar35 = *(uint *)(param_1 + 0x24);
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar23 = *(uint *)(param_1 + 0x1c);
  iVar14 = ((int)uVar35 >> 1) + (uint)((int)uVar35 < 0 && (uVar35 & 1) != 0);
  uVar41 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
  uVar44 = (ulonglong)uVar4;
  iVar18 = (int)param_2;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  iVar10 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uVar43 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  iVar32 = (int)uVar43;
  iVar20 = ((int)uVar41 >> 1) + (uint)((int)uVar41 < 0 && (uVar41 & 1) != 0);
  uVar40 = (iVar32 + -1) * iVar14;
  uVar38 = (uVar5 - 1) * uVar35;
  uVar6 = (((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0) + -1) * uVar3;
  uVar27 = (uVar4 - 1) * uVar3;
  pbVar39 = (byte *)(uVar3 * iVar18 + *(int *)(param_1 + 0x40));
  iVar31 = (int)param_3;
  uVar23 = (int)(((ulonglong)uVar5 & 0xffffff) << 8) / (int)uVar35;
  uVar33 = (ulonglong)(int)uVar23;
  uVar41 = (int)(((ulonglong)uVar4 & 0x1ffffff) << 7) / (int)uVar3;
  uVar15 = (ulonglong)uVar3 &
           ~((((ulonglong)uVar4 & 0xffffff) << 8 | ((ulonglong)uVar4 & 0x1ffffff) >> 0x18) - 1);
  trapWord(6,(ulonglong)uVar3,0);
  uVar8 = uVar43 & ~((((ulonglong)uVar40 & 0x7fffffff) << 1 | (ulonglong)(uVar40 >> 0x1f)) - 1);
  trapWord(6,(ulonglong)uVar35,0);
  trapWord(6,uVar43,0);
  uVar42 = (iVar31 >> 1) + (uint)(iVar31 < 0 && (param_3 & 1) != 0);
  iVar1 = (int)uVar6 / (int)uVar4;
  iStack_b4 = 0;
  pbVar26 = pbVar39 + uVar3;
  uVar13 = uVar44 & ~((((ulonglong)uVar27 & 0x7fffffff) << 1 | (ulonglong)(uVar27 >> 0x1f)) - 1);
  uVar43 = uVar44 & ~((((ulonglong)uVar6 & 0x7fffffff) << 1 | (ulonglong)(uVar6 >> 0x1f)) - 1);
  trapWord(6,(ulonglong)uVar5,0);
  trapWord(6,uVar44,0);
  trapWord(5,(ulonglong)uVar35 &
             ~((((ulonglong)uVar5 & 0x7fffff) << 9 | ((ulonglong)uVar5 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(5,uVar15,0xffff);
  trapWord(5,(ulonglong)uVar5 &
             ~((((ulonglong)uVar38 & 0x7fffffff) << 1 | (ulonglong)(uVar38 >> 0x1f)) - 1),0xffff);
  iVar45 = (int)uVar27 / (int)uVar4;
  trapWord(6,uVar44,0);
  trapWord(5,uVar13,0xffff);
  trapWord(5,uVar43,0xffff);
  trapWord(5,uVar8,0xffff);
  lVar34 = (longlong)(int)uVar4 * (longlong)iVar18 + (ulonglong)*(uint *)(param_1 + 0x34);
  if (uVar23 == uVar41 << 1) {
    if (uVar23 == 0x40) {
      uVar35 = 0x40;
    }
    else if (uVar23 == 0x80) {
      uVar35 = 0x80;
    }
    else {
      uVar15 = uVar33 - 0xc1;
      uVar43 = -(ulonglong)(uVar33 == 0xc0);
      uVar35 = (uint)uVar43 & 0xc0;
    }
  }
  else {
    uVar35 = 0;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar15 = (longlong)(int)uVar3 * (longlong)iVar18;
    uVar46 = uVar15 + *(uint *)(param_1 + 0x38);
  }
  else {
    uVar46 = (ulonglong)*(uint *)(param_1 + 0x50);
    uVar3 = *(uint *)(param_1 + 0x5c);
  }
  uVar37 = (ulonglong)uVar3;
  uVar6 = fn_82C53960(*(undefined4 *)(param_1 + 0x20),0,uVar8,uVar41 << 1,uVar43,uVar13,uVar15);
  iVar7 = fn_82C53960(*(int *)(param_1 + 0x20) << 2,0);
  uVar41 = 0xffffffffU - ((int)uVar41 >> 0x1f) & uVar41;
  if ((int)uVar23 < 1) {
    return;
  }
  uVar43 = (longlong)((int)uVar38 / (int)uVar5);
  if (iVar31 < (int)uVar38 / (int)uVar5) {
    uVar43 = param_3;
  }
  uStack_d8 = (int)uVar40 / iVar32;
  if ((int)uVar42 < (int)uVar40 / iVar32) {
    uStack_d8 = uVar42;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar27 = uVar23 - 0x100;
    lVar24 = (longlong)((int)uVar27 >> 1) + (ulonglong)((int)uVar27 < 0 && (uVar27 & 1) != 0);
  }
  lVar24 = (longlong)(int)uVar23 * (longlong)iVar18 + lVar24;
  iVar21 = 0;
  iVar22 = 0;
  if (0 < iVar45) {
    piVar12 = (int *)(iVar7 + -4);
    iVar17 = iVar45;
    do {
      iVar9 = iVar21 >> 7;
      *(byte *)(iVar22 + uVar6) = (byte)iVar21 & 0x7f;
      iVar21 = iVar21 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar9;
      iVar22 = iVar22 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  iVar17 = *(int *)(param_1 + 0x20);
  if (iVar22 < iVar17) {
    piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
    do {
      iVar22 = iVar22 + 1;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar21 >> 7;
      iVar21 = iVar21 + uVar41;
      iVar17 = *(int *)(param_1 + 0x20);
    } while (iVar22 < iVar17);
  }
  uVar8 = uVar46;
  if ((int)lVar24 < 0) {
    uVar8 = uVar33 - lVar24;
    iStack_b4 = (int)uVar8 / (int)uVar23;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar21 = (int)lVar34;
    iVar22 = 0;
    if (0 < iVar45) {
      piVar12 = (int *)(iVar7 + -4);
      uVar8 = uVar46;
      iVar17 = iVar45;
      do {
        piVar12 = piVar12 + 1;
        bVar2 = ((undefined1 *)uVar8)[uVar6 - (int)uVar46];
        *(undefined1 *)uVar8 =
             (char)((int)((uint)*(byte *)(*piVar12 + iVar21) * (0x80 - (uint)bVar2) +
                         (uint)*(byte *)(iVar21 + 1 + *piVar12) * (uint)bVar2) >> 7);
        uVar8 = uVar8 + 1;
        iVar17 = iVar17 + -1;
        iVar22 = iVar45;
      } while (iVar17 != 0);
    }
    iVar17 = *(int *)(param_1 + 0x20);
    if (iVar22 < iVar17) {
      piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        *(undefined1 *)(iVar22 + (int)uVar46) = *(undefined1 *)(*piVar12 + iVar21);
        iVar22 = iVar22 + 1;
        iVar17 = *(int *)(param_1 + 0x20);
      } while (iVar22 < iVar17);
    }
    uVar8 = uVar37 + uVar46;
    if ((int)(param_2 + 1) < (int)(iStack_b4 + param_2)) {
      lVar25 = (iStack_b4 + param_2) - (param_2 + 1);
      lVar16 = uVar46 - uVar8;
      do {
        iVar21 = 0;
        uVar13 = uVar8;
        if (0 < iVar17) {
          do {
            iVar21 = iVar21 + 1;
            *(undefined1 *)uVar13 = ((undefined1 *)uVar13)[(int)lVar16];
            iVar17 = *(int *)(param_1 + 0x20);
            uVar13 = uVar13 + 1;
          } while (iVar21 < iVar17);
        }
        uVar8 = uVar37 + uVar8;
        lVar16 = lVar16 - uVar37;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    lVar24 = (longlong)iStack_b4 * (longlong)(int)uVar23 + lVar24;
  }
  iVar21 = (int)uVar43;
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0();
      lVar16 = (longlong)(int)uVar3 * (longlong)iVar21;
      lVar25 = (longlong)iVar21 * (longlong)(int)uVar23;
    }
    else {
      fn_82CDC788(lVar34,uVar8,pbVar39,iVar45,iVar17,uVar37,uVar44,uVar43);
      iVar22 = iVar21 + -2;
LAB_82cc80e0:
      lVar16 = (longlong)iVar22 * (longlong)(int)uVar3;
      lVar25 = (longlong)iVar22 * (longlong)(int)uVar23;
    }
LAB_82cc80e8:
    lVar16 = lVar16 + uVar8;
    lVar24 = lVar25 + lVar24;
  }
  else {
    if (uVar35 == 0x80) {
      if (*(int *)(param_1 + 0x28) != 0) {
        fn_82CDB7E0(lVar34);
        iVar22 = iVar21 + -1;
        goto LAB_82cc80e0;
      }
      fn_82CDB448();
      lVar16 = (longlong)(int)uVar3 * (longlong)iVar21;
      lVar25 = (longlong)iVar21 * (longlong)(int)uVar23;
      goto LAB_82cc80e8;
    }
    if (uVar35 == 0xc0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        fn_82CDE4C8(lVar34);
        iVar22 = iVar21 + -1;
        goto LAB_82cc80e0;
      }
      fn_82CDDCA8();
      lVar16 = (longlong)(int)uVar3 * (longlong)iVar21 + uVar8;
      lVar24 = (longlong)iVar21 * (longlong)(int)uVar23 + lVar24;
    }
    else {
      fn_82CDED68(lVar34);
      iVar22 = (iVar21 - iStack_b4) - iVar18;
      lVar16 = (longlong)iVar22 * (longlong)(int)uVar3 + uVar8;
      lVar24 = (longlong)iVar22 * (longlong)(int)uVar23 + lVar24;
    }
  }
  if (iVar21 < iVar31) {
    param_3 = param_3 - uVar43;
    lVar25 = (ulonglong)uVar6 - lVar16;
    uStack_c0 = (uint)param_3;
    uVar43 = 0;
    uVar8 = 0;
    pbVar47 = pbVar39;
    pbVar36 = pbVar26;
    do {
      iVar31 = (int)(uint)lVar24 >> 8;
      lVar19 = (longlong)iVar31 * (longlong)(int)uVar4;
      uVar13 = lVar19 + lVar34;
      uVar15 = lVar34 + uVar44 + lVar19;
      uVar3 = (uint)lVar24 & 0xff;
      iVar21 = (int)uVar13;
      pbVar28 = pbVar47;
      if (iVar31 < (int)(uVar5 - 1)) {
        iVar31 = (int)uVar15;
        if ((uVar13 & 0xffffffff) == (uVar8 & 0xffffffff)) {
          iVar21 = 0;
          if (0 < iVar45) {
            piVar12 = (int *)(iVar7 + -4);
            iVar21 = iVar45;
            do {
              piVar12 = piVar12 + 1;
              *pbVar28 = (byte)((int)((uint)*(byte *)(*piVar12 + iVar31) *
                                      (0x80 - (uint)pbVar28[uVar6 - (int)pbVar47]) +
                                     (uint)*(byte *)(iVar31 + 1 + *piVar12) *
                                     (uint)pbVar28[uVar6 - (int)pbVar47]) >> 7);
              pbVar28 = pbVar28 + 1;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            uVar33 = (ulonglong)uVar23;
            iVar21 = iVar45;
          }
          pbVar28 = pbVar36;
          if (iVar21 < *(int *)(param_1 + 0x20)) {
            piVar12 = (int *)(iVar21 * 4 + iVar7 + -4);
            do {
              piVar12 = piVar12 + 1;
              pbVar47[iVar21] = *(byte *)(*piVar12 + iVar31);
              iVar21 = iVar21 + 1;
            } while (iVar21 < *(int *)(param_1 + 0x20));
          }
        }
        else {
          pbVar47 = pbVar36;
          if ((uVar13 & 0xffffffff) != (uVar43 & 0xffffffff)) {
            iVar22 = 0;
            if (0 < iVar45) {
              piVar12 = (int *)(iVar7 + -4);
              pbVar47 = pbVar39;
              iVar22 = iVar45;
              do {
                piVar12 = piVar12 + 1;
                iVar17 = *piVar12;
                bVar2 = pbVar47[uVar6 - (int)pbVar39];
                *pbVar47 = (byte)((int)((uint)*(byte *)(iVar17 + iVar21) * (0x80 - (uint)bVar2) +
                                       (uint)*(byte *)(iVar21 + 1 + iVar17) * (uint)bVar2) >> 7);
                pbVar47[(int)pbVar26 - (int)pbVar39] =
                     (byte)((int)((uint)*(byte *)(iVar17 + iVar31) * (0x80 - (uint)bVar2) +
                                 (uint)*(byte *)(iVar31 + 1 + iVar17) * (uint)bVar2) >> 7);
                pbVar47 = pbVar47 + 1;
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar33 = (ulonglong)uVar23;
              param_3 = (ulonglong)uStack_c0;
              iVar22 = iVar45;
            }
            pbVar28 = pbVar39;
            pbVar47 = pbVar26;
            if (iVar22 < *(int *)(param_1 + 0x20)) {
              pbVar36 = pbVar26 + iVar22;
              piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
              do {
                piVar12 = piVar12 + 1;
                iVar17 = *piVar12;
                iVar22 = iVar22 + 1;
                pbVar39[(int)pbVar36 - (int)pbVar26] = *(byte *)(iVar17 + iVar21);
                *pbVar36 = *(byte *)(iVar17 + iVar31);
                pbVar36 = pbVar36 + 1;
              } while (iVar22 < *(int *)(param_1 + 0x20));
            }
          }
        }
        iVar31 = 0;
        pbVar36 = pbVar47;
        if (0 < *(int *)(param_1 + 0x20)) {
          pbVar29 = pbVar47;
          do {
            iVar31 = iVar31 + 1;
            pbVar29[(int)lVar16 - (int)pbVar47] =
                 (byte)((uint)pbVar29[(int)pbVar28 - (int)pbVar47] * (0x100 - uVar3) +
                        *pbVar29 * uVar3 >> 8);
            pbVar29 = pbVar29 + 1;
          } while (iVar31 < *(int *)(param_1 + 0x20));
        }
      }
      else {
        iVar31 = 0;
        if (0 < iVar45) {
          piVar12 = (int *)(iVar7 + -4);
          lVar19 = lVar16;
          iVar22 = iVar45;
          do {
            piVar12 = piVar12 + 1;
            bVar2 = ((undefined1 *)lVar19)[(int)lVar25];
            *(undefined1 *)lVar19 =
                 (char)((int)((uint)*(byte *)(*piVar12 + iVar21) * (0x80 - (uint)bVar2) +
                             (uint)*(byte *)(iVar21 + 1 + *piVar12) * (uint)bVar2) >> 7);
            lVar19 = lVar19 + 1;
            iVar22 = iVar22 + -1;
            iVar31 = iVar45;
          } while (iVar22 != 0);
        }
        uVar13 = uVar43;
        uVar15 = uVar8;
        if (iVar31 < *(int *)(param_1 + 0x20)) {
          piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
          do {
            piVar12 = piVar12 + 1;
            *(undefined1 *)(iVar31 + (int)lVar16) = *(undefined1 *)(*piVar12 + iVar21);
            iVar31 = iVar31 + 1;
          } while (iVar31 < *(int *)(param_1 + 0x20));
        }
      }
      pbVar47 = pbVar28;
      param_3 = param_3 - 1;
      uStack_c0 = (uint)param_3;
      lVar16 = uVar37 + lVar16;
      lVar25 = lVar25 - uVar37;
      lVar24 = lVar24 + uVar33;
      uVar43 = uVar13;
      uVar8 = uVar15;
    } while (param_3 != 0);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
    puVar48 = (undefined1 *)
              ((((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0)) * iVar10 +
               *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar45 = iVar10;
  }
  else {
    puVar48 = *(undefined1 **)(param_1 + 0x54);
    iVar45 = *(int *)(param_1 + 0x60);
  }
  iVar31 = *(int *)(param_1 + 0x2c);
  uVar23 = iVar31 * iVar18;
  lVar34 = (longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar5 +
           (ulonglong)*(uint *)(param_1 + 0x40);
  iVar22 = (((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0)) * iVar20 +
           uVar4 * uVar5 + *(int *)(param_1 + 0x34);
  iVar21 = (int)uVar33;
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar23 = iVar31 * iVar21 - 0x100;
    lVar24 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  }
  uVar23 = iVar31 * iVar21 * iVar18;
  iVar17 = 0;
  iVar31 = 0;
  lVar24 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0) + lVar24
  ;
  if (0 < iVar1) {
    piVar12 = (int *)(iVar7 + -4);
    iVar9 = iVar1;
    do {
      iVar11 = iVar17 >> 7;
      *(byte *)(iVar31 + uVar6) = (byte)iVar17 & 0x7f;
      iVar17 = iVar17 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar11;
      iVar31 = iVar31 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar31 < iVar10) {
    iVar9 = iVar10 - iVar31;
    piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
    do {
      iVar31 = iVar17 >> 7;
      iVar17 = iVar17 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar31;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)lVar24 < 0) {
    uVar43 = uVar33 - lVar24;
    iStack_b4 = (int)uVar43 / iVar21;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar43 & 0x7fffffff) << 1 | (uVar43 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar31 = 0;
    if (0 < iVar1) {
      piVar12 = (int *)(iVar7 + -4);
      puVar30 = puVar48;
      iVar17 = iVar1;
      do {
        piVar12 = piVar12 + 1;
        *puVar30 = (char)((int)((uint)*(byte *)(*piVar12 + iVar22) *
                                (0x80 - (uint)(byte)puVar30[uVar6 - (int)puVar48]) +
                               (uint)*(byte *)(iVar22 + 1 + *piVar12) *
                               (uint)(byte)puVar30[uVar6 - (int)puVar48]) >> 7);
        puVar30 = puVar30 + 1;
        iVar17 = iVar17 + -1;
        iVar31 = iVar1;
      } while (iVar17 != 0);
    }
    if (iVar31 < iVar10) {
      iVar17 = iVar10 - iVar31;
      piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        puVar48[iVar31] = *(undefined1 *)(*piVar12 + iVar22);
        iVar31 = iVar31 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    puVar30 = puVar48 + iVar45;
    uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
    iVar31 = ((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    iVar17 = iVar31 + 1;
    if (iVar17 < iVar31 + iStack_b4) {
      iVar31 = (int)puVar48 - (int)puVar30;
      do {
        puVar48 = puVar30;
        iVar9 = iVar10;
        if (0 < iVar10) {
          do {
            *puVar48 = puVar48[iVar31];
            iVar9 = iVar9 + -1;
            puVar48 = puVar48 + 1;
          } while (iVar9 != 0);
        }
        iVar17 = iVar17 + 1;
        puVar30 = puVar30 + iVar45;
        uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
        iVar31 = iVar31 - iVar45;
      } while (iVar17 < (int)(((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
                             iStack_b4));
    }
    puVar48 = puVar30;
    lVar24 = (longlong)iStack_b4 * (longlong)iVar21 + lVar24;
  }
  uVar43 = (ulonglong)uStack_d8;
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0(iVar22,puVar48);
      lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
      iVar31 = iVar45 * uStack_d8;
    }
    else {
      fn_82CDC788(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 2;
LAB_82cc8824:
      lVar34 = (longlong)iVar31 * (longlong)iVar21;
      iVar31 = iVar31 * iVar45;
    }
  }
  else if (uVar35 == 0x80) {
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82CDB7E0(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 1;
      goto LAB_82cc8824;
    }
    fn_82CDB448(iVar22,puVar48);
    lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
    iVar31 = iVar45 * uStack_d8;
  }
  else if (uVar35 == 0xc0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82CDE4C8(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 1;
      goto LAB_82cc8824;
    }
    fn_82CDDCA8(iVar22,puVar48);
    lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
    iVar31 = iVar45 * uStack_d8;
  }
  else {
    fn_82CDED68(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
    iVar17 = (uStack_d8 - iStack_b4) - iVar18;
    iVar31 = iVar17 * iVar45;
    lVar34 = (longlong)iVar17 * (longlong)iVar21;
  }
  puVar48 = puVar48 + iVar31;
  lVar34 = lVar34 + lVar24;
  if (((int)(*(int *)(param_1 + 0x2c) * uStack_d8) < (int)(*(int *)(param_1 + 0x2c) * uVar42)) &&
     ((int)uStack_d8 < (int)uVar42)) {
    lVar24 = uVar42 - uVar43;
    iVar31 = uVar6 - (int)puVar48;
    do {
      iVar9 = ((int)lVar34 >> 8) * iVar20 + iVar22;
      iVar17 = 0;
      if (0 < iVar1) {
        piVar12 = (int *)(iVar7 + -4);
        puVar30 = puVar48;
        iVar11 = iVar1;
        do {
          piVar12 = piVar12 + 1;
          *puVar30 = (char)((int)((uint)*(byte *)(*piVar12 + iVar9) *
                                  (0x80 - (uint)(byte)puVar30[iVar31]) +
                                 (uint)*(byte *)(iVar9 + 1 + *piVar12) * (uint)(byte)puVar30[iVar31]
                                 ) >> 7);
          puVar30 = puVar30 + 1;
          iVar11 = iVar11 + -1;
          iVar17 = iVar1;
        } while (iVar11 != 0);
      }
      if (iVar17 < iVar10) {
        iVar11 = iVar10 - iVar17;
        piVar12 = (int *)(iVar17 * 4 + iVar7 + -4);
        do {
          piVar12 = piVar12 + 1;
          puVar48[iVar17] = *(undefined1 *)(*piVar12 + iVar9);
          iVar17 = iVar17 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar48 = puVar48 + iVar45;
      iVar31 = iVar31 - iVar45;
      lVar34 = lVar34 + uVar33;
    } while (lVar24 != 0);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
    puVar48 = (undefined1 *)
              ((((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
               *(int *)(param_1 + 0x2c) * iVar14) * iVar10 +
               *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar45 = iVar10;
  }
  else {
    puVar48 = *(undefined1 **)(param_1 + 0x58);
    iVar45 = *(int *)(param_1 + 100);
  }
  uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
  iVar32 = *(int *)(param_1 + 0x2c) * iVar32;
  lVar34 = (longlong)iVar32 * (longlong)iVar10 +
           (longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar5 +
           (ulonglong)*(uint *)(param_1 + 0x40);
  iVar32 = (((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0) + iVar32) * iVar20 +
           uVar4 * uVar5 + *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar23 = iVar21 * *(int *)(param_1 + 0x2c) - 0x100;
    lVar24 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  }
  uVar23 = iVar21 * iVar18;
  lVar24 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0) + lVar24
  ;
  if (lVar24 < 0) {
    uVar8 = uVar33 - lVar24;
    iStack_b4 = (int)uVar8 / iVar21;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar14 = 0;
    if (0 < iVar1) {
      piVar12 = (int *)(iVar7 + -4);
      puVar30 = puVar48;
      iVar31 = iVar1;
      do {
        piVar12 = piVar12 + 1;
        *puVar30 = (char)((int)((uint)*(byte *)(*piVar12 + iVar32) *
                                (0x80 - (uint)(byte)puVar30[uVar6 - (int)puVar48]) +
                               (uint)*(byte *)(iVar32 + 1 + *piVar12) *
                               (uint)(byte)puVar30[uVar6 - (int)puVar48]) >> 7);
        puVar30 = puVar30 + 1;
        iVar31 = iVar31 + -1;
        iVar14 = iVar1;
      } while (iVar31 != 0);
    }
    if (iVar14 < iVar10) {
      iVar31 = iVar10 - iVar14;
      piVar12 = (int *)(iVar14 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        puVar48[iVar14] = *(undefined1 *)(*piVar12 + iVar32);
        iVar14 = iVar14 + 1;
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
    }
    puVar30 = puVar48 + iVar45;
    uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
    iVar14 = ((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    iVar31 = iVar14 + 1;
    if (iVar31 < iVar14 + iStack_b4) {
      iVar14 = (int)puVar48 - (int)puVar30;
      do {
        iVar22 = iVar10;
        puVar48 = puVar30;
        if (0 < iVar10) {
          do {
            *puVar48 = puVar48[iVar14];
            iVar22 = iVar22 + -1;
            puVar48 = puVar48 + 1;
          } while (iVar22 != 0);
        }
        iVar31 = iVar31 + 1;
        puVar30 = puVar30 + iVar45;
        uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
        iVar14 = iVar14 - iVar45;
      } while (iVar31 < (int)(((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
                             iStack_b4));
    }
    puVar48 = puVar30;
    lVar24 = (longlong)iStack_b4 * (longlong)iVar21 + lVar24;
  }
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0(iVar32,puVar48);
      lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDC788(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
    iVar14 = uStack_d8 - 2;
  }
  else if (uVar35 == 0x80) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDB448(iVar32,puVar48);
      lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDB7E0(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
    iVar14 = uStack_d8 - 1;
  }
  else {
    if (uVar35 != 0xc0) {
      fn_82CDED68(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
      iVar18 = (uStack_d8 - iStack_b4) - iVar18;
      iVar14 = iVar18 * iVar45;
      lVar34 = (longlong)iVar18 * (longlong)iVar21;
      goto LAB_82cc8cec;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDDCA8(iVar32);
      lVar34 = (longlong)(int)uStack_d8 * (longlong)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDE4C8(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
    iVar14 = uStack_d8 - 1;
  }
  lVar34 = (longlong)iVar14 * (longlong)iVar21;
  iVar14 = iVar14 * iVar45;
LAB_82cc8cec:
  puVar48 = puVar48 + iVar14;
  lVar34 = lVar34 + lVar24;
  if (((int)(*(int *)(param_1 + 0x2c) * uStack_d8) < (int)(*(int *)(param_1 + 0x2c) * uVar42)) &&
     ((int)uStack_d8 < (int)uVar42)) {
    lVar24 = uVar42 - uVar43;
    iVar18 = uVar6 - (int)puVar48;
    do {
      iVar31 = ((int)lVar34 >> 8) * iVar20 + iVar32;
      iVar14 = 0;
      if (0 < iVar1) {
        piVar12 = (int *)(iVar7 + -4);
        puVar30 = puVar48;
        iVar21 = iVar1;
        do {
          piVar12 = piVar12 + 1;
          *puVar30 = (char)((int)((uint)*(byte *)(*piVar12 + iVar31) *
                                  (0x80 - (uint)(byte)puVar30[iVar18]) +
                                 (uint)*(byte *)(iVar31 + 1 + *piVar12) *
                                 (uint)(byte)puVar30[iVar18]) >> 7);
          puVar30 = puVar30 + 1;
          iVar21 = iVar21 + -1;
          iVar14 = iVar1;
        } while (iVar21 != 0);
      }
      if (iVar14 < iVar10) {
        iVar21 = iVar10 - iVar14;
        piVar12 = (int *)(iVar14 * 4 + iVar7 + -4);
        do {
          piVar12 = piVar12 + 1;
          puVar48[iVar14] = *(undefined1 *)(*piVar12 + iVar31);
          iVar14 = iVar14 + 1;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar48 = puVar48 + iVar45;
      iVar18 = iVar18 - iVar45;
      lVar34 = lVar34 + uVar33;
    } while (lVar24 != 0);
  }
  fn_82C53970(uVar6);
  fn_82C53970(iVar7);
  return;
}


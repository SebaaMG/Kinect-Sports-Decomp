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
extern unsigned int *auStack_8a;
extern int fn_82A6E1C0();
extern int fn_82A6E290();
extern int fn_82F6A534();
extern int fn_82F6A580();


void fn_82C34630(void)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar26;
  ulonglong uVar25;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar35;
  ulonglong uVar34;
  int iVar36;
  float *pfVar37;
  undefined4 *puVar39;
  longlong lVar38;
  float *pfVar40;
  longlong lVar41;
  float *pfVar42;
  short sVar43;
  int iVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  undefined1 auStack_8a [138];
  
  iVar26 = fn_82F6A534();
  if (*(short *)(iVar26 + 0x244) == 2) {
    iVar44 = **(short **)(iVar26 + 0x248) * 0x6f0 + *(int *)(iVar26 + 0x140);
    uVar17 = *(ushort *)(iVar44 + 0x7a);
    iVar36 = (*(short **)(iVar26 + 0x248))[1] * 0x6f0 + *(int *)(iVar26 + 0x140);
    if ((*(int *)(iVar26 + 0x3c) < 3) || (uVar17 == *(ushort *)(iVar36 + 0x7a))) {
      uVar18 = *(ushort *)(iVar44 + 0x7c);
      dVar49 = (double)*(float *)(iVar44 + 0x48);
      dVar51 = (double)*(float *)(iVar44 + 0x4c);
      dVar48 = (double)*(float *)(iVar44 + 0x50);
      dVar47 = (double)*(float *)(iVar44 + 0x54);
      dVar50 = (double)*(float *)(iVar44 + 0x58);
      fn_82A6E290(iVar26,0,uVar17,uVar18,(longlong)(short)uVar17,&sStack_8c,auStack_8a);
      fn_82A6E1C0(iVar26,1,uVar17,uVar18,&sStack_90,&sStack_8e);
      lVar31 = (longlong)(short)uVar18;
      iVar26 = *(int *)(iVar44 + 0x38);
      lVar33 = 0;
      puVar19 = *(undefined4 **)(iVar36 + 0x38);
      uVar25 = (longlong)((int)(short)uVar18 >> 1) +
               (ulonglong)((short)uVar18 < 0 && (uVar18 & 1) != 0);
      if (0 < (longlong)uVar25) {
        lVar29 = ((uVar25 - 1 & 0xffffffff) >> 2) + 1;
        puVar39 = puVar19;
        do {
          uVar30 = lVar31 - lVar33;
          uVar16 = *(undefined4 *)((iVar26 - (int)puVar19) + (int)puVar39);
          uVar3 = *puVar39;
          lVar33 = lVar33 + 4;
          iVar27 = (int)((uVar30 & 0x3fffffff) << 2);
          uVar4 = *(undefined4 *)((int)puVar19 + iVar27 + -4);
          *(undefined4 *)((iVar26 - (int)puVar19) + (int)puVar39) =
               *(undefined4 *)(iVar27 + iVar26 + -4);
          *puVar39 = uVar4;
          puVar39 = puVar39 + 4;
          *(undefined4 *)(iVar27 + iVar26 + -4) = uVar16;
          *(undefined4 *)((int)puVar19 + iVar27 + -4) = uVar3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      lVar33 = 1;
      iVar27 = (int)uVar25;
      if (1 < iVar27) {
        puVar39 = puVar19 + 1;
        lVar29 = ((uVar25 - 2 & 0xffffffff) >> 2) + 1;
        do {
          uVar30 = lVar31 - lVar33;
          uVar16 = *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19));
          uVar3 = *puVar39;
          lVar33 = lVar33 + 4;
          iVar20 = (int)((uVar30 & 0x3fffffff) << 2);
          uVar4 = *(undefined4 *)((int)puVar19 + iVar20 + -4);
          *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19)) =
               *(undefined4 *)(iVar20 + iVar26 + -4);
          *puVar39 = uVar4;
          puVar39 = puVar39 + 4;
          *(undefined4 *)(iVar20 + iVar26 + -4) = uVar16;
          *(undefined4 *)((int)puVar19 + iVar20 + -4) = uVar3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      lVar33 = 2;
      if (2 < iVar27) {
        puVar39 = puVar19 + 2;
        lVar29 = ((uVar25 - 3 & 0xffffffff) >> 2) + 1;
        do {
          uVar30 = lVar31 - lVar33;
          uVar16 = *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19));
          uVar3 = *puVar39;
          lVar33 = lVar33 + 4;
          iVar20 = (int)((uVar30 & 0x3fffffff) << 2);
          uVar4 = *(undefined4 *)((int)puVar19 + iVar20 + -4);
          *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19)) =
               *(undefined4 *)(iVar20 + iVar26 + -4);
          *puVar39 = uVar4;
          puVar39 = puVar39 + 4;
          *(undefined4 *)(iVar20 + iVar26 + -4) = uVar16;
          *(undefined4 *)((int)puVar19 + iVar20 + -4) = uVar3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      lVar33 = 3;
      if (3 < iVar27) {
        puVar39 = puVar19 + 3;
        lVar29 = ((uVar25 - 4 & 0xffffffff) >> 2) + 1;
        do {
          uVar30 = lVar31 - lVar33;
          uVar16 = *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19));
          uVar3 = *puVar39;
          lVar33 = lVar33 + 4;
          iVar27 = (int)((uVar30 & 0x3fffffff) << 2);
          uVar4 = *(undefined4 *)((int)puVar19 + iVar27 + -4);
          *(undefined4 *)((int)puVar39 + (iVar26 - (int)puVar19)) =
               *(undefined4 *)(iVar27 + iVar26 + -4);
          *puVar39 = uVar4;
          puVar39 = puVar39 + 4;
          *(undefined4 *)(iVar27 + iVar26 + -4) = uVar16;
          *(undefined4 *)((int)puVar19 + iVar27 + -4) = uVar3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      lVar33 = (uVar25 & 0x3fffffff) * 4;
      uVar25 = (longlong)((int)(short)uVar17 >> 1) +
               (ulonglong)((short)uVar17 < 0 && (uVar17 & 1) != 0) & 0x3fffffff;
      lVar38 = (ulonglong)*(uint *)(iVar44 + 0x38) + uVar25 * -4;
      lVar41 = lVar33 + (ulonglong)*(uint *)(iVar44 + 0x38) + -4;
      lVar29 = (ulonglong)*(uint *)(iVar36 + 0x38) + uVar25 * -4;
      lVar33 = (ulonglong)*(uint *)(iVar36 + 0x38) + lVar33 + -4;
      if ((int)(short)uVar17 < (int)(short)uVar18) {
        uVar25 = (longlong)sStack_8e - (longlong)sStack_90;
        lVar31 = (sStack_8e - lVar31 & 0x3fffffffU) * 4;
        iVar26 = (int)uVar25;
        lVar41 = lVar31 + lVar41;
        lVar33 = lVar31 + lVar33;
        lVar31 = (longlong)(iVar26 >> 1) + (ulonglong)(iVar26 < 0 && (uVar25 & 1) != 0);
      }
      else {
        uVar28 = (int)sStack_8e - (int)sStack_90;
        lVar31 = ((longlong)sStack_8c - (longlong)(short)uVar17 & 0x3fffffffU) * 4;
        lVar38 = lVar31 + lVar38;
        lVar29 = lVar31 + lVar29;
        lVar31 = (longlong)((int)uVar28 >> 1) + (ulonglong)((int)uVar28 < 0 && (uVar28 & 1) != 0);
      }
      iVar36 = (int)lVar33;
      iVar26 = (int)lVar29;
      lVar32 = 0;
      iVar44 = (int)lVar31;
      if (3 < iVar44) {
        do {
          pfVar37 = (float *)lVar29;
          fVar5 = *pfVar37;
          pfVar35 = (float *)lVar33;
          fVar6 = *pfVar35;
          pfVar40 = (float *)lVar41;
          fVar7 = pfVar40[-1];
          dVar47 = -(double)(float)(dVar50 * dVar49 - dVar47);
          pfVar42 = (float *)lVar38;
          fVar8 = pfVar42[1];
          dVar48 = (double)(float)(dVar50 * dVar51 + dVar48);
          fVar9 = *pfVar42;
          fVar10 = *pfVar40;
          fVar11 = pfVar40[-2];
          fVar12 = pfVar42[2];
          lVar32 = lVar32 + 4;
          fVar13 = pfVar42[3];
          fVar14 = pfVar40[-3];
          *pfVar37 = (float)(-dVar49 * (double)fVar6 + (double)(float)((double)fVar5 * dVar51));
          fVar15 = pfVar35[-1];
          *pfVar35 = (float)((double)fVar5 * dVar49 + (double)(float)((double)fVar6 * dVar51));
          fVar5 = pfVar37[1];
          pfVar40[-1] = (float)(dVar48 * (double)fVar8 + (double)(float)(dVar47 * (double)fVar7));
          *pfVar42 = (float)(-dVar49 * (double)fVar10 + (double)(float)((double)fVar9 * dVar51));
          *pfVar40 = (float)((double)fVar9 * dVar49 + (double)(float)((double)fVar10 * dVar51));
          pfVar37[1] = (float)(-dVar48 * (double)fVar15 + (double)(float)(dVar47 * (double)fVar5));
          pfVar35[-1] = (float)(dVar48 * (double)fVar5 + (double)(float)(dVar47 * (double)fVar15));
          fVar5 = pfVar37[2];
          dVar49 = (double)(float)(dVar47 * dVar50 + dVar49);
          fVar6 = pfVar35[-2];
          dVar51 = -(double)(float)(dVar50 * dVar48 - dVar51);
          pfVar42[1] = (float)(-dVar48 * (double)fVar7 + (double)(float)(dVar47 * (double)fVar8));
          pfVar40[-2] = (float)(dVar49 * (double)fVar12 + (double)(float)(dVar51 * (double)fVar11));
          dVar48 = (double)(float)(dVar51 * dVar50 + dVar48);
          dVar47 = -(double)(float)(dVar50 * dVar49 - dVar47);
          pfVar37[2] = (float)(-dVar49 * (double)fVar6 + (double)(float)(dVar51 * (double)fVar5));
          fVar7 = pfVar35[-3];
          pfVar35[-2] = (float)(dVar49 * (double)fVar5 + (double)(float)(dVar51 * (double)fVar6));
          fVar5 = pfVar37[3];
          pfVar42[2] = (float)(-dVar49 * (double)fVar11 + (double)(float)(dVar51 * (double)fVar12));
          pfVar42[3] = (float)(-dVar48 * (double)fVar14 + (double)(float)(dVar47 * (double)fVar13));
          pfVar37[3] = (float)(-dVar48 * (double)fVar7 + (double)(float)(dVar47 * (double)fVar5));
          pfVar40[-3] = (float)(dVar48 * (double)fVar13 + (double)(float)(dVar47 * (double)fVar14));
          dVar49 = (double)(float)(dVar47 * dVar50 + dVar49);
          pfVar35[-3] = (float)(dVar48 * (double)fVar5 + (double)(float)(dVar47 * (double)fVar7));
          lVar41 = lVar41 + -0x10;
          dVar51 = -(double)(float)(dVar50 * dVar48 - dVar51);
          lVar38 = lVar38 + 0x10;
          lVar29 = lVar29 + 0x10;
          iVar26 = (int)lVar29;
          lVar33 = lVar33 + -0x10;
          iVar36 = (int)lVar33;
        } while ((int)lVar32 < iVar44 + -3);
      }
      if ((int)lVar32 < iVar44) {
        lVar31 = lVar31 - lVar32;
        iVar26 = iVar26 - (int)lVar38;
        iVar36 = iVar36 - (int)lVar41;
        do {
          pfVar40 = (float *)lVar38;
          dVar46 = (double)*(float *)(iVar26 + (int)pfVar40);
          pfVar42 = (float *)lVar41;
          dVar45 = (double)*(float *)(iVar36 + (int)pfVar42);
          fVar5 = *pfVar42;
          fVar6 = *pfVar40;
          dVar1 = dVar50 * dVar51 + dVar48;
          dVar2 = dVar50 * dVar49 - dVar47;
          *(float *)(iVar26 + (int)pfVar40) =
               (float)(-dVar49 * dVar45 + (double)(float)(dVar46 * dVar51));
          *(float *)(iVar36 + (int)pfVar42) =
               (float)(dVar46 * dVar49 + (double)(float)(dVar45 * dVar51));
          *pfVar42 = (float)((double)fVar6 * dVar49 + (double)(float)((double)fVar5 * dVar51));
          *pfVar40 = (float)(-dVar49 * (double)fVar5 + (double)(float)((double)fVar6 * dVar51));
          lVar41 = lVar41 + -4;
          lVar38 = lVar38 + 4;
          lVar31 = lVar31 + -1;
          dVar47 = dVar51;
          dVar48 = dVar49;
          dVar49 = (double)(float)dVar1;
          dVar51 = -(double)(float)dVar2;
        } while (lVar31 != 0);
        fn_82F6A580(0);
        return;
      }
      goto LAB_82c34e78;
    }
  }
  if (0 < *(short *)(iVar26 + 0x244)) {
    iVar44 = 0;
    iVar36 = 0;
    do {
      iVar27 = *(short *)(iVar36 + *(int *)(iVar26 + 0x248)) * 0x6f0 + *(int *)(iVar26 + 0x140);
      uVar17 = *(ushort *)(iVar27 + 0x7a);
      dVar51 = (double)*(float *)(iVar27 + 0x48);
      uVar18 = *(ushort *)(iVar27 + 0x7c);
      dVar49 = (double)*(float *)(iVar27 + 0x4c);
      dVar48 = (double)*(float *)(iVar27 + 0x50);
      dVar47 = (double)*(float *)(iVar27 + 0x54);
      dVar50 = (double)*(float *)(iVar27 + 0x58);
      fn_82A6E290(iVar26,0,uVar17,uVar18,(longlong)(short)uVar17,&sStack_8c,auStack_8a);
      fn_82A6E1C0(iVar26,1,uVar17,uVar18,&sStack_90,&sStack_8e);
      lVar31 = (longlong)(short)uVar18;
      uVar28 = *(uint *)(iVar27 + 0x38);
      uVar25 = 0;
      uVar30 = (longlong)((int)(short)uVar18 >> 1) +
               (ulonglong)((short)uVar18 < 0 && (uVar18 & 1) != 0);
      iVar36 = (int)uVar30;
      if (3 < iVar36) {
        lVar33 = (ulonglong)uVar28 - 4;
        do {
          uVar34 = lVar31 - uVar25;
          iVar20 = (int)lVar33;
          uVar3 = *(undefined4 *)(iVar20 + 4);
          uVar25 = uVar25 + 4;
          iVar21 = (int)((uVar34 & 0xffffffff) << 2) + uVar28;
          iVar22 = (int)((uVar34 - 2 & 0xffffffff) << 2);
          iVar23 = (int)((uVar34 - 3 & 0xffffffff) << 2);
          iVar24 = (int)((uVar34 - 4 & 0xffffffff) << 2);
          *(undefined4 *)(iVar20 + 4) = *(undefined4 *)(iVar21 + -4);
          *(undefined4 *)(iVar21 + -4) = uVar3;
          uVar3 = *(undefined4 *)(iVar20 + 8);
          *(undefined4 *)(iVar20 + 8) = *(undefined4 *)(iVar22 + uVar28);
          *(undefined4 *)(iVar22 + uVar28) = uVar3;
          uVar3 = *(undefined4 *)(iVar20 + 0xc);
          *(undefined4 *)(iVar20 + 0xc) = *(undefined4 *)(iVar23 + uVar28);
          *(undefined4 *)(iVar23 + uVar28) = uVar3;
          uVar3 = *(undefined4 *)(iVar20 + 0x10);
          lVar33 = lVar33 + 0x10;
          *(undefined4 *)lVar33 = *(undefined4 *)(iVar24 + uVar28);
          *(undefined4 *)(iVar24 + uVar28) = uVar3;
        } while ((int)uVar25 < iVar36 + -3);
      }
      if ((int)uVar25 < iVar36) {
        lVar29 = uVar30 - uVar25;
        lVar33 = (uVar25 & 0x3fffffff) * 4 + (ulonglong)uVar28 + -4;
        do {
          lVar38 = lVar31 - uVar25;
          uVar3 = *(undefined4 *)((int)lVar33 + 4);
          uVar25 = uVar25 + 1;
          iVar36 = (int)((lVar38 - 1U & 0xffffffff) << 2);
          lVar33 = lVar33 + 4;
          *(undefined4 *)lVar33 = *(undefined4 *)(iVar36 + uVar28);
          *(undefined4 *)(iVar36 + uVar28) = uVar3;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      lVar29 = (uVar30 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(iVar27 + 0x38) + -4;
      lVar33 = (ulonglong)*(uint *)(iVar27 + 0x38) +
               ((longlong)((int)(short)uVar17 >> 1) +
                (ulonglong)((short)uVar17 < 0 && (uVar17 & 1) != 0) & 0x3fffffff) * -4;
      if ((int)(short)uVar17 < (int)(short)uVar18) {
        uVar28 = (int)sStack_8e - (int)sStack_90;
        lVar29 = (sStack_8e - lVar31 & 0x3fffffffU) * 4 + lVar29;
        lVar31 = (longlong)((int)uVar28 >> 1) + (ulonglong)((int)uVar28 < 0 && (uVar28 & 1) != 0);
      }
      else {
        uVar28 = (int)sStack_8e - (int)sStack_90;
        lVar33 = ((longlong)sStack_8c - (longlong)(short)uVar17 & 0x3fffffffU) * 4 + lVar33;
        lVar31 = (longlong)((int)uVar28 >> 1) + (ulonglong)((int)uVar28 < 0 && (uVar28 & 1) != 0);
      }
      lVar38 = 0;
      iVar36 = (int)lVar31;
      if (3 < iVar36) {
        do {
          dVar47 = -(double)(float)(dVar50 * dVar51 - dVar47);
          pfVar42 = (float *)lVar29;
          fVar5 = *pfVar42;
          dVar48 = (double)(float)(dVar50 * dVar49 + dVar48);
          pfVar40 = (float *)lVar33;
          fVar6 = *pfVar40;
          fVar7 = pfVar42[-1];
          fVar8 = pfVar40[1];
          fVar9 = pfVar42[-2];
          fVar10 = pfVar40[2];
          lVar38 = lVar38 + 4;
          fVar11 = pfVar40[3];
          fVar12 = pfVar42[-3];
          *pfVar42 = (float)((double)fVar6 * dVar51 + (double)(float)((double)fVar5 * dVar49));
          *pfVar40 = (float)(-dVar51 * (double)fVar5 + (double)(float)((double)fVar6 * dVar49));
          pfVar42[-1] = (float)(dVar48 * (double)fVar8 + (double)(float)(dVar47 * (double)fVar7));
          dVar51 = (double)(float)(dVar47 * dVar50 + dVar51);
          dVar49 = -(double)(float)(dVar50 * dVar48 - dVar49);
          pfVar40[1] = (float)(-dVar48 * (double)fVar7 + (double)(float)(dVar47 * (double)fVar8));
          pfVar42[-2] = (float)(dVar51 * (double)fVar10 + (double)(float)(dVar49 * (double)fVar9));
          dVar48 = (double)(float)(dVar49 * dVar50 + dVar48);
          dVar47 = -(double)(float)(dVar50 * dVar51 - dVar47);
          pfVar40[2] = (float)(-dVar51 * (double)fVar9 + (double)(float)(dVar49 * (double)fVar10));
          dVar51 = (double)(float)(dVar47 * dVar50 + dVar51);
          dVar49 = -(double)(float)(dVar50 * dVar48 - dVar49);
          pfVar40[3] = (float)(-dVar48 * (double)fVar12 + (double)(float)(dVar47 * (double)fVar11));
          pfVar42[-3] = (float)(dVar48 * (double)fVar11 + (double)(float)(dVar47 * (double)fVar12));
          lVar29 = lVar29 + -0x10;
          lVar33 = lVar33 + 0x10;
        } while ((int)lVar38 < iVar36 + -3);
      }
      if ((int)lVar38 < iVar36) {
        lVar31 = lVar31 - lVar38;
        lVar33 = lVar33 + -4;
        lVar29 = lVar29 + 4;
        do {
          dVar46 = (double)*(float *)((int)lVar33 + 4);
          dVar45 = (double)*(float *)((int)lVar29 + -4);
          dVar1 = dVar50 * dVar49 + dVar48;
          dVar2 = dVar50 * dVar51 - dVar47;
          lVar33 = lVar33 + 4;
          *(float *)lVar33 = (float)(-dVar51 * dVar45 + (double)(float)(dVar46 * dVar49));
          lVar29 = lVar29 + -4;
          *(float *)lVar29 = (float)(dVar46 * dVar51 + (double)(float)(dVar45 * dVar49));
          lVar31 = lVar31 + -1;
          dVar47 = dVar49;
          dVar48 = dVar51;
          dVar49 = -(double)(float)dVar2;
          dVar51 = (double)(float)dVar1;
        } while (lVar31 != 0);
      }
      sVar43 = (short)iVar44 + 1;
      iVar44 = (int)sVar43;
      iVar36 = iVar44 << 1;
    } while (sVar43 < *(short *)(iVar26 + 0x244));
  }
LAB_82c34e78:
  fn_82F6A580(0);
  return;
}


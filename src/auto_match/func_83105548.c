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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_600;
extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CC3930();
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;
extern unsigned int uStack0000003c;
extern unsigned int uStack_690;
extern unsigned int uStack_698;
extern unsigned int uStack_6a0;
extern unsigned int uStack_6a4;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6b0;


undefined8
fn_83105548(int param_1,int param_2,int *param_3,int param_4,ulonglong param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar31;
  longlong lVar30;
  uint *puVar33;
  ulonglong uVar32;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar38;
  longlong lVar37;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  int *piVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong lVar48;
  uint uStack0000003c;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  uint uStack_698;
  uint *puStack_694;
  uint uStack_690;
  undefined1 auStack_600 [592];
  undefined1 auStack_3b0 [944];
  
  uVar39 = (ulonglong)*(uint *)(param_2 + 0x520);
  param_3[10] = (int)auStack_600;
  param_3[0xb] = (int)auStack_3b0;
  uVar1 = *(ushort *)(param_2 + 0x34);
  uStack_6a8 = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
  uStack_6b0 = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
  uStack_6ac = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc);
  uVar2 = *(ushort *)(param_2 + 0x32) >> 1;
  uVar17 = (ulonglong)uVar2;
  uVar38 = (uint)uVar2;
  uStack_690 = (uint)param_5;
  if (param_4 == 0) {
    uVar34 = 0;
    uVar26 = 0;
    uVar28 = 0;
    iVar31 = 0;
    param_3[7] = *(int *)(param_1 + 0x56fc);
    puStack_694 = *(uint **)(param_1 + 0x5708);
    param_3[8] = (int)puStack_694;
    uVar25 = *puStack_694;
    uVar45 = CONCAT44(uVar25,uVar25);
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined2 *)(param_3 + 4) = 0;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x4a);
    uVar4 = *(ushort *)(param_2 + 0x4c);
    piVar43 = (int *)((param_4 + 0x5c) * 0x10 + param_2);
    uVar26 = (longlong)(int)uVar38 * (longlong)(int)uStack_690;
    param_3[5] = *piVar43;
    uVar28 = (longlong)(int)((uint)uVar3 << 4) * (longlong)(int)uStack_690;
    uVar39 = (uVar26 & 0x1fffffff) * 8 + uVar39;
    uVar34 = (longlong)(int)((uint)uVar2 << 2) * (longlong)(int)uStack_690;
    param_3[6] = piVar43[1];
    iVar31 = (uint)uVar4 * 8 * uStack_690;
    param_3[7] = piVar43[2];
    param_3[8] = piVar43[3];
    param_3[1] = (int)uVar26;
    *param_3 = (int)uVar34;
    *(short *)(param_3 + 4) = (short)((param_5 & 0xffffffff) << 1);
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    puStack_694 = (uint *)param_3[8];
    uVar25 = *puStack_694;
    iVar21 = (uint)*(ushort *)(param_2 + 0x4c) * 8 * uStack_690;
    uStack_6ac = (uint)*(ushort *)(param_2 + 0x4a) * 0x10 * uStack_690 + uStack_6ac;
    uStack_6a8 = iVar21 + uStack_6a8;
    uStack_6b0 = iVar21 + uStack_6b0;
    uVar45 = CONCAT44(uVar25,uVar25);
  }
  puStack_694 = puStack_694 + 1;
  uVar24 = uVar25 >> 0x1c & 7;
  uVar18 = (ulonglong)(uVar25 >> 0x10) & 0xfff;
  uStack_6a0 = (uint)uVar18;
  uStack_6a4 = (uint)(uVar45 & 0xffff);
  uVar41 = uVar39;
  uVar45 = uVar45 & 0xffff;
  uStack0000003c = param_6;
  if ((ulonglong)param_6 <= (param_5 & 0xffffffff)) {
    return 0;
  }
  do {
    param_3[2] = (int)uVar28;
    param_3[3] = iVar31;
    uStack_698 = 0;
    *(undefined2 *)((int)param_3 + 0x12) = 0;
    uVar36 = uVar17;
    if (((param_5 & 0xffffffff) == uVar18) &&
       (uVar25 = 0, uVar36 = uVar45, puVar33 = puStack_694, uVar17 != 0)) {
      do {
        while (uVar25 == uVar45) {
          iVar21 = (int)uVar24 >> 2;
          uVar44 = param_3[7];
          uVar18 = *(ulonglong *)uVar41;
          uVar46 = (ulonglong)(uint)param_3[10];
          lVar16 = (ulonglong)uVar44 - 0x80;
          uVar11 = *(uint *)((uVar24 + 0x8c) * 4 + param_2);
          uVar12 = param_3[iVar21 + 2];
          param_3[7] = (int)lVar16;
          dataCacheBlockTouch((ulonglong)uVar44 - 0x100);
          dataCacheBlockClearToZero(uVar46);
          fn_82CC3930(lVar16,param_3[10],
                          (uVar18 >> 0x38 & 0x3f) * 0x40 + (ulonglong)*(uint *)(param_2 + 0x188),
                          uRam8329f07c,(ulonglong)uVar12 + (ulonglong)uVar11,
                          *(undefined2 *)((iVar21 + 0x2d) * 2 + param_2),uRam8329f088);
          if ((*(byte *)(param_2 + 0x21) & 1) != 0) {
            uVar2 = *(ushort *)(param_2 + 0x36);
            lVar48 = 8;
            iVar22 = ((int)(((uVar24 & 1) + (int)uVar45 * 2) * 8) >> iVar21 & 0x7ffffff8U) * 2 +
                     *(int *)((uVar24 + 0x92) * 4 + param_2);
            lVar16 = uVar46 - 2;
            puVar19 = (undefined2 *)(iVar22 + -2);
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar21 = (uint)(uVar2 >> iVar21) * 2;
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0xe;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0x1e;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0x2e;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0x3e;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0x4e;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            iVar22 = iVar21 + iVar22;
            lVar16 = uVar46 + 0x5e;
            puVar19 = (undefined2 *)(iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
            lVar16 = uVar46 + 0x6e;
            puVar19 = (undefined2 *)(iVar21 + iVar22 + -2);
            lVar48 = 8;
            do {
              lVar16 = lVar16 + 2;
              puVar19 = puVar19 + 1;
              *puVar19 = *(undefined2 *)lVar16;
              lVar48 = lVar48 + -1;
            } while (lVar48 != 0);
          }
          uVar24 = *puVar33;
          puVar33 = puVar33 + 1;
          uVar18 = (ulonglong)(uVar24 >> 0x10) & 0xfff;
          uVar45 = (ulonglong)uVar24 & 0xffff;
          uStack_6a0 = (uint)uVar18;
          uVar24 = uVar24 >> 0x1c & 7;
          uStack_6a4 = (uint)uVar45;
          puStack_694 = puVar33;
          if ((param_5 & 0xffffffff) != uVar18) {
            uStack_698 = uVar25 + 1;
            goto LAB_83105950;
          }
        }
        uVar25 = uVar25 + 1;
        uVar41 = uVar41 + 8;
        *param_3 = *param_3 + 2;
        param_3[1] = param_3[1] + 1;
        param_3[2] = param_3[2] + 0x10;
        param_3[3] = param_3[3] + 8;
        *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
      } while (uVar25 < uVar17);
    }
LAB_83105950:
    uVar46 = uVar26 + uVar17;
    uVar35 = uVar17 * 4 + uVar34;
    param_3[1] = (int)uVar46;
    *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
    *param_3 = (int)uVar35;
    uVar32 = (ulonglong)*(ushort *)(param_2 + 0x4a);
    uVar39 = uVar17 * 8 + uVar39;
    uVar25 = (uint)*(ushort *)(param_2 + 0x4c);
    iVar31 = uVar25 * 8 + iVar31;
    uVar29 = uVar32 * 0x10 + uVar28;
    uVar26 = uVar46;
    uVar28 = uVar29;
    uVar34 = uVar35;
    uVar41 = uVar39;
    if ((*(byte *)(param_2 + 0x21) & 1) != 0) {
      uVar2 = *(ushort *)(param_2 + 0x32);
      uVar45 = (ulonglong)uVar2;
      uVar17 = uVar35 + uVar45 * -2;
      uVar44 = (int)(uint)uVar2 >> 1;
      lVar27 = (longlong)(int)uVar44;
      iVar21 = *(int *)((int)((param_5 & 0xffffffff) << 2) + *(int *)(param_2 + 0x518));
      lVar37 = (uVar17 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_2 + 0x15c);
      lVar23 = uVar36 << 1;
      lVar16 = uVar45 << 2;
      lVar48 = uVar45 << 3;
      lVar30 = ((ulonglong)(uint)((int)uVar17 >> 2) & 0x3fffffff) * 4 +
               (ulonglong)*(uint *)(param_2 + 0x160);
      if ((int)uVar36 == 0) {
        lVar23 = 1;
        uVar36 = 1;
      }
      lVar20 = ((ulonglong)uStack_698 & 0x7fffffff) * 2;
      if ((int)lVar23 < (int)lVar20) {
        lVar47 = lVar23 << 4;
        lVar42 = lVar23 * 4 + lVar37;
        lVar40 = (lVar23 + uVar45) * 4 + lVar37;
        lVar20 = lVar20 - lVar23;
        do {
          if ((*(int *)lVar42 == 0x4000) && (((int *)lVar42)[-1] == 0x4000)) {
            fn_82C8FB00(lVar47 + (ulonglong)*(uint *)(param_2 + 0x530),lVar48);
          }
          if ((*(int *)lVar40 == 0x4000) && (((int *)lVar40)[-1] == 0x4000)) {
            fn_82C8FB00((ulonglong)*(uint *)(param_2 + 0x538) + lVar47,lVar48);
          }
          lVar20 = lVar20 + -1;
          lVar42 = lVar42 + 4;
          lVar40 = lVar40 + 4;
          lVar47 = lVar47 + 0x10;
        } while (lVar20 != 0);
      }
      if ((int)uVar36 < (int)uStack_698) {
        lVar40 = uVar36 << 4;
        lVar20 = uVar36 * 4 + lVar30;
        lVar23 = uStack_698 - uVar36;
        do {
          if ((*(int *)lVar20 == 0x4000) && (((int *)lVar20)[-1] == 0x4000)) {
            fn_82C8FB00(lVar40 + (ulonglong)*(uint *)(param_2 + 0x53c),lVar16);
            fn_82C8FB00(lVar40 + (ulonglong)*(uint *)(param_2 + 0x544),lVar16);
          }
          lVar23 = lVar23 + -1;
          lVar20 = lVar20 + 4;
          lVar40 = lVar40 + 0x10;
        } while (lVar23 != 0);
      }
      if (uVar2 != 0) {
        uVar17 = (ulonglong)uStack_6ac;
        lVar42 = 0;
        lVar40 = uVar32 * 8 + uVar17;
        lVar20 = uVar45 * 4 + lVar37;
        lVar23 = lVar37 + uVar45 * -4;
        do {
          if ((iVar21 != 0 || -1 < -(int)param_5) || (iVar22 = 1, *(int *)lVar23 != 0x4000)) {
            iVar22 = 0;
          }
          bVar14 = *(int *)lVar37 == 0x4000;
          bVar15 = *(int *)lVar20 == 0x4000;
          if ((((iVar22 != 0) || (bVar14)) &&
              (fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar42,
                                 lVar42 + (ulonglong)*(uint *)(param_2 + 0x530),lVar48,uVar17,uVar32
                                 ,iVar22,bVar14,0), bVar14)) || (bVar15)) {
            fn_82C8FD40(lVar42 + (ulonglong)*(uint *)(param_2 + 0x530),
                              (ulonglong)*(uint *)(param_2 + 0x538) + lVar42,lVar48,lVar40,uVar32,
                              bVar14,bVar15,0);
          }
          uVar45 = uVar45 - 1;
          lVar23 = lVar23 + 4;
          lVar37 = lVar37 + 4;
          lVar20 = lVar20 + 4;
          uVar17 = uVar17 + 8;
          lVar40 = lVar40 + 8;
          lVar42 = lVar42 + 0x10;
        } while (uVar45 != 0);
      }
      if (uVar44 != 0) {
        uVar17 = (ulonglong)uStack_6b0;
        lVar37 = 0;
        lVar48 = lVar30 + (ulonglong)uVar44 * -4;
        lVar23 = uStack_6a8 - uVar17;
        do {
          if ((iVar21 != 0 || -1 < -(int)param_5) || (iVar22 = 1, *(int *)lVar48 != 0x4000)) {
            iVar22 = 0;
          }
          bVar14 = *(int *)lVar30 == 0x4000;
          if ((iVar22 != 0) || (bVar14)) {
            fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar37,
                              (ulonglong)*(uint *)(param_2 + 0x53c) + lVar37,lVar16,lVar23 + uVar17,
                              uVar25,iVar22,bVar14,0);
            fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar37,
                              (ulonglong)*(uint *)(param_2 + 0x544) + lVar37,lVar16,uVar17,uVar25,
                              iVar22,bVar14,0);
          }
          lVar27 = lVar27 + -1;
          lVar48 = lVar48 + 4;
          lVar30 = lVar30 + 4;
          uVar17 = uVar17 + 8;
          lVar37 = lVar37 + 0x10;
        } while (lVar27 != 0);
      }
      uVar5 = *(undefined4 *)(param_2 + 0x548);
      uVar6 = *(undefined4 *)(param_2 + 0x540);
      uVar7 = *(undefined4 *)(param_2 + 0x534);
      uVar8 = *(undefined4 *)(param_2 + 0x544);
      uVar9 = *(undefined4 *)(param_2 + 0x53c);
      uVar10 = *(undefined4 *)(param_2 + 0x538);
      *(undefined4 *)(param_2 + 0x544) = uVar5;
      *(undefined4 *)(param_2 + 0x53c) = uVar6;
      param_5 = (ulonglong)uStack_690;
      uVar28 = uVar29 & 0xffffffff;
      uVar26 = uVar46 & 0xffffffff;
      uVar34 = uVar35 & 0xffffffff;
      uVar18 = (ulonglong)uStack_6a0;
      uVar45 = (ulonglong)uStack_6a4;
      uVar17 = (ulonglong)uVar38;
      uVar41 = uVar39 & 0xffffffff;
      *(undefined4 *)(param_2 + 0x538) = uVar7;
      *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
      *(undefined4 *)(param_2 + 0x534) = uVar10;
      *(undefined4 *)(param_2 + 0x540) = uVar9;
      *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
      *(undefined4 *)(param_2 + 0x548) = uVar8;
      *(undefined4 *)(param_2 + 0x254) = uVar7;
      *(undefined4 *)(param_2 + 600) = uVar6;
      *(undefined4 *)(param_2 + 0x250) = uVar7;
      *(undefined4 *)(param_2 + 0x25c) = uVar5;
    }
    uVar2 = *(ushort *)(param_2 + 0x4c);
    uVar3 = *(ushort *)(param_2 + 0x4a);
    uStack_6a8 = (uint)uVar2 * 8 + uStack_6a8;
    uStack_6b0 = (uint)uVar2 * 8 + uStack_6b0;
    uStack_6ac = (uint)uVar3 * 0x10 + uStack_6ac;
    if ((((((param_5 - (uVar1 >> 1)) + 1 & 0xffffffff) >> 0x1f) + 1 |
         (ulonglong)*(uint *)((int)((param_5 + 1 & 0xffffffff) << 2) + *(int *)(param_2 + 0x518))) &
        (ulonglong)*(byte *)(param_2 + 0x21)) != 0) {
      uVar4 = *(ushort *)(param_2 + 0x32);
      uVar25 = (uint)uVar4;
      iVar21 = *param_3;
      iVar13 = (int)(uint)uVar4 >> 1;
      lVar16 = (longlong)iVar13;
      iVar22 = *(int *)(param_2 + 0x160);
      if (uVar4 != 0) {
        uVar17 = (ulonglong)uStack_6ac;
        lVar48 = 0;
        piVar43 = (int *)(iVar21 * 4 + *(int *)(param_2 + 0x15c) + uVar25 * -4);
        uVar44 = uVar25;
        do {
          if (*piVar43 == 0x4000) {
            fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar48,
                              (ulonglong)*(uint *)(param_2 + 0x530) + lVar48,uVar25,uVar17,
                              (uint)uVar3,1,0,0);
          }
          uVar44 = uVar44 - 1;
          piVar43 = piVar43 + 1;
          uVar17 = uVar17 + 8;
          lVar48 = lVar48 + 0x10;
        } while (uVar44 != 0);
      }
      if (iVar13 != 0) {
        uVar17 = (ulonglong)uStack_6b0;
        lVar23 = 0;
        piVar43 = (int *)((iVar21 >> 2) * 4 + iVar22 + iVar13 * -4);
        lVar48 = uStack_6a8 - uVar17;
        do {
          if (*piVar43 == 0x4000) {
            fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar23,
                              lVar23 + (ulonglong)*(uint *)(param_2 + 0x53c),uVar25,uVar17 + lVar48,
                              uVar2,1,0,0);
            fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar23,
                              lVar23 + (ulonglong)*(uint *)(param_2 + 0x544),uVar25,uVar17,uVar2,1,0
                              ,0);
          }
          lVar16 = lVar16 + -1;
          piVar43 = piVar43 + 1;
          uVar17 = uVar17 + 8;
          lVar23 = lVar23 + 0x10;
        } while (lVar16 != 0);
      }
      uVar5 = *(undefined4 *)(param_2 + 0x548);
      uVar6 = *(undefined4 *)(param_2 + 0x540);
      uVar7 = *(undefined4 *)(param_2 + 0x534);
      uVar8 = *(undefined4 *)(param_2 + 0x53c);
      uVar9 = *(undefined4 *)(param_2 + 0x544);
      uVar10 = *(undefined4 *)(param_2 + 0x538);
      *(undefined4 *)(param_2 + 0x544) = uVar5;
      *(undefined4 *)(param_2 + 0x53c) = uVar6;
      param_5 = (ulonglong)uStack_690;
      uVar28 = uVar29 & 0xffffffff;
      uVar26 = uVar46 & 0xffffffff;
      uVar34 = uVar35 & 0xffffffff;
      uVar18 = (ulonglong)uStack_6a0;
      uVar45 = (ulonglong)uStack_6a4;
      uVar17 = (ulonglong)uVar38;
      uVar41 = uVar39 & 0xffffffff;
      *(undefined4 *)(param_2 + 0x538) = uVar7;
      *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
      *(undefined4 *)(param_2 + 0x534) = uVar10;
      *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
      *(undefined4 *)(param_2 + 0x540) = uVar8;
      *(undefined4 *)(param_2 + 0x548) = uVar9;
      *(undefined4 *)(param_2 + 0x254) = uVar7;
      *(undefined4 *)(param_2 + 0x250) = uVar7;
      *(undefined4 *)(param_2 + 600) = uVar6;
      *(undefined4 *)(param_2 + 0x25c) = uVar5;
    }
    param_5 = param_5 + 1;
    uStack_690 = (uint)param_5;
    if ((ulonglong)uStack0000003c <= (param_5 & 0xffffffff)) {
      return 0;
    }
    uVar39 = uVar39 & 0xffffffff;
  } while( true );
}


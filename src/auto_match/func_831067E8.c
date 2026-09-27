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
extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CC3930();
extern unsigned int uRam8329f07c;
extern unsigned int uRam8329f088;
extern unsigned int uStack_694;
extern unsigned int uStack_698;
extern unsigned int uStack_69c;
extern unsigned int uStack_6a0;
extern unsigned int uStack_6a4;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6b0;


undefined8 fn_831067E8(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint *puVar27;
  longlong lVar26;
  uint uVar28;
  uint uVar29;
  int iVar31;
  longlong lVar30;
  ulonglong uVar32;
  uint uVar34;
  longlong lVar33;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar41;
  longlong lVar40;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  int *piVar45;
  longlong lVar46;
  ulonglong uVar47;
  uint uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  longlong lVar52;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  uint uStack_69c;
  uint uStack_698;
  uint uStack_694;
  uint *puStack_688;
  undefined1 auStack_600 [592];
  undefined1 auStack_3b0 [848];
  
  iVar31 = *(int *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_2 + 0x558);
  uVar1 = *(ushort *)(param_2 + 0x4c);
  iVar25 = *(int *)(param_1 + 0xec4);
  uVar2 = *(ushort *)(param_2 + 0x4a);
  iVar5 = *(int *)(param_1 + 0xec8);
  iVar6 = *(int *)(param_1 + 0xec0);
  iVar7 = *(int *)(param_1 + 0xdc);
  uStack_694 = *(uint *)(param_2 + 0x520);
  uVar42 = (ulonglong)uStack_694;
  param_3[0xb] = (int)auStack_3b0;
  param_3[10] = (int)auStack_600;
  uStack_698 = 0;
  iVar23 = (uint)(uVar1 >> 1) * iVar4;
  uStack_6a8 = iVar25 + iVar31 + iVar23;
  uVar36 = 0;
  uVar1 = *(ushort *)(param_2 + 0x32) >> 1;
  uVar19 = (ulonglong)uVar1;
  uVar3 = *(ushort *)(param_2 + 0x34) >> 1;
  uVar49 = (ulonglong)uVar3;
  uVar34 = (uint)uVar3;
  uVar41 = (uint)uVar1;
  iVar24 = 0;
  iVar25 = uVar34 * uVar41 * 6;
  uStack_6ac = (uint)(uVar2 >> 1) * iVar4 + iVar6 + iVar7;
  uStack_6b0 = iVar5 + iVar31 + iVar23;
  uVar32 = 0;
  param_3[7] = (*(int *)(param_2 + 0x558) + 1) * iVar25 * 0x80 + *(int *)(param_1 + 0x56f8);
  iVar31 = 0;
  puVar27 = (uint *)(*(int *)(param_2 + 0x558) * iVar25 * 4 + *(int *)(param_1 + 0x5708));
  uVar38 = 0;
  param_3[8] = (int)puVar27;
  puStack_688 = puVar27 + 1;
  uVar29 = *puVar27;
  uVar20 = (ulonglong)(uVar29 >> 0x10) & 0xfff;
  *param_3 = 0;
  param_3[1] = 0;
  uVar28 = uVar29 >> 0x1c & 7;
  *(undefined2 *)(param_3 + 4) = 0;
  uStack_6a0 = (uint)((ulonglong)uVar29 & 0xffff);
  uStack_69c = (uint)uVar20;
  uVar47 = (ulonglong)uVar29 & 0xffff;
  if (uVar49 != 0) {
    do {
      uVar29 = 0;
      param_3[2] = (int)uVar32;
      param_3[3] = iVar31;
      uStack_6a4 = 0;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      uVar39 = uVar19;
      if (((uVar38 & 0xffffffff) == uVar20) && (uVar39 = uVar47, puVar27 = puStack_688, uVar19 != 0)
         ) {
        do {
          while (uVar29 != uVar47) {
            uVar29 = uVar29 + 1;
            uVar42 = uVar42 + 8;
            *param_3 = *param_3 + 2;
            param_3[1] = param_3[1] + 1;
            param_3[2] = param_3[2] + 0x10;
            param_3[3] = param_3[3] + 8;
            *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
            if (uVar19 <= uVar29) goto LAB_83106b68;
          }
          iVar4 = (int)uVar28 >> 2;
          uVar48 = param_3[7];
          uVar20 = *(ulonglong *)uVar42;
          uVar50 = (ulonglong)(uint)param_3[10];
          lVar18 = (ulonglong)uVar48 - 0x80;
          uVar14 = *(uint *)((uVar28 + 0x8c) * 4 + param_2);
          uVar15 = param_3[iVar4 + 2];
          param_3[7] = (int)lVar18;
          dataCacheBlockTouch((ulonglong)uVar48 - 0x100);
          dataCacheBlockClearToZero(uVar50);
          fn_82CC3930(lVar18,param_3[10],
                          (uVar20 >> 0x38 & 0x3f) * 0x40 + (ulonglong)*(uint *)(param_2 + 0x188),
                          uRam8329f07c,(ulonglong)uVar15 + (ulonglong)uVar14,
                          *(undefined2 *)((iVar4 + 0x2d) * 2 + param_2),uRam8329f088);
          if ((*(byte *)(param_2 + 0x21) & 1) != 0) {
            uVar1 = *(ushort *)(param_2 + 0x36);
            lVar52 = 8;
            iVar25 = ((int)(((uVar28 & 1) + (int)uVar47 * 2) * 8) >> iVar4 & 0x7ffffff8U) * 2 +
                     *(int *)((uVar28 + 0x92) * 4 + param_2);
            lVar18 = uVar50 - 2;
            puVar21 = (undefined2 *)(iVar25 + -2);
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar4 = (uint)(uVar1 >> iVar4) * 2;
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0xe;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0x1e;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0x2e;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0x3e;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0x4e;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            iVar25 = iVar25 + iVar4;
            lVar18 = uVar50 + 0x5e;
            puVar21 = (undefined2 *)(iVar25 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
            lVar18 = uVar50 + 0x6e;
            puVar21 = (undefined2 *)(iVar25 + iVar4 + -2);
            lVar52 = 8;
            do {
              lVar18 = lVar18 + 2;
              puVar21 = puVar21 + 1;
              *puVar21 = *(undefined2 *)lVar18;
              lVar52 = lVar52 + -1;
            } while (lVar52 != 0);
          }
          uVar28 = *puVar27;
          puStack_688 = puVar27 + 1;
          uVar20 = (ulonglong)(uVar28 >> 0x10) & 0xfff;
          uVar47 = (ulonglong)uVar28 & 0xffff;
          uStack_69c = (uint)uVar20;
          uVar28 = uVar28 >> 0x1c & 7;
          uStack_6a0 = (uint)uVar47;
          puVar27 = puStack_688;
        } while ((uVar38 & 0xffffffff) == uVar20);
        uStack_6a4 = uVar29 + 1;
      }
LAB_83106b68:
      iVar24 = iVar24 + (int)uVar19;
      uVar37 = uVar19 * 4 + uVar36;
      param_3[1] = iVar24;
      *param_3 = (int)uVar37;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      uVar35 = (ulonglong)*(ushort *)(param_2 + 0x4a);
      uVar43 = uVar19 * 8 + (ulonglong)uStack_694;
      uVar29 = (uint)*(ushort *)(param_2 + 0x4c);
      uStack_694 = (uint)uVar43;
      uVar50 = uVar35 * 0x10 + uVar32;
      iVar31 = uVar29 * 8 + iVar31;
      uVar32 = uVar50;
      uVar36 = uVar37;
      uVar42 = uVar43;
      if ((*(byte *)(param_2 + 0x21) & 1) != 0) {
        uVar1 = *(ushort *)(param_2 + 0x32);
        uVar49 = (ulonglong)uVar1;
        uVar19 = uVar37 + uVar49 * -2;
        uVar48 = (int)(uint)uVar1 >> 1;
        lVar30 = (longlong)(int)uVar48;
        iVar4 = *(int *)((int)((uVar38 & 0xffffffff) << 2) + *(int *)(param_2 + 0x518));
        lVar33 = ((ulonglong)(uint)((int)uVar19 >> 2) & 0x3fffffff) * 4 +
                 (ulonglong)*(uint *)(param_2 + 0x160);
        lVar26 = uVar39 << 1;
        lVar18 = uVar49 << 2;
        lVar52 = uVar49 << 3;
        lVar40 = (uVar19 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_2 + 0x15c);
        if ((int)uVar39 == 0) {
          lVar26 = 1;
          uVar39 = 1;
        }
        lVar22 = ((ulonglong)uStack_6a4 & 0x7fffffff) * 2;
        if ((int)lVar26 < (int)lVar22) {
          lVar51 = lVar26 << 4;
          lVar46 = lVar26 * 4 + lVar40;
          lVar44 = (lVar26 + uVar49) * 4 + lVar40;
          lVar22 = lVar22 - lVar26;
          do {
            if ((*(int *)lVar46 == 0x4000) && (((int *)lVar46)[-1] == 0x4000)) {
              fn_82C8FB00(lVar51 + (ulonglong)*(uint *)(param_2 + 0x530),lVar52);
            }
            if ((*(int *)lVar44 == 0x4000) && (((int *)lVar44)[-1] == 0x4000)) {
              fn_82C8FB00((ulonglong)*(uint *)(param_2 + 0x538) + lVar51,lVar52);
            }
            lVar22 = lVar22 + -1;
            lVar46 = lVar46 + 4;
            lVar44 = lVar44 + 4;
            lVar51 = lVar51 + 0x10;
          } while (lVar22 != 0);
        }
        if ((int)uVar39 < (int)uStack_6a4) {
          lVar44 = uVar39 << 4;
          lVar22 = uVar39 * 4 + lVar33;
          lVar26 = uStack_6a4 - uVar39;
          do {
            if ((*(int *)lVar22 == 0x4000) && (((int *)lVar22)[-1] == 0x4000)) {
              fn_82C8FB00(lVar44 + (ulonglong)*(uint *)(param_2 + 0x53c),lVar18);
              fn_82C8FB00(lVar44 + (ulonglong)*(uint *)(param_2 + 0x544),lVar18);
            }
            lVar26 = lVar26 + -1;
            lVar22 = lVar22 + 4;
            lVar44 = lVar44 + 0x10;
          } while (lVar26 != 0);
        }
        if (uVar1 != 0) {
          uVar19 = (ulonglong)uStack_6ac;
          lVar46 = 0;
          lVar44 = uVar35 * 8 + uVar19;
          lVar22 = uVar49 * 4 + lVar40;
          lVar26 = lVar40 + uVar49 * -4;
          do {
            if ((iVar4 != 0 || -1 < -(int)uVar38) || (iVar25 = 1, *(int *)lVar26 != 0x4000)) {
              iVar25 = 0;
            }
            bVar16 = *(int *)lVar40 == 0x4000;
            bVar17 = *(int *)lVar22 == 0x4000;
            if ((((iVar25 != 0) || (bVar16)) &&
                (fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar46,
                                   lVar46 + (ulonglong)*(uint *)(param_2 + 0x530),lVar52,uVar19,
                                   uVar35,iVar25,bVar16,0), bVar16)) || (bVar17)) {
              fn_82C8FD40(lVar46 + (ulonglong)*(uint *)(param_2 + 0x530),
                                (ulonglong)*(uint *)(param_2 + 0x538) + lVar46,lVar52,lVar44,uVar35,
                                bVar16,bVar17,0);
            }
            uVar49 = uVar49 - 1;
            lVar26 = lVar26 + 4;
            lVar40 = lVar40 + 4;
            lVar22 = lVar22 + 4;
            uVar19 = uVar19 + 8;
            lVar44 = lVar44 + 8;
            lVar46 = lVar46 + 0x10;
          } while (uVar49 != 0);
        }
        if (uVar48 != 0) {
          uVar19 = (ulonglong)uStack_6b0;
          lVar40 = 0;
          lVar52 = lVar33 + (ulonglong)uVar48 * -4;
          lVar26 = uStack_6a8 - uVar19;
          do {
            if ((iVar4 != 0 || -1 < -(int)uVar38) || (iVar25 = 1, *(int *)lVar52 != 0x4000)) {
              iVar25 = 0;
            }
            bVar16 = *(int *)lVar33 == 0x4000;
            if ((iVar25 != 0) || (bVar16)) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar40,
                                lVar40 + (ulonglong)*(uint *)(param_2 + 0x53c),lVar18,
                                uVar19 + lVar26,uVar29,iVar25,bVar16,0);
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar40,
                                lVar40 + (ulonglong)*(uint *)(param_2 + 0x544),lVar18,uVar19,uVar29,
                                iVar25,bVar16,0);
            }
            lVar30 = lVar30 + -1;
            lVar52 = lVar52 + 4;
            lVar33 = lVar33 + 4;
            uVar19 = uVar19 + 8;
            lVar40 = lVar40 + 0x10;
          } while (lVar30 != 0);
        }
        uVar8 = *(undefined4 *)(param_2 + 0x540);
        uVar9 = *(undefined4 *)(param_2 + 0x548);
        uVar10 = *(undefined4 *)(param_2 + 0x534);
        uVar11 = *(undefined4 *)(param_2 + 0x53c);
        uVar12 = *(undefined4 *)(param_2 + 0x538);
        uVar13 = *(undefined4 *)(param_2 + 0x544);
        *(undefined4 *)(param_2 + 0x53c) = uVar8;
        *(undefined4 *)(param_2 + 0x544) = uVar9;
        uVar38 = (ulonglong)uStack_698;
        uVar32 = uVar50 & 0xffffffff;
        uVar36 = uVar37 & 0xffffffff;
        uVar20 = (ulonglong)uStack_69c;
        uVar47 = (ulonglong)uStack_6a0;
        uVar49 = (ulonglong)uVar34;
        uVar19 = (ulonglong)uVar41;
        uVar42 = uVar43 & 0xffffffff;
        *(undefined4 *)(param_2 + 0x538) = uVar10;
        *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x534) = uVar12;
        *(undefined4 *)(param_2 + 0x540) = uVar11;
        *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x548) = uVar13;
        *(undefined4 *)(param_2 + 0x25c) = uVar9;
        *(undefined4 *)(param_2 + 600) = uVar8;
        *(undefined4 *)(param_2 + 0x254) = uVar10;
        *(undefined4 *)(param_2 + 0x250) = uVar10;
      }
      uVar1 = *(ushort *)(param_2 + 0x4a);
      uVar2 = *(ushort *)(param_2 + 0x4c);
      uStack_6b0 = (uint)uVar2 * 8 + uStack_6b0;
      uStack_6ac = (uint)uVar1 * 0x10 + uStack_6ac;
      uStack_6a8 = (uint)uVar2 * 8 + uStack_6a8;
      if ((((((uVar38 - uVar49) + 1 & 0xffffffff) >> 0x1f) + 1 |
           (ulonglong)*(uint *)((int)((uVar38 + 1 & 0xffffffff) << 2) + *(int *)(param_2 + 0x518)))
          & (ulonglong)*(byte *)(param_2 + 0x21)) != 0) {
        uVar3 = *(ushort *)(param_2 + 0x32);
        uVar29 = (uint)uVar3;
        iVar4 = *param_3;
        iVar5 = (int)(uint)uVar3 >> 1;
        lVar18 = (longlong)iVar5;
        iVar25 = *(int *)(param_2 + 0x160);
        if (uVar3 != 0) {
          uVar19 = (ulonglong)uStack_6ac;
          lVar52 = 0;
          piVar45 = (int *)(iVar4 * 4 + *(int *)(param_2 + 0x15c) + uVar29 * -4);
          uVar48 = uVar29;
          do {
            if (*piVar45 == 0x4000) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar52,
                                (ulonglong)*(uint *)(param_2 + 0x530) + lVar52,uVar29,uVar19,
                                (uint)uVar1,1,0,0);
            }
            uVar48 = uVar48 - 1;
            piVar45 = piVar45 + 1;
            uVar19 = uVar19 + 8;
            lVar52 = lVar52 + 0x10;
          } while (uVar48 != 0);
        }
        if (iVar5 != 0) {
          uVar19 = (ulonglong)uStack_6b0;
          lVar26 = 0;
          piVar45 = (int *)((iVar4 >> 2) * 4 + iVar25 + iVar5 * -4);
          lVar52 = uStack_6a8 - uVar19;
          do {
            if (*piVar45 == 0x4000) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar26,
                                (ulonglong)*(uint *)(param_2 + 0x53c) + lVar26,uVar29,
                                uVar19 + lVar52,uVar2,1,0,0);
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar26,
                                lVar26 + (ulonglong)*(uint *)(param_2 + 0x544),uVar29,uVar19,uVar2,1
                                ,0,0);
            }
            lVar18 = lVar18 + -1;
            piVar45 = piVar45 + 1;
            uVar19 = uVar19 + 8;
            lVar26 = lVar26 + 0x10;
          } while (lVar18 != 0);
        }
        uVar8 = *(undefined4 *)(param_2 + 0x548);
        uVar9 = *(undefined4 *)(param_2 + 0x534);
        uVar10 = *(undefined4 *)(param_2 + 0x540);
        uVar11 = *(undefined4 *)(param_2 + 0x544);
        uVar12 = *(undefined4 *)(param_2 + 0x53c);
        uVar13 = *(undefined4 *)(param_2 + 0x538);
        *(undefined4 *)(param_2 + 0x544) = uVar8;
        *(undefined4 *)(param_2 + 0x538) = uVar9;
        uVar38 = (ulonglong)uStack_698;
        uVar32 = uVar50 & 0xffffffff;
        uVar36 = uVar37 & 0xffffffff;
        uVar20 = (ulonglong)uStack_69c;
        uVar47 = (ulonglong)uStack_6a0;
        uVar49 = (ulonglong)uVar34;
        uVar19 = (ulonglong)uVar41;
        uVar42 = uVar43 & 0xffffffff;
        *(undefined4 *)(param_2 + 0x53c) = uVar10;
        *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x534) = uVar13;
        *(undefined4 *)(param_2 + 0x540) = uVar12;
        *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x254) = uVar9;
        *(undefined4 *)(param_2 + 0x250) = uVar9;
        *(undefined4 *)(param_2 + 0x548) = uVar11;
        *(undefined4 *)(param_2 + 0x25c) = uVar8;
        *(undefined4 *)(param_2 + 600) = uVar10;
      }
      uVar38 = uVar38 + 1;
      uStack_698 = (uint)uVar38;
    } while ((uVar38 & 0xffffffff) < uVar49);
  }
  return 0;
}


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
extern unsigned int iStack00000014;
extern unsigned int iStack0000003c;
extern unsigned int iStack_684;
extern unsigned int uRam8329f07c;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_680;


undefined8 fn_830BC7C0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  int *piVar26;
  ulonglong uVar27;
  uint uVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  uint uVar33;
  ulonglong uVar32;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  uint uVar39;
  longlong lVar37;
  longlong lVar38;
  int iStack00000014;
  int iStack0000003c;
  byte bStack_690;
  uint *puStack_688;
  int iStack_684;
  uint uStack_680;
  uint uStack_67c;
  uint uStack_678;
  undefined1 auStack_600 [592];
  undefined1 auStack_3b0 [944];
  
  uVar1 = *(ushort *)(param_2 + 0x32);
  uVar18 = (uint)(*(ushort *)(param_2 + 0x34) >> 1);
  param_3[0xb] = (int)auStack_3b0;
  uVar1 = uVar1 >> 1;
  uVar32 = (ulonglong)uVar1;
  param_3[10] = (int)auStack_600;
  uVar33 = (uint)uVar1;
  if (param_4 == 0) {
    param_3[7] = (*(int *)(param_2 + 0x558) + 1) * uVar18 * uVar33 * 0x300 +
                 *(int *)(param_1 + 0x56f8);
  }
  else {
    param_3[7] = *(int *)(param_4 * 0x10 + param_2 + 0x5c8);
  }
  iVar21 = *(int *)(param_2 + 0x558);
  iVar22 = *(int *)(param_1 + 0xe0);
  uVar2 = *(ushort *)(param_2 + 0x4a);
  iVar36 = *(int *)(param_1 + 0xec4);
  uVar3 = *(ushort *)(param_2 + 0x4c);
  iVar4 = *(int *)(param_1 + 0xec8);
  iVar5 = *(int *)(param_1 + 0xdc);
  iVar6 = *(int *)(param_1 + 0xec0);
  iVar7 = *(int *)(param_1 + 0x110);
  bStack_690 = *(byte *)(param_2 + 0x21);
  param_3[1] = uVar33 * param_5;
  *param_3 = (uint)uVar1 * 4 * param_5;
  *(short *)(param_3 + 4) = (short)param_5 << 1;
  iVar23 = (uint)(uVar3 >> 1) * iVar21;
  iVar24 = (uint)*(ushort *)(param_2 + 0x4c) * 8 * param_5;
  puStack_688 = (uint *)(uVar33 * param_5 * 0x18 + iVar21 * uVar18 * uVar33 * 0x18 + iVar7);
  uStack_678 = (uint)*(ushort *)(param_2 + 0x4a) * 0x10 * param_5 +
               (uint)(uVar2 >> 1) * iVar21 + iVar6 + iVar5;
  uStack_67c = iVar24 + iVar36 + iVar22 + iVar23;
  uStack_680 = iVar24 + iVar4 + iVar22 + iVar23;
  iVar21 = (uint)uVar2 * 0x10 * param_5;
  iVar22 = (uint)uVar3 * 8 * param_5;
  iStack00000014 = param_1;
  iStack0000003c = param_6;
  iStack_684 = param_5;
  if (param_5 < param_6) {
    do {
      uVar28 = (uint)bStack_690;
      iVar36 = 0;
      param_3[2] = iVar21;
      param_3[3] = iVar22;
      *(undefined2 *)((int)param_3 + 0x12) = 0;
      if ((int)uVar32 != 0) {
        do {
          if (((uVar28 & 4) == 0) || ((*puStack_688 & 0x800) != 0)) {
            uVar39 = 0;
          }
          else {
            uVar39 = 0;
            bStack_690 = (byte)uVar28 & 0xfe;
            iVar4 = *param_3;
            *(undefined4 *)(param_3[1] * 4 + *(int *)(param_2 + 0x160)) = 0;
            *(undefined4 *)
             (((uint)*(ushort *)(param_2 + 0x32) + iVar4 + 1) * 4 + *(int *)(param_2 + 0x15c)) = 0;
            *(undefined4 *)
             (((uint)*(ushort *)(param_2 + 0x32) + iVar4) * 4 + *(int *)(param_2 + 0x15c)) = 0;
            *(undefined4 *)(*(int *)(param_2 + 0x15c) + iVar4 * 4 + 4) = 0;
            *(undefined4 *)(*(int *)(param_2 + 0x15c) + iVar4 * 4) = 0;
          }
          do {
            uVar17 = (int)uVar39 >> 2;
            uVar28 = param_3[7];
            lVar20 = (ulonglong)uVar28 - 0x80;
            uVar15 = *(uint *)((uVar39 + 0x8c) * 4 + param_2);
            uVar16 = param_3[uVar17 + 2];
            param_3[7] = (int)lVar20;
            dataCacheBlockTouch((ulonglong)uVar28 - 0x100);
            dataCacheBlockClearToZero((ulonglong)(uint)param_3[10]);
            fn_82CC3930(lVar20,param_3[10],
                            (ulonglong)*(byte *)(puStack_688 + 1) * 0x40 +
                            (ulonglong)*(uint *)(param_2 + 0x188),uRam8329f07c,
                            (ulonglong)uVar16 + (ulonglong)uVar15,
                            *(undefined2 *)((uVar17 + 0x2d) * 2 + param_2),
                            *(undefined4 *)(param_2 + 0x554));
            if ((*(byte *)(param_2 + 0x21) & 1) != 0) {
              puVar8 = (undefined8 *)param_3[10];
              puVar25 = (undefined8 *)
                        (((int)(((uVar39 & 1) + iVar36 * 2) * 8) >> (uVar17 & 0x3f) & 0x7ffffff8U) *
                         2 + *(int *)((uVar39 + 0x92) * 4 + param_2));
              iVar4 = (uint)(*(ushort *)(param_2 + 0x36) >> (uVar17 & 0x3f)) * 2;
              *puVar25 = *puVar8;
              puVar25[1] = puVar8[1];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[2];
              puVar25[1] = puVar8[3];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[4];
              puVar25[1] = puVar8[5];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[6];
              puVar25[1] = puVar8[7];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[8];
              puVar25[1] = puVar8[9];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[10];
              puVar25[1] = puVar8[0xb];
              puVar25 = (undefined8 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[0xc];
              puVar25[1] = puVar8[0xd];
              *(undefined8 *)((int)puVar25 + iVar4) = puVar8[0xe];
              ((undefined8 *)((int)puVar25 + iVar4))[1] = puVar8[0xf];
            }
            uVar39 = uVar39 + 1;
          } while ((int)uVar39 < 6);
          if ((bStack_690 & 4) != 0) {
            bStack_690 = 7;
          }
          iVar36 = iVar36 + 1;
          puStack_688 = puStack_688 + 6;
          uVar28 = (uint)bStack_690;
          *param_3 = *param_3 + 2;
          param_3[1] = param_3[1] + 1;
          param_3[2] = param_3[2] + 0x10;
          param_3[3] = param_3[3] + 8;
          *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
        } while (iVar36 < (int)uVar32);
      }
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      iVar36 = (uint)*(ushort *)(param_2 + 0x32) + *param_3;
      *param_3 = iVar36;
      uVar27 = (ulonglong)*(ushort *)(param_2 + 0x4a);
      uVar1 = *(ushort *)(param_2 + 0x4c);
      iVar22 = (uint)uVar1 * 8 + iVar22;
      iVar21 = (uint)*(ushort *)(param_2 + 0x4a) * 0x10 + iVar21;
      if ((uVar28 & 1) != 0) {
        uVar2 = *(ushort *)(param_2 + 0x32);
        uVar28 = (uint)uVar2;
        iVar36 = iVar36 + uVar28 * -2;
        iVar5 = (int)(uint)uVar2 >> 1;
        lVar20 = (longlong)iVar5;
        iVar4 = *(int *)(iStack_684 * 4 + *(int *)(param_2 + 0x518));
        piVar30 = (int *)(iVar36 * 4 + *(int *)(param_2 + 0x15c));
        piVar26 = (int *)((iVar36 >> 2) * 4 + *(int *)(param_2 + 0x160));
        if (1 < (uint)(uVar32 * 2)) {
          lVar37 = 0x10;
          piVar31 = piVar30 + uVar28 + 1;
          lVar34 = uVar32 * 2 + -1;
          piVar29 = piVar30;
          do {
            if ((piVar29[1] == 0x4000) && (*piVar29 == 0x4000)) {
              fn_82C8FB00((ulonglong)*(uint *)(param_2 + 0x530) + lVar37,uVar28);
            }
            if ((*piVar31 == 0x4000) && (piVar31[-1] == 0x4000)) {
              fn_82C8FB00((ulonglong)*(uint *)(param_2 + 0x538) + lVar37,uVar28);
            }
            lVar34 = lVar34 + -1;
            piVar31 = piVar31 + 1;
            lVar37 = lVar37 + 0x10;
            piVar29 = piVar29 + 1;
          } while (lVar34 != 0);
          uVar32 = (ulonglong)uVar33;
          param_1 = iStack00000014;
        }
        if (1 < (uint)uVar32) {
          lVar37 = 0x10;
          lVar34 = uVar32 - 1;
          piVar29 = piVar26;
          do {
            if ((piVar29[1] == 0x4000) && (*piVar29 == 0x4000)) {
              fn_82C8FB00(lVar37 + (ulonglong)*(uint *)(param_2 + 0x53c),uVar28);
              fn_82C8FB00(lVar37 + (ulonglong)*(uint *)(param_2 + 0x544),uVar28);
            }
            lVar34 = lVar34 + -1;
            lVar37 = lVar37 + 0x10;
            piVar29 = piVar29 + 1;
          } while (lVar34 != 0);
          uVar32 = (ulonglong)uVar33;
          param_1 = iStack00000014;
        }
        if (uVar2 != 0) {
          uVar32 = (ulonglong)uStack_678;
          lVar37 = 0;
          lVar34 = uVar27 * 8 + uVar32;
          piVar31 = piVar30 + uVar28;
          piVar29 = piVar30 + -uVar28;
          uVar39 = uVar28;
          do {
            if ((-1 < -iStack_684 || iVar4 != 0) || (iVar36 = 1, *piVar29 != 0x4000)) {
              iVar36 = 0;
            }
            iVar6 = *piVar31;
            bVar19 = *piVar30 == 0x4000;
            if ((((iVar36 != 0) || (bVar19)) &&
                (fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar37,
                                   (ulonglong)*(uint *)(param_2 + 0x530) + lVar37,uVar28,uVar32,
                                   uVar27,iVar36,bVar19,0), bVar19)) || (iVar6 == 0x4000)) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x530) + lVar37,
                                (ulonglong)*(uint *)(param_2 + 0x538) + lVar37,uVar28,lVar34,uVar27,
                                bVar19,iVar6 == 0x4000,0);
            }
            uVar39 = uVar39 - 1;
            piVar29 = piVar29 + 1;
            piVar30 = piVar30 + 1;
            piVar31 = piVar31 + 1;
            uVar32 = uVar32 + 8;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + 0x10;
          } while (uVar39 != 0);
          uVar32 = (ulonglong)uVar33;
          param_1 = iStack00000014;
        }
        if (iVar5 != 0) {
          uVar32 = (ulonglong)uStack_680;
          lVar37 = 0;
          piVar30 = piVar26 + -iVar5;
          lVar34 = uStack_67c - uVar32;
          do {
            if ((-1 < -iStack_684 || iVar4 != 0) || (iVar36 = 1, *piVar30 != 0x4000)) {
              iVar36 = 0;
            }
            bVar19 = *piVar26 == 0x4000;
            if ((iVar36 != 0) || (bVar19)) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar37,
                                lVar37 + (ulonglong)*(uint *)(param_2 + 0x53c),uVar28,
                                lVar34 + uVar32,uVar1,iVar36,bVar19,0);
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar37,
                                lVar37 + (ulonglong)*(uint *)(param_2 + 0x544),uVar28,uVar32,uVar1,
                                iVar36,bVar19,0);
            }
            lVar20 = lVar20 + -1;
            piVar30 = piVar30 + 1;
            piVar26 = piVar26 + 1;
            uVar32 = uVar32 + 8;
            lVar37 = lVar37 + 0x10;
          } while (lVar20 != 0);
          uVar32 = (ulonglong)uVar33;
          param_1 = iStack00000014;
        }
        uVar9 = *(undefined4 *)(param_2 + 0x540);
        uVar10 = *(undefined4 *)(param_2 + 0x548);
        uVar11 = *(undefined4 *)(param_2 + 0x534);
        uVar12 = *(undefined4 *)(param_2 + 0x53c);
        uVar13 = *(undefined4 *)(param_2 + 0x544);
        uVar14 = *(undefined4 *)(param_2 + 0x538);
        *(undefined4 *)(param_2 + 0x53c) = uVar9;
        uVar28 = (uint)bStack_690;
        *(undefined4 *)(param_2 + 0x544) = uVar10;
        *(undefined4 *)(param_2 + 0x538) = uVar11;
        *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x534) = uVar14;
        *(undefined4 *)(param_2 + 0x540) = uVar12;
        *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x548) = uVar13;
        *(undefined4 *)(param_2 + 0x254) = uVar11;
        *(undefined4 *)(param_2 + 600) = uVar9;
        *(undefined4 *)(param_2 + 0x250) = uVar11;
        *(undefined4 *)(param_2 + 0x25c) = uVar10;
      }
      uVar27 = (ulonglong)*(ushort *)(param_2 + 0x4c);
      uVar1 = *(ushort *)(param_2 + 0x4a);
      lVar20 = uVar27 * 8 + (ulonglong)uStack_67c;
      lVar34 = uVar27 * 8 + (ulonglong)uStack_680;
      uStack_67c = (uint)lVar20;
      uStack_680 = (uint)lVar34;
      lVar37 = (ulonglong)uVar1 * 0x10 + (ulonglong)uStack_678;
      uStack_678 = (uint)lVar37;
      if ((uVar28 & (((int)((iStack_684 - uVar18) + 1) >> 0x1f) + 1U |
                    *(uint *)((iStack_684 + 1) * 4 + *(int *)(param_2 + 0x518)))) != 0) {
        uVar2 = *(ushort *)(param_2 + 0x32);
        uVar28 = (uint)uVar2;
        iVar36 = *param_3;
        iVar5 = (int)(uint)uVar2 >> 1;
        lVar35 = (longlong)iVar5;
        iVar4 = *(int *)(param_2 + 0x160);
        if (uVar2 != 0) {
          lVar38 = 0;
          piVar26 = (int *)(iVar36 * 4 + *(int *)(param_2 + 0x15c) + uVar28 * -4);
          uVar39 = uVar28;
          do {
            if (*piVar26 == 0x4000) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x534) + lVar38,
                                (ulonglong)*(uint *)(param_2 + 0x530) + lVar38,uVar28,lVar37,
                                (ulonglong)uVar1,1,0,0);
            }
            uVar39 = uVar39 - 1;
            piVar26 = piVar26 + 1;
            lVar37 = lVar37 + 8;
            lVar38 = lVar38 + 0x10;
          } while (uVar39 != 0);
          uVar32 = (ulonglong)uVar33;
        }
        if (iVar5 != 0) {
          lVar37 = 0;
          piVar26 = (int *)((iVar36 >> 2) * 4 + iVar4 + iVar5 * -4);
          lVar20 = lVar20 - lVar34;
          do {
            if (*piVar26 == 0x4000) {
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x540) + lVar37,
                                (ulonglong)*(uint *)(param_2 + 0x53c) + lVar37,uVar28,
                                lVar34 + lVar20,uVar27,1,0,0);
              fn_82C8FD40((ulonglong)*(uint *)(param_2 + 0x548) + lVar37,
                                (ulonglong)*(uint *)(param_2 + 0x544) + lVar37,uVar28,lVar34,uVar27,
                                1,0,0);
            }
            lVar35 = lVar35 + -1;
            piVar26 = piVar26 + 1;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + 0x10;
          } while (lVar35 != 0);
          uVar32 = (ulonglong)uVar33;
        }
        uVar9 = *(undefined4 *)(param_2 + 0x548);
        uVar10 = *(undefined4 *)(param_2 + 0x540);
        uVar11 = *(undefined4 *)(param_2 + 0x544);
        uVar12 = *(undefined4 *)(param_2 + 0x538);
        uVar13 = *(undefined4 *)(param_2 + 0x53c);
        *(undefined4 *)(param_2 + 0x538) = *(undefined4 *)(param_2 + 0x534);
        *(undefined4 *)(param_2 + 0x544) = uVar9;
        *(undefined4 *)(param_2 + 0x53c) = uVar10;
        *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x534) = uVar12;
        *(undefined4 *)(param_2 + 0x540) = uVar13;
        *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_2 + 0x530);
        *(undefined4 *)(param_2 + 0x548) = uVar11;
        *(undefined4 *)(param_2 + 600) = uVar10;
        *(undefined4 *)(param_2 + 0x25c) = uVar9;
        *(undefined4 *)(param_2 + 0x254) = *(undefined4 *)(param_2 + 0x538);
        *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(param_2 + 0x538);
        param_1 = iStack00000014;
      }
      iStack_684 = iStack_684 + 1;
    } while (iStack_684 < iStack0000003c);
  }
  *(uint *)(param_1 + 0xbbc) = (uint)bStack_690;
  return 0;
}


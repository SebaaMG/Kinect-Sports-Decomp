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
extern int fn_82C75DE8();
extern int fn_82C8F130();
extern int fn_82C8F560();
extern unsigned int iStack00000014;
extern unsigned int iStack_c0;
extern unsigned int lbl_820FC480;
extern unsigned int lbl_820FC550;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_cc;


longlong fn_82C76868(int param_1,int param_2,longlong param_3,uint param_4,uint param_5,
                      ulonglong param_6,ulonglong param_7)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  ushort uVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar23;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar24;
  int iVar30;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  int iVar35;
  byte *pbVar36;
  int iVar37;
  int iStack00000014;
  uint uStack0000002c;
  uint uStack00000034;
  uint uStack0000003c;
  uint uStack00000044;
  uint uStack_cc;
  int iStack_c0;
  
  uVar4 = *(ushort *)(param_2 + 0x4a);
  uStack_cc = (uint)param_6;
  uStack00000044 = (uint)param_7;
  uVar5 = *(ushort *)(param_2 + 0x4c);
  uVar11 = (uint)(*(ushort *)(param_2 + 0x32) >> 1);
  uVar13 = *(ushort *)(param_2 + 0x34) >> 1;
  iVar30 = *(int *)(param_1 + 0x3d68);
  iVar35 = *(int *)(param_1 + 0x3d6c);
  lVar19 = (ulonglong)uVar4 * 8;
  iVar7 = *(int *)(param_2 + 0x54c);
  lVar27 = (ulonglong)uVar4 * 0x10;
  iVar8 = *(int *)(param_1 + 0x3d70);
  iVar9 = *(int *)(param_1 + 0x3d74);
  uVar32 = (uint)uVar13;
  iStack00000014 = param_1;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = uStack_cc;
  lVar16 = fn_82C75DE8(param_1,param_6);
  uVar23 = uVar11 * uStack_cc;
  pbVar34 = (byte *)(uVar23 * 2 + iVar30);
  pbVar36 = (byte *)(uVar23 * 2 + iVar35);
  iVar30 = *(int *)(param_2 + 0x634);
  iVar35 = (int)lVar16;
  if (iVar30 == 0) {
    if (*(int *)(iVar35 + 0x50c8) != 0) {
      return lVar16;
    }
    iVar30 = *(int *)(iVar35 + 0x50cc);
    bVar14 = false;
  }
  else {
    if (iVar30 != 2) {
      if (iVar30 != 1) {
        return lVar16;
      }
      if (*(int *)(iVar35 + 0x50c8) != 1) {
        return lVar16;
      }
      bVar14 = true;
      bVar15 = true;
      if (*(int *)(iVar35 + 0x50cc) != 1) {
        return lVar16;
      }
      goto LAB_82c769a4;
    }
    if (*(int *)(iVar35 + 0x50c8) != 1) {
      return lVar16;
    }
    iVar30 = *(int *)(iVar35 + 0x50cc);
    bVar14 = true;
  }
  bVar15 = false;
  if (iVar30 != 0) {
    return lVar16;
  }
LAB_82c769a4:
  uVar24 = (ulonglong)*(ushort *)(param_2 + 0x4a);
  lVar18 = lVar19 + param_3;
  lVar26 = uVar24 * 3;
  dataCacheBlockTouch(uVar24 * -4 + lVar18);
  dataCacheBlockTouch(uVar24 * -3 + lVar18);
  lVar16 = uVar24 * 2;
  dataCacheBlockTouch(uVar24 * -2 + lVar18);
  dataCacheBlockTouch(-uVar24 + lVar18);
  dataCacheBlockTouch(lVar19 + param_3);
  dataCacheBlockTouch(uVar24 + lVar18);
  dataCacheBlockTouch(lVar16 + lVar18);
  dataCacheBlockTouch(lVar26 + lVar18);
  lVar19 = lVar27 + param_3;
  dataCacheBlockTouch(uVar24 * -4 + lVar19);
  dataCacheBlockTouch(uVar24 * -3 + lVar19);
  dataCacheBlockTouch(uVar24 * -2 + lVar19);
  dataCacheBlockTouch(-uVar24 + lVar19);
  dataCacheBlockTouch(lVar27 + param_3);
  dataCacheBlockTouch(uVar24 + lVar19);
  dataCacheBlockTouch(lVar16 + lVar19);
  dataCacheBlockTouch(lVar26 + lVar19);
  dataCacheBlockTouch(param_3);
  dataCacheBlockTouch(uVar24 + param_3);
  dataCacheBlockTouch(lVar16 + param_3);
  dataCacheBlockTouch(lVar26 + param_3);
  if (((bVar14) && (bVar15)) && (*(int *)(param_2 + 0x55c) == 1)) {
    iVar30 = *(int *)(iVar35 + 0x55d4) + (uint)uVar13 * 4;
  }
  else {
    iVar30 = *(int *)(iVar35 + 0x55d4);
  }
  *(int *)(iVar35 + 0x55d0) = iVar30;
  if ((param_6 & 0xffffffff) < (param_7 & 0xffffffff)) {
    iStack_c0 = uStack0000003c << 2;
    do {
      if (*(int *)(iStack00000014 + 0x55b4) == 0) {
        iVar30 = -(((ulonglong)uStack_cc < (ulonglong)uVar32 - 1) - 1);
      }
      else if (((ulonglong)uStack_cc < ((ulonglong)uVar32 - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(iStack00000014 + 0x55d0) + iStack_c0 + 4) == 0)) {
        iVar30 = 0;
      }
      else {
        iVar30 = 1;
      }
      bVar1 = *pbVar34;
      bVar3 = pbVar34[1];
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      pbVar34 = pbVar34 + 2;
      lVar19 = param_3 + (ulonglong)uVar4 * 8;
      if (bVar3 >> 4 != 0) {
        uVar10 = *(uint *)(&lbl_820FC480 + (uint)(bVar3 >> 4) * 4);
        fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 8 & 0xff);
        if ((uVar10 & 1) != 0) {
          fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 0x18
                           );
        }
      }
      if (iVar30 == 0) {
        uVar2 = *(undefined1 *)(param_2 + 0x4dc);
        uVar6 = *(undefined2 *)(param_2 + 0x4a);
        lVar19 = param_3 + (ulonglong)uVar4 * 0x10;
        if ((bVar3 & 0xf) != 0) {
          uVar10 = *(uint *)(&lbl_820FC480 + (bVar3 & 0xf) * 4);
          fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 8 & 0xff);
          if ((uVar10 & 1) != 0) {
            fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar19,uVar6,uVar2,
                              uVar10 >> 0x18);
          }
        }
      }
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      lVar19 = param_3 + (ulonglong)uVar4 * 4;
      if (bVar1 >> 4 != 0) {
        uVar10 = *(uint *)(&lbl_820FC480 + (uint)(bVar1 >> 4) * 4);
        fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 8 & 0xff);
        if ((uVar10 & 1) != 0) {
          fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 0x18
                           );
        }
      }
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      lVar19 = param_3 + (ulonglong)((uint)uVar4 * 0xc);
      if ((bVar1 & 0xf) != 0) {
        uVar10 = *(uint *)(&lbl_820FC480 + (bVar1 & 0xf) * 4);
        fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 8 & 0xff);
        if ((uVar10 & 1) != 0) {
          fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar19,uVar6,uVar2,uVar10 >> 0x18
                           );
        }
      }
      uVar24 = 1;
      lVar19 = param_3;
      if (1 < uVar11) {
        lVar27 = param_3;
        do {
          lVar16 = lVar27 + 0x10;
          bVar1 = *pbVar34;
          uVar24 = uVar24 + 1;
          bVar3 = pbVar34[1];
          pbVar34 = pbVar34 + 2;
          if (uVar24 == 0) {
            uVar20 = (ulonglong)*(ushort *)(param_2 + 0x4a);
            lVar18 = uVar20 * 3;
            lVar25 = lVar16 + (ulonglong)uVar4 * 8 + 0x10;
            lVar17 = (-uVar20 & 0x3fffffff) * 4;
            dataCacheBlockTouch(lVar17 + lVar25);
            dataCacheBlockTouch(uVar20 * -3 + lVar25);
            lVar26 = uVar20 * 2;
            dataCacheBlockTouch(uVar20 * -2 + lVar25);
            dataCacheBlockTouch(-uVar20 + lVar25);
            dataCacheBlockTouch(lVar25);
            dataCacheBlockTouch(uVar20 + lVar25);
            dataCacheBlockTouch(lVar26 + lVar25);
            dataCacheBlockTouch(lVar18 + lVar25);
            lVar25 = lVar16 + (ulonglong)uVar4 * 0x10 + 0x10;
            dataCacheBlockTouch(lVar17 + lVar25);
            dataCacheBlockTouch(uVar20 * -3 + lVar25);
            dataCacheBlockTouch(uVar20 * -2 + lVar25);
            dataCacheBlockTouch(-uVar20 + lVar25);
            dataCacheBlockTouch(lVar25);
            dataCacheBlockTouch(uVar20 + lVar25);
            dataCacheBlockTouch(lVar26 + lVar25);
            dataCacheBlockTouch(lVar18 + lVar25);
            lVar17 = lVar27 + 0x20;
            dataCacheBlockTouch(lVar17);
            dataCacheBlockTouch(uVar20 + lVar17);
            dataCacheBlockTouch(lVar26 + lVar17);
            dataCacheBlockTouch(lVar18 + lVar17);
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if (bVar3 >> 4 != 0) {
            lVar26 = (ulonglong)uVar4 * 8 + lVar16;
            uVar10 = *(uint *)(&lbl_820FC480 + (uint)(bVar3 >> 4) * 4);
            fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar26,uVar6,uVar2,uVar10 >> 8 & 0xff);
            if ((uVar10 & 1) != 0) {
              fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar26,uVar6,uVar2,
                                uVar10 >> 0x18);
            }
          }
          if (iVar30 == 0) {
            uVar2 = *(undefined1 *)(param_2 + 0x4dc);
            uVar6 = *(undefined2 *)(param_2 + 0x4a);
            if ((bVar3 & 0xf) != 0) {
              lVar26 = (ulonglong)uVar4 * 0x10 + lVar16;
              uVar10 = *(uint *)(&lbl_820FC480 + (bVar3 & 0xf) * 4);
              fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar26,uVar6,uVar2,uVar10 >> 8 & 0xff);
              if ((uVar10 & 1) != 0) {
                fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar26,uVar6,uVar2,
                                  uVar10 >> 0x18);
              }
            }
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if (bVar1 >> 4 != 0) {
            lVar26 = (ulonglong)uVar4 * 4 + lVar16;
            uVar10 = *(uint *)(&lbl_820FC480 + (uint)(bVar1 >> 4) * 4);
            fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar26,uVar6,uVar2,uVar10 >> 8 & 0xff);
            if ((uVar10 & 1) != 0) {
              fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar26,uVar6,uVar2,
                                uVar10 >> 0x18);
            }
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if ((bVar1 & 0xf) != 0) {
            lVar26 = (ulonglong)((uint)uVar4 * 0xc) + lVar16;
            uVar10 = *(uint *)(&lbl_820FC480 + (bVar1 & 0xf) * 4);
            fn_82C8F130(((ulonglong)uVar10 & 0xfe) + lVar26,uVar6,uVar2,uVar10 >> 8 & 0xff);
            if ((uVar10 & 1) != 0) {
              fn_82C8F130(((ulonglong)(uVar10 >> 0x10) & 0xfe) + lVar26,uVar6,uVar2,
                                uVar10 >> 0x18);
            }
          }
          bVar1 = *pbVar36;
          bVar3 = pbVar36[1];
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          pbVar36 = pbVar36 + 2;
          if (bVar3 >> 4 != 0) {
            iVar35 = (uint)(bVar3 >> 4) * 0xc;
            iVar37 = iVar35 + iVar7;
            fn_82C8F560((ulonglong)*(uint *)(iVar37 + 4) + lVar27 + 3,uVar6,uVar2,
                            *(undefined1 *)(iVar35 + iVar7));
            if (-1 < *(char *)(iVar37 + 1)) {
              fn_82C8F560((ulonglong)*(uint *)(iVar37 + 8) + lVar27 + 3,uVar6,uVar2);
            }
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if ((bVar3 & 0xf) != 0) {
            iVar35 = ((bVar3 & 0xf) + (bVar3 & 0xf) * 2) * 4;
            iVar37 = iVar35 + iVar7;
            fn_82C8F560((ulonglong)*(uint *)(iVar37 + 4) + lVar27 + 0xb,uVar6,uVar2,
                            *(undefined1 *)(iVar35 + iVar7));
            if (-1 < *(char *)(iVar37 + 1)) {
              fn_82C8F560((ulonglong)*(uint *)(iVar37 + 8) + lVar27 + 0xb,uVar6,uVar2);
            }
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if (bVar1 >> 4 != 0) {
            iVar35 = (uint)(bVar1 >> 4) * 0xc;
            iVar37 = iVar35 + iVar7;
            fn_82C8F560((ulonglong)*(uint *)(iVar37 + 4) + lVar27 + -1,uVar6,uVar2,
                            *(undefined1 *)(iVar35 + iVar7));
            if (-1 < *(char *)(iVar37 + 1)) {
              fn_82C8F560((ulonglong)*(uint *)(iVar37 + 8) + lVar27 + -1,uVar6,uVar2);
            }
          }
          uVar2 = *(undefined1 *)(param_2 + 0x4dc);
          uVar6 = *(undefined2 *)(param_2 + 0x4a);
          if ((bVar1 & 0xf) != 0) {
            iVar35 = ((bVar1 & 0xf) + (bVar1 & 0xf) * 2) * 4;
            iVar37 = iVar35 + iVar7;
            fn_82C8F560((ulonglong)*(uint *)(iVar37 + 4) + lVar27 + 7,uVar6,uVar2,
                            *(undefined1 *)(iVar35 + iVar7));
            if (-1 < *(char *)(iVar37 + 1)) {
              fn_82C8F560((ulonglong)*(uint *)(iVar37 + 8) + lVar27 + 7,uVar6,uVar2);
            }
          }
          lVar19 = lVar19 + 0x10;
          lVar27 = lVar16;
        } while ((uVar24 & 0xffffffff) < (ulonglong)uVar11);
      }
      param_3 = (ulonglong)*(ushort *)(param_2 + 0x52) + param_3;
      if (iVar30 == 0) {
        uVar24 = (ulonglong)*(ushort *)(param_2 + 0x4a);
        lVar18 = param_3 + (ulonglong)uVar4 * 8;
        lVar16 = uVar24 * 3;
        lVar26 = (-uVar24 & 0x3fffffff) * 4;
        dataCacheBlockTouch(lVar26 + lVar18);
        dataCacheBlockTouch(uVar24 * -3 + lVar18);
        lVar27 = uVar24 * 2;
        dataCacheBlockTouch(uVar24 * -2 + lVar18);
        dataCacheBlockTouch(-uVar24 + lVar18);
        dataCacheBlockTouch(lVar18);
        dataCacheBlockTouch(uVar24 + lVar18);
        dataCacheBlockTouch(lVar27 + lVar18);
        dataCacheBlockTouch(lVar16 + lVar18);
        lVar18 = param_3 + (ulonglong)uVar4 * 0x10;
        dataCacheBlockTouch(lVar26 + lVar18);
        dataCacheBlockTouch(uVar24 * -3 + lVar18);
        dataCacheBlockTouch(uVar24 * -2 + lVar18);
        dataCacheBlockTouch(-uVar24 + lVar18);
        dataCacheBlockTouch(lVar18);
        dataCacheBlockTouch(uVar24 + lVar18);
        dataCacheBlockTouch(lVar27 + lVar18);
        dataCacheBlockTouch(lVar16 + lVar18);
        dataCacheBlockTouch(param_3);
        dataCacheBlockTouch(uVar24 + param_3);
        dataCacheBlockTouch(lVar27 + param_3);
        dataCacheBlockTouch(lVar16 + param_3);
      }
      bVar1 = *pbVar36;
      pbVar12 = pbVar36 + 1;
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      pbVar36 = pbVar36 + 2;
      if (*pbVar12 >> 4 != 0) {
        iVar30 = (uint)(*pbVar12 >> 4) * 0xc;
        iVar35 = iVar30 + iVar7;
        fn_82C8F560((ulonglong)*(uint *)(iVar35 + 4) + lVar19 + 3,uVar6,uVar2,
                        *(undefined1 *)(iVar30 + iVar7));
        if (-1 < *(char *)(iVar35 + 1)) {
          fn_82C8F560((ulonglong)*(uint *)(iVar35 + 8) + lVar19 + 3,uVar6,uVar2);
        }
      }
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      if (bVar1 >> 4 != 0) {
        iVar30 = (uint)(bVar1 >> 4) * 0xc;
        iVar35 = iVar30 + iVar7;
        fn_82C8F560((ulonglong)*(uint *)(iVar35 + 4) + lVar19 + -1,uVar6,uVar2,
                        *(undefined1 *)(iVar30 + iVar7));
        if (-1 < *(char *)(iVar35 + 1)) {
          fn_82C8F560((ulonglong)*(uint *)(iVar35 + 8) + lVar19 + -1,uVar6,uVar2);
        }
      }
      uVar2 = *(undefined1 *)(param_2 + 0x4dc);
      uVar6 = *(undefined2 *)(param_2 + 0x4a);
      if ((bVar1 & 0xf) != 0) {
        iVar30 = ((bVar1 & 0xf) + (bVar1 & 0xf) * 2) * 4;
        iVar35 = iVar30 + iVar7;
        fn_82C8F560((ulonglong)*(uint *)(iVar35 + 4) + lVar19 + 7,uVar6,uVar2,
                        *(undefined1 *)(iVar30 + iVar7));
        if (-1 < *(char *)(iVar35 + 1)) {
          fn_82C8F560((ulonglong)*(uint *)(iVar35 + 8) + lVar19 + 7,uVar6,uVar2);
        }
      }
      uStack_cc = uStack_cc + 1;
      iStack_c0 = iStack_c0 + 4;
    } while (uStack_cc < uStack00000044);
  }
  uVar24 = (ulonglong)*(ushort *)(param_2 + 0x4c);
  uVar20 = (ulonglong)uStack0000002c;
  lVar19 = (ulonglong)uVar5 * 8;
  lVar27 = lVar19 + uVar20;
  dataCacheBlockTouch(uVar24 * -4 + lVar27);
  dataCacheBlockTouch(uVar24 * -3 + lVar27);
  dataCacheBlockTouch(uVar24 * -2 + lVar27);
  dataCacheBlockTouch(lVar27 - uVar24);
  dataCacheBlockTouch(lVar19 + uVar20);
  dataCacheBlockTouch(uVar24 + lVar27);
  dataCacheBlockTouch(uVar24 * 2 + lVar27);
  dataCacheBlockTouch(uVar24 * 3 + lVar27);
  dataCacheBlockTouch(uVar20);
  dataCacheBlockTouch(uVar24 + uVar20);
  dataCacheBlockTouch(uVar24 * 2 + uVar20);
  dataCacheBlockTouch(uVar24 * 3 + uVar20);
  uVar33 = (ulonglong)uStack0000003c;
  uVar24 = uVar20;
  if (uVar33 < uStack00000044) {
    iVar30 = uStack0000003c << 2;
    pbVar36 = (byte *)(uVar23 + iVar9 + -1);
    pbVar34 = (byte *)(uVar23 + iVar8 + -1);
    do {
      if (*(int *)(iStack00000014 + 0x55b4) == 0) {
        iVar35 = -((uVar33 < (ulonglong)uVar32 - 1) - 1);
      }
      else if (((uVar33 & 0xffffffff) < ((ulonglong)uVar32 - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(iStack00000014 + 0x55d0) + iVar30 + 4) == 0)) {
        iVar35 = 0;
      }
      else {
        iVar35 = 1;
      }
      bVar1 = pbVar34[1];
      pbVar34 = pbVar34 + 1;
      if ((iVar35 == 0) && (bVar3 = bVar1 >> 2, (bVar3 & 3) != 0)) {
        fn_82C8F130(((byte)(&lbl_820FC550)[bVar3 & 3] >> 4) + uVar24 + (ulonglong)uVar5 * 8,
                          *(undefined2 *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                          (&lbl_820FC550)[bVar3 & 3] & 0xf);
      }
      lVar19 = (ulonglong)uVar5 * 8;
      bVar1 = bVar1 >> 6;
      if (bVar1 != 0) {
        fn_82C8F130(((byte)(&lbl_820FC550)[bVar1] >> 4) + uVar24 + (ulonglong)uVar5 * 4,
                          *(undefined2 *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                          (&lbl_820FC550)[bVar1] & 0xf);
      }
      uVar31 = uVar24 + 8;
      uVar28 = 1;
      uVar20 = uVar24;
      if (1 < uVar11) {
        lVar27 = uVar24 + 0x10;
        do {
          pbVar34 = pbVar34 + 1;
          bVar1 = *pbVar34;
          uVar28 = uVar28 + 1;
          if (uVar28 == 0) {
            uVar21 = (ulonglong)*(ushort *)(param_2 + 0x4c);
            lVar16 = uVar31 + lVar19 + 8;
            dataCacheBlockTouch((-uVar21 & 0x3fffffff) * 4 + lVar16);
            dataCacheBlockTouch(uVar21 * -3 + lVar16);
            dataCacheBlockTouch(uVar21 * -2 + lVar16);
            dataCacheBlockTouch(lVar16 - uVar21);
            dataCacheBlockTouch(lVar16);
            dataCacheBlockTouch(uVar21 + lVar16);
            dataCacheBlockTouch(uVar21 * 2 + lVar16);
            dataCacheBlockTouch(uVar21 * 3 + lVar16);
            dataCacheBlockTouch(lVar27);
            dataCacheBlockTouch(uVar21 + lVar27);
            dataCacheBlockTouch(uVar21 * 2 + lVar27);
            dataCacheBlockTouch(uVar21 * 3 + lVar27);
          }
          if ((iVar35 == 0) && (bVar3 = bVar1 >> 2, (bVar3 & 3) != 0)) {
            fn_82C8F130(((byte)(&lbl_820FC550)[bVar3 & 3] >> 4) + uVar31 + lVar19,
                              *(undefined2 *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                              (&lbl_820FC550)[bVar3 & 3] & 0xf);
          }
          bVar1 = bVar1 >> 6;
          if (bVar1 != 0) {
            fn_82C8F130(((byte)(&lbl_820FC550)[bVar1] >> 4) + uVar31 + (ulonglong)uVar5 * 4,
                              *(undefined2 *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                              (&lbl_820FC550)[bVar1] & 0xf);
          }
          bVar1 = pbVar36[1];
          pbVar36 = pbVar36 + 1;
          bVar3 = bVar1 >> 2;
          if ((bVar3 & 3) != 0) {
            fn_82C8F560((longlong)(int)(uint)((byte)(&lbl_820FC550)[bVar3 & 3] >> 4) *
                            (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar20 + 3,
                            *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                            (&lbl_820FC550)[bVar3 & 3] & 0xf);
          }
          bVar1 = bVar1 >> 6;
          if (bVar1 != 0) {
            fn_82C8F560((longlong)(int)(uint)((byte)(&lbl_820FC550)[bVar1] >> 4) *
                            (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar20 + -1,
                            *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                            (&lbl_820FC550)[bVar1] & 0xf);
          }
          uVar31 = uVar31 + 8;
          lVar27 = lVar27 + 8;
          uVar20 = uVar20 + 8;
        } while ((uVar28 & 0xffffffff) < (ulonglong)uVar11);
      }
      uVar24 = *(ushort *)(param_2 + 0x54) + uVar24;
      if (iVar35 == 0) {
        uVar28 = (ulonglong)*(ushort *)(param_2 + 0x4c);
        lVar27 = uVar24 + lVar19;
        dataCacheBlockTouch((-uVar28 & 0x3fffffff) * 4 + lVar27);
        dataCacheBlockTouch(uVar28 * -3 + lVar27);
        dataCacheBlockTouch(uVar28 * -2 + lVar27);
        dataCacheBlockTouch(lVar27 - uVar28);
        dataCacheBlockTouch(uVar24 + lVar19);
        dataCacheBlockTouch(uVar28 + lVar27);
        dataCacheBlockTouch(uVar28 * 2 + lVar27);
        dataCacheBlockTouch(uVar28 * 3 + lVar27);
        dataCacheBlockTouch(uVar24);
        dataCacheBlockTouch(uVar28 + uVar24);
        dataCacheBlockTouch(uVar28 * 2 + uVar24);
        dataCacheBlockTouch(uVar28 * 3 + uVar24);
      }
      pbVar36 = pbVar36 + 1;
      if (*pbVar36 >> 6 != 0) {
        fn_82C8F560((longlong)(int)(uint)((byte)(&lbl_820FC550)[*pbVar36 >> 6] >> 4) *
                        (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar20 + -1,
                        *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                        (&lbl_820FC550)[*pbVar36 >> 6] & 0xf);
      }
      uVar33 = uVar33 + 1;
      iVar30 = iVar30 + 4;
    } while ((uVar33 & 0xffffffff) < (ulonglong)uStack00000044);
    uVar20 = (ulonglong)uStack0000002c;
    uVar33 = (ulonglong)uStack0000003c;
    lVar19 = (ulonglong)uVar5 << 3;
  }
  else {
    uVar31 = (ulonglong)uVar23;
  }
  uVar28 = (ulonglong)*(ushort *)(param_2 + 0x4c);
  uVar21 = (ulonglong)uStack00000034;
  lVar16 = lVar19 + uVar21;
  dataCacheBlockTouch(uVar28 * -4 + lVar16);
  dataCacheBlockTouch(uVar28 * -3 + lVar16);
  lVar27 = uVar28 * 2;
  dataCacheBlockTouch(uVar28 * -2 + lVar16);
  dataCacheBlockTouch(lVar16 - uVar28);
  dataCacheBlockTouch(lVar19 + uVar21);
  dataCacheBlockTouch(uVar28 + lVar16);
  dataCacheBlockTouch(lVar27 + lVar16);
  dataCacheBlockTouch(uVar28 * 3 + lVar16);
  dataCacheBlockTouch(uVar20);
  dataCacheBlockTouch(uVar28 + uVar20);
  dataCacheBlockTouch(lVar27 + uVar20);
  dataCacheBlockTouch(uVar28 * 3 + uVar20);
  if (uVar33 < uStack00000044) {
    pbVar36 = (byte *)(*(int *)(iStack00000014 + 0x3d74) + uVar23 + -1);
    pbVar34 = (byte *)(*(int *)(iStack00000014 + 0x3d70) + uVar23 + -1);
    iVar30 = uStack0000003c << 2;
    lVar19 = (ulonglong)uVar5 * 8;
    do {
      if (*(int *)(iStack00000014 + 0x55b4) == 0) {
        iVar35 = -((uVar33 < (ulonglong)uVar32 - 1) - 1);
      }
      else if (((uVar33 & 0xffffffff) < ((ulonglong)uVar32 - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(iStack00000014 + 0x55d0) + iVar30 + 4) == 0)) {
        iVar35 = 0;
      }
      else {
        iVar35 = 1;
      }
      bVar1 = pbVar34[1];
      pbVar34 = pbVar34 + 1;
      if ((iVar35 == 0) && ((bVar1 & 3) != 0)) {
        lVar27 = fn_82C8F130(((byte)(&lbl_820FC550)[bVar1 & 3] >> 4) + uVar21 + lVar19,
                                   *(undefined2 *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                                   (&lbl_820FC550)[bVar1 & 3] & 0xf);
      }
      if ((bVar1 >> 4 & 3) != 0) {
        lVar27 = fn_82C8F130(((byte)(&lbl_820FC550)[bVar1 >> 4 & 3] >> 4) + uVar21 +
                                   (ulonglong)uVar5 * 4,*(undefined2 *)(param_2 + 0x4c),
                                   *(undefined1 *)(param_2 + 0x4dc),
                                   (&lbl_820FC550)[bVar1 >> 4 & 3] & 0xf);
      }
      uVar29 = 1;
      uVar28 = uVar21;
      uVar20 = uVar21;
      if (1 < uVar11) {
        do {
          uVar20 = uVar20 + 8;
          pbVar34 = pbVar34 + 1;
          bVar1 = *pbVar34;
          uVar29 = uVar29 + 1;
          if (uVar29 == 0) {
            uVar22 = (ulonglong)*(ushort *)(param_2 + 0x4c);
            lVar16 = uVar20 + lVar19 + 8;
            dataCacheBlockTouch((-uVar22 & 0x3fffffff) * 4 + lVar16);
            dataCacheBlockTouch(uVar22 * -3 + lVar16);
            dataCacheBlockTouch(uVar22 * -2 + lVar16);
            lVar27 = -uVar22;
            dataCacheBlockTouch(lVar27 + lVar16);
            dataCacheBlockTouch(lVar16);
            dataCacheBlockTouch(uVar22 + lVar16);
            dataCacheBlockTouch(uVar22 * 2 + lVar16);
            dataCacheBlockTouch(uVar22 * 3 + lVar16);
            lVar16 = uVar31 + 8;
            dataCacheBlockTouch(lVar16);
            dataCacheBlockTouch(uVar22 + lVar16);
            dataCacheBlockTouch(uVar22 * 2 + lVar16);
            dataCacheBlockTouch(uVar22 * 3 + lVar16);
          }
          if ((iVar35 == 0) && ((bVar1 & 3) != 0)) {
            lVar27 = fn_82C8F130(((byte)(&lbl_820FC550)[bVar1 & 3] >> 4) + uVar20 + lVar19,
                                       *(undefined2 *)(param_2 + 0x4c),
                                       *(undefined1 *)(param_2 + 0x4dc),
                                       (&lbl_820FC550)[bVar1 & 3] & 0xf);
          }
          if ((bVar1 >> 4 & 3) != 0) {
            lVar27 = fn_82C8F130(((byte)(&lbl_820FC550)[bVar1 >> 4 & 3] >> 4) + uVar20 +
                                       (ulonglong)uVar5 * 4,*(undefined2 *)(param_2 + 0x4c),
                                       *(undefined1 *)(param_2 + 0x4dc),
                                       (&lbl_820FC550)[bVar1 >> 4 & 3] & 0xf);
          }
          bVar1 = pbVar36[1];
          pbVar36 = pbVar36 + 1;
          if ((bVar1 & 3) != 0) {
            lVar27 = fn_82C8F560((longlong)(int)(uint)((byte)(&lbl_820FC550)[bVar1 & 3] >> 4) *
                                     (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar28 + 3,
                                     *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                                     (&lbl_820FC550)[bVar1 & 3] & 0xf);
          }
          if ((bVar1 >> 4 & 3) != 0) {
            lVar27 = fn_82C8F560((longlong)
                                     (int)(uint)((byte)(&lbl_820FC550)[bVar1 >> 4 & 3] >> 4) *
                                     (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar28 + -1,
                                     *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                                     (&lbl_820FC550)[bVar1 >> 4 & 3] & 0xf);
          }
          uVar28 = uVar28 + 8;
        } while ((uVar29 & 0xffffffff) < (ulonglong)uVar11);
      }
      uVar21 = *(ushort *)(param_2 + 0x54) + uVar21;
      if (iVar35 == 0) {
        uVar20 = (ulonglong)*(ushort *)(param_2 + 0x4c);
        lVar16 = uVar21 + lVar19;
        dataCacheBlockTouch((-uVar20 & 0x3fffffff) * 4 + lVar16);
        dataCacheBlockTouch(uVar20 * -3 + lVar16);
        dataCacheBlockTouch(uVar20 * -2 + lVar16);
        lVar27 = -uVar20;
        dataCacheBlockTouch(lVar27 + lVar16);
        dataCacheBlockTouch(uVar21 + lVar19);
        dataCacheBlockTouch(uVar20 + lVar16);
        dataCacheBlockTouch(uVar20 * 2 + lVar16);
        dataCacheBlockTouch(uVar20 * 3 + lVar16);
        dataCacheBlockTouch(uVar24);
        dataCacheBlockTouch(uVar20 + uVar24);
        dataCacheBlockTouch(uVar20 * 2 + uVar24);
        dataCacheBlockTouch(uVar20 * 3 + uVar24);
      }
      pbVar36 = pbVar36 + 1;
      if ((*pbVar36 >> 4 & 3) != 0) {
        lVar27 = fn_82C8F560((longlong)
                                 (int)(uint)((byte)(&lbl_820FC550)[*pbVar36 >> 4 & 3] >> 4) *
                                 (longlong)(int)(uint)*(ushort *)(param_2 + 0x4c) + uVar28 + -1,
                                 *(ushort *)(param_2 + 0x4c),*(undefined1 *)(param_2 + 0x4dc),
                                 (&lbl_820FC550)[*pbVar36 >> 4 & 3] & 0xf);
      }
      uVar33 = uVar33 + 1;
      iVar30 = iVar30 + 4;
    } while ((uVar33 & 0xffffffff) < (ulonglong)uStack00000044);
  }
  return lVar27;
}


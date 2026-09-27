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
extern unsigned int *auStack_2f0;
extern int fn_826C8C70();
extern int fn_826D78C0();
extern int fn_826E7430();
extern int fn_826E7448();
extern int fn_826E7638();
extern int fn_826E7990();
extern int fn_826E7A08();
extern int fn_826E7B08();
extern int fn_826E8400();
extern int fn_826E8488();
extern int fn_826E8560();
extern int fn_826E8610();
extern int fn_826E8FF0();
extern int fn_8275D158();
extern int fn_8275D218();
extern int fn_82760330();
extern int fn_82763810();
extern int fn_82764DC0();
extern int memmove();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern float lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2bc;
extern unsigned int uStack_2c0;
extern unsigned int uStack_2c4;
extern unsigned int uStack_2db;
extern unsigned int uStack_354;
extern unsigned int uStack_358;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;
extern unsigned int uStack_398;
extern unsigned int uStack_3a0;


void fn_82764EF0(int *param_1,int param_2,undefined8 param_3,longlong param_4,char param_5,
                  int *param_6,int *param_7,ulonglong param_8)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulonglong uVar6;
  byte *pbVar12;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar13;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar14;
  int iVar15;
  char cVar19;
  longlong lVar11;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  bool bVar34;
  double dVar35;
  double dVar36;
  int *piStack00000014;
  int iStack0000001c;
  int iStack00000024;
  int *piStack0000003c;
  int *piStack00000044;
  uint uStack_3a0;
  uint uStack_398;
  struct { undefined4 first; undefined4 second; } stack_pair_360;

  undefined4 uStack_358;
  undefined4 uStack_354;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  undefined1 auStack_2f0 [21];
  undefined1 uStack_2db;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  
  iVar15 = (int)param_3;
  if ((param_8 & 0xffffffff) == 0) {
    param_8 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x20) + 0x18);
  }
  iVar24 = param_2 + 0x28;
  if (*(int *)(param_2 + 0x314) != 0) {
    iVar24 = *(int *)(param_2 + 0x314);
  }
  piStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000024 = iVar15;
  piStack0000003c = param_6;
  piStack00000044 = param_7;
  if (param_5 == '\0') {
    lVar21 = 0;
  }
  else {
    uVar23 = *(uint *)(iVar24 + 0x34);
    uVar20 = *(uint *)(iVar24 + 0x30);
    uVar2 = *(uint *)(iVar24 + 0x2c);
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x10;
    fn_826E8FF0(iVar24,param_1 + 1);
    if ((iVar15 == 0x53) || (iVar15 == 0x4b)) {
      stack_pair_360.first = lbl_821AAD20;
      stack_pair_360.second = lbl_821AAD20;
      uStack_358 = lbl_821AAD20;
      uStack_354 = lbl_821AAD20;
      fn_826E8FF0(iVar24,&stack_pair_360.first);
      (**(code **)(*param_1 + 8))(param_1,&stack_pair_360.first);
      *(undefined1 *)(iVar24 + 0x15) = 0;
      if (*(int *)(iVar24 + 0x30) - *(int *)(iVar24 + 0x2c) < 1) {
        fn_826E7990(iVar24);
      }
      *(int *)(iVar24 + 0x2c) = *(int *)(iVar24 + 0x2c) + 1;
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,param_1 + 1);
    }
    fn_82764DC0(param_6,param_2,param_3);
    fn_82763810(param_7,param_2,param_3);
    lVar21 = (((ulonglong)*(uint *)(iVar24 + 0x34) - (ulonglong)*(uint *)(iVar24 + 0x30)) -
             (((ulonglong)uVar23 - (ulonglong)uVar20) + (ulonglong)uVar2)) +
             (ulonglong)*(uint *)(iVar24 + 0x2c);
  }
  iVar14 = 0;
  uVar31 = param_4 - lVar21;
  bVar5 = false;
  bVar34 = false;
  uStack_398 = (uint)uVar31;
  lVar21 = uVar31 + 1;
  if (param_5 != '\0') {
    if ((param_6 != (int *)0x0) && (param_6[1] != 0)) {
      lVar21 = uVar31 + 3;
      bVar34 = true;
    }
    bVar5 = false;
    if ((param_7 != (int *)0x0) && (param_7[1] != 0)) {
      lVar21 = lVar21 + 2;
      bVar5 = true;
    }
  }
  uVar22 = lVar21 + 8;
  if ((uVar22 & 0xffffffff) < 0x100) {
    uVar32 = 1;
  }
  else if ((uVar22 & 0xffffffff) < 0x10000) {
    uVar32 = 2;
  }
  else {
    uVar32 = 4 - (ulonglong)(uVar22 < 0x1000000);
  }
  uVar22 = uVar32 + uVar22;
  uVar6 = fn_8275D158(param_8,uVar22);
  lVar21 = uVar6 + uVar32;
  pbVar12 = (byte *)uVar6;
  *pbVar12 = bVar34;
  lVar28 = lVar21 + 1;
  if (bVar34) {
    iVar29 = param_6[1];
    *(undefined1 *)lVar28 = (char)iVar29;
    *(byte *)((int)lVar21 + 2) = (byte)((uint)iVar29 >> 8) & 0x7f;
    lVar28 = lVar21 + 3;
  }
  if (bVar5) {
    iVar29 = param_7[1];
    *(undefined1 *)lVar28 = (char)iVar29;
    ((undefined1 *)lVar28)[1] = (byte)((uint)iVar29 >> 8) & 0x7f;
    lVar28 = lVar28 + 2;
  }
  *(undefined1 *)(iVar24 + 0x15) = 0;
  fn_826E7A08(iVar24,lVar28,uVar31);
  dVar35 = (double)lbl_82002AE0;
  dVar36 = dVar35;
  if (iVar15 == 0x4b) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
    dVar36 = (double)lbl_82005718;
  }
  uVar3 = *(undefined4 *)(iVar24 + 8);
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x1c);
  uVar7 = fn_826E7430(iVar24);
  fn_826E8400(auStack_2f0,lVar28,uVar31,uVar4,uVar7,uVar3);
  uStack_2db = 0;
  *(undefined1 **)(param_2 + 0x314) = auStack_2f0;
  uVar7 = fn_826E8488(auStack_2f0,4);
  uVar8 = fn_826E8488(auStack_2f0,4);
  if (param_5 != '\0') {
    fn_826C8C70(auStack_2f0,0xffffffff82014c10,uVar7,uVar8);
  }
  uStack_3a0 = 0;
  uVar25 = 0;
  uVar26 = 0;
  iVar15 = 0;
  uVar27 = 0;
  iVar29 = 0;
  iVar30 = 0;
  bVar34 = false;
  do {
    iVar13 = fn_826E8560(auStack_2f0);
    if (iVar13 == 0) {
      uVar9 = fn_826E8488(auStack_2f0,5);
      if (uVar9 == 0) {
        if (0 < iVar29) {
          uVar27 = uVar27 + 1;
          iVar30 = iVar30 + 1;
        }
        break;
      }
      if ((uVar9 & 1) != 0) {
        if (0 < iVar29) {
          uVar27 = uVar27 + 1;
          iVar29 = 0;
          iVar30 = iVar30 + 1;
        }
        uVar10 = fn_826E8488(auStack_2f0,5);
        iVar14 = fn_826E8610(auStack_2f0,uVar10);
        iVar15 = fn_826E8610(auStack_2f0,uVar10);
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          lStack_350 = (longlong)iVar15;
          lStack_318 = (longlong)iVar14;
          fn_82760330(auStack_2f0,0xffffffff82014ad0,(double)(float)((double)lStack_318 * dVar36),
                        (double)(float)((double)lStack_350 * dVar36));
        }
      }
      if (((uVar9 & 2) != 0) && (0 < (int)uVar7)) {
        if (0 < iVar29) {
          uVar27 = uVar27 + 1;
          iVar29 = 0;
          iVar30 = iVar30 + 1;
        }
        lVar21 = fn_826E8488(auStack_2f0,uVar7);
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          if (0 < (int)lVar21) {
            lVar21 = lVar21 + uVar25;
          }
          fn_82760330(auStack_2f0,"  ShapeCharacter read: fill0 = %d\n",lVar21);
        }
      }
      if (((uVar9 & 4) != 0) && (0 < (int)uVar7)) {
        if (0 < iVar29) {
          uVar27 = uVar27 + 1;
          iVar29 = 0;
          iVar30 = iVar30 + 1;
        }
        lVar21 = fn_826E8488(auStack_2f0,uVar7);
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          if (0 < (int)lVar21) {
            lVar21 = lVar21 + uVar25;
          }
          fn_82760330(auStack_2f0,"  ShapeCharacter read: fill1 = %d\n",lVar21);
        }
      }
      if (((uVar9 & 8) != 0) && (0 < (int)uVar8)) {
        if (0 < iVar29) {
          uVar27 = uVar27 + 1;
          iVar29 = 0;
          iVar30 = iVar30 + 1;
        }
        lVar21 = fn_826E8488(auStack_2f0,uVar8);
        if (0 < lVar21) {
          lVar21 = lVar21 + uVar26;
        }
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          fn_82760330(auStack_2f0,"  ShapeCharacter read: line = %d\n",lVar21);
        }
      }
      if ((uVar9 & 0x10) == 0) goto LAB_82765864;
      fn_826C8C70(auStack_2f0,"  ShapeCharacter read: more fill styles\n");
      iVar16 = iStack00000024;
      iVar13 = iStack0000001c;
      if (0 < iVar30) {
        iVar30 = 0;
        uStack_3a0 = uStack_3a0 + 1;
      }
      if (0 < iVar29) {
        uVar27 = uVar27 + 1;
        iVar29 = 0;
        iVar30 = iVar30 + 1;
      }
      if (piStack0000003c == (int *)0x0) {
        uVar25 = 0;
      }
      else {
        uVar25 = (ulonglong)(uint)piStack0000003c[1];
      }
      if (piStack00000044 == (int *)0x0) {
        uVar26 = 0;
      }
      else {
        uVar26 = (ulonglong)(uint)piStack00000044[1];
      }
      lVar21 = fn_82764DC0(piStack0000003c,iStack0000001c,iStack00000024);
      uVar33 = ((ulonglong)uStack_2c4 - (ulonglong)uStack_2c0) + (ulonglong)uStack_2bc;
      lVar11 = fn_82763810(piStack00000044,iVar13,iVar16);
      uVar9 = ((ulonglong)uStack_2c4 - (ulonglong)uStack_2c0) + (ulonglong)uStack_2bc;
      if ((int)uVar33 != (int)lVar21) {
        if (((int)lVar21 <= (int)uVar33) && ((uVar33 & 0xffffffff) <= (uVar31 & 0xffffffff))) {
          memmove(lVar21 + lVar28,uVar33 + lVar28,lVar11 - uVar33);
          lVar11 = (lVar11 - uVar33) + lVar21;
          goto LAB_827655a8;
        }
LAB_827658c4:
        bVar34 = true;
        break;
      }
LAB_827655a8:
      iVar13 = (int)uVar9;
      iVar16 = (int)lVar11;
      if (iVar16 != iVar13) {
        if ((iVar13 < iVar16) || ((uVar31 & 0xffffffff) < (uVar9 & 0xffffffff))) goto LAB_827658c4;
        memmove(lVar11 + lVar28,uVar9 + lVar28,uStack_398 - uVar9);
        uStack_398 = (iVar16 - iVar13) + uStack_398;
      }
      fn_826E7B08(auStack_2f0,lVar11);
      uVar7 = fn_826E8488(auStack_2f0,4);
      uVar8 = fn_826E8488(auStack_2f0,4);
    }
    else {
      iVar29 = iVar29 + 1;
      iVar13 = fn_826E8560(auStack_2f0);
      if (iVar13 == 0) {
        lVar21 = fn_826E8488(auStack_2f0,4);
        lVar21 = lVar21 + 2;
        iVar13 = fn_826E8610(auStack_2f0,lVar21);
        iVar16 = fn_826E8610(auStack_2f0,lVar21);
        iVar17 = fn_826E8610(auStack_2f0,lVar21);
        iVar18 = fn_826E8610(auStack_2f0,lVar21);
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          lStack_308 = (longlong)iVar15;
          lStack_340 = (longlong)iVar14;
          lStack_330 = (longlong)(iVar18 + iVar16 + iVar15);
          lStack_310 = (longlong)(iVar13 + iVar14);
          lStack_320 = (longlong)(iVar16 + iVar15);
          lStack_300 = (longlong)(iVar17 + iVar13 + iVar14);
          fn_82760330(auStack_2f0,0xffffffff82014af8,(double)(float)((double)lStack_340 * dVar36),
                        (double)(float)((double)lStack_308 * dVar36),
                        (double)(float)((double)lStack_310 * dVar36),
                        (double)(float)((double)lStack_320 * dVar36),
                        (double)(float)((double)lStack_300 * dVar36),
                        (double)(float)((double)lStack_330 * dVar36));
        }
        iVar14 = iVar17 + iVar13 + iVar14;
        iVar15 = iVar18 + iVar16 + iVar15;
      }
      else {
        lVar21 = fn_826E8488(auStack_2f0,4);
        lVar21 = lVar21 + 2;
        iVar17 = 0;
        iVar16 = 0;
        iVar13 = fn_826E8560(auStack_2f0);
        if (iVar13 == 0) {
          iVar13 = fn_826E8560(auStack_2f0);
          if (iVar13 != 0) goto LAB_827657a8;
          iVar17 = fn_826E8610(auStack_2f0,lVar21);
        }
        else {
          iVar17 = fn_826E8610(auStack_2f0,lVar21);
LAB_827657a8:
          iVar16 = fn_826E8610(auStack_2f0,lVar21);
        }
        cVar19 = fn_826E7448(auStack_2f0);
        if (cVar19 != '\0') {
          lStack_338 = (longlong)iVar14;
          lStack_328 = (longlong)(iVar16 + iVar15);
          lStack_348 = (longlong)iVar15;
          fn_82760330(auStack_2f0,0xffffffff82014b3c,(double)(float)((double)lStack_338 * dVar36),
                        (double)(float)((double)lStack_348 * dVar36),
                        (double)(float)((double)(longlong)(iVar17 + iVar14) * dVar36),
                        (double)(float)((double)lStack_328 * dVar36));
        }
        iVar14 = iVar17 + iVar14;
        iVar15 = iVar16 + iVar15;
      }
    }
LAB_82765864:
    bVar34 = (uVar31 & 0xffffffff) <
             ((ulonglong)uStack_2c4 - (ulonglong)uStack_2c0) + (ulonglong)uStack_2bc;
  } while (!bVar34);
  if (bVar34) {
    fn_826D78C0(auStack_2f0,0xffffffff82014aa4,
                      ((ulonglong)*(uint *)(iVar24 + 0x18) & 0xfffffffc) + 8);
    *pbVar12 = 0;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    if (6 < (uint)uVar22) {
      fn_8275D218((int)param_8,pbVar12,(uint)uVar22,6);
    }
  }
  else {
    if (iVar30 < 1) {
      uVar25 = (ulonglong)uStack_3a0;
    }
    else {
      uVar25 = (ulonglong)uStack_3a0 + 1;
    }
    uVar26 = uVar25;
    if ((uVar25 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
      uVar26 = uVar27;
    }
    if ((uVar26 & 0xffffffff) < 0x100) {
      uVar26 = 1;
    }
    else if ((uVar26 & 0xffffffff) < 0x10000) {
      uVar26 = 2;
    }
    else {
      uVar26 = 4 - (ulonglong)(uVar26 < 0x1000000);
    }
    uVar6 = uVar6 & 0xffffffff;
    uVar23 = 0;
    uVar33 = ((uVar26 & 0x7fffffff) * 2 +
             ((uVar22 & 0xffffffff) - (uVar31 & 0xffffffff)) + (ulonglong)uStack_398) - 8;
    uVar20 = (uint)uVar33;
    lVar21 = uVar33 + (uVar26 & 0x7fffffff) * -2 + uVar6;
    uVar31 = uVar26;
    uVar9 = uVar26 & 0xffffffff;
    while (uVar9 != 0) {
      *(undefined1 *)lVar21 = (char)((uint)uVar25 >> (uVar23 & 0x3f));
      uVar23 = uVar23 + 8;
      lVar21 = lVar21 + 1;
      uVar31 = uVar31 - 1;
      uVar9 = uVar31;
    }
    uVar23 = 0;
    if ((uVar26 & 0xffffffff) != 0) {
      lVar21 = lVar21 + -1;
      uVar31 = uVar26;
      do {
        uVar2 = uVar23 & 0x3f;
        uVar23 = uVar23 + 8;
        lVar21 = lVar21 + 1;
        *(undefined1 *)lVar21 = (char)((uint)uVar27 >> uVar2);
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    if ((uVar33 & 0xffffffff) < (uVar22 & 0xffffffff)) {
      fn_8275D218((int)param_8);
    }
    pbVar12 = (byte *)uVar6;
    uVar23 = 0;
    *pbVar12 = (byte)((uVar26 - 1 & 0xffffffff) << 5) & 0x60 | *pbVar12;
    for (uVar32 = uVar32 & 0xffffffff; uVar32 != 0; uVar32 = uVar32 - 1) {
      uVar2 = uVar23 & 0x3f;
      uVar23 = uVar23 + 8;
      uVar6 = uVar6 + 1;
      *(undefined1 *)uVar6 = (char)(uVar20 >> uVar2);
    }
  }
  piStack00000014[10] = (int)pbVar12;
  *(undefined4 *)(iStack0000001c + 0x314) = 0;
  bVar1 = *(byte *)(piStack00000014 + 9);
  *(byte *)(piStack00000014 + 9) = bVar1 & 0xfe;
  if (piStack0000003c != (int *)0x0) {
    uVar23 = 0;
    if (piStack0000003c[1] != 0) {
      iVar15 = 0;
      do {
        if (*(char *)(iVar15 + *piStack0000003c) != '\0') {
          *(byte *)(piStack00000014 + 9) = bVar1 & 0xfe | 1;
          break;
        }
        uVar23 = uVar23 + 1;
        iVar15 = iVar15 + 0x28;
      } while (uVar23 < (uint)piStack0000003c[1]);
    }
  }
  if ((*(byte *)(piStack00000014 + 9) & 0x40) != 0) {
    if ((piStack00000044 != (int *)0x0) &&
       (uVar31 = (ulonglong)(uint)piStack00000044[1], uVar31 != 0)) {
      iVar15 = 0;
      do {
        dVar36 = (double)((float)*(ushort *)(iVar15 + *piStack00000044 + 4) *
                          *(float *)(iVar15 + *piStack00000044 + 0x14) * lbl_82186E6C);
        if (dVar35 <= dVar36) {
          dVar35 = dVar36;
        }
        iVar15 = iVar15 + 0x18;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    (**(code **)(*piStack00000014 + 0x34))();
  }
  fn_826E7638(auStack_2f0);
  return;
}


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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_170;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_278;
extern unsigned int *auStack_f0;
extern int fn_8267BE38();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E7B08();
extern int fn_826E8FF0();
extern int fn_826F33F0();
extern int fn_82758858();
extern int fn_827588D8();
extern int fn_82758958();
extern int fn_82759498();
extern int fn_82759580();
extern int fn_827597E0();
extern int fn_8275A320();
extern int fn_8275FD10();
extern int fn_827601F0();
extern int fn_82760248();
extern int fn_82760330();
extern int fn_82760648();
extern int fn_82760B00();
extern int fn_82760BC0();
extern int fn_82766380();
extern int fn_82771FF0();
extern int fn_827724F8();
extern int fn_82772978();
extern int fn_82772B00();
extern int fn_82772CA0();
extern unsigned int iStack_22c;
extern unsigned int iStack_25c;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18c;
extern unsigned int uStack_270;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_284;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2a4;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b4;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bc;
extern unsigned int uStack_2c0;


void fn_82772E48(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  byte *pbVar18;
  undefined2 uVar20;
  undefined4 *puVar19;
  uint *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  double dVar29;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 auStack_278 [2];
  ulonglong uStack_270;
  byte abStack_260 [4];
  int iStack_25c;
  byte abStack_230 [4];
  int iStack_22c;
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [48];
  undefined1 auStack_1a0 [20];
  undefined4 uStack_18c;
  undefined1 auStack_170 [32];
  char cStack_150;
  undefined1 auStack_f0 [32];
  char cStack_d0;
  
  iVar28 = *(int *)(param_2 + 0x314);
  if (iVar28 == 0) {
    iVar28 = param_2 + 0x28;
  }
  uStack_2b0 = lbl_821AAD20;
  uStack_2ac = lbl_821AAD20;
  uStack_2a8 = lbl_821AAD20;
  uStack_2a4 = lbl_821AAD20;
  uStack_2c0 = lbl_821AAD20;
  uStack_2bc = lbl_821AAD20;
  uStack_2b8 = lbl_821AAD20;
  uStack_2b4 = lbl_821AAD20;
  uStack_290 = lbl_821AAD20;
  uStack_28c = lbl_821AAD20;
  uStack_288 = lbl_821AAD20;
  uStack_284 = lbl_821AAD20;
  uStack_2a0 = lbl_821AAD20;
  uStack_29c = lbl_821AAD20;
  uStack_298 = lbl_821AAD20;
  uStack_294 = lbl_821AAD20;
  fn_826E8FF0(iVar28,&uStack_2b0);
  fn_826E8FF0(iVar28,&uStack_2c0);
  if (*param_3 == 0x54) {
    fn_826E8FF0(iVar28,&uStack_290);
    fn_826E8FF0(iVar28,&uStack_2a0);
    *(undefined1 *)(iVar28 + 0x15) = 0;
    if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 1) {
      fn_826E7990(iVar28);
    }
    *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 1;
  }
  else {
    uStack_290 = uStack_2b0;
    uStack_28c = uStack_2ac;
    uStack_288 = uStack_2a8;
    uStack_284 = uStack_2a4;
    uStack_2a0 = uStack_2c0;
    uStack_29c = uStack_2bc;
    uStack_298 = uStack_2b8;
    uStack_294 = uStack_2b4;
  }
  iVar9 = *(int *)(param_1 + 0x8c);
  *(undefined4 *)(iVar9 + 4) = uStack_2b0;
  *(undefined4 *)(iVar9 + 8) = uStack_2ac;
  *(undefined4 *)(iVar9 + 0xc) = uStack_2a8;
  *(undefined4 *)(iVar9 + 0x10) = uStack_2a4;
  iVar9 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar9 + 4) = uStack_2c0;
  *(undefined4 *)(iVar9 + 8) = uStack_2bc;
  *(undefined4 *)(iVar9 + 0xc) = uStack_2b8;
  *(undefined4 *)(iVar9 + 0x10) = uStack_2b4;
  (**(code **)(**(int **)(param_1 + 0x8c) + 8))(*(int **)(param_1 + 0x8c),&uStack_290);
  (**(code **)(**(int **)(param_1 + 0x90) + 8))(*(int **)(param_1 + 0x90),&uStack_2a0);
  *(undefined1 *)(iVar28 + 0x15) = 0;
  if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 4) {
    fn_826E7800(iVar28,4);
  }
  iVar14 = *(int *)(iVar28 + 0x2c) + 4;
  iVar9 = *(int *)(iVar28 + 0x30);
  puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
  iVar10 = *(int *)(iVar28 + 0x34);
  uVar1 = puVar16[3];
  uVar2 = puVar16[2];
  uVar3 = puVar16[1];
  uVar4 = *puVar16;
  *(int *)(iVar28 + 0x2c) = iVar14;
  *(undefined1 *)(iVar28 + 0x15) = 0;
  if (iVar9 - iVar14 < 1) {
    fn_826E7990(iVar28);
  }
  iVar15 = *(int *)(iVar28 + 0x2c) + 1;
  uVar25 = (ulonglong)*(byte *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
  *(int *)(iVar28 + 0x2c) = iVar15;
  if (uVar25 == 0xff) {
    *(undefined1 *)(iVar28 + 0x15) = 0;
    if (*(int *)(iVar28 + 0x30) - iVar15 < 2) {
      fn_826E7800(iVar28,2);
    }
    puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
    uVar5 = puVar16[1];
    uVar6 = *puVar16;
    *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
    uVar25 = (ulonglong)CONCAT11(uVar5,uVar6);
  }
  if (uVar25 != 0) {
    do {
      fn_827597E0(auStack_200);
      fn_827597E0(auStack_1d0);
      fn_82771FF0(param_1,param_2,*param_3,auStack_200,auStack_1d0);
      fn_82758958(param_1 + 0x94,auStack_200);
      fn_82758958(param_1 + 0xa0,auStack_1d0);
      fn_82759498(auStack_1d0);
      fn_82759498(auStack_200);
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  *(undefined1 *)(iVar28 + 0x15) = 0;
  if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 1) {
    fn_826E7990(iVar28);
  }
  iVar15 = *(int *)(iVar28 + 0x2c) + 1;
  uVar25 = (ulonglong)*(byte *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
  *(int *)(iVar28 + 0x2c) = iVar15;
  if (uVar25 == 0xff) {
    *(undefined1 *)(iVar28 + 0x15) = 0;
    if (*(int *)(iVar28 + 0x30) - iVar15 < 2) {
      fn_826E7800(iVar28,2);
    }
    puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
    uVar5 = puVar16[1];
    uVar6 = *puVar16;
    *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
    uVar25 = (ulonglong)CONCAT11(uVar5,uVar6);
  }
  if (uVar25 != 0) {
    puVar22 = (uint *)(param_1 + 0xac);
    puVar21 = (uint *)(param_1 + 0xb8);
    dVar29 = (double)lbl_8200D4C0;
    do {
      uVar26 = (ulonglong)*(uint *)(param_1 + 0xb0);
      uVar23 = (ulonglong)*(uint *)(param_1 + 0xb0) + 1;
      fn_827588D8(puVar22,puVar22,uVar23);
      if (uVar26 < (uVar23 & 0xffffffff)) {
        fn_82760248(uVar26 * 0x18 + (ulonglong)*puVar22,uVar23 - uVar26);
      }
      uVar26 = (ulonglong)*(uint *)(param_1 + 0xbc);
      uVar23 = (ulonglong)*(uint *)(param_1 + 0xbc) + 1;
      fn_827588D8(puVar21,puVar21,uVar23);
      if (uVar26 < (uVar23 & 0xffffffff)) {
        fn_82760248(uVar26 * 0x18 + (ulonglong)*puVar21,uVar23 - uVar26);
      }
      iVar15 = *(int *)(param_1 + 0xb0);
      iVar11 = *(int *)(param_1 + 0xbc);
      uVar24 = *puVar22;
      uVar27 = *puVar21;
      *(undefined1 *)(iVar28 + 0x15) = 0;
      iVar17 = iVar15 * 0x18 + uVar24;
      iVar15 = iVar11 * 0x18 + uVar27;
      if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 2) {
        fn_826E7800(iVar28,2);
      }
      puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
      uVar5 = puVar16[1];
      uVar6 = *puVar16;
      *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
      *(ushort *)(iVar17 + -0x14) = CONCAT11(uVar5,uVar6);
      *(undefined1 *)(iVar28 + 0x15) = 0;
      if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 2) {
        fn_826E7800(iVar28,2);
      }
      puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
      uVar5 = puVar16[1];
      uVar6 = *puVar16;
      *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
      *(ushort *)(iVar15 + -0x14) = CONCAT11(uVar5,uVar6);
      if (*param_3 == 0x54) {
        *(undefined1 *)(iVar28 + 0x15) = 0;
        if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 2) {
          fn_826E7800(iVar28,2);
        }
        pbVar18 = (byte *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
        bVar7 = pbVar18[1];
        bVar8 = *pbVar18;
        *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
        uVar20 = CONCAT11(bVar7,bVar8);
        *(undefined2 *)(iVar15 + -8) = uVar20;
        *(undefined2 *)(iVar17 + -8) = uVar20;
        if ((bVar8 & 0x20) != 0) {
          *(undefined1 *)(iVar28 + 0x15) = 0;
          if (*(int *)(iVar28 + 0x30) - *(int *)(iVar28 + 0x2c) < 2) {
            fn_826E7800(iVar28,2);
          }
          puVar16 = (undefined1 *)(*(int *)(iVar28 + 0x2c) + *(int *)(iVar28 + 0x3c));
          uVar5 = puVar16[1];
          uVar6 = *puVar16;
          *(int *)(iVar28 + 0x2c) = *(int *)(iVar28 + 0x2c) + 2;
          uStack_270 = (ulonglong)CONCAT11(uVar5,uVar6);
          *(float *)(iVar15 + -4) = (float)((double)uStack_270 * dVar29);
          *(float *)(iVar17 + -4) = (float)((double)uStack_270 * dVar29);
        }
      }
      if ((*(ushort *)(iVar17 + -8) & 8) == 0) {
        fn_826F33F0(param_2,iVar17 + -0x10,*param_3);
        fn_826F33F0(param_2,iVar15 + -0x10,*param_3);
      }
      else {
        fn_827597E0(abStack_230);
        fn_827597E0(abStack_260);
        fn_82771FF0(param_1,param_2,*param_3,abStack_230,abStack_260);
        fn_8275A320(iVar17 + -0x18,abStack_230);
        if ((abStack_230[0] & 0x10) == 0) {
          puVar19 = &uStack_27c;
        }
        else {
          puVar19 = &uStack_280;
          uStack_280 = *(undefined4 *)(*(int *)(iStack_22c + 0xc) + 4);
        }
        *(undefined4 *)(iVar17 + -0x10) = *puVar19;
        fn_8275A320(iVar15 + -0x18,abStack_260);
        if ((abStack_260[0] & 0x10) == 0) {
          puVar19 = &uStack_27c;
        }
        else {
          puVar19 = auStack_278;
          auStack_278[0] = *(undefined4 *)(*(int *)(iStack_25c + 0xc) + 4);
        }
        *(undefined4 *)(iVar15 + -0x10) = *puVar19;
        fn_82759498(abStack_260);
        fn_82759498(abStack_230);
      }
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  uVar27 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) + (iVar14 - iVar9) + iVar10;
  uVar24 = (*(int *)(iVar28 + 0x2c) - *(int *)(iVar28 + 0x30)) + *(int *)(iVar28 + 0x34);
  if (uVar24 <= uVar27) {
    fn_82760330(iVar28,0xffffffff820152fc);
    fn_82766380(*(undefined4 *)(param_1 + 0x8c),param_2,*param_3,uVar27 - uVar24,0,0);
    fn_82760330(iVar28,0xffffffff820152d4);
    fn_826E7B08(iVar28,uVar27);
    fn_82766380(*(undefined4 *)(param_1 + 0x90),param_2,*param_3,
                    (param_3[3] + param_3[2]) - uVar27,0,0);
    puVar21 = (uint *)(param_1 + 0x60);
    uVar23 = (ulonglong)*(uint *)(param_1 + 0x98);
    uVar25 = (ulonglong)*(uint *)(param_1 + 100);
    fn_82758858(puVar21,puVar21,uVar23);
    if (uVar25 < uVar23) {
      fn_827601F0(uVar25 * 0x28 + (ulonglong)*puVar21,uVar23 - uVar25);
    }
    uVar24 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      iVar28 = 0;
      do {
        puVar16 = (undefined1 *)(iVar28 + *puVar21);
        uVar1 = *(undefined1 *)(iVar28 + *(int *)(param_1 + 0x94));
        *(undefined4 *)(puVar16 + 4) = 0;
        *puVar16 = uVar1;
        fn_82759580(puVar16 + 8,0);
        uVar24 = uVar24 + 1;
        iVar28 = iVar28 + 0x28;
      } while (uVar24 < *(uint *)(param_1 + 100));
    }
    uVar25 = (ulonglong)*(uint *)(param_1 + 0xb0);
    puVar21 = (uint *)(param_1 + 0x6c);
    uVar23 = (ulonglong)*(uint *)(param_1 + 0x70);
    fn_827588D8(puVar21,puVar21,uVar25);
    if (uVar23 < uVar25) {
      fn_82760248(uVar23 * 0x18 + (ulonglong)*puVar21,uVar25 - uVar23);
    }
    uVar25 = 0;
    uVar23 = 0;
    fn_82760648(auStack_170,*(undefined4 *)(param_1 + 0x8c));
    fn_82760648(auStack_f0,*(undefined4 *)(param_1 + 0x90));
    puVar21 = (uint *)(param_1 + 0xc4);
    fn_82772B00(puVar21,puVar21,0);
    while ((cStack_150 != '\x01' || (cStack_d0 != '\x01'))) {
      uVar12 = fn_82772978(auStack_1a0);
      fn_82772CA0(puVar21,uVar12);
      fn_8267BE38(uStack_18c);
      if ((uVar25 & 0xffffffff) == 0) {
        uVar25 = fn_82760BC0(auStack_170);
        if (cStack_150 != '\x01') {
          if (cStack_150 == '\x02') {
            fn_8275FD10();
          }
          else {
            fn_82760B00(auStack_170);
          }
        }
      }
      if ((uVar23 & 0xffffffff) == 0) {
        uVar23 = fn_82760BC0(auStack_f0);
        if (cStack_d0 != '\x01') {
          if (cStack_d0 == '\x02') {
            fn_8275FD10();
          }
          else {
            fn_82760B00(auStack_f0);
          }
        }
      }
      lVar13 = (ulonglong)*(uint *)(param_1 + 200) * 0x24 + (ulonglong)*puVar21 + -0x10;
      if ((uVar25 & 0xffffffff) == (uVar23 & 0xffffffff)) {
        fn_827724F8(lVar13,uVar25);
        uVar25 = 0;
LAB_82773734:
        uVar23 = 0;
      }
      else {
        if ((uVar23 & 0xffffffff) <= (uVar25 & 0xffffffff)) {
          fn_827724F8(lVar13,uVar23);
          uVar25 = uVar25 - uVar23;
          goto LAB_82773734;
        }
        fn_827724F8(lVar13,uVar25);
        uVar23 = uVar23 - uVar25;
        uVar25 = 0;
      }
    }
  }
  return;
}


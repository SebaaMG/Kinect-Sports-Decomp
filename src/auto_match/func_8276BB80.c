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
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_230;
extern unsigned int *auStack_248;
extern unsigned int fStack_204;
extern unsigned int fStack_208;
extern unsigned int fStack_20c;
extern unsigned int fStack_210;
extern unsigned int fStack_23c;
extern unsigned int fStack_240;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8268B330();
extern int fn_826C8C70();
extern int fn_826E7408();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E7B08();
extern int fn_826E8488();
extern int fn_826E8660();
extern int fn_826E8FF0();
extern int fn_8273D588();
extern int fn_8275D0E0();
extern int fn_8275D0F8();
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275EC00();
extern int fn_8275F258();
extern int fn_8275FD10();
extern int fn_8275FD58();
extern int fn_82760648();
extern int fn_827626A0();
extern int fn_82766380();
extern int fn_82768FB0();
extern int fn_827B0A18();
extern int fn_827B1390();
extern int fn_827B14A8();
extern int fn_827B27D0();
extern int fn_827B2850();
extern int fn_827B2C10();
extern int fn_827B2C80();
extern int fn_827B2D60();
extern int fn_827B2E98();
extern int fn_827B2F48();
extern int fn_827B2FC0();
extern int fn_827B3168();
extern int fn_827B32B0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_820148F8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_220;
extern unsigned int uStack_238;
extern unsigned int uStack_250;
extern unsigned int uStack_258;
extern unsigned int uStack_260;
extern U64 storeWordConditionalIndexed();


void fn_8276BB80(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar22;
  char cVar23;
  ulonglong uVar21;
  undefined8 uVar24;
  uint *puVar25;
  uint uVar27;
  ulonglong uVar26;
  float fVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  ushort uVar33;
  ushort uVar34;
  int iVar35;
  bool bVar36;
  char in_RESERVE;
  byte bVar37;
  double dVar38;
  double dVar39;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  uint auStack_248 [2];
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  undefined4 auStack_230 [2];
  int aiStack_228 [2];
  undefined8 uStack_220;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  char cStack_200;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulonglong uStack_1e0;
  undefined **appuStack_1d0 [10];
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [32];
  char cStack_100;
  
  iVar35 = *(int *)(param_2 + 0x314);
  if (iVar35 == 0) {
    iVar35 = param_2 + 0x28;
  }
  bVar2 = true;
  if ((*param_3 != 0x30) && (*param_3 != 0x4b)) {
    return;
  }
  iVar22 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 8) + 0x24);
  uVar13 = *(uint *)(iVar22 + 0xc);
  uVar8 = *(undefined1 *)(iVar22 + 0x10);
  fn_827B27D0(auStack_1a0,param_1 + 0x1c);
  if (*param_3 == 0x30) {
    uVar24 = 0xffffffff82015050;
  }
  else {
    uVar24 = 0xffffffff82015038;
  }
  fn_826C8C70(iVar35,uVar24);
  lVar19 = fn_826E8488(iVar35,1);
  bVar36 = lVar19 != 0;
  if (bVar36) {
    uVar27 = *(uint *)(param_1 + 0x14) | 0x2000;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x14) & 0xffffdfff;
  }
  *(uint *)(param_1 + 0x14) = uVar27;
  lVar19 = fn_826E8488(iVar35,1);
  fn_826E8488(iVar35,1);
  lVar20 = fn_826E8488(iVar35,1);
  if (lVar19 == 0) {
    if (lVar20 == 0) {
      uVar27 = *(uint *)(param_1 + 0x14) & 0xfffffcff;
    }
    else {
      uVar27 = *(uint *)(param_1 + 0x14) & 0xfffffcff | 0x100;
    }
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x14) & 0xfffffcff | 0x200;
  }
  *(uint *)(param_1 + 0x14) = uVar27;
  lVar19 = fn_826E8488(iVar35,1);
  iVar22 = fn_826E8488(iVar35,1);
  if (iVar22 == 0) {
    uVar27 = *(uint *)(param_1 + 0x14) & 0xffffbfff;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x14) | 0x4000;
  }
  *(uint *)(param_1 + 0x14) = uVar27;
  iVar22 = fn_826E8488(iVar35,1);
  if (iVar22 == 0) {
    uVar27 = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x14) | 1;
  }
  *(uint *)(param_1 + 0x14) = uVar27;
  iVar22 = fn_826E8488(iVar35,1);
  if (iVar22 == 0) {
    uVar27 = *(uint *)(param_1 + 0x14) & 0xfffffffd;
  }
  else {
    uVar27 = *(uint *)(param_1 + 0x14) | 2;
  }
  *(uint *)(param_1 + 0x14) = uVar27;
  *(undefined1 *)(iVar35 + 0x15) = 0;
  if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 1) {
    fn_826E7990(iVar35);
  }
  uVar12 = *(undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
  *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 1;
  fn_8268B330(auStack_248);
  fn_826E8660(iVar35,auStack_248);
  *(undefined1 *)(iVar35 + 0x15) = 0;
  if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
    fn_826E7800(iVar35,2);
  }
  puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
  uVar9 = puVar29[1];
  uVar10 = *puVar29;
  *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
  *(uint *)(param_1 + 0x68) = (uint)CONCAT11(uVar9,uVar10);
  cVar23 = fn_826E7438(iVar35);
  if (cVar23 != '\0') {
    if (((ulonglong)auStack_248[0] & 0xfffffffc) == 0xfffffffffffffff8) {
      lVar20 = -0x7dfeafd0;
    }
    else {
      lVar20 = ((ulonglong)auStack_248[0] & 0xfffffffc) + 8;
    }
    fn_826C8C70(iVar35,0xffffffff82015018,lVar20,*(undefined4 *)(param_1 + 0x68));
    uVar24 = 0xffffffff82015010;
    uVar27 = *(uint *)(param_1 + 0x14);
    if ((uVar27 & 0x300) == 0x200) {
      uVar24 = 0xffffffff82015004;
    }
    else if ((uVar27 & 0x300) == 0x100) {
      uVar24 = 0xffffffff82014ffc;
    }
    fn_826C8C70(iVar35,0xffffffff82014fc0,bVar36,uVar24,uVar27 & 1,uVar27 >> 1 & 1);
    fn_826C8C70(iVar35,0xffffffff82014fac,uVar12);
  }
  uVar26 = (ulonglong)*(uint *)(param_1 + 0x68);
  uStack_260 = 0;
  uStack_258 = 0;
  lVar20 = ((ulonglong)*(uint *)(iVar35 + 0x2c) - (ulonglong)*(uint *)(iVar35 + 0x30)) +
           (ulonglong)*(uint *)(iVar35 + 0x34);
  puVar25 = (uint *)0x0;
  if (uVar26 != 0) {
    *(undefined1 *)(iVar35 + 0x15) = 0;
    iVar22 = *(uint *)(iVar35 + 0x30) - *(uint *)(iVar35 + 0x2c);
    if (lVar19 == 0) {
      if (iVar22 < 2) {
        fn_826E7800(iVar35,2);
      }
      iVar22 = *(int *)(iVar35 + 0x2c) + 2;
      puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
      fVar28 = (float)(uint)CONCAT11(puVar29[1],*puVar29);
    }
    else {
      if (iVar22 < 4) {
        fn_826E7800(iVar35,4);
      }
      iVar22 = *(int *)(iVar35 + 0x2c) + 4;
      puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
      fVar28 = (float)CONCAT31(CONCAT21(CONCAT11(puVar29[3],puVar29[2]),puVar29[1]),*puVar29);
    }
    *(int *)(iVar35 + 0x2c) = iVar22;
    if (fVar28 == 0.0) {
      bVar2 = false;
      uVar26 = 0;
    }
    else {
      fStack_240 = fVar28;
      fn_8273D588(&uStack_260,&fStack_240);
      puVar25 = (((U64)(uStack_260) >> 0) & 0xFFFFFFFF);
    }
  }
  bVar1 = 1 < (int)uVar26;
  if (lVar19 == 0) {
    if (bVar1) {
      lVar19 = uVar26 - 1;
      do {
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
          fn_826E7800(iVar35,2);
        }
        puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        uVar12 = puVar29[1];
        uVar9 = *puVar29;
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
        fStack_240 = (float)(uint)CONCAT11(uVar12,uVar9);
        fn_8273D588(&uStack_260,&fStack_240);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      puVar25 = (((U64)(uStack_260) >> 0) & 0xFFFFFFFF);
    }
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
      fn_826E7800(iVar35,2);
    }
    iVar22 = *(int *)(iVar35 + 0x2c) + 2;
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar26 = (ulonglong)CONCAT11(puVar29[1],*puVar29);
  }
  else {
    if (bVar1) {
      lVar19 = uVar26 - 1;
      do {
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 4) {
          fn_826E7800(iVar35,4);
        }
        puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        uVar12 = puVar29[3];
        uVar9 = puVar29[2];
        uVar10 = puVar29[1];
        uVar11 = *puVar29;
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 4;
        fStack_240 = (float)CONCAT31(CONCAT21(CONCAT11(uVar12,uVar9),uVar10),uVar11);
        fn_8273D588(&uStack_260,&fStack_240);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      puVar25 = (((U64)(uStack_260) >> 0) & 0xFFFFFFFF);
    }
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 4) {
      fn_826E7800(iVar35,4);
    }
    iVar22 = *(int *)(iVar35 + 0x2c) + 4;
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar26 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(puVar29[3],puVar29[2]),puVar29[1]),*puVar29);
  }
  *(int *)(iVar35 + 0x2c) = iVar22;
  fn_827B3168(auStack_1a0,((ulonglong)auStack_248[0] & 0xfffffffc) + 8,
                  *(undefined4 *)(param_1 + 0x14),uVar13,0,0,0);
  bVar37 = !bVar2 << 1;
  if (!bVar2) {
    iVar22 = fn_826E7408(iVar35);
    if (iVar22 <= (int)(uVar26 + lVar20)) {
      fn_8267BE38(puVar25);
      lVar19 = ((ulonglong)auStack_248[0] & 0xfffffffc) + 4;
      do {
        puVar25 = (uint *)lVar19;
        uVar26 = (ulonglong)*puVar25;
        if (in_RESERVE != '\0') {
          uVar13 = storeWordConditionalIndexed(uVar26 - 1,0,lVar19);
          *puVar25 = uVar13;
          bVar37 = 2;
        }
      } while (!(bool)(bVar37 >> 1 & 1));
      goto LAB_8276cad0;
    }
    fn_826E7B08(iVar35,uVar26 + lVar20);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x1000;
  }
  else {
    iVar22 = 0x16;
    if (*param_3 != 0x30) {
      iVar22 = *param_3;
    }
    auStack_230[0] = 0x102;
    uVar21 = fn_8267BED0(param_1,0xc,auStack_230);
    bVar2 = (uVar21 & 0xffffffff) == 0;
    bVar37 = bVar2 << 1;
    if (bVar2) {
      uVar21 = 0;
    }
    else {
      uVar21 = fn_8275D0E0(uVar21,0x1ff8);
    }
    uVar27 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      dVar38 = (double)lbl_820143E0;
      puVar32 = puVar25;
      do {
        fn_826E7B08(iVar35,(ulonglong)*puVar32 + lVar20);
        uVar27 = uVar27 + 1;
        if (uVar27 < *(uint *)(param_1 + 0x68)) {
          lVar19 = (ulonglong)puVar32[1] - (ulonglong)*puVar32;
        }
        else {
          lVar19 = uVar26 - *puVar32;
        }
        fn_827B1390(auStack_1a0);
        fn_827626A0(appuStack_1d0);
        appuStack_1d0[0] = &lbl_820148F8;
        uStack_1a8 = 0;
        fn_82766380(appuStack_1d0,param_2,iVar22,lVar19,0,uVar21);
        fn_82760648(auStack_120,appuStack_1d0);
        while (cStack_100 != '\x01') {
          if (cStack_100 == '\x02') {
            fn_8275FD10(auStack_120);
          }
          else {
            fn_8275FD58(aiStack_228,auStack_120);
            fn_8275E130(aiStack_228,&fStack_240,&fStack_23c);
            uStack_1e0 = (ulonglong)uVar13;
            dVar39 = (double)uStack_1e0;
            iVar3 = (int)((double)(float)(dVar39 * (double)fStack_23c) * dVar38);
            iVar4 = (int)((double)(float)(dVar39 * (double)fStack_240) * dVar38);
            uStack_220 = ((((U64)(uStack_220)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar3)) & ((U64)0xFFFF)) << 48));
            uVar14 = (((U64)(uStack_220) >> 48) & 0xFFFF);
            uStack_238 = ((((U64)(uStack_238)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar4)) & ((U64)0xFFFF)) << 48));
            uVar17 = (((U64)(uStack_238) >> 48) & 0xFFFF);
            uStack_238 = (longlong)iVar4;
            uStack_220 = (longlong)iVar3;
            fn_827B2C10(auStack_1a0,uVar17,uVar14);
            while( true ) {
              if ((*(byte *)(aiStack_228[0] + 0x20) == 1) ||
                 (bVar2 = false, (*(byte *)(aiStack_228[0] + 0x20) & 0x80) == 0)) {
                bVar2 = true;
              }
              bVar37 = !bVar2 << 1;
              if (bVar2) break;
              fn_8275E198(aiStack_228,&fStack_210,0);
              uVar16 = uStack_238;
              dVar7 = (double)(float)(dVar39 * (double)fStack_208) * dVar38;
              iVar3 = (int)((double)(float)(dVar39 * (double)fStack_204) * dVar38);
              uStack_238 = ((((U64)(uStack_238)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar3)) & ((U64)0xFFFF)) << 48));
              uVar17 = (((U64)(uStack_238) >> 48) & 0xFFFF);
              if (cStack_200 == '\0') {
                iVar4 = (int)dVar7;
                uStack_250 = ((((U64)(uStack_250)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar4)) & ((U64)0xFFFF)) << 48));
                uVar14 = (((U64)(uStack_250) >> 48) & 0xFFFF);
                uStack_260 = (longlong)iVar3;
                uStack_250 = (longlong)iVar4;
                uStack_238 = uVar16;
                fn_827B2C80(auStack_1a0,uVar14,uVar17);
              }
              else {
                iVar4 = (int)dVar7;
                uStack_220 = ((((U64)(uStack_220)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar4)) & ((U64)0xFFFF)) << 48));
                uVar18 = (((U64)(uStack_220) >> 48) & 0xFFFF);
                iVar5 = (int)((double)(float)(dVar39 * (double)fStack_20c) * dVar38);
                iVar6 = (int)((double)(float)(dVar39 * (double)fStack_210) * dVar38);
                uStack_250 = ((((U64)(uStack_250)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar5)) & ((U64)0xFFFF)) << 48));
                uVar15 = (((U64)(uStack_250) >> 48) & 0xFFFF);
                uStack_260 = ((((U64)(uStack_260)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)iVar6)) & ((U64)0xFFFF)) << 48));
                uVar14 = (((U64)(uStack_260) >> 48) & 0xFFFF);
                uStack_260 = (longlong)iVar6;
                uStack_250 = (longlong)iVar5;
                uStack_238 = (longlong)iVar3;
                uStack_220 = (longlong)iVar4;
                fn_827B2D60(auStack_1a0,uVar14,uVar15,uVar18,uVar17);
              }
            }
          }
        }
        fn_827B32B0(auStack_1a0,uVar8);
        fn_8275D0F8(uVar21);
        fn_8275EC00(appuStack_1d0);
        puVar32 = puVar32 + 1;
      } while (uVar27 < *(uint *)(param_1 + 0x68));
    }
    if ((uVar21 & 0xffffffff) != 0) {
      fn_8275F258(uVar21);
      fn_8267BE38(uVar21);
    }
    if ((int)uVar26 + (int)lVar20 !=
        (*(int *)(iVar35 + 0x2c) - *(int *)(iVar35 + 0x30)) + *(int *)(iVar35 + 0x34)) {
      fn_8267BE38(puVar25);
      lVar19 = ((ulonglong)auStack_248[0] & 0xfffffffc) + 4;
      do {
        puVar25 = (uint *)lVar19;
        uVar26 = (ulonglong)*puVar25;
        if (in_RESERVE != '\0') {
          uVar13 = storeWordConditionalIndexed(uVar26 - 1,0,lVar19);
          *puVar25 = uVar13;
          bVar37 = 2;
        }
      } while (!(bool)(bVar37 >> 1 & 1));
      goto LAB_8276cad0;
    }
  }
  fn_826C8C70(iVar35,0xffffffff82014f88,
                    ((ulonglong)*(uint *)(iVar35 + 0x2c) - (ulonglong)*(uint *)(iVar35 + 0x30)) +
                    (ulonglong)*(uint *)(iVar35 + 0x34));
  uVar26 = 0;
  bVar2 = (*(uint *)(param_1 + 0x14) >> 0xe & 1) == 0;
  bVar37 = bVar2 << 1;
  uVar27 = *(uint *)(param_1 + 0x68);
  if (uVar27 != 0) {
    if (bVar2) {
      do {
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 1) {
          fn_826E7990(iVar35);
        }
        uVar8 = *(undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 1;
        fn_827B2E98(auStack_1a0,uVar26,uVar8);
        uVar26 = uVar26 + 1;
      } while ((uVar26 & 0xffffffff) < (ulonglong)uVar27);
    }
    else {
      do {
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
          fn_826E7800(iVar35,2);
        }
        puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        uVar8 = puVar29[1];
        uVar12 = *puVar29;
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
        fn_827B2E98(auStack_1a0,uVar26,CONCAT11(uVar8,uVar12));
        uVar26 = uVar26 + 1;
      } while ((uVar26 & 0xffffffff) < (ulonglong)uVar27);
    }
  }
  if (bVar36) {
    fVar28 = lbl_82002AE0;
    if (*param_3 == 0x4b) {
      fVar28 = lbl_82005718;
    }
    dVar38 = (double)fVar28;
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
      fn_826E7800(iVar35,2);
    }
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar8 = puVar29[1];
    uVar12 = *puVar29;
    *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
    uStack_260 = (ulonglong)CONCAT11(uVar8,uVar12);
    *(float *)(param_1 + 8) = (float)((double)(longlong)uStack_260 * dVar38);
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
      fn_826E7800(iVar35,2);
    }
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar8 = puVar29[1];
    uVar12 = *puVar29;
    *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
    uStack_260 = (ulonglong)CONCAT11(uVar8,uVar12);
    *(float *)(param_1 + 0xc) = (float)((double)(longlong)uStack_260 * dVar38);
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
      fn_826E7800(iVar35,2);
    }
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar8 = puVar29[1];
    uVar12 = *puVar29;
    *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
    uStack_250 = (longlong)(int)*(float *)(param_1 + 0xc);
    uStack_238 = (ulonglong)(int)*(float *)(param_1 + 8);
    uVar31 = (int)*(float *)(param_1 + 8) * uVar13;
    uVar30 = (int)*(float *)(param_1 + 0xc) * uVar13;
    dVar39 = (double)(longlong)CONCAT11(uVar8,uVar12) * dVar38;
    *(float *)(param_1 + 0x10) = (float)dVar39;
    iVar22 = (int)dVar39;
    uStack_260 = (ulonglong)iVar22;
    uVar27 = iVar22 * uVar13;
    fn_827B14A8(auStack_1a0,
                    (longlong)((int)uVar31 >> 10) +
                    (ulonglong)((int)uVar31 < 0 && (uVar31 & 0x3ff) != 0),
                    (longlong)((int)uVar30 >> 10) +
                    (ulonglong)((int)uVar30 < 0 && (uVar30 & 0x3ff) != 0),
                    (longlong)((int)uVar27 >> 10) +
                    (ulonglong)((int)uVar27 < 0 && (uVar27 & 0x3ff) != 0));
    cVar23 = fn_826E7438(iVar35);
    if (cVar23 != '\0') {
      uStack_250 = (longlong)(int)*(float *)(param_1 + 0x10);
      uStack_260 = (ulonglong)(int)*(float *)(param_1 + 0xc);
      fn_826C8C70(iVar35,0xffffffff82014f5c,(int)*(float *)(param_1 + 8),
                        (int)*(float *)(param_1 + 0xc),(int)*(float *)(param_1 + 0x10));
    }
    uVar27 = *(uint *)(param_1 + 0x68);
    uVar26 = 0;
    if (uVar27 != 0) {
      do {
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
          fn_826E7800(iVar35,2);
        }
        puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        uVar8 = puVar29[1];
        uVar12 = *puVar29;
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
        uStack_260 = (ulonglong)CONCAT11(uVar8,uVar12);
        uStack_250 = (longlong)(int)((double)uStack_260 * dVar38);
        uVar31 = (int)((double)uStack_260 * dVar38) * uVar13;
        fn_827B0A18(auStack_1a0,uVar26,
                        (longlong)((int)uVar31 >> 10) +
                        (ulonglong)((int)uVar31 < 0 && (uVar31 & 0x3ff) != 0));
        uVar26 = uVar26 + 1;
      } while ((uVar26 & 0xffffffff) < (ulonglong)uVar27);
    }
    uStack_1f0 = lbl_821AAD20;
    uStack_1ec = lbl_821AAD20;
    uStack_1e8 = lbl_821AAD20;
    uStack_1e4 = lbl_821AAD20;
    for (uVar26 = (ulonglong)*(uint *)(param_1 + 0x68); uVar26 != 0; uVar26 = uVar26 - 1) {
      fn_826E8FF0(iVar35,&uStack_1f0);
    }
    *(undefined1 *)(iVar35 + 0x15) = 0;
    if (*(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c) < 2) {
      fn_826E7800(iVar35,2);
    }
    puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
    uVar8 = puVar29[1];
    uVar12 = *puVar29;
    *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
    uVar33 = CONCAT11(uVar8,uVar12);
    uVar26 = (ulonglong)uVar33;
    cVar23 = fn_826E7438(iVar35);
    bVar37 = (cVar23 == '\0') << 1;
    if (cVar23 != '\0') {
      fn_826C8C70(iVar35,0xffffffff82014f44,uVar26);
    }
    if (uVar33 != 0) {
      do {
        uVar27 = *(uint *)(param_1 + 0x14);
        *(undefined1 *)(iVar35 + 0x15) = 0;
        iVar22 = *(int *)(iVar35 + 0x30) - *(int *)(iVar35 + 0x2c);
        if ((uVar27 >> 0xe & 1) == 0) {
          if (iVar22 < 1) {
            fn_826E7990(iVar35);
          }
          iVar22 = *(int *)(iVar35 + 0x2c) + 1;
          uVar33 = (ushort)*(byte *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
          *(int *)(iVar35 + 0x2c) = iVar22;
          *(undefined1 *)(iVar35 + 0x15) = 0;
          if (*(int *)(iVar35 + 0x30) - iVar22 < 1) {
            fn_826E7990(iVar35);
          }
          iVar22 = *(int *)(iVar35 + 0x2c) + 1;
          uVar34 = (ushort)*(byte *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        }
        else {
          if (iVar22 < 2) {
            fn_826E7800(iVar35,2);
          }
          iVar22 = *(int *)(iVar35 + 0x2c) + 2;
          puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
          uVar8 = puVar29[1];
          uVar12 = *puVar29;
          *(int *)(iVar35 + 0x2c) = iVar22;
          *(undefined1 *)(iVar35 + 0x15) = 0;
          uVar33 = CONCAT11(uVar8,uVar12);
          if (*(int *)(iVar35 + 0x30) - iVar22 < 2) {
            fn_826E7800(iVar35,2);
          }
          iVar22 = *(int *)(iVar35 + 0x2c) + 2;
          puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
          uVar34 = CONCAT11(puVar29[1],*puVar29);
        }
        *(int *)(iVar35 + 0x2c) = iVar22;
        *(undefined1 *)(iVar35 + 0x15) = 0;
        if (*(int *)(iVar35 + 0x30) - iVar22 < 2) {
          fn_826E7800(iVar35,2);
        }
        puVar29 = (undefined1 *)(*(int *)(iVar35 + 0x2c) + *(int *)(iVar35 + 0x3c));
        uVar8 = puVar29[1];
        uVar12 = *puVar29;
        *(int *)(iVar35 + 0x2c) = *(int *)(iVar35 + 0x2c) + 2;
        uStack_260 = (ulonglong)CONCAT11(uVar8,uVar12);
        dVar39 = (double)(float)((double)(longlong)uStack_260 * dVar38);
        cVar23 = fn_826E7438(iVar35);
        if (cVar23 != '\0') {
          uStack_250 = (longlong)(int)dVar39;
          fn_826C8C70(iVar35,0xffffffff82014f24,uVar33,uVar34,(int)dVar39);
        }
        uStack_250 = (longlong)(int)dVar39;
        uVar27 = (int)dVar39 * uVar13;
        fn_827B2F48(auStack_1a0,uVar33,uVar34,
                          (longlong)((int)uVar27 >> 10) +
                          (ulonglong)((int)uVar27 < 0 && (uVar27 & 0x3ff) != 0));
        uVar26 = uVar26 - 1;
        bVar37 = (uVar26 == 0) << 1;
      } while (uVar26 != 0);
    }
  }
  fn_827B2FC0(auStack_1a0);
  fn_82768FB0(param_1 + 0x2c,0);
  fn_8267BE38(puVar25);
  lVar19 = ((ulonglong)auStack_248[0] & 0xfffffffc) + 4;
  do {
    puVar25 = (uint *)lVar19;
    uVar26 = (ulonglong)*puVar25;
    if (in_RESERVE != '\0') {
      uVar13 = storeWordConditionalIndexed(uVar26 - 1,0,lVar19);
      *puVar25 = uVar13;
      bVar37 = 2;
    }
  } while (!(bool)(bVar37 >> 1 & 1));
LAB_8276cad0:
  if (uVar26 == 1) {
    fn_8267BE38();
  }
  fn_827B2850(auStack_1a0);
  return;
}


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
#define CONCAT14(h,l) ((U64)((((U8)(h)) << 32) | ((U32)(l))))
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_2e0;
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268ACE8();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_8268B1F0();
extern int fn_8268C818();
extern int fn_8269DCE8();
extern int fn_8278B238();
extern int fn_8278B458();
extern int fn_8278B928();
extern int fn_8278C028();
extern int fn_8278FD18();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern int fn_82793058();
extern int fn_827930C8();
extern int fn_82793130();
extern int fn_827931A0();
extern int fn_82793210();
extern unsigned int iStack0000001c;
extern unsigned int iStack_1f4;
extern unsigned int iStack_1fc;
extern unsigned int iStack_200;
extern unsigned int iStack_204;
extern unsigned int iStack_244;
extern unsigned int iStack_274;
extern unsigned int iStack_280;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005C40;
extern unsigned int lbl_82005C48;
extern unsigned int lbl_82005C50;
extern unsigned int lbl_82005C58;
extern unsigned int lbl_82005C60;
extern unsigned int lbl_82010000;
extern unsigned int lbl_8201562C;
extern unsigned int lbl_820156B0;
extern unsigned int lbl_820156C0;
extern unsigned int lbl_820156C4;
extern unsigned int lbl_820156C8;
extern unsigned int lbl_820156F8;
extern unsigned int lbl_82015728;
extern unsigned int lbl_82015734;
extern unsigned int lbl_8201573C;
extern unsigned int lbl_8201574C;
extern unsigned int lbl_82015760;
extern unsigned int lbl_82015778;
extern unsigned int lbl_82015784;
extern unsigned int lbl_82015790;
extern unsigned int lbl_820157BC;
extern unsigned int lbl_820157EC;
extern unsigned int lbl_820157F0;
extern unsigned int lbl_820157F4;
extern unsigned int lbl_820157F8;
extern unsigned int lbl_8201580C;
extern unsigned int lbl_82015814;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack00000014;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_160;
extern unsigned int uStack_170;
extern unsigned int uStack_180;
extern unsigned int uStack_190;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f8;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_2e8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_e0;
extern unsigned int uStack_f0;


undefined4 fn_827939C8(undefined4 param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  undefined4 uVar8;
  char cVar14;
  longlong lVar9;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar10;
  char *pcVar15;
  undefined *puVar16;
  ulonglong uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  undefined **ppuVar21;
  double dVar22;
  undefined4 uStack00000014;
  int iStack0000001c;
  byte abStack_2f0 [8];
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [24];
  char *pcStack_2c8;
  undefined *puStack_2c4;
  undefined *puStack_2c0;
  undefined **ppuStack_2bc;
  undefined *puStack_2b8;
  char *pcStack_2b4;
  undefined *puStack_2b0;
  undefined *puStack_2ac;
  undefined *puStack_2a8;
  char *pcStack_2a4;
  undefined *puStack_2a0;
  undefined *puStack_29c;
  undefined *puStack_298;
  char *pcStack_294;
  undefined *puStack_290;
  char *pcStack_28c;
  char *pcStack_288;
  undefined *puStack_284;
  int iStack_280;
  undefined *puStack_27c;
  int iStack_274;
  char *pcStack_270;
  undefined *puStack_26c;
  undefined *puStack_268;
  undefined *puStack_264;
  undefined *puStack_260;
  undefined *puStack_25c;
  undefined *puStack_258;
  undefined *puStack_254;
  char *pcStack_250;
  undefined *puStack_24c;
  undefined *puStack_248;
  int iStack_244;
  char *pcStack_240;
  undefined *puStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  undefined *puStack_230;
  undefined *puStack_22c;
  undefined *puStack_228;
  char *pcStack_224;
  undefined *puStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  longlong lStack_1e8;
  undefined4 uStack_1e0;
  undefined1 *puStack_1dc;
  undefined4 uStack_1d0;
  undefined1 *puStack_1cc;
  undefined4 uStack_1c0;
  undefined1 *puStack_1bc;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 uStack_1a0;
  undefined1 *puStack_19c;
  undefined4 uStack_190;
  undefined1 *puStack_18c;
  undefined4 uStack_180;
  undefined1 *puStack_17c;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined4 uStack_110;
  undefined1 *puStack_10c;
  undefined4 uStack_100;
  undefined1 *puStack_fc;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_8268AFB0(auStack_2e0,lbl_831E7E64);
  iStack_274 = 0;
  uStack_2e8 = CONCAT44(0x82000000,(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
  pcStack_288 = "></TEXTFORMAT>";
  iStack_244 = *(int *)(param_2 + 0x10);
  ppuStack_2bc = &lbl_82010000;
  puStack_290 = &lbl_820157F8;
  puStack_2a8 = &lbl_82015814;
  puStack_2a0 = &lbl_8201580C;
  puStack_258 = &lbl_82005C50;
  puStack_268 = &lbl_82005C58;
  puStack_298 = &lbl_8201574C;
  puStack_2ac = &lbl_82015734;
  puStack_260 = &lbl_82005C60;
  dVar22 = (double)lbl_82005718;
  puStack_23c = &lbl_82015784;
  puStack_264 = &lbl_82015778;
  puStack_25c = &lbl_82015790;
  puStack_27c = &lbl_82015728;
  puStack_22c = &lbl_8201573C;
  puStack_284 = &lbl_820156F8;
  puStack_228 = &lbl_82005C48;
  pcStack_218 = " LETTERSPACING=\"{0}\"";
  pcStack_234 = "LEFT";
  pcStack_28c = "RIGHT";
  puStack_26c = &lbl_82005C40;
  puStack_254 = &lbl_820157BC;
  pcStack_214 = "<FONT";
  puStack_2b8 = &lbl_82015760;
  pcStack_21c = "baseline";
  pcStack_224 = "left";
  pcStack_270 = "right";
  pcStack_240 = "JUSTIFY";
  pcStack_294 = "CENTER";
  puStack_2c4 = &lbl_820156C8;
  puStack_220 = &lbl_820157F4;
  puStack_24c = &lbl_820157F0;
  puStack_230 = &lbl_820157EC;
  puStack_2c0 = &lbl_820156C4;
  puStack_248 = &lbl_820156C0;
  puStack_29c = &lbl_820156B0;
  pcStack_238 = " LEFTMARGIN=\"{0}\"";
  pcStack_2b4 = " BLOCKINDENT=\"{0}\"";
  pcStack_250 = " LEADING=\"{0}\"";
  pcStack_2a4 = " RIGHTMARGIN=\"{0}\"";
  pcStack_2c8 = " INDENT=\"{0}\"";
  puStack_2b0 = &lbl_8201562C;
  iVar12 = 0;
  do {
    uVar8 = uStack00000014;
    if (((iStack0000001c == -0xc) || (iStack_274 < 0)) ||
       (bVar18 = false, *(int *)(iStack0000001c + 0x10) <= iStack_274)) {
      bVar18 = true;
    }
    if (bVar18) {
      fn_8268C818(uStack00000014,auStack_2e0);
      fn_8268AFD8(auStack_2e0);
      return uVar8;
    }
    iStack_280 = iVar12 + 1;
    iVar12 = *(int *)(iStack_274 * 4 + *(int *)(iStack0000001c + 0xc));
    if (iStack_280 == iStack_244) {
      uVar17 = (ulonglong)*(uint *)(iVar12 + 4);
      if (uVar17 != 0) {
        cVar14 = fn_8278FD18(iVar12);
        if (cVar14 != '\0') {
          uVar17 = uVar17 - 1;
        }
        if ((uVar17 & 0xffffffff) != 0) goto LAB_82793d1c;
      }
    }
    else {
LAB_82793d1c:
      fn_8268B1F0(auStack_2e0,puStack_2b0,0xffffffffffffffff);
      iVar3 = *(int *)(iVar12 + 0xc);
      if ((*(ushort *)(iVar3 + 0x16) >> 2 & 1) != 0) {
        puStack_b4 = auStack_2e0;
        uStack_b8 = 1;
        uStack_2e8 = CONCAT44((int)*(short *)(iVar3 + 0xe),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_8269DCE8(&uStack_b8,pcStack_2c8,&uStack_2e8);
      }
      if ((*(ushort *)(iVar3 + 0x16) >> 1 & 1) != 0) {
        puStack_13c = auStack_2e0;
        uStack_140 = 1;
        uStack_2e8 = (ulonglong)CONCAT24(*(undefined2 *)(iVar3 + 0xc),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_140,pcStack_2b4,&uStack_2e8);
      }
      if ((*(ushort *)(iVar3 + 0x16) >> 4 & 1) != 0) {
        puStack_1bc = auStack_2e0;
        uStack_1c0 = 1;
        uStack_2e8 = (ulonglong)CONCAT24(*(undefined2 *)(iVar3 + 0x12),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_1c0,pcStack_238,&uStack_2e8);
      }
      if ((*(ushort *)(iVar3 + 0x16) >> 5 & 1) != 0) {
        puStack_c4 = auStack_2e0;
        uStack_c8 = 1;
        uStack_2e8 = (ulonglong)CONCAT24(*(undefined2 *)(iVar3 + 0x14),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_c8,pcStack_2a4,&uStack_2e8);
      }
      if ((*(ushort *)(iVar3 + 0x16) >> 3 & 1) != 0) {
        puStack_19c = auStack_2e0;
        uStack_1a0 = 1;
        uStack_2e8 = CONCAT44((int)*(short *)(iVar3 + 0x10),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_8269DCE8(&uStack_1a0,pcStack_250,&uStack_2e8);
      }
      if ((*(ushort *)(iVar3 + 0x16) >> 6 & 1) != 0) {
        fn_8268B1F0(auStack_2e0,0xffffffff82015694,0xffffffffffffffff);
        lVar9 = fn_8278B238(iVar3,&ppuStack_2bc);
        ppuVar21 = (undefined **)0x0;
        if (ppuStack_2bc != (undefined **)0x0) {
          do {
            uStack_120 = 1;
            puStack_11c = auStack_2e0;
            abStack_2f0[0] = 1 - (ppuVar21 == (undefined **)0x0);
            fn_827930C8(&uStack_120,puStack_29c,abStack_2f0,lVar9);
            ppuVar21 = (undefined **)((int)ppuVar21 + 1);
            lVar9 = lVar9 + 4;
          } while (ppuVar21 < ppuStack_2bc);
        }
        fn_8268B1F0(auStack_2e0,0xffffffff8200c4f8,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,puStack_248,0xffffffffffffffff);
      if (((*(ushort *)(iVar3 + 0x16) >> 7 & 1) == 0) ||
         (bVar18 = true, (*(ushort *)(iVar3 + 0x16) & 0x8000) == 0)) {
        bVar18 = false;
      }
      puVar16 = puStack_2c0;
      if (bVar18) {
        puVar16 = puStack_2c4;
      }
      fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
      fn_8268B1F0(auStack_2e0,0xffffffff820156a0,0xffffffffffffffff);
      uVar7 = *(ushort *)(iVar3 + 0x16) >> 9 & 3;
      pcVar15 = pcStack_234;
      if (((uVar7 == 0) || (pcVar15 = pcStack_28c, uVar7 == 1)) ||
         ((pcVar15 = pcStack_240, uVar7 < 3 || (pcVar15 = pcStack_294, uVar7 == 3)))) {
        fn_8268B1F0(auStack_2e0,pcVar15,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,0xffffffff820156ac,0xffffffffffffffff);
      bVar18 = false;
      iStack_200 = iVar12 + 0x10;
      uStack_210 = 0;
      iVar19 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      iStack_204 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      iStack_1fc = iStack_200;
      iStack_1f4 = iVar12;
      if (*(int *)(iVar12 + 4) != 0) {
        do {
          piVar11 = (int *)fn_82791CF0(&uStack_210);
          bVar6 = false;
          if (piVar11[3] != 0) {
            iVar12 = fn_8278B458();
            if (iVar12 == 0) {
              if (((bVar18) && (iVar19 != 0)) &&
                 (cVar14 = fn_8278B928(iVar19,piVar11[3]), cVar14 == '\0')) {
                fn_8268B1F0(auStack_2e0,0xffffffff82015768,0xffffffffffffffff);
                bVar18 = false;
              }
              if (!bVar18) {
                fn_8268B1F0(auStack_2e0,pcStack_214,0xffffffffffffffff);
                if ((*(ushort *)(piVar11[3] + 0x2a) >> 2 & 1) != 0) {
                  puStack_1ac = auStack_2e0;
                  uStack_1b0 = 1;
                  uVar10 = fn_8278C028(piVar11[3]);
                  fn_82793130(&uStack_1b0,puStack_264,uVar10);
                }
                if ((*(ushort *)(piVar11[3] + 0x2a) >> 3 & 1) != 0) {
                  puStack_18c = auStack_2e0;
                  uStack_190 = 1;
                  lStack_1e8 = (longlong)(int)(uint)*(ushort *)(piVar11[3] + 0x26);
                  uStack_2e8 = ((((U64)(uStack_2e8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)(longlong)((double)lStack_1e8 * dVar22))) & ((U64)0xFFFFFFFF)) << 32));
                  uStack_2e8 = CONCAT44((((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_82793058(&uStack_190,puStack_23c,&uStack_2e8);
                }
                if ((*(ushort *)(piVar11[3] + 0x2a) & 1) != 0) {
                  puStack_16c = auStack_2e0;
                  uStack_170 = 1;
                  uStack_2e8 = CONCAT44(*(undefined4 *)(piVar11[3] + 0x20),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF)) &
                               0xffffffffffffff;
                  fn_82793058(&uStack_170,puStack_25c,&uStack_2e8);
                }
                if ((*(ushort *)(piVar11[3] + 0x2a) >> 1 & 1) != 0) {
                  lStack_d0 = (longlong)*(short *)(piVar11[3] + 0x24);
                  puStack_14c = auStack_2e0;
                  uStack_150 = 1;
                  uStack_2e8 = CONCAT44((float)((double)lStack_d0 * dVar22),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_827931A0(&uStack_150,pcStack_218,&uStack_2e8);
                }
                if ((*(ushort *)(piVar11[3] + 0x2a) >> 10 & 1) != 0) {
                  puStack_12c = auStack_2e0;
                  uStack_130 = 1;
                  uStack_2e8 = (ulonglong)
                               CONCAT14(*(undefined1 *)(piVar11[3] + 0x20),(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_82793058(&uStack_130,puStack_254,&uStack_2e8);
                }
                puStack_10c = auStack_2e0;
                uStack_110 = 1;
                abStack_2f0[0] = *(byte *)(piVar11[3] + 0x28) >> 3 & 1;
                fn_82793210(&uStack_110,0xffffffff820157d0,abStack_2f0);
                fn_8268B1F0(auStack_2e0,0xffffffff820157e8,0xffffffffffffffff);
                bVar18 = true;
              }
              if ((*(ushort *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_82794418:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_82794418;
              }
              if (bVar5) {
                puStack_ec = auStack_2e0;
                uStack_f0 = 1;
                fn_82793130(&uStack_f0,0xffffffff820156dc,(ulonglong)(uint)piVar11[3] + 0x10);
              }
              if ((*(byte *)(piVar11[3] + 0x28) & 1) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_230,0xffffffffffffffff);
              }
              if ((*(byte *)(piVar11[3] + 0x28) & 2) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_24c,0xffffffffffffffff);
              }
              if ((*(byte *)(piVar11[3] + 0x28) & 4) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_220,0xffffffffffffffff);
              }
              if (piVar11[3] != 0) {
                fn_8267C4C8();
              }
              if (iVar19 != 0) {
                fn_8267C4F0(iVar19);
              }
              iVar19 = piVar11[3];
            }
            else {
              bVar6 = true;
              *(int *)(iVar12 + 4) = *(int *)(iVar12 + 4) + 1;
              if ((*(ushort *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_82794010:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_82794010;
              }
              if (bVar5) {
                uStack_180 = 1;
                puStack_17c = auStack_2e0;
                fn_82793130(&uStack_180,0xffffffff820156dc,(ulonglong)(uint)piVar11[3] + 0x10);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156ec,0xffffffffffffffff);
              puVar4 = (uint *)(*(uint *)(iVar12 + 0x38) & 0xfffffffc);
              fn_8268B1F0(auStack_2e0,puVar4 + 2,*puVar4 & 0x7fffffff);
              fn_8268B1F0(auStack_2e0,0xffffffff8200c4f8,0xffffffffffffffff);
              if (*(uint *)(iVar12 + 0x18) != 0) {
                uStack_e0 = 1;
                puStack_dc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(uint *)(iVar12 + 0x18) / 0x14,(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_82793058(&uStack_e0,puStack_284,&uStack_2e8);
              }
              if (*(uint *)(iVar12 + 0x1c) != 0) {
                uStack_160 = 1;
                puStack_15c = auStack_2e0;
                uStack_2e8 = CONCAT44(*(uint *)(iVar12 + 0x1c) / 0x14,(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_82793058(&uStack_160,puStack_22c,&uStack_2e8);
              }
              if (*(int *)(iVar12 + 0x40) != 0) {
                uStack_100 = 1;
                puStack_fc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(int *)(iVar12 + 0x40) / 0x14,(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_8269DCE8(&uStack_100,0xffffffff82015718,&uStack_2e8);
              }
              if (*(int *)(iVar12 + 0x44) != 0) {
                uStack_1e0 = 1;
                puStack_1dc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(int *)(iVar12 + 0x44) / 0x14,(((U64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_8269DCE8(&uStack_1e0,0xffffffff82015708,&uStack_2e8);
              }
              if ((*(uint *)(*(uint *)(iVar12 + 0x3c) & 0xfffffffc) & 0x7fffffff) != 0) {
                puStack_1cc = auStack_2e0;
                uStack_1d0 = 1;
                fn_82793130(&uStack_1d0,puStack_27c,iVar12 + 0x3c);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156a0,0xffffffffffffffff);
              bVar1 = *(byte *)(iVar12 + 0x4c);
              pcVar15 = pcStack_21c;
              if (((bVar1 == 0) || (pcVar15 = pcStack_270, bVar1 == 1)) ||
                 (pcVar15 = pcStack_224, bVar1 < 3)) {
                fn_8268B1F0(auStack_2e0,pcVar15,0xffffffffffffffff);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156ac,0xffffffffffffffff);
              if ((*(ushort *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_827941f4:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_827941f4;
              }
              if (bVar5) {
                fn_8268B1F0(auStack_2e0,puStack_2b8,0xffffffffffffffff);
              }
            }
            if (iVar12 != 0) {
              fn_8267C498(iVar12);
            }
          }
          if (!bVar6) {
            uVar20 = 0;
            if (piVar11[2] != 0) {
              iVar12 = 0;
              do {
                sVar2 = *(short *)(iVar12 + *piVar11);
                if ((sVar2 != (ushort)((-(ushort)((*(byte *)(iStack0000001c + 0x20) & 2) != 0) & 3)
                                      + 10)) && (sVar2 != 0)) {
                  puVar16 = puStack_258;
                  if ((sVar2 == 0x22) ||
                     ((((puVar16 = puStack_260, sVar2 == 0x26 ||
                        (puVar16 = puStack_268, sVar2 == 0x27)) ||
                       (puVar16 = puStack_26c, sVar2 == 0x3c)) ||
                      ((puVar16 = puStack_228, sVar2 == 0x3e ||
                       (puVar16 = puStack_2ac, sVar2 == 0xa0)))))) {
                    fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
                  }
                  else {
                    fn_8268B120();
                  }
                }
                uVar20 = uVar20 + 1;
                iVar12 = iVar12 + 2;
              } while (uVar20 < (uint)piVar11[2]);
            }
            if (piVar11[3] != 0) {
              if ((*(byte *)(piVar11[3] + 0x28) & 4) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_2a8,0xffffffffffffffff);
              }
              if ((*(byte *)(piVar11[3] + 0x28) & 2) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_2a0,0xffffffffffffffff);
              }
              if ((*(byte *)(piVar11[3] + 0x28) & 1) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_298,0xffffffffffffffff);
              }
              if ((*(ushort *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_8279463c:
                bVar6 = false;
              }
              else {
                iVar12 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar6 = true;
                if (iVar12 == 0) goto LAB_8279463c;
              }
              if (bVar6) {
                fn_8268B1F0(auStack_2e0,puStack_2b8,0xffffffffffffffff);
              }
            }
          }
          fn_82791DF0(&uStack_210);
        } while (uStack_1f0 < *(uint *)(iStack_1f4 + 4));
      }
      if (bVar18) {
        fn_8268B1F0(auStack_2e0,0xffffffff82015768,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,puStack_290,0xffffffffffffffff);
      if (((*(ushort *)(iVar3 + 0x16) >> 7 & 1) == 0) ||
         (bVar18 = true, (*(ushort *)(iVar3 + 0x16) & 0x8000) == 0)) {
        bVar18 = false;
      }
      puVar16 = puStack_2c0;
      if (bVar18) {
        puVar16 = puStack_2c4;
      }
      fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
      fn_8268B1F0(auStack_2e0,pcStack_288,0xffffffffffffffff);
      if (iVar19 != 0) {
        fn_8267C4F0(iVar19);
      }
      if (iStack_204 != 0) {
        fn_8267C4F0();
      }
    }
    iVar12 = iStack_280;
    if (iStack_274 < *(int *)(iStack0000001c + 0x10)) {
      iStack_274 = iStack_274 + 1;
    }
  } while( true );
}


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
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_244;
extern unsigned int *auStack_2a8;
extern unsigned int *auStack_2d8;
extern unsigned int *auStack_2f8;
extern int fn_82AB15D0();
extern int fn_82B6EA60();
extern int fn_82B6EB98();
extern int fn_82B6EC28();
extern int fn_82B6F358();
extern int fn_82B6F6D0();
extern int fn_82B6FA30();
extern int fn_82B76410();
extern int fn_82B767F8();
extern int fn_82B78DC0();
extern unsigned int iStack_274;
extern unsigned int iStack_284;
extern unsigned int iStack_2e4;
extern unsigned int iStack_308;
extern unsigned int iStack_324;
extern unsigned int iStack_338;
extern unsigned int iStack_344;
extern unsigned int lbl_821B597C;
extern unsigned int uStack_124;
extern unsigned int uStack_278;
extern unsigned int uStack_288;
extern unsigned int uStack_294;
extern unsigned int uStack_298;
extern unsigned int uStack_2c4;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2e8;
extern unsigned int uStack_304;
extern unsigned int uStack_350;


void fn_82B79EE8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  longlong lVar26;
  uint uStack_350;
  char *pcStack_34c;
  char *pcStack_348;
  int iStack_344;
  undefined *puStack_340;
  char *pcStack_33c;
  int iStack_338;
  char *pcStack_334;
  char *pcStack_330;
  char *pcStack_32c;
  char *pcStack_328;
  int iStack_324;
  char *pcStack_320;
  char *pcStack_31c;
  int aiStack_318 [4];
  int iStack_308;
  uint uStack_304;
  uint auStack_2f8 [4];
  uint uStack_2e8;
  int iStack_2e4;
  uint auStack_2d8 [4];
  uint uStack_2c8;
  uint uStack_2c4;
  int aiStack_2b8 [4];
  uint auStack_2a8 [4];
  uint uStack_298;
  uint uStack_294;
  uint uStack_288;
  int iStack_284;
  uint uStack_278;
  int iStack_274;
  int aiStack_260 [7];
  uint auStack_244 [37];
  uint auStack_1b0 [35];
  undefined4 uStack_124;
  int aiStack_120 [72];
  
  puVar12 = (uint *)param_1[6];
  iStack_344 = 0;
  iVar19 = 0;
  iStack_338 = 1;
  piVar1 = (int *)param_1[7];
  iVar20 = 0;
  uVar18 = 0;
  puVar8 = (uint *)(*(code *)param_1[1])(*param_1,0x820);
  puVar14 = &uStack_124;
  puVar10 = (uint *)0x0;
  lVar26 = 0x20;
  do {
    puVar14 = puVar14 + 1;
    *puVar14 = 0;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  puVar15 = auStack_244;
  lVar26 = 0x20;
  do {
    puVar15 = puVar15 + 1;
    *puVar15 = 0;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16d0] = iVar9;
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16d1] = iVar9;
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16ab] = iVar9;
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16ac] = iVar9;
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16ad] = iVar9;
  iVar9 = fn_82B6EA60(param_1);
  piVar1[0x16ce] = iVar9;
  iStack_324 = -0x7ce92348;
  pcStack_31c = "pCtxAssm->numAssmInstr <= XLT_MAX_ASSM_INSTR";
  pcStack_32c = "pSrcMod->bits.swizzle_x_r <= IL_COMPSEL_W_A";
  pcStack_330 = "pOp->bits.controls <= 0x1f";
  puStack_340 = &lbl_821B597C;
  pcStack_328 = "pCtxAssm->shader_type == IL_SHADER_VERTEX";
  pcStack_334 = "pSrc->bitfield.register_type == IL_REGTYPE_CONST_INT";
  pcStack_320 = "loopDepth <= 4";
  pcStack_348 = "Assertion failed: %s (%s:%u)";
  pcStack_33c = "pSrc->bitfield.register_type == IL_REGTYPE_CONST_BOOL";
  pcStack_34c = 
  "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp"
  ;
  do {
    pcVar7 = pcStack_348;
    pcVar6 = pcStack_34c;
    bVar4 = true;
    uVar17 = (ushort)*puVar12;
    bVar5 = false;
    uStack_350 = 1;
    puVar15 = puVar12;
    if (iStack_338 == 1) {
      iVar9 = param_1[7];
      *(ushort *)((int)puVar8 + 2) = 0x41;
      *puVar8 = *puVar8 & 0xe000ffff;
      *(ushort *)((int)puVar8 + 6) = (ushort)*(undefined4 *)(iVar9 + 0x5b40);
      puVar8[1] = puVar8[1] & 0xff00ffff | 0x40000;
      *(ushort *)((int)puVar8 + 10) = 0;
      puVar8[2] = puVar8[2] & 0xff00ffff | 0x410000;
      *(undefined1 *)(puVar8 + 2) = 1;
      puVar8[3] = puVar8[3] & 0xffff8888;
      puVar10 = puVar8 + 4;
      uStack_350 = 1;
      *(ushort *)((int)puVar8 + 0x12) = 0;
      *puVar10 = *puVar10 & 0xff00ffff | 0x410000;
      *(undefined1 *)puVar10 = 1;
      puVar8[5] = puVar8[5] & 0xffff8888;
      if (*piVar1 == 0) {
        puVar10 = puVar8 + 6;
        *puVar10 = 0;
        *(ushort *)((int)puVar8 + 0x1a) = 3;
        *puVar10 = *puVar10 & 0xe000ffff;
        puVar8[7] = 0;
        iVar9 = 2;
        *(ushort *)((int)puVar8 + 0x1e) = 0;
        puVar8[7] = puVar8[7] & 0xff00ffff | 0x70000;
        puVar8[8] = 0;
        *(ushort *)((int)puVar8 + 0x22) = 0;
        puVar8[8] = puVar8[8] & 0xff00ffff | 0x470000;
        puVar8[9] = 0;
        uStack_350 = 2;
        puVar10 = puVar8 + 10;
        *puVar10 = 0;
        *(ushort *)((int)puVar8 + 0x2a) = 2;
        *puVar10 = *puVar10 & 0xff00ffff | 0x410000;
        *(undefined1 *)puVar10 = 1;
        puVar8[0xb] = 0xbbbb;
        piVar1[0x1228] = 2;
        puVar10 = puVar8 + 0xc;
        if (((piVar1[0x16d2] == 0) && (piVar1[0x16d3] != 0)) ||
           ((piVar1[0x16d3] == 0 && (piVar1[0x16d2] == 0)))) {
          piVar1[0x13e8] = 0x3e;
          iVar9 = 3;
          iVar2 = param_1[7];
          *(ushort *)((int)puVar8 + 0x32) = 0x41;
          *puVar10 = *puVar10 & 0xe000ffff;
          *(ushort *)((int)puVar8 + 0x36) = 0;
          uStack_350 = 3;
          puVar8[0xd] = puVar8[0xd] & 0xff00ffff | 0xe0000;
          *(ushort *)((int)puVar8 + 0x3a) = (ushort)*(undefined4 *)(iVar2 + 0x5b40);
          puVar8[0xe] = puVar8[0xe] & 0xff00ffff | 0x40000;
          puVar10 = puVar8 + 0x10;
          *(ushort *)((int)puVar8 + 0x3e) = (ushort)*(undefined4 *)(iVar2 + 0x5b40);
          puVar8[0xf] = puVar8[0xf] & 0xff00ffff | 0x40000;
        }
        if ((piVar1[0x16d3] == 0) && (piVar1[0x16d2] != 0)) {
          param_1[0x128] = 0;
          uStack_350 = iVar9 + 1;
          piVar1[0x16a9] = piVar1[0x16a9] + 1;
          piVar1[0x14e8] = 0;
          iVar9 = param_1[7];
          *(ushort *)((int)puVar10 + 2) = 0x41;
          *puVar10 = *puVar10 & 0xe000ffff;
          *(ushort *)((int)puVar10 + 6) = 0;
          puVar10[1] = puVar10[1] & 0xff00ffff | 0x120000;
          *(ushort *)((int)puVar10 + 10) = (ushort)*(undefined4 *)(iVar9 + 0x5b40);
          puVar10[2] = puVar10[2] & 0xff00ffff | 0x40000;
          *(ushort *)((int)puVar10 + 0xe) = (ushort)*(undefined4 *)(iVar9 + 0x5b40);
          puVar10[3] = puVar10[3] & 0xff00ffff | 0x40000;
        }
      }
      bVar5 = true;
      uVar17 = 100;
      puVar15 = puVar8;
      puVar10 = puVar12;
    }
    iStack_338 = 0;
    switch(uVar17) {
    case 1:
    case 10:
    case 0xd:
    case 0xe:
    case 0x13:
    case 0x16:
    case 0x20:
    case 0x25:
    case 0x26:
    case 0x2c:
    case 0x2e:
    case 0x36:
    case 0x39:
    case 0x3d:
    case 0x3f:
    case 0x42:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x4c:
    case 0x4e:
    case 0x56:
    case 0x57:
    case 0x59:
    case 0x5b:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
      goto LAB_82b7a9d0;
    default:
      if ((piVar1[iVar19 + 0xcdc] != 0) || (iVar19 == 0)) goto LAB_82b7a9d0;
    case 100:
LAB_82b7a9f4:
      puVar25 = puVar15;
      for (uVar21 = (ulonglong)uStack_350; uVar21 != 0; uVar21 = uVar21 - 1) {
        uVar16 = *puVar25;
        iVar9 = (uVar16 & 0xffff) * 4;
        uVar3 = *(uint *)(iVar9 + iStack_324);
        iVar9 = *(int *)(iVar9 + iStack_324 + 0x1c8);
        if ((!bVar4) || (uVar22 = 1, auStack_244[iVar20 + 1] == 0)) {
          uVar22 = 0;
        }
        if ((uVar16 & 0xffff) == 0x70) {
          uVar22 = 1;
        }
        fn_82B6F358(param_1,uVar16 & 0xffff,uVar16 >> 0x10 & 0x1fff,iVar9);
        uVar16 = puVar25[1];
        if ((uVar16 & 0x400000) == 0) {
          puVar15 = (uint *)0x0;
          puVar12 = puVar25 + 2;
        }
        else {
          puVar12 = puVar25 + 3;
          puVar15 = puVar25 + 2;
        }
        if ((uVar16 & 0x800000) == 0) {
          puVar11 = (uint *)0x0;
          puVar24 = puVar12;
        }
        else {
          puVar24 = puVar12 + 1;
          puVar11 = puVar12;
        }
        fn_82B6F6D0(param_1,puVar25 + 1,puVar15,puVar11,iVar9,uVar22);
        uStack_350 = 0;
        if (iVar9 == 0) {
          if ((*puVar24 & 0x400000) == 0) {
            puVar15 = (uint *)0x0;
            puVar12 = puVar24 + 1;
          }
          else {
            puVar12 = puVar24 + 2;
            puVar15 = puVar24 + 1;
          }
          if ((*puVar24 & 0x800000) == 0) {
            puVar11 = (uint *)0x0;
            puVar25 = puVar12;
          }
          else {
            puVar25 = puVar12 + 1;
            puVar11 = puVar12;
          }
          fn_82B6FA30(param_1,puVar24,puVar15,puVar11,0,&uStack_350);
        }
        else {
          uVar23 = 0;
          puVar25 = puVar24;
          if (uVar3 != 0) {
            do {
              if ((*puVar24 & 0x400000) == 0) {
                puVar12 = (uint *)0x0;
                puVar25 = puVar24 + 1;
              }
              else {
                puVar25 = puVar24 + 2;
                puVar12 = puVar24 + 1;
              }
              if ((*puVar24 & 0x800000) == 0) {
                puVar15 = (uint *)0x0;
              }
              else {
                puVar15 = puVar25;
                puVar25 = puVar25 + 1;
              }
              fn_82B6FA30(param_1,puVar24,puVar12,puVar15,2 - uVar23,&uStack_350);
              uVar23 = uVar23 + 1;
              puVar24 = puVar25;
            } while ((uVar23 & 0xffffffff) < (ulonglong)uVar3);
          }
        }
        if (900 < (uint)piVar1[3]) {
          fn_82AB15D0(0,pcStack_348,pcStack_31c,pcStack_34c,0x395c);
        }
        piVar1[0xa90] = piVar1[0xa90] + 0xc;
        piVar1[3] = piVar1[3] + 1;
      }
      break;
    case 6:
      auStack_244[aiStack_260[uVar18] + 1] = 1;
      goto code_r0x82b7a310;
    case 7:
      bVar4 = false;
      auStack_244[aiStack_260[uVar18] + 1] = 1;
      goto LAB_82b7a9d0;
    case 8:
      puVar25 = puVar15 + 2;
      if (auStack_244[iVar20 + 1] == 1) {
        aiStack_120[puVar15[1] & 0xffff] = 1;
      }
      puVar12 = &uStack_2c8;
      uStack_2c8 = 0xffffffff;
      uVar22 = 0x20;
      uStack_2c4 = (uint)*(ushort *)((int)puVar15 + 6);
      goto code_r0x82b7a3a0;
    case 9:
      puVar25 = puVar15 + 3;
      if ((puVar15[1] & 0x3f0000) != 0) {
        fn_82AB15D0(0,pcStack_348,pcStack_33c,pcStack_34c,0x36c1);
      }
      if (auStack_244[iVar20 + 1] == 1) {
        aiStack_120[puVar15[2] & 0xffff] = 1;
      }
      puVar12 = &uStack_298;
      uVar22 = 0x20;
      uStack_294 = (uint)*(ushort *)((int)puVar15 + 10);
      uStack_298 = (uint)*(ushort *)((int)puVar15 + 6);
      goto code_r0x82b7a3a0;
    case 0xf:
      puVar25 = puVar15 + *puVar15 + 1;
      break;
    case 0x19:
      uVar16 = (uint)*(ushort *)puVar12;
      puVar25 = puVar15 + 1;
      iVar9 = param_1[7];
      *(uint *)((uVar16 & 0xff) * 8 + iVar9 + 0x32c4) = (uVar16 & 0x1fff) >> 0xb;
      *(uint *)(((uVar16 & 0xff) + 0x658) * 8 + iVar9) = (uVar16 & 0x1fff) >> 8 & 7;
      break;
    case 0x1a:
      puVar24 = puVar15 + 2;
      if ((*puVar12 & 0x80000000) == 0) {
        puVar24 = puVar15 + 1;
      }
      puVar25 = puVar24 + 1;
      if ((*puVar24 & 0x400000) != 0) {
        puVar25 = puVar24 + 2;
      }
      if (*piVar1 != 0) {
        fn_82AB15D0(0,pcStack_348,pcStack_328,pcStack_34c,0x3841);
      }
      fn_82B76410(param_1,puVar24,*(ushort *)puVar12 & 0x1fff);
      break;
    case 0x1c:
      puVar25 = puVar15 + 6;
      break;
    case 0x1d:
      puVar25 = puVar15 + 3;
      break;
    case 0x27:
      if (auStack_244[iVar20 + 1] == 1) goto code_r0x82b7a310;
      puVar15 = puVar15 + 1;
      uStack_2e8 = auStack_1b0[iVar20];
      iStack_2e4 = iVar20;
      fn_82B6EB98(param_1,piVar1 + 0xcd8,piVar1[3],8,&uStack_2e8);
      uStack_350 = 0;
      piVar1[0xbbf] = piVar1[0xbbf] + 1;
      goto LAB_82b7a9f4;
    case 0x28:
      if (piVar1[0x1062] == 0) {
        if (piVar1[2] != 0) goto code_r0x82b7a794;
        uStack_350 = 0;
      }
      else {
        fn_82B6EB98(param_1,piVar1 + 0xcd8,piVar1[3],0xffffffff80000000,0);
code_r0x82b7a794:
        bVar5 = true;
        puVar10 = (uint *)fn_82B78DC0(param_1,puVar15,puVar8,&uStack_350,iVar19);
        puVar15 = puVar8;
      }
      iStack_344 = 1;
      goto LAB_82b7a9f4;
    case 0x29:
      if (auStack_244[iVar20 + 1] == 1) {
        auStack_244[iVar20 + 1] = 0;
        iVar20 = iVar20 + -1;
        goto code_r0x82b7a310;
      }
      puVar15 = puVar15 + 1;
      uStack_288 = auStack_1b0[iVar20];
      iStack_284 = iVar20;
      fn_82B6EB98(param_1,piVar1 + 0xcd8,piVar1[3],0x10,&uStack_288);
      iVar20 = iVar20 + -1;
      uStack_350 = 0;
      goto LAB_82b7a9f4;
    case 0x2a:
      auStack_2d8[1] = 0xffffffff;
      auStack_2d8[0] = auStack_1b0[iVar20];
      fn_82B6EB98(param_1,piVar1 + 0xcd8,piVar1[3],0x200,auStack_2d8);
      piVar1[0xbbf] = piVar1[0xbbf] + 1;
      *puVar15 = (uVar18 & 0x1fff) << 0x10 | *puVar15 & 0xe000ffff;
      fn_82B78DC0(param_1,puVar15,puVar8,&uStack_350,iVar19);
      puVar10 = puVar15 + 1;
      uVar18 = uVar18 - 1;
      auStack_244[iVar20 + 1] = 0;
      iVar20 = iVar20 + -1;
      goto code_r0x82b7a9f0;
    case 0x2b:
      aiStack_2b8[1] = 0;
      piVar13 = aiStack_2b8;
      aiStack_2b8[0] = 0;
      uVar22 = 0x400;
      puVar25 = puVar15 + 1;
      goto code_r0x82b7a590;
    case 0x32:
      puVar25 = puVar15 + 2;
      uStack_304 = puVar15[1] & 0xffff;
      if (aiStack_120[uStack_304] == 1) {
        auStack_244[iVar20 + 1] = 1;
      }
      piVar13 = &iStack_308;
      iStack_308 = 0;
      uVar22 = 0x80;
code_r0x82b7a590:
      iVar9 = piVar1[3];
code_r0x82b7a594:
      fn_82B6EB98(param_1,piVar1 + 0xcd8,iVar9,uVar22,piVar13);
      break;
    case 0x34:
      auStack_244[iVar20 + 2] = 1;
      iVar20 = iVar20 + 1;
code_r0x82b7a310:
      puVar10 = (uint *)fn_82B78DC0(param_1,puVar15,puVar8,&uStack_350,iVar19);
      bVar4 = false;
      goto code_r0x82b7a9f0;
    case 0x35:
      iVar9 = iVar20 + 1;
      puVar25 = puVar15 + 2;
      uVar16 = puVar15[1];
      auStack_244[iVar20 + 2] = (uint)LZCOUNT(auStack_244[iVar9] - 1) >> 5;
      if ((uVar16 & 0x3f0000) != 0) {
        fn_82AB15D0(0,pcStack_348,pcStack_33c,pcStack_34c,0x3623);
      }
      puVar12 = &uStack_278;
      uVar22 = 4;
      uStack_278 = (uint)*(ushort *)((int)puVar15 + 6);
      auStack_1b0[iVar9] = uStack_278;
      iVar20 = iVar9;
      iStack_274 = iVar9;
      goto code_r0x82b7a3a0;
    case 0x3e:
      iVar9 = iVar20 + 1;
      uVar18 = uVar18 + 1;
      auStack_244[iVar20 + 2] = (uint)(auStack_244[iVar9] == 1);
      if (4 < uVar18) {
        fn_82AB15D0(0,pcStack_348,pcStack_320,pcStack_34c,0x3727);
      }
      puVar10 = puVar15 + 2;
      uVar16 = puVar15[1];
      aiStack_260[uVar18] = iVar9;
      if ((uVar16 & 0x3f0000) != 0x20000) {
        fn_82AB15D0(0,pcStack_348,pcStack_334,pcStack_34c,0x372f);
      }
      auStack_2f8[1] = 0;
      uVar16 = piVar1[3];
      auStack_2f8[0] = (uint)*(ushort *)((int)puVar15 + 6);
      auStack_1b0[iVar9] = auStack_2f8[0];
      fn_82B6EB98(param_1,piVar1 + 0xcd8,(ulonglong)uVar16 + 1,0x100,auStack_2f8);
      piVar1[0xbbf] = piVar1[0xbbf] + 1;
      *puVar15 = uVar18 * 0x10000 & 0x1fff0000 | *puVar15 & 0xe000ffff;
      fn_82B78DC0(param_1,puVar15,puVar8,&uStack_350,iVar19);
      iVar20 = iVar9;
code_r0x82b7a9f0:
      bVar5 = true;
      puVar15 = puVar8;
      goto LAB_82b7a9f4;
    case 0x43:
      puVar24 = puVar15 + 2;
      uVar16 = puVar15[1];
      if ((uVar16 & 0x400000) != 0) {
        puVar24 = puVar15 + 3;
      }
      if ((uVar16 & 0x800000) != 0) {
        fn_82AB15D0(0,pcStack_348,puStack_340,pcStack_34c,0x3860);
        puVar24 = puVar24 + 1;
      }
      if ((*puVar24 & 0x400000) == 0) {
        puVar11 = (uint *)0x0;
        puVar25 = puVar24 + 1;
      }
      else {
        puVar25 = puVar24 + 2;
        puVar11 = puVar24 + 1;
      }
      if ((*puVar24 & 0x800000) != 0) {
        fn_82AB15D0(0,pcVar7,puStack_340,pcVar6,0x3875);
        puVar25 = puVar25 + 1;
      }
      if (0x1f < (*(ushort *)puVar12 & 0x1fff)) {
        fn_82AB15D0(0,pcVar7,pcStack_330,pcVar6,0x3880);
      }
      if (3 < (*puVar11 & 7)) {
        fn_82AB15D0(0,pcVar7,pcStack_32c,pcVar6,0x3881);
      }
      uVar16 = puVar15[1];
      fn_82B6EC28(param_1,piVar1[(uVar16 >> 10 & 0xfc0) + (uVar16 & 0xffff) + 0x1068],
                    *(ushort *)puVar12 & 0x1fff,
                    piVar1[(*puVar24 >> 10 & 0xfc0) + (*puVar24 & 0xffff) + 0x1068],*puVar11 & 7);
      iVar9 = piVar1[3];
      piVar13 = aiStack_318;
      aiStack_318[1] = 1;
      uVar22 = 0x10000;
      aiStack_318[0] = iVar9;
      aiStack_318[2] = iVar9;
      goto code_r0x82b7a594;
    case 0x53:
      auStack_2a8[1] = 0;
      auStack_2a8[0] = 0;
      puVar12 = auStack_2a8;
      uVar22 = 0x40;
      puVar25 = puVar15 + 1;
      auStack_244[iVar20 + 1] = 0;
code_r0x82b7a3a0:
      fn_82B6EB98(param_1,piVar1 + 0xcd8,piVar1[3],uVar22,puVar12);
      piVar1[0xbbf] = piVar1[0xbbf] + 1;
    }
    puVar12 = puVar25;
    if (bVar5) {
      puVar12 = puVar10;
    }
    iVar19 = iVar19 + 1;
    if (iStack_344 != 0) {
      if (iVar20 != 0) {
        fn_82AB15D0(0,pcStack_348,0xffffffff820dacc4,pcStack_34c,0x396d);
      }
      fn_82B767F8(param_1);
      (*(code *)param_1[2])(*param_1,puVar8);
      return;
    }
  } while( true );
LAB_82b7a9d0:
  puVar10 = (uint *)fn_82B78DC0(param_1,puVar15,puVar8,&uStack_350,iVar19);
  goto code_r0x82b7a9f0;
}


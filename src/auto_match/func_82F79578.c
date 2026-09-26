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
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4bc;
extern unsigned int *auStack_4d8;
extern int fn_82A1F2B8();
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int fn_82F68BF0();
extern int fn_82F6AB08();
extern int fn_82F6E8A0();
extern int fn_82F6EDE8();
extern int fn_82F70920();
extern int fn_82F794A8();
extern int fn_82F7C468();
extern int fn_82F85978();
extern unsigned int iStack_4d0;
extern unsigned int iStack_4d4;
extern unsigned int lbl_82169558;
extern unsigned int lbl_8216955C;
extern unsigned int lbl_8216A390;
extern unsigned int lbl_8216A3B0;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_831BBFC0;
extern unsigned int lbl_831BBFC8;
extern unsigned int lbl_831BBFCC;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000000;
extern unsigned int uStack_2a1;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4cc;
extern unsigned int uStack_4e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fn_82F79578(int param_1,char *param_2,undefined8 param_3,ulonglong *param_4)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort *puVar4;
  int *piVar5;
  ulonglong *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  short *psVar21;
  ulonglong uVar22;
  undefined *puVar25;
  ulonglong uVar23;
  longlong lVar24;
  undefined *puVar27;
  short *psVar28;
  char cVar29;
  ulonglong uVar26;
  char *pcVar30;
  short *psVar31;
  ulonglong uVar32;
  int iVar33;
  ulonglong uVar34;
  short *psVar35;
  int iVar36;
  undefined1 *puVar37;
  uint uStack_4e0;
  undefined1 *puStack_4dc;
  undefined1 auStack_4d8 [4];
  int iStack_4d4;
  int iStack_4d0;
  uint uStack_4cc;
  uint uStack_4c4;
  short *psStack_4c0;
  undefined1 auStack_4bc [12];
  undefined1 auStack_4b0 [16];
  short asStack_4a0 [255];
  undefined2 uStack_2a1;
  
  uStack_4c4 = 0;
  iStack_4d0 = 0;
  iStack_4d4 = 0;
  uVar34 = 0;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar17 = false;
  iVar33 = 0;
  bVar8 = false;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
      uVar19 = fn_82F7C468(param_1);
      puVar27 = &lbl_831BBF60;
      puVar25 = puVar27;
      if ((uVar19 != 0xffffffff) && (uVar19 != 0xfffffffe)) {
        puVar25 = (undefined *)((&lbl_8329F620)[(int)uVar19 >> 5] + (uVar19 & 0x1f) * 0x48);
      }
      if ((puVar25[0x28] & 0xfe) != 0) goto LAB_82f795b8;
      if ((uVar19 != 0xffffffff) && (uVar19 != 0xfffffffe)) {
        puVar27 = (undefined *)((&lbl_8329F620)[(int)uVar19 >> 5] + (uVar19 & 0x1f) * 0x48);
      }
      if ((puVar27[0x28] & 1) != 0) goto LAB_82f795b8;
    }
    if (param_2 != (char *)0x0) {
      iVar20 = fn_82F6AB08();
      if ((param_1 == iVar20 + 0x20) || (iVar20 = fn_82F6AB08(), param_1 == iVar20 + 0x40)) {
        uVar34 = fn_82F6EDE8(&stack0x00000000 + -0x2a0,0x200,param_2,param_4);
        if ((int)uVar34 == -1) {
          uVar34 = 0x1ff;
        }
        fn_82A1F2B8(&stack0x00000000 + -0x2a0);
        return uVar34;
      }
      cVar29 = *param_2;
      uVar32 = 0;
      uStack_4cc = 0;
      iVar20 = (int)cVar29;
      uStack_4e0 = 0;
      puStack_4dc = (undefined1 *)0x0;
      psVar21 = (short *)0x0;
      if (iVar20 == 0) {
        return 0;
      }
      param_2 = param_2 + -1;
      psVar31 = psStack_4c0;
      psVar35 = psStack_4c0;
LAB_82f796e4:
      pcVar30 = param_2 + 1;
      if (-1 < (int)uVar32) {
        if ((iVar20 < 0x20) || (0x78 < iVar20)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (byte)(&lbl_8216A390)[iVar20] & 0xf;
        }
        bVar7 = (byte)(&lbl_8216A3B0)[uVar19 * 9 + uStack_4cc] >> 4;
        uStack_4cc = (uint)bVar7;
        if (uStack_4cc == 8) goto LAB_82f795b8;
        if (7 < bVar7) goto LAB_82f7a050;
        if (uStack_4cc == 0) {
LAB_82f79934:
          bVar8 = false;
          iVar20 = fn_82F66FA8(cVar29,0xffffffff831bbca8);
          if (iVar20 != 0) {
            fn_82F70920(cVar29,param_1,&stack0x00000000 + -0x4e0);
            pcVar30 = param_2 + 2;
            cVar29 = *pcVar30;
            if (cVar29 == '\0') goto LAB_82f795b8;
          }
          fn_82F70920(cVar29,param_1,&stack0x00000000 + -0x4e0);
          uVar32 = (ulonglong)uStack_4e0;
          goto LAB_82f7a050;
        }
        if (bVar7 == 1) {
          uVar34 = 0;
          bVar16 = false;
          bVar15 = false;
          bVar14 = false;
          bVar13 = false;
          bVar12 = false;
          bVar11 = false;
          bVar10 = false;
          bVar9 = false;
          iVar33 = -1;
          psVar31 = (short *)0x0;
          bVar17 = false;
          iStack_4d0 = 0;
          bVar8 = false;
          iStack_4d4 = 0;
          goto LAB_82f7a050;
        }
        if (bVar7 == 2) {
          if (iVar20 == 0x20) {
            bVar16 = true;
          }
          else if (iVar20 == 0x23) {
            bVar9 = true;
          }
          else if (iVar20 == 0x2b) {
            bVar15 = true;
          }
          else if (iVar20 == 0x2d) {
            uVar34 = uVar34 | 4;
          }
          else if (iVar20 == 0x30) {
            uVar34 = uVar34 | 8;
          }
          goto LAB_82f7a050;
        }
        if (bVar7 == 3) {
          if (iVar20 == 0x2a) {
            uVar19 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (ulonglong *)(uVar19 + 8);
            iStack_4d0 = *(int *)(uVar19 + 4);
            if (iStack_4d0 < 0) {
              uVar34 = uVar34 | 4;
              iStack_4d0 = -iStack_4d0;
            }
          }
          else {
            iStack_4d0 = iStack_4d0 * 10 + iVar20 + -0x30;
          }
          goto LAB_82f7a050;
        }
        if (bVar7 == 4) {
          iVar33 = 0;
          goto LAB_82f7a050;
        }
        if (bVar7 == 5) {
          if (iVar20 == 0x2a) {
            uVar19 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (ulonglong *)(uVar19 + 8);
            iVar33 = *(int *)(uVar19 + 4);
            if (iVar33 < 0) {
              iVar33 = -1;
            }
          }
          else {
            iVar33 = iVar33 * 10 + iVar20 + -0x30;
          }
          goto LAB_82f7a050;
        }
        if (bVar7 == 6) {
          if (iVar20 == 0x49) {
            cVar2 = param_2[2];
            if ((cVar2 == '6') && (param_2[3] == '4')) {
              bVar10 = true;
              pcVar30 = param_2 + 3;
            }
            else if ((cVar2 == '3') && (param_2[3] == '2')) {
              bVar10 = false;
              pcVar30 = param_2 + 3;
            }
            else if (((((cVar2 != 'd') && (cVar2 != 'i')) && (cVar2 != 'o')) &&
                     ((cVar2 != 'u' && (cVar2 != 'x')))) && (cVar2 != 'X')) {
              uStack_4cc = 0;
              goto LAB_82f79934;
            }
          }
          else if (iVar20 == 0x68) {
            uVar34 = uVar34 | 0x20;
          }
          else if (iVar20 == 0x6c) {
            if (param_2[2] == 'l') {
              bVar11 = true;
              pcVar30 = param_2 + 2;
            }
            else {
              uVar34 = uVar34 | 0x10;
            }
          }
          else if (iVar20 == 0x77) {
            uVar34 = uVar34 | 0x800;
          }
          goto LAB_82f7a050;
        }
        switch(iVar20) {
        case 0x41:
        case 0x45:
        case 0x47:
          cVar29 = (char)iVar20 + ' ';
          psVar31 = (short *)0x1;
          goto code_r0x82f79b9c;
        default:
          goto LAB_82f79e80;
        case 0x43:
          if ((uVar34 & 0x830) == 0) {
            uVar34 = uVar34 | 0x800;
          }
        case 99:
          uVar19 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar19 + 8);
          if ((uVar34 & 0x810) == 0) {
            puStack_4dc = (undefined1 *)0x1;
          }
          else {
            iVar20 = fn_82F85978(&stack0x00000000 + -0x4dc,&stack0x00000000 + -0x4a0,0x200,
                                  *(undefined2 *)(uVar19 + 6));
            if (iVar20 != 0) {
              bVar17 = true;
            }
          }
          psVar35 = (short *)(&stack0x00000000 + -0x4a0);
          goto LAB_82f79e80;
        case 0x53:
          if ((uVar34 & 0x830) == 0) {
            uVar34 = uVar34 | 0x800;
          }
        case 0x73:
          iVar20 = iVar33;
          if (iVar33 == -1) {
            iVar20 = 0x7fffffff;
          }
          uVar19 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar19 + 8);
          psVar35 = *(short **)(uVar19 + 4);
          if ((uVar34 & 0x810) == 0) {
            psVar28 = psVar35;
            if (psVar35 == (short *)0x0) {
              psVar35 = lbl_82169558;
              psVar28 = lbl_82169558;
            }
            for (; (iVar20 != 0 && (iVar20 = iVar20 + -1, *(char *)psVar28 != '\0'));
                psVar28 = (short *)((int)psVar28 + 1)) {
            }
            puStack_4dc = (undefined1 *)((int)psVar28 - (int)psVar35);
          }
          else {
            if (psVar35 == (short *)0x0) {
              psVar35 = lbl_8216955C;
            }
            bVar8 = true;
            for (psVar28 = psVar35; (iVar20 != 0 && (iVar20 = iVar20 + -1, *psVar28 != 0));
                psVar28 = psVar28 + 1) {
            }
            puStack_4dc = (undefined1 *)((int)psVar28 - (int)psVar35 >> 1);
          }
          goto LAB_82f79e80;
        case 0x58:
          goto code_r0x82f79cd0;
        case 0x5a:
          uVar19 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar19 + 8);
          puVar4 = *(ushort **)(uVar19 + 4);
          psVar28 = lbl_82169558;
          if ((puVar4 != (ushort *)0x0) &&
             (psVar35 = *(short **)(puVar4 + 2), psVar35 != (short *)0x0)) {
            if ((uVar34 & 0x800) == 0) {
              puStack_4dc = (undefined1 *)(int)(short)*puVar4;
              bVar8 = false;
            }
            else {
              uVar3 = *puVar4;
              bVar8 = true;
              puStack_4dc = (undefined1 *)
                            (((int)(short)uVar3 >> 1) + (uint)((short)uVar3 < 0 && (uVar3 & 1) != 0)
                            );
            }
            goto LAB_82f79e80;
          }
          do {
            cVar29 = *(char *)psVar28;
            psVar28 = (short *)((int)psVar28 + 1);
          } while (cVar29 != '\0');
          iVar20 = (int)psVar28 - (int)lbl_82169558;
          psVar35 = lbl_82169558;
          goto code_r0x82f79a90;
        case 0x61:
        case 0x65:
        case 0x66:
        case 0x67:
          goto code_r0x82f79b9c;
        case 100:
        case 0x69:
          bVar12 = true;
        case 0x75:
          iVar20 = 10;
          goto code_r0x82f79d18;
        case 0x6e:
          uVar19 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar19 + 8);
          piVar5 = *(int **)(uVar19 + 4);
          iVar20 = fn_82F6E8A0();
          if (iVar20 != 0) {
            if ((uVar34 & 0x20) == 0) {
              *piVar5 = (int)uVar32;
            }
            else {
              *(short *)piVar5 = (short)uVar32;
            }
            bVar17 = true;
            goto LAB_82f7a03c;
          }
          goto LAB_82f795b8;
        case 0x6f:
          iVar20 = 8;
          if (bVar9) {
            bVar13 = true;
          }
          goto code_r0x82f79d18;
        case 0x70:
          iVar33 = 8;
          goto code_r0x82f79cd0;
        case 0x78:
          uStack_4c4 = 0x27;
          goto code_r0x82f79cdc;
        }
      }
      goto LAB_82f7a068;
    }
  }
  goto LAB_82f795b8;
code_r0x82f79cd0:
  uStack_4c4 = 7;
code_r0x82f79cdc:
  iVar20 = 0x10;
  if (bVar9) {
    iStack_4d4 = 2;
  }
code_r0x82f79d18:
  if ((bVar10) || (bVar11)) {
    puVar6 = (ulonglong *)((int)param_4 + 7U & 0xfffffff8);
    param_4 = puVar6 + 1;
    uVar26 = *puVar6;
  }
  else if ((uVar34 & 0x20) == 0) {
    uVar19 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (ulonglong *)(uVar19 + 8);
    if (bVar12) {
      uVar26 = (ulonglong)*(int *)(uVar19 + 4);
    }
    else {
      uVar26 = (ulonglong)*(uint *)(uVar19 + 4);
    }
  }
  else {
    uVar19 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (ulonglong *)(uVar19 + 8);
    uVar19 = *(uint *)(uVar19 + 4);
    if (bVar12) {
      uVar26 = (ulonglong)(short)uVar19;
    }
    else {
      uVar26 = (ulonglong)uVar19 & 0xffff;
    }
  }
  if ((bVar12) && ((longlong)uVar26 < 0)) {
    uVar26 = -uVar26;
    bVar14 = true;
  }
  if ((!bVar10) && (!bVar11)) {
    uVar26 = uVar26 & 0xffffffff;
  }
  if (iVar33 < 0) {
    iVar33 = 1;
  }
  else {
    uVar34 = uVar34 & 0xfffffff7;
    if (0x200 < iVar33) {
      iVar33 = 0x200;
    }
  }
  if (uVar26 == 0) {
    iStack_4d4 = 0;
  }
  psVar28 = (short *)(&stack0x00000000 + -0x2a1);
  while ((bVar1 = 0 < iVar33, iVar33 = iVar33 + -1, bVar1 || (uVar26 != 0))) {
    uVar23 = (ulonglong)iVar20;
    trapDoubleWordImmediate(6,uVar23,0);
    uVar22 = uVar26 - (uVar26 / uVar23) * uVar23;
    uVar26 = uVar26 / uVar23;
    trapDoubleWordImmediate(6,uVar23,0);
    lVar24 = (uVar22 & 0xffffffff) + 0x30;
    if (0x39 < (int)lVar24) {
      lVar24 = lVar24 + (ulonglong)uStack_4c4;
    }
    *(char *)psVar28 = (char)lVar24;
    psVar28 = (short *)((int)psVar28 + -1);
  }
  puStack_4dc = &stack0x00000000 + (-0x2a1 - (int)psVar28);
  psVar35 = (short *)((int)psVar28 + 1);
  if ((bVar13) && ((puStack_4dc == (undefined1 *)0x0 || (*(char *)psVar35 != '0')))) {
    puStack_4dc = puStack_4dc + 1;
    *(char *)psVar28 = '0';
    psVar35 = psVar28;
  }
  goto LAB_82f79e80;
code_r0x82f79b9c:
  psVar28 = (short *)(&stack0x00000000 + -0x4a0);
  iVar36 = 0x200;
  iVar20 = iVar36;
  psVar35 = psVar28;
  if (iVar33 < 0) {
    iVar33 = 6;
  }
  else if (iVar33 == 0) {
    if (cVar29 == 'g') {
      iVar33 = 1;
    }
  }
  else {
    if (0x200 < iVar33) {
      iVar33 = 0x200;
    }
    if (0xa3 < iVar33) {
      iVar20 = iVar33 + 0x15d;
      psVar21 = (short *)fn_82F68BF0(iVar20);
      psVar35 = psVar21;
      if (psVar21 == (short *)0x0) {
        iVar33 = 0xa3;
        iVar20 = iVar36;
        psVar35 = psVar28;
      }
    }
  }
  param_4 = (ulonglong *)(((int)param_4 + 7U & 0xfffffff8) + 8);
  (*(code *)lbl_831BBFC0)
            (&stack0x00000000 + -0x4b0,psVar35,iVar20,cVar29,iVar33,psVar31,0xffffffff831bbca8);
  if ((bVar9) && (iVar33 == 0)) {
    (*(code *)lbl_831BBFCC)(psVar35,0xffffffff831bbca8);
  }
  if ((cVar29 == 'g') && (!bVar9)) {
    (*(code *)lbl_831BBFC8)(psVar35,0xffffffff831bbca8);
  }
  if (*(char *)psVar35 == '-') {
    bVar14 = true;
    psVar35 = (short *)((int)psVar35 + 1);
  }
  bVar12 = true;
  psVar28 = psVar35;
  do {
    cVar29 = *(char *)psVar28;
    psVar28 = (short *)((int)psVar28 + 1);
  } while (cVar29 != '\0');
  iVar20 = (int)psVar28 - (int)psVar35;
code_r0x82f79a90:
  puStack_4dc = (undefined1 *)(iVar20 + -1);
LAB_82f79e80:
  if (!bVar17) {
    if ((bVar12) && (((bVar14 || (bVar15)) || (bVar16)))) {
      iStack_4d4 = 1;
    }
    iVar36 = (iStack_4d0 - (int)puStack_4dc) - iStack_4d4;
    iVar20 = iVar36;
    if ((uVar34 & 0xc) == 0) {
      do {
        if (iVar20 < 1) break;
        iVar20 = iVar20 + -1;
        fn_82F70920(0x20,param_1,&stack0x00000000 + -0x4e0);
      } while (uStack_4e0 != 0xffffffff);
    }
    fn_82F794A8(&stack0x00000000 + -0x4d8,iStack_4d4,param_1,&stack0x00000000 + -0x4e0);
    if (((uVar34 & 8) != 0) && (iVar20 = iVar36, (uVar34 & 4) == 0)) {
      do {
        if (iVar20 < 1) break;
        iVar20 = iVar20 + -1;
        fn_82F70920(0x30,param_1,&stack0x00000000 + -0x4e0);
      } while (uStack_4e0 != 0xffffffff);
    }
    if ((bVar8) && (0 < (int)puStack_4dc)) {
      psVar28 = psVar35 + -1;
      puVar37 = puStack_4dc;
      do {
        psVar28 = psVar28 + 1;
        puVar37 = puVar37 + -1;
        iVar20 = fn_82F85978(&stack0x00000000 + -0x4c0,&stack0x00000000 + -0x4bc,6,*psVar28);
        if ((iVar20 != 0) || (psStack_4c0 == (short *)0x0)) {
          uVar32 = 0xffffffffffffffff;
          uStack_4e0 = 0xffffffff;
          goto LAB_82f79ff8;
        }
        fn_82F794A8(&stack0x00000000 + -0x4bc,psStack_4c0,param_1,&stack0x00000000 + -0x4e0);
      } while (puVar37 != (undefined1 *)0x0);
    }
    else {
      fn_82F794A8(psVar35,puStack_4dc,param_1,&stack0x00000000 + -0x4e0);
    }
    uVar32 = (ulonglong)uStack_4e0;
LAB_82f79ff8:
    if ((-1 < (int)uVar32) && ((uVar34 & 4) != 0)) {
      do {
        if (iVar36 < 1) break;
        iVar36 = iVar36 + -1;
        fn_82F70920(0x20,param_1,&stack0x00000000 + -0x4e0);
        uVar32 = (ulonglong)uStack_4e0;
      } while (uStack_4e0 != 0xffffffff);
    }
  }
LAB_82f7a03c:
  if (psVar21 != (short *)0x0) {
    fn_82F641F8(psVar21);
    psVar21 = (short *)0x0;
  }
LAB_82f7a050:
  param_2 = pcVar30;
  cVar29 = param_2[1];
  iVar20 = (int)cVar29;
  if (iVar20 == 0) goto LAB_82f7a068;
  goto LAB_82f796e4;
LAB_82f7a068:
  if (uStack_4cc == 0) {
    return uVar32;
  }
  if (uStack_4cc == 7) {
    return uVar32;
  }
LAB_82f795b8:
  puVar18 = (undefined4 *)fn_82F68240();
  *puVar18 = 0x16;
  fn_82F63BA0();
  return 0xffffffffffffffff;
}


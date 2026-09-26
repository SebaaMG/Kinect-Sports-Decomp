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
extern unsigned int *auStack_360;
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F641F8();
extern int fn_82F66A80();
extern int fn_82F66AA0();
extern int fn_82F68240();
extern int fn_82F68BF0();
extern int fn_82F691F0();
extern int fn_82F6E8A0();
extern int fn_82F6ECF8();
extern int fn_82F70490();
extern int fn_82F84360();
extern int fn_82F85978();
extern int fn_82F88700();
extern int fn_82F88978();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int iStack_374;
extern unsigned int iStack_37c;
extern unsigned int iStack_380;
extern unsigned int iStack_384;
extern unsigned int iStack_388;
extern unsigned int iStack_394;
extern unsigned int iStack_39c;
extern unsigned int lbl_831BBCA8;
extern unsigned int lbl_831BBFA8;
extern unsigned int uStack_398;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3b0;


ulonglong fn_82F84408(int param_1,ushort *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar9;
  ushort uVar15;
  int iVar10;
  ulonglong uVar8;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort *puVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  ulonglong uVar16;
  char cVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined2 *puVar25;
  longlong *plVar28;
  longlong lVar26;
  longlong lVar27;
  ushort *puVar29;
  longlong *plVar30;
  int iStack00000014;
  ushort *puStack0000001c;
  int iStack0000002c;
  uint uStack_3b0;
  char cStack_3ac;
  undefined2 *puStack_3a8;
  longlong *plStack_3a4;
  uint uStack_3a0;
  int iStack_39c;
  uint uStack_398;
  int iStack_394;
  longlong lStack_390;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  int iStack_37c;
  undefined **ppuStack_378;
  int iStack_374;
  undefined **ppuStack_370;
  undefined2 auStack_360 [432];
  
  uVar24 = 0;
  puStack_3a8 = auStack_360;
  iStack_39c = 0;
  iStack_388 = 0;
  iStack_374 = 0;
  uStack_398 = 0x15e;
  iStack_380 = 0;
  iStack00000014 = param_1;
  puStack0000001c = param_2;
  iStack0000002c = param_4;
  if (param_2 == (ushort *)0x0) {
    puVar9 = (undefined4 *)fn_82F68240();
    *puVar9 = 0x16;
    fn_82F63BA0();
LAB_82f8445c:
    uVar24 = 0xffffffffffffffff;
  }
  else {
    if (param_1 == 0) {
      puVar9 = (undefined4 *)fn_82F68240();
      uVar24 = 0xffffffffffffffff;
    }
    else {
      uVar15 = *param_2;
      cStack_3ac = '\0';
      uStack_3a0 = 0;
      if (uVar15 != 0) {
        ppuStack_378 = &lbl_831BBCA8;
        ppuStack_370 = &lbl_831BBFA8;
        iVar11 = 0;
LAB_82f844b8:
        iVar10 = fn_82F70490(uVar15,8);
        iVar12 = iStack00000014;
        if (iVar10 != 0) {
          iVar10 = iVar11 + -1;
          do {
            iVar10 = iVar10 + 1;
            uVar8 = fn_82F88700(iVar12);
            puVar29 = puStack0000001c;
            if ((uVar8 & 0xffff) == 0xffff) goto LAB_82f84514;
            iVar11 = fn_82F70490(uVar8,8);
          } while (iVar11 != 0);
          puVar29 = puStack0000001c;
          if ((uVar8 & 0xffff) != 0xffff) {
            fn_82F88978(uVar8,iVar12);
            puVar29 = puStack0000001c;
          }
LAB_82f84514:
          do {
            puVar29 = puVar29 + 1;
            iVar11 = fn_82F70490(*puVar29,8);
          } while (iVar11 != 0);
          goto LAB_82f85494;
        }
        puVar29 = puStack0000001c;
        if (*puStack0000001c != 0x25) {
LAB_82f85440:
          iVar10 = iVar11 + 1;
          uVar24 = fn_82F88700(iStack00000014);
          puStack0000001c = puVar29 + 1;
          uVar8 = uVar24 & 0xffff;
          if (*puVar29 == uVar8) goto LAB_82f85468;
LAB_82f854ac:
          if (uVar8 != 0xffff) {
            fn_82F88978(uVar24,iStack00000014);
          }
          goto LAB_82f854c0;
        }
        if (puStack0000001c[1] == 0x25) {
          if (puStack0000001c[1] == 0x25) {
            puVar29 = puStack0000001c + 1;
          }
          goto LAB_82f85440;
        }
        uStack_3b0 = 0;
        uVar8 = 0;
        uVar23 = 0;
        iVar13 = 0;
        iVar12 = 0;
        bVar1 = false;
        cVar18 = '\0';
        cVar19 = '\0';
        cVar22 = '\0';
        cVar21 = '\0';
        cVar20 = '\x01';
        iVar14 = 0;
        do {
          puVar3 = puVar29 + 1;
          uVar15 = *puVar3;
          puVar17 = puVar3;
          if (((uVar15 & 0xff00) == 0) && (iVar10 = fn_82F66A80(uVar15 & 0xff), iVar10 != 0)) {
            iVar13 = iVar13 + 1;
            uStack_3b0 = (uStack_3b0 * 10 + (uint)uVar15) - 0x30;
          }
          else if (uVar15 < 0x4f) {
            if (uVar15 != 0x4e) {
              if (uVar15 == 0x2a) {
                cVar18 = cVar18 + '\x01';
              }
              else if (uVar15 != 0x46) {
                if (uVar15 == 0x49) {
                  uVar15 = puVar29[2];
                  if ((uVar15 == 0x36) && (puVar17 = puVar29 + 3, puVar29[3] == 0x34))
                  goto LAB_82f84608;
                  if ((((((uVar15 != 0x33) || (puVar17 = puVar29 + 3, puVar29[3] != 0x32)) &&
                        (puVar17 = puVar3, uVar15 != 100)) && ((uVar15 != 0x69 && (uVar15 != 0x6f)))
                       ) && (uVar15 != 0x78)) && (uVar15 != 0x58)) goto LAB_82f8468c;
                }
                else if (uVar15 == 0x4c) {
                  cVar20 = cVar20 + '\x01';
                }
                else {
LAB_82f8468c:
                  cVar19 = cVar19 + '\x01';
                  puVar17 = puVar3;
                }
              }
            }
          }
          else if (uVar15 == 0x68) {
            cVar21 = cVar22 + -1;
            cVar20 = cVar20 + -1;
            cVar22 = cVar21;
          }
          else {
            if (uVar15 == 0x6c) {
              puVar17 = puVar29 + 2;
              if (puVar29[2] == 0x6c) {
LAB_82f84608:
                iVar14 = iVar14 + 1;
                lStack_390 = 0;
                goto LAB_82f846cc;
              }
              cVar20 = cVar20 + '\x01';
            }
            else if (uVar15 != 0x77) goto LAB_82f8468c;
            cVar21 = cVar21 + '\x01';
            cVar22 = cVar21;
            puVar17 = puVar3;
          }
LAB_82f846cc:
          puVar29 = puVar17;
        } while (cVar19 == '\0');
        iStack_394 = (int)cVar18;
        if (cVar18 == '\0') {
          iStack_384 = iStack0000002c;
          uVar5 = iStack0000002c + 7U & 0xfffffff8;
          iStack0000002c = uVar5 + 8;
          plStack_3a4 = *(longlong **)(uVar5 + 4);
        }
        else {
          plStack_3a4 = (longlong *)0x0;
        }
        cVar22 = '\0';
        if ((cVar21 == '\0') && ((*puVar29 == 0x53 || (cVar21 = '\x01', *puVar29 == 0x43)))) {
          cVar21 = -1;
        }
        uVar15 = *puVar29 | 0x20;
        puStack0000001c = puVar29;
        if (uVar15 != 0x6e) {
          if ((uVar15 == 99) || (uVar15 == 0x7b)) {
            iVar11 = iVar11 + 1;
            uVar24 = fn_82F88700(iStack00000014);
          }
          else {
            do {
              iVar11 = iVar11 + 1;
              uVar24 = fn_82F88700(iStack00000014);
              if ((uVar24 & 0xffff) == 0xffff) break;
              iVar10 = fn_82F70490(uVar24,8);
            } while (iVar10 != 0);
          }
          if ((uVar24 & 0xffff) == 0xffff) goto LAB_82f854c0;
        }
        iVar7 = iStack_394;
        iVar6 = iStack00000014;
        if ((iVar13 != 0) && (uStack_3b0 == 0)) {
          uVar8 = uVar24 & 0xffff;
          goto LAB_82f854ac;
        }
        if ((iStack_394 == 0) && (((uVar15 == 99 || (uVar15 == 0x73)) || (uVar15 == 0x7b)))) {
          uVar5 = iStack_384 + 7U & 0xfffffff8;
          iStack_384 = uVar5 + 8;
          plStack_3a4 = *(longlong **)(uVar5 + 4);
          iStack0000002c = uVar5 + 0x10;
          iVar12 = *(int *)(uVar5 + 0xc);
          if (iVar12 == 0) {
            if (cVar21 < '\x01') {
              *(undefined1 *)plStack_3a4 = 0;
            }
            else {
              *(undefined2 *)plStack_3a4 = 0;
            }
            puVar9 = (undefined4 *)fn_82F68240();
            *puVar9 = 0xc;
LAB_82f854c0:
            if (iStack_374 == 1) {
              fn_82F641F8(iStack_388);
            }
            if (iStack_39c == 1) {
              fn_82F641F8(puStack_3a8);
            }
            goto LAB_82f854e8;
          }
        }
        plVar28 = plStack_3a4;
        iVar10 = iVar11;
        switch(uVar15) {
        case 99:
          if (iVar13 == 0) {
            iVar13 = 1;
            uStack_3b0 = uStack_3b0 + 1;
          }
        case 0x73:
          bVar1 = '\0' < cVar21;
          if ((uVar24 & 0xffff) != 0xffff) {
            fn_82F88978(uVar24,iStack00000014);
          }
          iVar14 = iStack_388;
          iVar10 = iVar11 + -1;
          plVar30 = plVar28;
          if (uVar15 != 99) {
            iVar12 = iVar12 + -1;
          }
          do {
            if ((iVar13 != 0) && (bVar2 = uStack_3b0 == 0, uStack_3b0 = uStack_3b0 - 1, bVar2))
            goto code_r0x82f84b54;
            iVar11 = iVar10 + 1;
            uVar24 = fn_82F88700(iVar6);
            uVar8 = uVar24 & 0xffff;
            if (uVar8 == 0xffff) goto code_r0x82f84b3c;
            if (uVar15 != 99) {
              if (uVar15 == 0x73) {
                if ((8 < uVar8) && (uVar8 < 0xe)) goto code_r0x82f84b3c;
                if (uVar8 != 0x20) goto code_r0x82f84ad0;
              }
              if ((uVar15 != 0x7b) ||
                 ((1 << ((uint)uVar8 & 7) & (int)*(char *)(((uint)uVar8 >> 3) + iVar14)) == 0))
              goto code_r0x82f84b3c;
            }
code_r0x82f84ad0:
            iVar10 = iVar11;
            if (iVar7 == 0) {
              if (iVar12 == 0) {
code_r0x82f85528:
                puVar9 = (undefined4 *)fn_82F68240();
                *puVar9 = 0xc;
                if (bVar1) {
                  *(undefined2 *)plVar30 = 0;
                }
                else {
                  *(undefined1 *)plVar30 = 0;
                }
                goto LAB_82f854c0;
              }
              if (bVar1) {
                *(short *)plVar28 = (short)uVar24;
                plVar28 = (longlong *)((int)plVar28 + 2);
                iVar12 = iVar12 + -1;
                plStack_3a4 = plVar28;
              }
              else {
                iStack_37c = 0;
                iVar11 = fn_82F85978(&iStack_37c,plVar28,iVar12,uVar24);
                if (iVar11 == 0x22) goto code_r0x82f85528;
                if (0 < iStack_37c) {
                  plVar28 = (longlong *)(iStack_37c + (int)plVar28);
                  iVar12 = iVar12 - iStack_37c;
                  plStack_3a4 = plVar28;
                }
              }
            }
            else {
              plVar30 = (longlong *)((int)plVar30 + 2);
            }
          } while( true );
        case 100:
        case 0x6f:
        case 0x75:
          goto code_r0x82f84cbc;
        case 0x65:
        case 0x66:
        case 0x67:
          uVar8 = 0;
          if ((uVar24 & 0xffff) == 0x2d) {
            uVar8 = 1;
            *puStack_3a8 = 0x2d;
code_r0x82f85024:
            iVar11 = iVar11 + 1;
            uStack_3b0 = uStack_3b0 - 1;
            uVar24 = fn_82F88700(iStack00000014);
          }
          else if ((uVar24 & 0xffff) == 0x2b) goto code_r0x82f85024;
          iVar12 = iStack00000014;
          if (iVar13 == 0) {
            uStack_3b0 = 0xffffffff;
          }
          uVar16 = uVar24 & 0xffff;
          puVar25 = puStack_3a8;
          if ((uVar24 & 0xff00) == 0) {
            lVar26 = uVar8 << 1;
            do {
              puVar25 = puStack_3a8;
              iVar10 = fn_82F66A80(uVar16 & 0xff);
              if ((iVar10 == 0) || (bVar1 = uStack_3b0 == 0, uStack_3b0 = uStack_3b0 - 1, bVar1))
              break;
              uVar8 = uVar8 + 1;
              *(short *)((int)lVar26 + (int)puVar25) = (short)(char)uVar24;
              uVar23 = uVar23 + 1;
              lVar26 = lVar26 + 2;
              iVar10 = fn_82F84360(uVar8,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
              if (iVar10 == 0) goto LAB_82f854c0;
              iVar11 = iVar11 + 1;
              uVar24 = fn_82F88700(iVar12);
              uVar16 = uVar24 & 0xffff;
              puVar25 = puStack_3a8;
            } while ((uVar24 & 0xff00) == 0);
          }
          uVar15 = **(ushort **)(*(int *)(*ppuStack_378 + 0xbc) + 0x30);
          if (((uint)uVar15 == (int)(char)uVar24) &&
             (bVar1 = uStack_3b0 != 0, uStack_3b0 = uStack_3b0 - 1, bVar1)) {
            iVar11 = iVar11 + 1;
            uVar24 = fn_82F88700(iVar12);
            uVar16 = uVar8 & 0xffffffff;
            uVar8 = uVar8 + 1;
            *(ushort *)((int)(uVar16 << 1) + (int)puVar25) = uVar15;
            iVar10 = fn_82F84360(uVar8,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
            if (iVar10 == 0) goto LAB_82f854c0;
            uVar16 = uVar24 & 0xffff;
            puVar25 = puStack_3a8;
            if ((uVar24 & 0xff00) == 0) {
              lVar26 = (uVar8 & 0x7fffffff) << 1;
              do {
                iVar10 = fn_82F66A80(uVar16 & 0xff);
                puVar25 = puStack_3a8;
                if ((iVar10 == 0) || (bVar1 = uStack_3b0 == 0, uStack_3b0 = uStack_3b0 - 1, bVar1))
                break;
                uVar8 = uVar8 + 1;
                *(short *)((int)lVar26 + (int)puStack_3a8) = (short)uVar24;
                uVar23 = uVar23 + 1;
                lVar26 = lVar26 + 2;
                iVar10 = fn_82F84360(uVar8,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
                if (iVar10 == 0) goto LAB_82f854c0;
                iVar11 = iVar11 + 1;
                uVar24 = fn_82F88700(iVar12);
                uVar16 = uVar24 & 0xffff;
                puVar25 = puStack_3a8;
              } while ((uVar24 & 0xff00) == 0);
            }
          }
          if ((uVar23 != 0) &&
             (((uVar16 == 0x65 || (uVar16 == 0x45)) && (iVar10 = uStack_3b0 - 1, uStack_3b0 != 0))))
          {
            uVar16 = uVar8 + 1;
            *(undefined2 *)((int)((uVar8 & 0xffffffff) << 1) + (int)puVar25) = 0x65;
            iVar13 = fn_82F84360(uVar16,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
            if (iVar13 == 0) goto LAB_82f854c0;
            uVar24 = fn_82F88700(iVar12);
            iVar13 = iVar11 + 1;
            if ((uVar24 & 0xffff) == 0x2d) {
              uVar4 = uVar16 & 0xffffffff;
              uVar16 = uVar8 + 2;
              *(undefined2 *)((int)(uVar4 << 1) + (int)puStack_3a8) = 0x2d;
              iVar14 = fn_82F84360(uVar16,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
              if (iVar14 == 0) goto LAB_82f854c0;
code_r0x82f85278:
              bVar1 = iVar10 == 0;
              iVar10 = uStack_3b0 - 2;
              uVar8 = uVar16;
              if (bVar1) {
                iVar10 = 0;
              }
              else {
                uVar24 = fn_82F88700(iVar12);
                iVar13 = iVar11 + 2;
              }
            }
            else {
              uVar8 = uVar16;
              if ((uVar24 & 0xffff) == 0x2b) goto code_r0x82f85278;
            }
            iVar11 = iVar13;
            uVar16 = uVar24 & 0xffff;
            if ((uVar24 & 0xff00) == 0) {
              lVar26 = (uVar8 & 0x7fffffff) << 1;
              do {
                iVar13 = fn_82F66A80(uVar16 & 0xff);
                if ((iVar13 == 0) || (bVar1 = iVar10 == 0, iVar10 = iVar10 + -1, bVar1)) break;
                uVar8 = uVar8 + 1;
                *(short *)((int)lVar26 + (int)puStack_3a8) = (short)uVar24;
                uVar23 = uVar23 + 1;
                lVar26 = lVar26 + 2;
                iVar13 = fn_82F84360(uVar8,&uStack_398,&puStack_3a8,auStack_360,&iStack_39c);
                if (iVar13 == 0) goto LAB_82f854c0;
                iVar11 = iVar11 + 1;
                uVar24 = fn_82F88700(iVar12);
                uVar16 = uVar24 & 0xffff;
              } while ((uVar24 & 0xff00) == 0);
            }
          }
          iVar10 = iVar11 + -1;
          if (uVar16 != 0xffff) {
            fn_82F88978(uVar24,iVar12);
          }
          puVar25 = puStack_3a8;
          if (uVar23 == 0) goto LAB_82f854c0;
          if (iStack_394 == 0) {
            uStack_3a0 = uStack_3a0 + 1;
            lVar27 = ((ulonglong)uStack_398 + 1 & 0x7fffffff) * 2;
            *(undefined2 *)((int)((uVar8 & 0xffffffff) << 1) + (int)puStack_3a8) = 0;
            lVar26 = fn_82F68BF0(lVar27);
            if (lVar26 != 0) {
              iVar11 = fn_82F6ECF8(0,lVar26,lVar27,puVar25,lVar27 + -1);
              if ((iVar11 != 0) && ((iVar11 == 0x16 || (iVar11 == 0x22)))) {
                    /* WARNING: Subroutine does not return */
                fn_82F63C78(0,0,0,0,0);
              }
              (*(code *)ppuStack_370[7])((longlong)cVar20 + -1,plStack_3a4,lVar26,ppuStack_378);
              fn_82F641F8(lVar26);
              break;
            }
            goto LAB_82f854c0;
          }
          break;
        default:
          if ((ulonglong)*puStack0000001c != (uVar24 & 0xffff)) {
            if ((uVar24 & 0xffff) != 0xffff) {
              fn_82F88978(uVar24,iStack00000014);
            }
            iStack_380 = 1;
            goto LAB_82f854c0;
          }
          cStack_3ac = cStack_3ac + -1;
          if (iStack_394 == 0) {
            iStack0000002c = iStack_384;
          }
          break;
        case 0x69:
          uVar15 = 100;
        case 0x78:
          if ((uVar24 & 0xffff) == 0x2d) {
            bVar1 = true;
code_r0x82f84bc0:
            uVar16 = (ulonglong)uStack_3b0;
            uStack_3b0 = (uint)(uVar16 - 1);
            if ((uVar16 - 1 == 0) && (iVar13 != 0)) {
              cVar22 = '\x01';
            }
            else {
              iVar11 = iVar11 + 1;
              uVar24 = fn_82F88700(iStack00000014);
            }
          }
          else if ((uVar24 & 0xffff) == 0x2b) goto code_r0x82f84bc0;
          if ((uVar24 & 0xffff) == 0x30) {
            uVar24 = fn_82F88700(iVar6);
            uVar16 = uVar24 & 0xffff;
            if ((uVar16 == 0x78) || (uVar16 == 0x58)) {
              iVar11 = iVar11 + 2;
              uVar24 = fn_82F88700(iVar6);
              if ((iVar13 != 0) && (uStack_3b0 = uStack_3b0 - 2, (int)uStack_3b0 < 1)) {
                cVar22 = cVar22 + '\x01';
              }
              uVar15 = 0x78;
            }
            else {
              uVar23 = 1;
              if (uVar15 == 0x78) {
                if (uVar16 != 0xffff) {
                  fn_82F88978(uVar24,iVar6);
                }
                uVar24 = 0x30;
              }
              else {
                if ((iVar13 != 0) &&
                   (uVar16 = (ulonglong)uStack_3b0, uStack_3b0 = (uint)(uVar16 - 1), uVar16 - 1 == 0
                   )) {
                  cVar22 = cVar22 + '\x01';
                }
                uVar15 = 0x6f;
                iVar11 = iVar11 + 1;
              }
            }
          }
          goto code_r0x82f84d08;
        case 0x6e:
          if ((iStack_394 != 0) || (iVar12 = fn_82F6E8A0(), iVar12 == 0)) break;
          goto code_r0x82f84fc4;
        case 0x70:
          cVar20 = '\x01';
code_r0x82f84cbc:
          if ((uVar24 & 0xffff) == 0x2d) {
            bVar1 = true;
code_r0x82f84cd8:
            uVar16 = (ulonglong)uStack_3b0;
            uStack_3b0 = (uint)(uVar16 - 1);
            if ((uVar16 - 1 == 0) && (iVar13 != 0)) {
              cVar22 = '\x01';
            }
            else {
              iVar11 = iVar11 + 1;
              uVar24 = fn_82F88700(iStack00000014);
            }
          }
          else if ((uVar24 & 0xffff) == 0x2b) goto code_r0x82f84cd8;
code_r0x82f84d08:
          bVar2 = cVar22 == '\0';
          iVar10 = iVar11;
          iVar11 = 0;
          if (iVar14 == 0) {
            while (bVar2) {
              if ((uVar15 == 0x78) || (uVar15 == 0x70)) {
                uVar16 = uVar24 & 0xffff;
                if ((uVar24 & 0xff00) == 0) {
                  iVar11 = fn_82F66AA0(uVar24 & 0xff);
                  if (iVar11 != 0) {
                    uVar8 = (uVar8 & 0xfffffff) << 4;
                    iVar11 = fn_82F66A80(uVar24 & 0xff);
                    if (iVar11 == 0) {
                      uVar16 = (uVar24 & 0xffdf) - 7;
                    }
                    uVar24 = uVar16 & 0xffff;
                    goto code_r0x82f84f00;
                  }
                }
code_r0x82f84ef8:
                cVar22 = cVar22 + '\x01';
              }
              else {
                if (((uVar24 & 0xff00) != 0) || (iVar11 = fn_82F66A80(uVar24 & 0xff), iVar11 == 0))
                goto code_r0x82f84ef8;
                if (uVar15 == 0x6f) {
                  if (0x37 < (uVar24 & 0xffff)) goto code_r0x82f84ef8;
                  uVar8 = (uVar8 & 0x1fffffff) << 3;
                }
                else {
                  uVar8 = uVar8 * 10;
                }
              }
code_r0x82f84f00:
              if (cVar22 == '\0') {
                uVar23 = uVar23 + 1;
                uVar8 = ((uVar24 & 0xffff) + uVar8) - 0x30;
                if ((iVar13 == 0) ||
                   (uVar16 = (ulonglong)uStack_3b0, uStack_3b0 = (uint)(uVar16 - 1), uVar16 - 1 != 0
                   )) {
                  iVar10 = iVar10 + 1;
                  uVar24 = fn_82F88700(iStack00000014);
                }
                else {
                  cVar22 = '\x01';
                }
              }
              else {
                iVar10 = iVar10 + -1;
                if ((uVar24 & 0xffff) != 0xffff) {
                  fn_82F88978(uVar24,iStack00000014);
                }
              }
              bVar2 = cVar22 == '\0';
              iVar11 = (int)uVar8;
            }
            if (bVar1) {
              iVar11 = -iVar11;
            }
          }
          else {
            while (bVar2) {
              if ((uVar15 == 0x78) || (uVar15 == 0x70)) {
                uVar8 = uVar24 & 0xffff;
                if ((uVar24 & 0xff00) == 0) {
                  iVar11 = fn_82F66AA0(uVar24 & 0xff);
                  if (iVar11 != 0) {
                    lStack_390 = lStack_390 << 4;
                    iVar11 = fn_82F66A80(uVar24 & 0xff);
                    if (iVar11 == 0) {
                      uVar8 = (uVar24 & 0xffdf) - 7;
                    }
                    uVar24 = uVar8 & 0xffff;
                    goto code_r0x82f84dcc;
                  }
                }
code_r0x82f84dc4:
                cVar22 = cVar22 + '\x01';
              }
              else {
                if (((uVar24 & 0xff00) != 0) || (iVar11 = fn_82F66A80(uVar24 & 0xff), iVar11 == 0))
                goto code_r0x82f84dc4;
                if (uVar15 == 0x6f) {
                  if (0x37 < (uVar24 & 0xffff)) goto code_r0x82f84dc4;
                  lStack_390 = lStack_390 << 3;
                }
                else {
                  lStack_390 = lStack_390 * 10;
                }
              }
code_r0x82f84dcc:
              if (cVar22 == '\0') {
                uVar23 = uVar23 + 1;
                lStack_390 = ((int)(uVar24 & 0xffff) + -0x30) + lStack_390;
                if ((iVar13 == 0) ||
                   (uVar8 = (ulonglong)uStack_3b0, uStack_3b0 = (uint)(uVar8 - 1), uVar8 - 1 != 0))
                {
                  iVar10 = iVar10 + 1;
                  uVar24 = fn_82F88700(iStack00000014);
                }
                else {
                  cVar22 = '\x01';
                }
              }
              else {
                iVar10 = iVar10 + -1;
                if ((uVar24 & 0xffff) != 0xffff) {
                  fn_82F88978(uVar24,iStack00000014);
                }
              }
              bVar2 = cVar22 == '\0';
            }
            iVar11 = 0;
            if (bVar1) {
              lStack_390 = -lStack_390;
            }
          }
          if ((-(uint)(uVar15 != 0x46) & uVar23) == 0) goto LAB_82f854c0;
          if (iStack_394 == 0) {
            uStack_3a0 = uStack_3a0 + 1;
code_r0x82f84fc4:
            if (iVar14 == 0) {
              if (cVar20 == '\0') {
                *(short *)plStack_3a4 = (short)iVar11;
              }
              else {
                *(int *)plStack_3a4 = iVar11;
              }
            }
            else {
              *plStack_3a4 = lStack_390;
            }
          }
          break;
        case 0x7b:
          puStack0000001c = puStack0000001c + 1;
          if (iStack_388 == 0) {
            iStack_388 = fn_82F68BF0(0x2000);
            if (iStack_388 == 0) goto LAB_82f854c0;
            iStack_374 = 1;
          }
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iStack_388,0,0x2000);
        }
LAB_82f85408:
        cStack_3ac = cStack_3ac + '\x01';
        puStack0000001c = puStack0000001c + 1;
LAB_82f85468:
        puVar29 = puStack0000001c;
        if (((uVar24 & 0xffff) == 0xffff) &&
           ((*puStack0000001c != 0x25 || (puStack0000001c[1] != 0x6e)))) goto LAB_82f854c0;
LAB_82f85494:
        puStack0000001c = puVar29;
        uVar15 = *puStack0000001c;
        iVar11 = iVar10;
        if (uVar15 == 0) goto LAB_82f854c0;
        goto LAB_82f844b8;
      }
LAB_82f854e8:
      if ((uVar24 & 0xffff) == 0xffff) {
        if (uStack_3a0 != 0) {
          return (ulonglong)uStack_3a0;
        }
        if (cStack_3ac != '\0') {
          return 0;
        }
        goto LAB_82f8445c;
      }
      if (iStack_380 != 1) {
        return (ulonglong)uStack_3a0;
      }
      puVar9 = (undefined4 *)fn_82F68240();
      uVar24 = (ulonglong)uStack_3a0;
    }
    *puVar9 = 0x16;
    fn_82F63BA0();
  }
  return uVar24;
code_r0x82f84b3c:
  if (uVar8 != 0xffff) {
    fn_82F88978(uVar24,iVar6);
  }
code_r0x82f84b54:
  if (plVar30 == plVar28) goto LAB_82f854c0;
  if ((iStack_394 == 0) && (uStack_3a0 = uStack_3a0 + 1, uVar15 != 99)) {
    if (bVar1) {
      *(undefined2 *)plStack_3a4 = 0;
    }
    else {
      *(undefined1 *)plStack_3a4 = 0;
    }
  }
  goto LAB_82f85408;
}


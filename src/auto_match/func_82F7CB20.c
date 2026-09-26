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
extern unsigned int *auStack_200;
extern unsigned int *auStack_250;
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F66A80();
extern int fn_82F66AA0();
extern int fn_82F66AC0();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int fn_82F6E8A0();
extern int fn_82F7BAF0();
extern int fn_82F7C468();
extern int fn_82F7DD38();
extern int fn_82F85C08();
extern int fn_82F86278();
extern unsigned int iStack0000002c;
extern unsigned int iStack_22c;
extern unsigned int lbl_831BBCA8;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_831BBFA8;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_208;
extern unsigned int uStack_210;
extern unsigned int uStack_218;
extern unsigned int uStack_237;
extern unsigned int uStack_238;
extern unsigned int uStack_254;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_82F7CB20(undefined4 *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar12;
  ulonglong uVar11;
  undefined *puVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  ulonglong uVar13;
  char cVar19;
  longlong lVar20;
  byte *pbVar21;
  byte bVar23;
  byte *pbVar22;
  ulonglong uVar24;
  uint uVar25;
  byte bVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  byte *pbStack0000001c;
  int iStack0000002c;
  char cStack_260;
  undefined1 *puStack_25c;
  longlong *plStack_258;
  uint uStack_254;
  undefined2 auStack_250 [2];
  int aiStack_24c [3];
  longlong lStack_240;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined **ppuStack_234;
  undefined **ppuStack_230;
  int iStack_22c;
  byte abStack_220 [8];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [512];
  
  uVar24 = 0;
  puStack_25c = auStack_200;
  aiStack_24c[0] = 0;
  auStack_250[0] = 0;
  aiStack_24c[1] = 0x15e;
  pbStack0000001c = param_2;
  iStack0000002c = param_4;
  if ((param_2 == (byte *)0x0) || (param_1 == (undefined4 *)0x0)) goto LAB_82f7cb60;
  if ((param_1[3] & 0x40) == 0) {
    uVar6 = fn_82F7C468(param_1);
    puVar14 = &lbl_831BBF60;
    puVar12 = puVar14;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      puVar12 = (undefined *)((&lbl_8329F620)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar12[0x28] & 0xfe) != 0) {
LAB_82f7cb60:
      puVar5 = (undefined4 *)fn_82F68240();
      *puVar5 = 0x16;
      fn_82F63BA0();
      return 0xffffffffffffffff;
    }
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      puVar14 = (undefined *)((&lbl_8329F620)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar14[0x28] & 1) != 0) goto LAB_82f7cb60;
  }
  cStack_260 = '\0';
  uStack_254 = 0;
  if (*param_2 != 0) {
    ppuStack_234 = &lbl_831BBCA8;
    ppuStack_230 = &lbl_831BBFA8;
    iVar8 = 0;
    pbVar21 = pbStack0000001c;
LAB_82f7cc50:
    iVar7 = fn_82F66AC0();
    if (iVar7 != 0) {
      iVar7 = iVar8 + -1;
      do {
        uVar6 = param_1[1];
        iVar7 = iVar7 + 1;
        param_1[1] = (int)((ulonglong)uVar6 - 1);
        if ((longlong)((ulonglong)uVar6 - 1) < 0) {
          uVar29 = fn_82F7BAF0(param_1);
        }
        else {
          uVar29 = (ulonglong)*(byte *)*param_1;
          *param_1 = (byte *)*param_1 + 1;
        }
        if ((int)uVar29 == -1) goto LAB_82f7ccb8;
        iVar8 = fn_82F66AC0(uVar29 & 0xff);
      } while (iVar8 != 0);
      fn_82F86278(uVar29,param_1);
LAB_82f7ccb8:
      do {
        pbVar21 = pbVar21 + 1;
        iVar8 = fn_82F66AC0(*pbVar21);
      } while (iVar8 != 0);
      goto LAB_82f7dcc0;
    }
    if (*pbVar21 == 0x25) {
      if (pbVar21[1] == 0x25) {
        if (pbVar21[1] == 0x25) {
          pbVar21 = pbVar21 + 1;
        }
        goto LAB_82f7dbf8;
      }
      cVar17 = '\x01';
      uVar29 = 0;
      uVar6 = 0;
      iVar10 = 0;
      lVar20 = 0;
      bVar26 = 0;
      bVar3 = false;
      cVar15 = '\0';
      cVar16 = '\0';
      bVar1 = false;
      cVar19 = '\0';
      cVar18 = '\0';
      iVar9 = 0;
      pbStack0000001c = pbVar21;
      do {
        pbStack0000001c = pbStack0000001c + 1;
        bVar23 = *pbStack0000001c;
        iVar7 = fn_82F66A80((ulonglong)bVar23);
        pbVar21 = pbStack0000001c;
        if (iVar7 == 0) {
          if (bVar23 < 0x4f) {
            if (bVar23 != 0x4e) {
              if (bVar23 == 0x2a) {
                cVar15 = cVar15 + '\x01';
              }
              else if (bVar23 != 0x46) {
                if (bVar23 == 0x49) {
                  bVar23 = pbStack0000001c[1];
                  if ((bVar23 == 0x36) &&
                     (pbVar21 = pbStack0000001c + 2, pbStack0000001c[2] == 0x34)) goto LAB_82f7cd98;
                  if (((bVar23 != 0x33) ||
                      (pbVar21 = pbStack0000001c + 2, pbStack0000001c[2] != 0x32)) &&
                     ((((pbVar21 = pbStack0000001c, bVar23 != 100 && (bVar23 != 0x69)) &&
                       (bVar23 != 0x6f)) && ((bVar23 != 0x78 && (bVar23 != 0x58))))))
                  goto LAB_82f7ce18;
                }
                else if (bVar23 == 0x4c) {
                  cVar17 = cVar17 + '\x01';
                }
                else {
LAB_82f7ce18:
                  cVar16 = cVar16 + '\x01';
                  pbVar21 = pbStack0000001c;
                }
              }
            }
          }
          else if (bVar23 == 0x68) {
            cVar18 = cVar19 + -1;
            cVar17 = cVar17 + -1;
            cVar19 = cVar18;
          }
          else {
            if (bVar23 == 0x6c) {
              pbVar21 = pbStack0000001c + 1;
              if (pbStack0000001c[1] == 0x6c) {
LAB_82f7cd98:
                lStack_240 = 0;
                iVar9 = iVar9 + 1;
                goto LAB_82f7ce68;
              }
              cVar17 = cVar17 + '\x01';
            }
            else if (bVar23 != 0x77) goto LAB_82f7ce18;
            cVar18 = cVar18 + '\x01';
            cVar19 = cVar18;
            pbVar21 = pbStack0000001c;
          }
        }
        else {
          iVar10 = iVar10 + 1;
          lVar20 = lVar20 * 10 + (ulonglong)bVar23 + -0x30;
        }
LAB_82f7ce68:
        pbStack0000001c = pbVar21;
      } while (cVar16 == '\0');
      aiStack_24c[2] = (int)cVar15;
      if (cVar15 == '\0') {
        iStack_22c = iStack0000002c;
        uVar25 = iStack0000002c + 7U & 0xfffffff8;
        iStack0000002c = uVar25 + 8;
        plStack_258 = *(longlong **)(uVar25 + 4);
      }
      else {
        plStack_258 = (longlong *)0x0;
      }
      cVar19 = '\0';
      if ((cVar18 == '\0') &&
         ((*pbStack0000001c == 0x53 || (cVar18 = -1, *pbStack0000001c == 0x43)))) {
        cVar18 = '\x01';
      }
      bVar23 = *pbStack0000001c | 0x20;
      if (bVar23 != 0x6e) {
        if ((bVar23 == 99) || (bVar23 == 0x7b)) {
          uVar25 = param_1[1];
          iVar8 = iVar8 + 1;
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
        }
        else {
          do {
            uVar25 = param_1[1];
            iVar8 = iVar8 + 1;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
          } while (((int)uVar24 != -1) && (iVar7 = fn_82F66AC0(uVar24 & 0xff), iVar7 != 0));
        }
        if ((int)uVar24 == -1) goto LAB_82f7dcf4;
      }
      plVar28 = plStack_258;
      if ((iVar10 != 0) && ((int)lVar20 == 0)) goto LAB_82f7dce0;
      uVar25 = (uint)uVar24;
      iVar7 = iVar8;
      switch(bVar23) {
      case 99:
        if (iVar10 == 0) {
          iVar10 = 1;
          lVar20 = lVar20 + 1;
        }
      case 0x73:
        if ('\0' < cVar18) {
          bVar1 = true;
        }
code_r0x82f7d13c:
        iVar7 = iVar8 + -1;
        plVar30 = plVar28;
        ppuVar4 = ppuStack_234;
        if (uVar25 != 0xffffffff) {
          fn_82F86278(uVar24,param_1);
          ppuVar4 = ppuStack_234;
        }
        do {
          if ((iVar10 != 0) && (iVar8 = (int)lVar20, lVar20 = lVar20 + -1, iVar8 == 0))
          goto code_r0x82f7d2cc;
          uVar6 = param_1[1];
          iVar8 = iVar7 + 1;
          param_1[1] = (int)((ulonglong)uVar6 - 1);
          if ((longlong)((ulonglong)uVar6 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
          uVar6 = (uint)uVar24;
          if (uVar6 == 0xffffffff) goto code_r0x82f7d2b4;
          if (bVar23 != 99) {
            if (bVar23 == 0x73) {
              if ((8 < (int)uVar6) && ((int)uVar6 < 0xe)) goto code_r0x82f7d2b4;
              if (uVar6 != 0x20) goto code_r0x82f7d20c;
            }
            if ((bVar23 != 0x7b) ||
               ((1 << (uVar6 & 7) & (int)(char)(abStack_220[(int)uVar6 >> 3] ^ bVar26)) == 0))
            goto code_r0x82f7d2b4;
          }
code_r0x82f7d20c:
          if (aiStack_24c[2] == 0) {
            if (bVar1) {
              uStack_238 = (char)uVar24;
              iVar9 = fn_82F66FA8(uVar24 & 0xff);
              if (iVar9 != 0) {
                uVar6 = param_1[1];
                iVar8 = iVar7 + 2;
                param_1[1] = (int)((ulonglong)uVar6 - 1);
                if ((longlong)((ulonglong)uVar6 - 1) < 0) {
                  uStack_237 = fn_82F7BAF0(param_1);
                }
                else {
                  uStack_237 = *(undefined1 *)*param_1;
                  *param_1 = (undefined1 *)*param_1 + 1;
                }
              }
              auStack_250[0] = 0x3f;
              fn_82F85C08(auStack_250,&uStack_238,*(undefined4 *)(*ppuVar4 + 0xac),ppuVar4);
              *(undefined2 *)plVar28 = auStack_250[0];
              plVar28 = (longlong *)((int)plVar28 + 2);
              iVar7 = iVar8;
              plStack_258 = plVar28;
            }
            else {
              *(char *)plVar28 = (char)uVar24;
              plVar28 = (longlong *)((int)plVar28 + 1);
              iVar7 = iVar8;
              plStack_258 = plVar28;
            }
          }
          else {
            iVar7 = iVar8;
            plVar30 = (longlong *)((int)plVar30 + 1);
          }
        } while( true );
      case 100:
      case 0x6f:
      case 0x75:
        goto code_r0x82f7d478;
      case 0x65:
      case 0x66:
      case 0x67:
        iVar9 = 0;
        if (uVar25 == 0x2d) {
          iVar9 = 1;
          *puStack_25c = 0x2d;
code_r0x82f7d7e0:
          uVar25 = param_1[1];
          lVar20 = lVar20 + -1;
          iVar8 = iVar8 + 1;
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
        }
        else if (uVar25 == 0x2b) goto code_r0x82f7d7e0;
        if (iVar10 == 0) {
          lVar20 = -1;
        }
        while( true ) {
          iVar7 = fn_82F66A80(uVar24 & 0xff);
          if ((iVar7 == 0) || (iVar7 = (int)lVar20, lVar20 = lVar20 + -1, iVar7 == 0)) break;
          uVar6 = uVar6 + 1;
          puStack_25c[iVar9] = (char)uVar24;
          iVar9 = iVar9 + 1;
          iVar7 = fn_82F7DD38(iVar9,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
          if (iVar7 == 0) goto LAB_82f7dcf4;
          uVar25 = param_1[1];
          iVar8 = iVar8 + 1;
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
        }
        cVar19 = *(char *)**(undefined4 **)(*ppuStack_234 + 0xbc);
        if ((cVar19 == (char)uVar24) && (iVar7 = (int)lVar20, lVar20 = lVar20 + -1, iVar7 != 0)) {
          uVar25 = param_1[1];
          iVar8 = iVar8 + 1;
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
          puStack_25c[iVar9] = cVar19;
          iVar9 = iVar9 + 1;
          iVar7 = fn_82F7DD38(iVar9,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
          if (iVar7 == 0) goto LAB_82f7dcf4;
          while( true ) {
            iVar7 = fn_82F66A80(uVar24 & 0xff);
            if ((iVar7 == 0) || (iVar7 = (int)lVar20, lVar20 = lVar20 + -1, iVar7 == 0)) break;
            uVar6 = uVar6 + 1;
            puStack_25c[iVar9] = (char)uVar24;
            iVar9 = iVar9 + 1;
            iVar7 = fn_82F7DD38(iVar9,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
            if (iVar7 == 0) goto LAB_82f7dcf4;
            uVar25 = param_1[1];
            iVar8 = iVar8 + 1;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
          }
        }
        if ((uVar6 != 0) &&
           ((((int)uVar24 == 0x65 || ((int)uVar24 == 0x45)) &&
            (lVar27 = lVar20 + -1, (int)lVar20 != 0)))) {
          puStack_25c[iVar9] = 0x65;
          iVar10 = iVar9 + 1;
          iVar7 = fn_82F7DD38(iVar10,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
          if (iVar7 == 0) goto LAB_82f7dcf4;
          uVar25 = param_1[1];
          iVar8 = iVar8 + 1;
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
          if ((int)uVar24 == 0x2d) {
            puStack_25c[iVar10] = 0x2d;
            iVar10 = iVar9 + 2;
            iVar7 = fn_82F7DD38(iVar10,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
            if (iVar7 == 0) goto LAB_82f7dcf4;
code_r0x82f7da90:
            iVar7 = (int)lVar27;
            lVar27 = lVar20 + -2;
            if (iVar7 != 0) goto code_r0x82f7dae0;
            lVar27 = 0;
            iVar9 = iVar10;
          }
          else {
            iVar9 = iVar10;
            if ((int)uVar24 == 0x2b) goto code_r0x82f7da90;
          }
          while( true ) {
            iVar7 = fn_82F66A80(uVar24 & 0xff);
            if ((iVar7 == 0) || (iVar7 = (int)lVar27, lVar27 = lVar27 + -1, iVar7 == 0)) break;
            uVar6 = uVar6 + 1;
            puStack_25c[iVar9] = (char)uVar24;
            iVar10 = iVar9 + 1;
            iVar7 = fn_82F7DD38(iVar10,aiStack_24c + 1,&puStack_25c,auStack_200,aiStack_24c);
            if (iVar7 == 0) goto LAB_82f7dcf4;
code_r0x82f7dae0:
            uVar25 = param_1[1];
            iVar8 = iVar8 + 1;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            iVar9 = iVar10;
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
          }
        }
        iVar7 = iVar8 + -1;
        if ((int)uVar24 != -1) {
          fn_82F86278(uVar24,param_1);
        }
        if (uVar6 != 0) {
          if (aiStack_24c[2] == 0) {
            uStack_254 = uStack_254 + 1;
            puStack_25c[iVar9] = 0;
            (*(code *)ppuStack_230[7])((longlong)cVar17 + -1,plStack_258,puStack_25c,ppuStack_234);
          }
          break;
        }
        goto LAB_82f7dcf4;
      default:
        if (*pbStack0000001c != uVar25) goto LAB_82f7dce0;
        cStack_260 = cStack_260 + -1;
        if (aiStack_24c[2] == 0) {
          iStack0000002c = iStack_22c;
        }
        break;
      case 0x69:
        bVar23 = 100;
      case 0x78:
        if (uVar25 == 0x2d) {
          bVar3 = true;
code_r0x82f7d334:
          lVar20 = lVar20 + -1;
          if ((lVar20 == 0) && (iVar10 != 0)) {
            cVar19 = '\x01';
          }
          else {
            uVar25 = param_1[1];
            iVar8 = iVar8 + 1;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
          }
        }
        else if (uVar25 == 0x2b) goto code_r0x82f7d334;
        if ((int)uVar24 == 0x30) {
          uVar25 = param_1[1];
          param_1[1] = (int)((ulonglong)uVar25 - 1);
          if ((longlong)((ulonglong)uVar25 - 1) < 0) {
            uVar24 = fn_82F7BAF0(param_1);
          }
          else {
            uVar24 = (ulonglong)*(byte *)*param_1;
            *param_1 = (byte *)*param_1 + 1;
          }
          if (((char)uVar24 == 'x') || ((char)uVar24 == 'X')) {
            uVar25 = param_1[1];
            iVar8 = iVar8 + 2;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
            if ((iVar10 != 0) && (lVar20 = lVar20 + -2, (int)lVar20 < 1)) {
              cVar19 = cVar19 + '\x01';
            }
            bVar23 = 0x78;
          }
          else {
            uVar6 = 1;
            if (bVar23 == 0x78) {
              if ((int)uVar24 != -1) {
                fn_82F86278(uVar24,param_1);
              }
              uVar24 = 0x30;
            }
            else {
              if ((iVar10 != 0) && (lVar20 = lVar20 + -1, lVar20 == 0)) {
                cVar19 = cVar19 + '\x01';
              }
              bVar23 = 0x6f;
              iVar8 = iVar8 + 1;
            }
          }
        }
        goto code_r0x82f7d4dc;
      case 0x6e:
        if ((aiStack_24c[2] != 0) || (iVar10 = fn_82F6E8A0(), iVar10 == 0)) break;
        goto code_r0x82f7d784;
      case 0x70:
        cVar17 = '\x01';
code_r0x82f7d478:
        if (uVar25 == 0x2d) {
          bVar3 = true;
code_r0x82f7d490:
          lVar20 = lVar20 + -1;
          if ((lVar20 == 0) && (iVar10 != 0)) {
            cVar19 = '\x01';
          }
          else {
            uVar25 = param_1[1];
            iVar8 = iVar8 + 1;
            param_1[1] = (int)((ulonglong)uVar25 - 1);
            if ((longlong)((ulonglong)uVar25 - 1) < 0) {
              uVar24 = fn_82F7BAF0(param_1);
            }
            else {
              uVar24 = (ulonglong)*(byte *)*param_1;
              *param_1 = (byte *)*param_1 + 1;
            }
          }
        }
        else if (uVar25 == 0x2b) goto code_r0x82f7d490;
code_r0x82f7d4dc:
        bVar1 = cVar19 == '\0';
        iVar7 = iVar8;
        iVar8 = 0;
        if (iVar9 == 0) {
          while (bVar1) {
            if ((bVar23 == 0x78) || (bVar23 == 0x70)) {
              iVar8 = fn_82F66AA0(uVar24 & 0xff);
              if (iVar8 != 0) {
                uVar29 = (uVar29 & 0xfffffff) << 4;
                iVar8 = fn_82F66A80(uVar24 & 0xff);
                if (iVar8 == 0) {
                  uVar24 = (uVar24 << 0x20 | uVar24 & 0xffffffdf) - 7;
                }
                goto code_r0x82f7d6a4;
              }
code_r0x82f7d69c:
              cVar19 = cVar19 + '\x01';
            }
            else {
              iVar8 = fn_82F66A80(uVar24 & 0xff);
              if (iVar8 == 0) goto code_r0x82f7d69c;
              if (bVar23 == 0x6f) {
                if (0x37 < (int)uVar24) goto code_r0x82f7d69c;
                uVar29 = (uVar29 & 0x1fffffff) << 3;
              }
              else {
                uVar29 = uVar29 * 10;
              }
            }
code_r0x82f7d6a4:
            if (cVar19 == '\0') {
              uVar6 = uVar6 + 1;
              uVar29 = (uVar29 + uVar24) - 0x30;
              if ((iVar10 == 0) || (lVar20 = lVar20 + -1, lVar20 != 0)) {
                uVar25 = param_1[1];
                iVar7 = iVar7 + 1;
                param_1[1] = (int)((ulonglong)uVar25 - 1);
                if ((longlong)((ulonglong)uVar25 - 1) < 0) {
                  uVar24 = fn_82F7BAF0(param_1);
                }
                else {
                  uVar24 = (ulonglong)*(byte *)*param_1;
                  *param_1 = (byte *)*param_1 + 1;
                }
              }
              else {
                cVar19 = '\x01';
              }
            }
            else {
              iVar7 = iVar7 + -1;
              if ((int)uVar24 != -1) {
                fn_82F86278(uVar24,param_1);
              }
            }
            bVar1 = cVar19 == '\0';
            iVar8 = (int)uVar29;
          }
          if (bVar3) {
            iVar8 = -iVar8;
          }
        }
        else {
          while (bVar1) {
            if ((bVar23 == 0x78) || (bVar23 == 0x70)) {
              iVar8 = fn_82F66AA0(uVar24 & 0xff);
              if (iVar8 != 0) {
                lStack_240 = lStack_240 << 4;
                iVar8 = fn_82F66A80(uVar24 & 0xff);
                if (iVar8 == 0) {
                  uVar24 = (uVar24 << 0x20 | uVar24 & 0xffffffdf) - 7;
                }
                goto code_r0x82f7d57c;
              }
code_r0x82f7d574:
              cVar19 = cVar19 + '\x01';
            }
            else {
              iVar8 = fn_82F66A80(uVar24 & 0xff);
              if (iVar8 == 0) goto code_r0x82f7d574;
              if (bVar23 == 0x6f) {
                if (0x37 < (int)uVar24) goto code_r0x82f7d574;
                lStack_240 = lStack_240 << 3;
              }
              else {
                lStack_240 = lStack_240 * 10;
              }
            }
code_r0x82f7d57c:
            if (cVar19 == '\0') {
              uVar6 = uVar6 + 1;
              lStack_240 = ((int)uVar24 + -0x30) + lStack_240;
              if ((iVar10 == 0) || (lVar20 = lVar20 + -1, lVar20 != 0)) {
                uVar25 = param_1[1];
                iVar7 = iVar7 + 1;
                param_1[1] = (int)((ulonglong)uVar25 - 1);
                if ((longlong)((ulonglong)uVar25 - 1) < 0) {
                  uVar24 = fn_82F7BAF0(param_1);
                }
                else {
                  uVar24 = (ulonglong)*(byte *)*param_1;
                  *param_1 = (byte *)*param_1 + 1;
                }
              }
              else {
                cVar19 = '\x01';
              }
            }
            else {
              iVar7 = iVar7 + -1;
              if ((int)uVar24 != -1) {
                fn_82F86278(uVar24,param_1);
              }
            }
            bVar1 = cVar19 == '\0';
          }
          iVar8 = 0;
          if (bVar3) {
            lStack_240 = -lStack_240;
          }
        }
        if ((-(uint)(bVar23 != 0x46) & uVar6) == 0) goto LAB_82f7dcf4;
        if (aiStack_24c[2] == 0) {
          uStack_254 = uStack_254 + 1;
code_r0x82f7d784:
          if (iVar9 == 0) {
            if (cVar17 == '\0') {
              *(short *)plStack_258 = (short)iVar8;
            }
            else {
              *(int *)plStack_258 = iVar8;
            }
          }
          else {
            *plStack_258 = lStack_240;
          }
        }
        break;
      case 0x7b:
        bVar1 = '\0' < cVar18;
        pbVar22 = pbStack0000001c + 1;
        bVar26 = 0;
        pbVar21 = pbVar22;
        if (*pbVar22 == 0x5e) {
          pbVar21 = pbStack0000001c + 2;
          bVar26 = 0xff;
        }
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_208 = 0;
        uVar29 = 0;
        if ((bVar23 == 0x7b) && (*pbVar21 == 0x5d)) {
          uStack_218 = 0x2000000000;
          uVar29 = 0x5d;
          pbVar21 = pbVar21 + 1;
        }
        while( true ) {
          bVar2 = *pbVar21;
          uVar13 = (ulonglong)bVar2;
          if (uVar13 == 0x5d) break;
          if (((uVar13 == 0x2d) && (uVar29 != 0)) &&
             (uVar11 = (ulonglong)pbVar21[1], uVar11 != 0x5d)) {
            uVar13 = uVar11;
            if (uVar29 < uVar11) {
              uVar13 = uVar29;
              uVar29 = uVar11;
            }
            for (; uVar13 < uVar29; uVar13 = uVar13 + 1 & 0xff) {
              iVar7 = (int)(uVar13 >> 3);
              abStack_220[iVar7] = (byte)(1 << ((uint)uVar13 & 7)) | abStack_220[iVar7];
            }
            iVar7 = (int)(uVar29 >> 3);
            abStack_220[iVar7] = (byte)(1 << ((uint)uVar29 & 7)) | abStack_220[iVar7];
            uVar29 = 0;
            pbVar21 = pbVar21 + 2;
          }
          else {
            abStack_220[bVar2 >> 3] = (byte)(1 << (bVar2 & 7)) | abStack_220[bVar2 >> 3];
            uVar29 = uVar13;
            pbVar21 = pbVar21 + 1;
          }
        }
        pbStack0000001c = pbVar22;
        if (bVar23 == 0x7b) {
          pbStack0000001c = pbVar21;
        }
        goto code_r0x82f7d13c;
      }
      goto LAB_82f7dbbc;
    }
LAB_82f7dbf8:
    uVar6 = param_1[1];
    iVar7 = iVar8 + 1;
    param_1[1] = (int)((ulonglong)uVar6 - 1);
    if ((longlong)((ulonglong)uVar6 - 1) < 0) {
      uVar24 = fn_82F7BAF0(param_1);
    }
    else {
      uVar24 = (ulonglong)*(byte *)*param_1;
      *param_1 = (byte *)*param_1 + 1;
    }
    pbVar22 = pbVar21 + 1;
    pbStack0000001c = pbVar22;
    if ((uint)*pbVar21 == (uint)uVar24) {
      iVar10 = fn_82F66FA8(uVar24 & 0xff);
      if (iVar10 != 0) {
        uVar6 = param_1[1];
        param_1[1] = (int)((ulonglong)uVar6 - 1);
        if ((longlong)((ulonglong)uVar6 - 1) < 0) {
          uVar29 = fn_82F7BAF0(param_1);
        }
        else {
          uVar29 = (ulonglong)*(byte *)*param_1;
          *param_1 = (byte *)*param_1 + 1;
        }
        bVar26 = *pbVar22;
        pbVar22 = pbVar21 + 2;
        pbStack0000001c = pbVar22;
        if ((uint)bVar26 != (uint)uVar29) {
          if ((uint)uVar29 != 0xffffffff) {
            fn_82F86278(uVar29,param_1);
          }
          goto LAB_82f7dce0;
        }
        iVar7 = iVar8 + 1;
      }
      goto LAB_82f7dc98;
    }
LAB_82f7dce0:
    if ((int)uVar24 != -1) {
      fn_82F86278(uVar24,param_1);
    }
LAB_82f7dcf4:
    if (aiStack_24c[0] == 1) {
      fn_82F641F8(puStack_25c);
    }
    if ((int)uVar24 == -1) {
      if (uStack_254 != 0) {
        return (ulonglong)uStack_254;
      }
      if (cStack_260 == '\0') {
        return 0xffffffffffffffff;
      }
      return 0;
    }
  }
  return (ulonglong)uStack_254;
code_r0x82f7d2b4:
  if (uVar6 != 0xffffffff) {
    fn_82F86278(uVar24,param_1);
  }
code_r0x82f7d2cc:
  if (plVar30 == plVar28) goto LAB_82f7dcf4;
  if ((aiStack_24c[2] == 0) && (uStack_254 = uStack_254 + 1, bVar23 != 99)) {
    if (bVar1) {
      *(undefined2 *)plStack_258 = 0;
    }
    else {
      *(undefined1 *)plStack_258 = 0;
    }
  }
LAB_82f7dbbc:
  cStack_260 = cStack_260 + '\x01';
  pbVar22 = pbStack0000001c + 1;
  pbStack0000001c = pbStack0000001c + 1;
LAB_82f7dc98:
  pbVar21 = pbVar22;
  if (((int)uVar24 == -1) &&
     ((*pbVar22 != 0x25 || (pbVar21 = pbStack0000001c, pbStack0000001c[1] != 0x6e))))
  goto LAB_82f7dcf4;
LAB_82f7dcc0:
  iVar8 = iVar7;
  if (*pbVar21 == 0) goto LAB_82f7dcf4;
  goto LAB_82f7cc50;
}


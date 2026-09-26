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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_120;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_19d;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230420();
extern int fn_8223B688();
extern int fn_8223C478();
extern int fn_8223C610();
extern int fn_8223DFF0();
extern int fn_82248B90();
extern int fn_8224DD90();
extern int fn_8224E590();
extern int fn_8224E650();
extern int fn_8224E928();
extern int fn_8224E978();
extern int fn_8224ED20();
extern int fn_8225C590();
extern int fn_8225D400();
extern int fn_8225DA18();
extern int fn_8225DA70();
extern int fn_8225DB68();
extern int fn_8225DBF8();
extern int fn_8225F160();
extern int fn_8225F580();
extern int fn_822CB340();
extern int fn_82329468();
extern int fn_82381BC0();
extern int fn_823AB158();
extern int fn_823AB470();
extern int fn_823AB478();
extern int fn_8251C428();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82881EE8();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_82895048();
extern int fn_82897BD0();
extern int fn_82899F38();
extern int fn_828A12E8();
extern int fn_828A9210();
extern int fn_828A97F8();
extern int fn_828AACD0();
extern int fn_828AAF70();
extern int fn_828AB150();
extern int fn_828AB870();
extern int fn_828B2360();
extern int fn_828B25C8();
extern int fn_828B2AE0();
extern int fn_828B2BF8();
extern int fn_828B30D8();
extern int fn_828B8F40();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern int fn_828EA610();
extern int fn_828EBB90();
extern int fn_82A44628();
extern int fn_82A81B88();
extern int fn_82E1DAA0();
extern int fn_82F68CC0();
extern unsigned int iStack_108;
extern unsigned int iStack_138;
extern unsigned int iStack_190;
extern unsigned int iStack_88;
extern unsigned int iStack_b8;
extern unsigned int lbl_82197D98;
extern unsigned int lbl_8219859C;
extern unsigned int lbl_821985F4;
extern unsigned int lbl_831D0EEC;
extern unsigned int lbl_831D0EF0;
extern unsigned int lbl_831D0EF4;
extern unsigned int lbl_831D0EF8;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832760A8;
extern unsigned int lbl_832760A9;
extern unsigned int lbl_832767BC;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_17c;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_19e;
extern unsigned int uStack_19f;
extern unsigned int uStack_1a0;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_e0;


void fn_8224CD70(int *param_1)

{
  char cVar14;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar15;
  undefined8 *puVar7;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined1 auStack_19d [5];
  undefined4 *puStack_198;
  int *piStack_194;
  int iStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_17c;
  undefined ***pppuStack_170;
  undefined1 auStack_160 [4];
  undefined4 *puStack_15c;
  undefined1 auStack_150 [16];
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_120 [16];
  undefined1 *puStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [112];
  
  fn_8251C428();
  if (param_1[0x11c] == 0) {
    cVar14 = fn_8288B760(param_1);
    if (cVar14 == '\0') {
      iVar5 = (**(code **)(*param_1 + 8))(param_1);
      uVar18 = (**(code **)(*(int *)(iVar5 + 0x2e8) + 0x3c))();
      uVar22 = uVar18 + 8;
      if ((uVar18 & 0xffffffff) == 0) {
        uVar22 = 0;
      }
      if ((uVar22 & 0xffffffff) != 0) {
        fn_82F68CC0(param_1 + 0x22,uVar22,1000);
        param_1[0x11c] = 1;
        uVar1 = fn_823AB158(param_1);
        uVar2 = fn_8225C590();
        fn_8225D400(uVar2,uVar1,param_1 + 0x22);
      }
    }
    else {
      puStack_198 = (undefined4 *)0x0;
      uVar1 = fn_823AB158(param_1);
      piVar13 = param_1 + 0x22;
      uVar2 = fn_8225C590();
      iVar5 = fn_8225DA70(uVar2,piVar13,uVar1,&puStack_198);
      param_1[0x11c] = iVar5;
      if ((iVar5 == 0) && ((int)puStack_198 < 0)) {
        fn_82A81B88(3,1,piVar13,0);
        param_1[0x11c] = 1;
      }
      if (param_1[0x11c] != 0) {
        fn_8224E590(param_1,piVar13);
      }
    }
  }
  piVar13 = &lbl_831D0EF8;
  if (param_1[0x218] == 0) {
    cVar14 = fn_8288B760(param_1);
    if (cVar14 == '\0') {
      iVar5 = (**(code **)(*param_1 + 8))(param_1);
      uVar18 = (**(code **)(*(int *)(iVar5 + 0x630) + 0x3c))();
      uVar22 = uVar18 + 8;
      if ((uVar18 & 0xffffffff) == 0) {
        uVar22 = 0;
      }
      if ((uVar22 & 0xffffffff) != 0) {
        iVar5 = (**(code **)(*param_1 + 8))(param_1);
        cVar14 = (**(code **)(*(int *)(iVar5 + 0xa74) + 0x3c))();
        if (cVar14 != '\0') {
          fn_82F68CC0((int)param_1 + 0x475,uVar22,1000);
          param_1[0x218] = 1;
          fn_82897BD0(*(undefined4 *)(param_1[0xd] + 0x38));
          uVar1 = fn_82881EE8();
          lVar3 = (**(code **)(*param_1 + 8))(param_1);
          fn_8224E978(auStack_70,lVar3 + 0x6d8);
          iVar5 = (**(code **)(*param_1 + 8))(param_1);
          (**(code **)(*(int *)(iVar5 + 0x684) + 0x40))((int *)(iVar5 + 0x684),&puStack_198);
          uStack_78 = CONCAT44(puStack_198,piStack_194);
          iVar5 = (**(code **)(*param_1 + 8))(param_1);
          uVar15 = (**(code **)(*(int *)(iVar5 + 0x72c) + 0x3c))();
          iVar5 = fn_828EBB90(auStack_70,&uStack_78,uVar15,uVar1);
          lVar3 = 3;
          piVar20 = (int *)(iVar5 + 0xf0);
          param_1[0x219] = iVar5;
          do {
            if (*piVar20 != 0) {
              fn_82522ED8();
              *piVar20 = 0;
            }
            lVar3 = lVar3 + -1;
            piVar20 = piVar20 + 1;
          } while (lVar3 != 0);
          fn_8225F580(param_1[0x219]);
          iVar5 = param_1[0x219];
          if (*(int *)(iVar5 + 0x100) != 0) {
            fn_82522ED8();
            *(undefined4 *)(iVar5 + 0x100) = 0;
          }
          uVar8 = fn_82522DF8(lbl_832767BC << 2);
          *(undefined4 *)(iVar5 + 0x100) = uVar8;
          iVar5 = (**(code **)(*param_1 + 8))(param_1);
          (**(code **)(*(int *)(iVar5 + 0x780) + 0x40))((int *)(iVar5 + 0x780),auStack_19d);
          puStack_c0 = auStack_19d;
          iStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_bc = 1;
          fn_828E9D28(auStack_d0,auStack_19d,1);
          iVar5 = fn_8223C610(auStack_d0,1,0,0);
          if (iVar5 != 0) {
            iVar5 = *(int *)(*(int *)((lbl_831D0EEC + 0x3c) * 4 + param_1[0x219]) + 8);
            *(byte *)(iVar5 + (lbl_831D0EF0 >> 3)) =
                 (byte)(1 << (lbl_831D0EF0 & 7)) | *(byte *)(iVar5 + (lbl_831D0EF0 >> 3));
          }
          iVar5 = 0;
          lVar3 = 8;
          piVar20 = piVar13;
          do {
            iVar11 = (**(code **)(*param_1 + 8))(param_1);
            iVar11 = (**(code **)(*(int *)(iVar11 + iVar5 + 0x7d4) + 0x3c))(iVar11 + iVar5 + 0x7d4);
            if (*(int *)(*(int *)(param_1[0x219] + 0x100) + *piVar20 * 4) != iVar11) {
              *(int *)(*(int *)(param_1[0x219] + 0x100) + *piVar20 * 4) = iVar11;
            }
            lVar3 = lVar3 + -1;
            iVar5 = iVar5 + 0x54;
            piVar20 = piVar20 + 2;
          } while (lVar3 != 0);
          iVar5 = param_1[0x219];
          uVar1 = fn_8225C590();
          fn_8225D400(uVar1,iVar5,(int)param_1 + 0x475);
          if (iStack_b8 != 0) {
            fn_8265CA20();
          }
          iStack_b8 = 0;
          puVar9 = auStack_70;
          uStack_b4 = 0;
          uStack_b0 = 0;
          goto LAB_8224d4b8;
        }
      }
    }
    else {
      uVar1 = fn_8225C590();
      pppuStack_170 = &ppuStack_180;
      iStack_190 = 0;
      ppuStack_180 = &lbl_8219859C;
      piStack_194 = &iStack_190;
      puStack_198 = lbl_83265988;
      uStack_17c = CONCAT44(lbl_83265988,piStack_194);
      fn_8225DBF8(uVar1,&ppuStack_180);
      iVar5 = iStack_190;
      param_1[0x219] = iStack_190;
      if (iStack_190 != 0) {
        iVar11 = (int)param_1 + 0x475;
        puStack_198 = (undefined4 *)0x0;
        uVar1 = fn_8225C590();
        iVar5 = fn_8225DA70(uVar1,iVar11,iVar5,&puStack_198);
        param_1[0x218] = iVar5;
        if ((iVar5 == 0) && ((int)puStack_198 < 0)) {
          fn_82A81B88(3,1,iVar11,0);
          param_1[0x218] = 1;
        }
        if (param_1[0x218] != 0) {
          uVar1 = fn_82E1DAA0(param_1[0x219]);
          fn_8223B688(auStack_f0,uVar1);
          iVar5 = fn_823AB470(param_1[0x219]);
          if ((iVar5 == 2) && (*(char *)(param_1[0x219] + 0xd8) == '\0')) {
            if (param_1[0x21a] == 0) {
              puVar6 = (undefined4 *)fn_8265C9E0(0x68);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                iVar5 = param_1[0x219];
                fn_82895048(puVar6,param_1[4],2);
                *puVar6 = &lbl_82197D98;
                uVar17 = puVar6[0xd];
                uVar1 = fn_828B8F40(iVar5);
                fn_822CB340((ulonglong)uVar17 + 0x48,uVar1);
                uVar17 = puVar6[0xd];
                uVar15 = fn_823AB478(iVar5);
                fn_828AB150((ulonglong)uVar17 + 0x9c,uVar15);
                uVar1 = fn_828B2BF8();
                fn_828B2AE0(uVar1,puVar6);
              }
              param_1[0x21a] = (int)puVar6;
              fn_828904D8();
            }
          }
          else {
            fn_823AB158(param_1);
            uVar1 = fn_82E1DAA0();
            fn_82230218(auStack_f0,uVar1,0,0xffffffffffffffff);
            if (0xc < uStack_e0) {
              fn_82230420(auStack_f0,0xc,0xffffffffffffffff);
            }
            fn_8223DFF0(auStack_f0,0xffffffff82197ba0,3);
          }
          puVar7 = (undefined8 *)fn_828B8F40(param_1[0x219]);
          uVar1 = fn_823AB478(param_1[0x219]);
          fn_8224E650(param_1,iVar11,auStack_f0,*puVar7,uVar1);
          iVar5 = (**(code **)(*param_1 + 8))(param_1);
          (**(code **)(*(int *)(iVar5 + 0x780) + 0x40))((int *)(iVar5 + 0x780),&uStack_1a0);
          puStack_110 = &uStack_1a0;
          iStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_10c = 1;
          fn_828E9D28(auStack_120,&uStack_1a0,1);
          uVar18 = (ulonglong)
                   *(byte *)(*(int *)(*(int *)((lbl_831D0EEC + 0x3c) * 4 + param_1[0x219]) + 8) +
                            (lbl_831D0EF0 >> 3)) & (ulonglong)(uint)(1 << (lbl_831D0EF0 & 7));
          fn_8223C478(auStack_120,1,0);
          fn_828E9DB8(auStack_120,uVar18 != (uVar18 - 1) + (ulonglong)(uVar18 == 0),1);
          lVar3 = (**(code **)(*param_1 + 8))(param_1);
          fn_82329468(lVar3 + 0x780,&uStack_1a0);
          lVar3 = 0;
          lVar21 = 8;
          piVar20 = (int *)&lbl_831D0EF0;
          do {
            piVar20 = piVar20 + 2;
            uVar8 = *(undefined4 *)(*(int *)(param_1[0x219] + 0x100) + *piVar20 * 4);
            lVar4 = (**(code **)(*param_1 + 8))(param_1);
            fn_828AB870(lVar4 + 0x7d4 + lVar3,uVar8);
            lVar21 = lVar21 + -1;
            lVar3 = lVar3 + 0x54;
          } while (lVar21 != 0);
          if (iStack_108 != 0) {
            fn_8265CA20();
          }
          iStack_108 = 0;
          puVar9 = auStack_f0;
          uStack_104 = 0;
          uStack_100 = 0;
LAB_8224d4b8:
          fn_82230300(puVar9,1,0);
        }
      }
    }
  }
  cVar14 = fn_8288B760(param_1);
  if (cVar14 == '\0') {
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    uVar10 = (**(code **)(*(int *)(iVar5 + 0xac8) + 0x3c))();
    iVar5 = fn_8225F160();
    uVar17 = *(uint *)(iVar5 + 0x3c);
    *(uint *)(iVar5 + 0x3c) = uVar10 & 0xff;
    if ((uVar10 & 0xff) != uVar17) {
      fn_828B2BF8();
      fn_828B25C8();
    }
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*(int *)(iVar5 + 0x33c) + 0x40))((int *)(iVar5 + 0x33c),&uStack_19e);
    puStack_90 = &uStack_19e;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_8c = 1;
    fn_828E9D28(auStack_a0,&uStack_19e,1);
    if (lbl_831D0EF4 != 0) {
      iVar5 = fn_8223C610(auStack_a0,1,0,0);
      if (iVar5 == 0) {
        iVar5 = fn_823AB158(param_1);
        uVar17 = lbl_831D0EF0 >> 3;
        iVar5 = *(int *)(*(int *)((lbl_831D0EEC + 0x3c) * 4 + iVar5) + 8);
        bVar16 = *(byte *)(iVar5 + uVar17) & ~(byte)(1 << (lbl_831D0EF0 & 7));
      }
      else {
        iVar5 = fn_823AB158(param_1);
        uVar17 = lbl_831D0EF0 >> 3;
        iVar5 = *(int *)(*(int *)((lbl_831D0EEC + 0x3c) * 4 + iVar5) + 8);
        bVar16 = (byte)(1 << (lbl_831D0EF0 & 7)) | *(byte *)(iVar5 + uVar17);
      }
      *(byte *)(iVar5 + uVar17) = bVar16;
    }
    iVar5 = 0;
    lVar3 = 8;
    piVar20 = piVar13;
    do {
      if (piVar20[1] != 0) {
        iVar11 = (**(code **)(*param_1 + 8))(param_1);
        iVar11 = (**(code **)(*(int *)(iVar11 + iVar5 + 0x390) + 0x3c))(iVar11 + iVar5 + 0x390);
        iVar12 = fn_823AB158(param_1);
        if (*(int *)(*(int *)(iVar12 + 0x100) + *piVar20 * 4) != iVar11) {
          *(int *)(*(int *)(iVar12 + 0x100) + *piVar20 * 4) = iVar11;
        }
      }
      lVar3 = lVar3 + -1;
      iVar5 = iVar5 + 0x54;
      piVar20 = piVar20 + 2;
    } while (lVar3 != 0);
    if (param_1[0x219] != 0) {
      iVar5 = 0;
      lVar3 = 8;
      do {
        if (piVar13[1] != 0) {
          iVar11 = (**(code **)(*param_1 + 8))(param_1);
          iVar11 = (**(code **)(*(int *)(iVar11 + iVar5 + 0x7d4) + 0x3c))(iVar11 + iVar5 + 0x7d4);
          if (*(int *)(*(int *)(param_1[0x219] + 0x100) + *piVar13 * 4) != iVar11) {
            *(int *)(*(int *)(param_1[0x219] + 0x100) + *piVar13 * 4) = iVar11;
          }
        }
        lVar3 = lVar3 + -1;
        iVar5 = iVar5 + 0x54;
        piVar13 = piVar13 + 2;
      } while (lVar3 != 0);
    }
    if (iStack_88 != 0) {
      fn_8265CA20();
    }
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
  }
  else {
    if (param_1[0x218] != 0) {
      puVar6 = *(undefined4 **)(param_1[4] + 0x210);
      puStack_198 = (undefined4 *)*puVar6;
      while (puStack_198 != puVar6) {
        uVar8 = puStack_198[4];
        iVar5 = (**(code **)(*param_1 + 8))(param_1);
        cVar14 = (**(code **)(*(int *)(iVar5 + 0xa74) + 0x38))((int *)(iVar5 + 0xa74),uVar8);
        if (cVar14 == '\0') {
          lVar3 = (**(code **)(*param_1 + 8))(param_1);
          cVar14 = fn_82899F38(lVar3 + 0x684,uVar8);
          if (cVar14 != '\0') {
            lVar3 = (**(code **)(*param_1 + 8))(param_1);
            cVar14 = fn_82899F38(lVar3 + 0x6d8,uVar8);
            if (cVar14 != '\0') {
              lVar3 = (**(code **)(*param_1 + 8))(param_1);
              cVar14 = fn_82899F38(lVar3 + 0x72c,uVar8);
              if (cVar14 != '\0') {
                lVar3 = (**(code **)(*param_1 + 8))(param_1);
                fn_828AACD0(lVar3 + 0xa74,1,uVar8);
              }
            }
          }
        }
        fn_82381BC0(&puStack_198);
        puVar6 = *(undefined4 **)(param_1[4] + 0x210);
      }
    }
    iVar5 = fn_8225F160();
    uStack_18c = *(uint *)(iVar5 + 0x38);
    pppuStack_170 = &ppuStack_180;
    uStack_17c = CONCAT44(&uStack_18c,(((U64)(uStack_17c) >> 32) & 0xFFFFFFFF));
    ppuStack_180 = &lbl_821985F4;
    uVar1 = fn_8225C590();
    fn_8225DB68(uVar1,&ppuStack_180);
    uVar17 = uStack_18c & 0xff;
    lVar3 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB150(lVar3 + 0xac8,uVar17);
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*(int *)(iVar5 + 0x33c) + 0x40))((int *)(iVar5 + 0x33c),&uStack_19f);
    puStack_140 = &uStack_19f;
    iStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_13c = 1;
    fn_828E9D28(auStack_150,&uStack_19f,1);
    if (lbl_831D0EF4 != 0) {
      iVar5 = fn_823AB158(param_1);
      uVar18 = (ulonglong)
               *(byte *)(*(int *)(*(int *)((lbl_831D0EEC + 0x3c) * 4 + iVar5) + 8) +
                        (lbl_831D0EF0 >> 3)) & (ulonglong)(uint)(1 << (lbl_831D0EF0 & 7));
      fn_8223C478(auStack_150,1,0);
      fn_828E9DB8(auStack_150,uVar18 != (uVar18 - 1) + (ulonglong)(uVar18 == 0),1);
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      fn_82329468(lVar3 + 0x33c,&uStack_19f);
    }
    lVar21 = 0;
    lVar3 = 8;
    piVar20 = piVar13;
    do {
      if (piVar20[1] != 0) {
        iVar5 = fn_823AB158(param_1);
        uVar8 = *(undefined4 *)(*piVar20 * 4 + *(int *)(iVar5 + 0x100));
        lVar4 = (**(code **)(*param_1 + 8))(param_1);
        fn_828AB870(lVar21 + lVar4 + 0x390,uVar8);
      }
      lVar3 = lVar3 + -1;
      piVar20 = piVar20 + 2;
      lVar21 = lVar21 + 0x54;
    } while (lVar3 != 0);
    if (param_1[0x219] != 0) {
      lVar21 = 0;
      lVar3 = 8;
      do {
        if (piVar13[1] != 0) {
          uVar8 = *(undefined4 *)(*piVar13 * 4 + *(int *)(param_1[0x219] + 0x100));
          lVar4 = (**(code **)(*param_1 + 8))(param_1);
          fn_828AB870(lVar21 + lVar4 + 0x7d4,uVar8);
        }
        lVar3 = lVar3 + -1;
        piVar13 = piVar13 + 2;
        lVar21 = lVar21 + 0x54;
      } while (lVar3 != 0);
    }
    if (iStack_138 != 0) {
      fn_8265CA20();
    }
    iStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
  }
  cVar14 = fn_8288B760(param_1);
  if (cVar14 == '\0') {
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    lbl_832760A9 = (**(code **)(*(int *)(iVar5 + 0xb1c) + 0x3c))();
    goto LAB_8224dd7c;
  }
  bVar19 = false;
  uVar1 = fn_828B2BF8();
  piVar13 = (int *)fn_828B2360(uVar1,param_1);
  if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 4))(), iVar5 != 0)) {
    cVar14 = fn_828B30D8();
    bVar19 = cVar14 != '\0';
  }
  iVar5 = param_1[0x21a];
  if (iVar5 != 0) {
    uVar1 = fn_828B2BF8();
    piVar13 = (int *)fn_828B2360(uVar1,iVar5);
    if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 4))(), iVar5 != 0)) {
      if (bVar19 == false) {
        cVar14 = fn_828B30D8();
        bVar19 = false;
        if (cVar14 == '\0') goto LAB_8224db14;
      }
      bVar19 = true;
    }
  }
LAB_8224db14:
  puVar6 = (undefined4 *)param_1[4];
  puStack_198 = puVar6;
  uVar1 = fn_828A12E8(puVar6);
  iVar5 = fn_8288F948(uVar1,1);
  piStack_194 = (int *)**(undefined4 **)(iVar5 + 4);
  while( true ) {
    piVar13 = piStack_194;
    uVar1 = fn_828A12E8(puVar6);
    iVar5 = fn_8288F948(uVar1,1);
    if (piVar13 == *(int **)(iVar5 + 4)) break;
    cVar14 = fn_8288B760(piVar13[5]);
    if (cVar14 == '\0') {
      if (bVar19 == false) {
        cVar14 = fn_828A97F8(piVar13[5],0);
        bVar19 = false;
        if (cVar14 != '\0') goto LAB_8224db84;
      }
      else {
LAB_8224db84:
        bVar19 = true;
      }
      if (!bVar19) {
        uStack_188 = (**(code **)(*(int *)piVar13[5] + 0x48))();
        cVar14 = fn_8224DD90(param_1,&uStack_188);
        bVar19 = false;
        if (cVar14 == '\0') goto LAB_8224dbc8;
      }
      bVar19 = true;
    }
LAB_8224dbc8:
    fn_82248B90(&piStack_194);
    puVar6 = puStack_198;
  }
  uVar1 = fn_828A12E8(param_1[4]);
  uVar1 = fn_8288F948(uVar1,2);
  fn_8224E928(auStack_160,uVar1);
  puStack_198 = (undefined4 *)*puStack_15c;
  while (puStack_198 != puStack_15c) {
    piVar13 = (int *)puStack_198[5];
    cVar14 = fn_8288B760(piVar13);
    if (cVar14 == '\0') {
      if (bVar19 == false) {
        cVar14 = fn_828A97F8(piVar13,0);
        bVar19 = false;
        if (cVar14 != '\0') goto LAB_8224dc3c;
      }
      else {
LAB_8224dc3c:
        bVar19 = true;
      }
      if (!bVar19) {
        uStack_188 = (**(code **)(*piVar13 + 0x48))(piVar13);
        cVar14 = fn_8224DD90(param_1,&uStack_188);
        bVar19 = false;
        if (cVar14 == '\0') goto LAB_8224dc80;
      }
      bVar19 = true;
    }
LAB_8224dc80:
    fn_82248B90(&puStack_198);
  }
  uVar18 = 0;
  do {
    uVar1 = fn_8225C590();
    lVar3 = fn_8225DA18(uVar1,uVar18);
    if (lVar3 != 0) {
      iVar5 = fn_82A44628(lVar3);
      cVar14 = fn_828EA610(lVar3);
      if ((cVar14 != '\0') || (iVar5 == 0)) {
        bVar19 = true;
      }
    }
    uVar18 = uVar18 + 1;
  } while ((uVar18 & 0xffffffff) < 8);
  if ((bool)lbl_832760A8 != bVar19) {
    lbl_832760A8 = bVar19;
  }
  cVar14 = lbl_832760A8;
  lVar3 = (**(code **)(*param_1 + 8))(param_1);
  fn_828AAF70(lVar3 + 0xb1c,cVar14);
  fn_828B2BF8();
  fn_828B25C8();
  fn_8224ED20(&puStack_198,auStack_160,*puStack_15c);
  fn_8265CA20(puStack_15c);
LAB_8224dd7c:
  uVar15 = fn_828A9210(param_1);
  *(undefined1 *)(param_1 + 0x11d) = uVar15;
  return;
}


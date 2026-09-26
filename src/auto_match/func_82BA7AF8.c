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
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA7310();
extern int fn_82BA73F0();
extern int fn_82BA7458();
extern int fn_82BA74A8();
extern int fn_82BA76A0();
extern int fn_82BA76F0();
extern int fn_82BA7740();
extern int fn_82BA7790();
extern int fn_82BA7800();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern int fn_82F6C420();
extern unsigned int lbl_820DEF90;


undefined8 fn_82BA7AF8(int *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar13;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint *puStack_a0;
  
  uVar16 = *(uint *)param_1[5];
  param_1[0xd] = param_1[0xd] + 1;
  uVar16 = -(uint)((uVar16 & 0xffff) < 100) & uVar16 & 0xffff;
  if ((1 << (uVar16 & 0x1f) & *(uint *)(&lbl_820DEF90 + ((int)uVar16 >> 5) * 4)) == 0) {
    return 1;
  }
  while( true ) {
    puVar9 = (uint *)param_1[5];
    puVar15 = puVar9 + 1;
    if ((short)*puVar9 != 0xf) {
      puVar15 = (uint *)0x0;
    }
    if (puVar15 == (uint *)0x0) break;
    param_1[5] = (int)(puVar9 + 2);
    param_1[5] = (int)(puVar9 + 2 + (*puVar15 & 0xffff));
  }
LAB_82ba7be8:
  cVar13 = fn_82BA76F0(puVar9);
  if (((((cVar13 != '\0') || (uVar16 = *puVar9 & 0xffff, (-(uint)(uVar16 < 100) & uVar16) == 0x53))
       || (cVar13 = fn_82BA7740(puVar9), cVar13 != '\0')) ||
      (((-(uint)(uVar16 < 100) & uVar16) == 0x84 || (cVar13 = fn_82BA7458(puVar9), cVar13 != '\0')
       ))) || (((-(uint)(uVar16 < 100) & uVar16) == 0x27 ||
               (((-(uint)(uVar16 < 100) & uVar16) == 0x29 ||
                ((-(uint)(uVar16 < 100) & uVar16) == 0x1d)))))) {
    bVar4 = false;
    uVar16 = -(uint)((*puVar9 & 0xffff) < 100) & *puVar9 & 0xffff;
    if (uVar16 < 0x35) {
      if (uVar16 == 0x34) {
LAB_82ba892c:
        puVar10 = (undefined4 *)fn_82BC0088(param_1[0x11],*(undefined4 *)(param_1[0x11] + 4));
        *puVar10 = 0;
LAB_82ba893c:
        bVar4 = true;
      }
      else if (uVar16 == 8) {
        iVar7 = *param_1;
        if (*(int *)(*(int *)(iVar7 + 0x550) + 0x10) < param_1[0xe]) {
          *(undefined4 *)(iVar7 + 0x554) = 0x1b;
                    /* WARNING: Subroutine does not return */
          fn_82F6C420(iVar7 + 0x10,1);
        }
        uVar16 = fn_82BA73F0(puVar9);
        puVar10 = (undefined4 *)fn_82BC0088(param_1[0xf],*(undefined4 *)(param_1[0xf] + 4));
        *puVar10 = puVar9;
        param_1[5] = param_1[7];
        param_1[0xe] = param_1[0xe] + 1;
        while( true ) {
          puVar9 = (uint *)param_1[5];
          uVar14 = *puVar9 & 0xffff;
          if ((-(uint)(uVar14 < 100) & uVar14) == 0x28) break;
          if ((-(uint)(uVar14 < 100) & uVar14) == 0x32) {
            param_1[5] = (int)(puVar9 + 1);
            uVar14 = puVar9[1];
            param_1[5] = (int)(puVar9 + 2);
            if ((uVar14 & 0xffff) == uVar16) break;
          }
          fn_82BA74A8(param_1);
        }
      }
      else if (uVar16 == 9) {
        iVar7 = *param_1;
        if (*(int *)(*(int *)(iVar7 + 0x550) + 0x10) < param_1[0xe]) {
          *(undefined4 *)(iVar7 + 0x554) = 0x1b;
                    /* WARNING: Subroutine does not return */
          fn_82F6C420(iVar7 + 0x10,1);
        }
        piVar8 = *(int **)(param_1[3] + 8);
        piVar17 = piVar8;
        do {
          if (*piVar17 == (int)(short)puVar9[1]) {
            uVar16 = (uint)*(byte *)(piVar17 + 1);
            goto LAB_82ba7f24;
          }
        } while ((piVar17 != (int *)param_1[4]) &&
                (piVar17 = (int *)piVar17[2], piVar17 != (int *)0x0));
        uVar16 = 0xffffffff;
LAB_82ba7f24:
        do {
          if (*piVar8 == (int)(short)puVar9[1]) {
            uVar14 = (uint)*(byte *)(piVar8 + 1);
            goto LAB_82ba7f5c;
          }
        } while ((piVar8 != (int *)param_1[4]) && (piVar8 = (int *)piVar8[2], piVar8 != (int *)0x0))
        ;
        uVar14 = 0xffffffff;
LAB_82ba7f5c:
        if (uVar14 == 0xffffffff) {
          iVar7 = param_1[5];
          piVar8 = (int *)fn_82BC0088(param_1[0xf],*(undefined4 *)(param_1[0xf] + 4));
          *piVar8 = iVar7;
          param_1[5] = param_1[5] + 4;
          puVar9 = (uint *)fn_82B7BD28(*(undefined4 *)(*param_1 + 0x5b0),0x18);
          puVar10 = (undefined4 *)
                    fn_82BC0088(param_1[0x10],*(undefined4 *)(param_1[0x10] + 4));
          *puVar10 = puVar9;
          *(undefined1 *)puVar9 = 0;
          *(undefined1 *)((int)puVar9 + 1) = 0;
          puVar15 = puVar9 + 2;
          *(undefined1 *)((int)puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 3) = 0;
          *puVar9 = *puVar9 | 0x35;
          puVar20 = (undefined1 *)param_1[5];
          *(undefined1 *)(puVar9 + 1) = *puVar20;
          *(undefined1 *)((int)puVar9 + 5) = puVar20[1];
          *(undefined1 *)((int)puVar9 + 6) = puVar20[2];
          *(undefined1 *)((int)puVar9 + 7) = puVar20[3];
          param_1[5] = param_1[5] + 4;
          *(undefined1 *)puVar15 = 0;
          *(undefined1 *)((int)puVar9 + 9) = 0;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *(undefined1 *)((int)puVar9 + 0xb) = 0;
          *puVar15 = *puVar15 | 8;
          puVar20 = (undefined1 *)param_1[5];
          *(undefined1 *)(puVar9 + 3) = *puVar20;
          *(undefined1 *)((int)puVar9 + 0xd) = puVar20[1];
          *(undefined1 *)((int)puVar9 + 0xe) = puVar20[2];
          *(undefined1 *)((int)puVar9 + 0xf) = puVar20[3];
          puVar15 = puVar9 + 4;
          param_1[5] = param_1[5] + 4;
          *(undefined1 *)puVar15 = 0;
          *(undefined1 *)((int)puVar9 + 0x11) = 0;
          *(undefined1 *)((int)puVar9 + 0x12) = 0;
          *(undefined1 *)((int)puVar9 + 0x13) = 0;
          *puVar15 = *puVar15 | 0x29;
          *(undefined1 *)(puVar9 + 5) = 0;
          *(undefined1 *)((int)puVar9 + 0x15) = 0;
          *(undefined1 *)((int)puVar9 + 0x16) = 0;
          *(undefined1 *)((int)puVar9 + 0x17) = 0;
          puVar9[5] = puVar9[5] | 0x53;
        }
        else {
          if (uVar16 != 1) goto LAB_82ba7ec4;
          iVar7 = param_1[5];
          piVar8 = (int *)fn_82BC0088(param_1[0xf],*(undefined4 *)(param_1[0xf] + 4));
          *piVar8 = iVar7;
          param_1[5] = param_1[5] + 8;
          puVar9 = (uint *)fn_82B7BD28(*(undefined4 *)(*param_1 + 0x5b0),0xc);
          puVar10 = (undefined4 *)
                    fn_82BC0088(param_1[0x10],*(undefined4 *)(param_1[0x10] + 4));
          *puVar10 = puVar9;
          *(undefined1 *)puVar9 = 0;
          *(undefined1 *)((int)puVar9 + 1) = 0;
          *(undefined1 *)((int)puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 3) = 0;
          *puVar9 = *puVar9 | 8;
          puVar20 = (undefined1 *)param_1[5];
          *(undefined1 *)(puVar9 + 1) = *puVar20;
          *(undefined1 *)((int)puVar9 + 5) = puVar20[1];
          *(undefined1 *)((int)puVar9 + 6) = puVar20[2];
          *(undefined1 *)((int)puVar9 + 7) = puVar20[3];
          param_1[5] = param_1[5] + 4;
          *(undefined1 *)(puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 9) = 0;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *(undefined1 *)((int)puVar9 + 0xb) = 0;
          puVar9[2] = puVar9[2] | 0x53;
        }
        param_1[5] = (int)puVar9;
      }
      else if (uVar16 == 0x1d) {
        fn_82BA76A0(param_1,puVar9[1] & 0xffff,puVar9[2] != 0);
LAB_82ba7ec4:
        fn_82BA74A8(param_1);
      }
      else if (uVar16 == 0x27) {
        uVar16 = *(uint *)(param_1[0x11] + 4);
        uVar14 = uVar16 - 1;
        if (uVar14 < uVar16) {
          piVar8 = (int *)(uVar14 * 4 + *(int *)(param_1[0x11] + 8));
        }
        else {
          piVar8 = (int *)0x0;
        }
        if (*piVar8 == 0) goto LAB_82ba893c;
        if (*piVar8 != 1) goto LAB_82ba7ec4;
        iVar7 = 0;
        while ((iVar7 != 0 ||
               ((-(uint)((*(uint *)param_1[5] & 0xffff) < 100) & *(uint *)param_1[5] & 0xffff) !=
                0x29))) {
          puVar9 = (uint *)param_1[5];
          cVar13 = fn_82BA7458(puVar9);
          if (cVar13 == '\0') {
            uVar16 = *puVar9 & 0xffff;
            if ((-(uint)(uVar16 < 100) & uVar16) == 0x29) {
              iVar7 = iVar7 + -1;
            }
          }
          else {
            iVar7 = iVar7 + 1;
          }
          fn_82BA74A8(param_1);
        }
      }
      else {
        if (uVar16 == 0x29) {
          iVar7 = fn_82BC7368(param_1[0x11]);
          if (iVar7 == 0) goto LAB_82ba893c;
          goto LAB_82ba7ec4;
        }
        if (uVar16 == 0x32) {
          param_1[5] = (int)(puVar9 + 2);
          do {
            uVar16 = *(uint *)param_1[5] & 0xffff;
            param_1[5] = (int)((uint *)param_1[5] + 1);
          } while ((-(uint)(uVar16 < 100) & uVar16) != 0x53);
        }
      }
    }
    else if (uVar16 == 0x35) {
      piVar8 = *(int **)(param_1[3] + 8);
      piVar17 = piVar8;
      do {
        if (*piVar17 == (int)(short)puVar9[1]) {
          uVar16 = (uint)*(byte *)(piVar17 + 1);
          goto LAB_82ba87dc;
        }
      } while ((piVar17 != (int *)param_1[4]) &&
              (piVar17 = (int *)piVar17[2], piVar17 != (int *)0x0));
      uVar16 = 0xffffffff;
LAB_82ba87dc:
      do {
        if (*piVar8 == (int)(short)puVar9[1]) {
          uVar14 = (uint)*(byte *)(piVar8 + 1);
          goto LAB_82ba8814;
        }
      } while ((piVar8 != (int *)param_1[4]) && (piVar8 = (int *)piVar8[2], piVar8 != (int *)0x0));
      uVar14 = 0xffffffff;
LAB_82ba8814:
      if (uVar14 == 0xffffffff) goto LAB_82ba892c;
      fn_82BA74A8(param_1);
      iVar7 = param_1[0x11];
      if (uVar16 == 1) {
        puVar10 = (undefined4 *)fn_82BC0088(iVar7,*(undefined4 *)(iVar7 + 4));
        *puVar10 = 1;
      }
      else {
        puVar10 = (undefined4 *)fn_82BC0088(iVar7,*(undefined4 *)(iVar7 + 4));
        iVar7 = 0;
        *puVar10 = 2;
        while ((iVar7 != 0 ||
               ((uVar16 = *(uint *)param_1[5] & 0xffff, (-(uint)(uVar16 < 100) & uVar16) != 0x27 &&
                ((-(uint)(uVar16 < 100) & uVar16) != 0x29))))) {
          puVar9 = (uint *)param_1[5];
          cVar13 = fn_82BA7458(puVar9);
          if (cVar13 == '\0') {
            uVar16 = *puVar9 & 0xffff;
            if ((-(uint)(uVar16 < 100) & uVar16) == 0x29) {
              iVar7 = iVar7 + -1;
            }
          }
          else {
            iVar7 = iVar7 + 1;
          }
          fn_82BA74A8(param_1);
        }
      }
    }
    else {
      if (uVar16 == 0x53) {
        if (param_1[0xf] == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df0a0,0xffffffff820defa8,0x31a);
        }
        puVar9 = (uint *)fn_82BC7368(param_1[0xf]);
        param_1[5] = (int)puVar9;
        uVar16 = *puVar9;
        param_1[5] = (int)(puVar9 + 1);
        uVar3 = (ulonglong)uVar16 & 0xffff;
        uVar16 = -(uint)(uVar3 < 100) & (uint)uVar3;
        if (uVar16 == 8) {
          if (param_1[0xe] < 1) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df0b0,0xffffffff820defa8,0x321,
                              uVar3 - 100);
          }
          param_1[0xe] = param_1[0xe] + -1;
        }
        else if (uVar16 == 9) {
          param_1[5] = (int)(puVar9 + 2);
        }
        else {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820defa8,0x326,
                            uVar3 - 100);
        }
        puVar9 = (uint *)(param_1[5] + 4);
        goto LAB_82ba8974;
      }
      if (uVar16 == 0x71) {
        uVar16 = fn_82BA73F0(puVar9);
        puVar9 = puVar9 + 2;
        param_1[5] = (int)puVar9;
        while (cVar13 = fn_82BA7790(puVar9), cVar13 == '\0') {
          puVar9 = (uint *)param_1[5];
          if ((-(uint)((*puVar9 & 0xffff) < 100) & *puVar9 & 0xffff) == 0x84) {
            param_1[5] = (int)(puVar9 + 1);
            uVar14 = puVar9[1];
            param_1[5] = (int)(puVar9 + 2);
            if ((uVar14 & 0xffff) == uVar16) break;
          }
          cVar13 = fn_82BA7800(param_1[5]);
          if (cVar13 != '\0') {
            iVar7 = 0;
            do {
              fn_82BA74A8(param_1);
              iVar2 = param_1[5];
              cVar13 = fn_82BA7800(iVar2);
              if (cVar13 != '\0') {
                iVar7 = iVar7 + -1;
              }
              cVar13 = fn_82BA7790(iVar2);
              if (cVar13 != '\0') {
                iVar7 = iVar7 + 1;
              }
            } while (iVar7 < 1);
          }
          fn_82BA74A8(param_1);
          puVar9 = (uint *)param_1[5];
        }
      }
      else {
        if (uVar16 == 0x72) {
          iVar7 = *param_1;
          if (*(int *)(*(int *)(iVar7 + 0x550) + 0x10) < param_1[0xe]) {
            *(undefined4 *)(iVar7 + 0x554) = 0x1b;
                    /* WARNING: Subroutine does not return */
            fn_82F6C420(iVar7 + 0x10,1);
          }
          puVar11 = (uint *)fn_82B7BD28(*(undefined4 *)(iVar7 + 0x5b0),20000);
          puVar10 = (undefined4 *)
                    fn_82BC0088(param_1[0x10],*(undefined4 *)(param_1[0x10] + 4));
          *puVar10 = puVar11;
          iVar7 = param_1[5];
          uVar6 = fn_82BA73F0(iVar7);
          param_1[5] = iVar7 + 4;
          *(undefined1 *)puVar11 = 0;
          puVar15 = puVar11 + 2;
          *(undefined1 *)((int)puVar11 + 1) = 0;
          *(undefined1 *)((int)puVar11 + 2) = 0;
          *(undefined1 *)((int)puVar11 + 3) = 0;
          *puVar11 = *puVar11 | 0x35;
          puVar20 = (undefined1 *)param_1[5];
          *(undefined1 *)(puVar11 + 1) = *puVar20;
          *(undefined1 *)((int)puVar11 + 5) = puVar20[1];
          *(undefined1 *)((int)puVar11 + 6) = puVar20[2];
          *(undefined1 *)((int)puVar11 + 7) = puVar20[3];
          param_1[5] = param_1[5] + 8;
          puVar12 = (uint *)fn_82B7BD28(*(undefined4 *)(*param_1 + 0x5b0),0x100);
          lVar21 = 0x40;
          puVar9 = puVar12 + -1;
          do {
            puVar9 = puVar9 + 1;
            *puVar9 = 0xffffffff;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fn_82BA7310(puVar12,uVar6);
          puVar9 = (uint *)param_1[5];
          do {
            puVar18 = (uint *)param_1[5];
            cVar13 = fn_82BA7740(puVar18);
            if (cVar13 != '\0') {
              uVar16 = *puVar18;
              uVar5 = fn_82BA73F0(puVar18);
              param_1[5] = (int)(puVar18 + 1);
              if ((-(uint)((uVar16 & 0xffff) < 100) & uVar16 & 0xffff) == 0x72) {
                param_1[5] = (int)(puVar18 + 2);
              }
              param_1[5] = param_1[5] + 4;
              fn_82BA7310(puVar12,uVar5);
            }
            puVar18 = (uint *)param_1[5];
            if ((-(uint)((*puVar18 & 0xffff) < 100) & *puVar18 & 0xffff) == 0x84) {
              uVar16 = puVar18[1] & 0xffff;
              if (uVar16 == (uint)uVar6) {
                puStack_a0 = puVar18;
              }
              uVar14 = 0xffffffff;
              iVar7 = 0;
              puVar18 = puVar12;
              do {
                if ((*puVar18 != 0xffffffff) &&
                   (bVar1 = uVar14 != 0xffffffff, uVar14 = *puVar18, bVar1)) {
                  uVar14 = 0xffffffff;
                  break;
                }
                iVar7 = iVar7 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar7 < 0x40);
              if (uVar14 == uVar16) goto LAB_82ba8498;
              iVar7 = 0;
              puVar18 = puVar12;
              do {
                if (*puVar18 == uVar16) {
                  puVar12[iVar7] = 0xffffffff;
                  break;
                }
                iVar7 = iVar7 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar7 < 0x40);
            }
            fn_82BA74A8(param_1);
          } while( true );
        }
        if (uVar16 == 0x84) goto LAB_82ba7ec4;
      }
    }
    goto LAB_82ba8940;
  }
  goto LAB_82ba8984;
LAB_82ba8498:
  iVar7 = param_1[5];
  param_1[5] = (int)puVar9;
  puVar18 = (uint *)(iVar7 + 8);
  while (puVar9 != puVar18) {
    puVar19 = (uint *)param_1[5];
    fn_82BA74A8(param_1);
    for (; puVar9 = (uint *)param_1[5], puVar19 != puVar9; puVar19 = puVar19 + 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar19;
      *(undefined1 *)((int)puVar15 + 1) = *(undefined1 *)((int)puVar19 + 1);
      *(undefined1 *)((int)puVar15 + 2) = *(undefined1 *)((int)puVar19 + 2);
      *(char *)((int)puVar15 + 3) = (char)*puVar19;
      puVar15 = puVar15 + 1;
    }
  }
  if (puVar18 != puStack_a0) {
    *(undefined1 *)puVar15 = 0;
    *(undefined1 *)((int)puVar15 + 1) = 0;
    *(undefined1 *)((int)puVar15 + 2) = 0;
    *(undefined1 *)((int)puVar15 + 3) = 0;
    *puVar15 = *puVar15 | 0x27;
    puVar15 = puVar15 + 1;
    param_1[5] = (int)puStack_a0;
    fn_82BA74A8(param_1);
    while ((uint *)param_1[5] != puVar18) {
      puVar20 = (undefined1 *)param_1[5];
      fn_82BA74A8(param_1);
      for (; puVar20 != (undefined1 *)param_1[5]; puVar20 = puVar20 + 4) {
        *(undefined1 *)puVar15 = *puVar20;
        *(undefined1 *)((int)puVar15 + 1) = puVar20[1];
        *(undefined1 *)((int)puVar15 + 2) = puVar20[2];
        *(undefined1 *)((int)puVar15 + 3) = puVar20[3];
        puVar15 = puVar15 + 1;
      }
    }
  }
  *(undefined1 *)puVar15 = 0;
  *(undefined1 *)((int)puVar15 + 1) = 0;
  *(undefined1 *)((int)puVar15 + 2) = 0;
  *(undefined1 *)((int)puVar15 + 3) = 0;
  *puVar15 = *puVar15 | 0x29;
  *(undefined1 *)(puVar15 + 1) = 0;
  *(undefined1 *)((int)puVar15 + 5) = 0;
  *(undefined1 *)((int)puVar15 + 6) = 0;
  *(undefined1 *)((int)puVar15 + 7) = 0;
  puVar15[1] = puVar15[1] | 0x53;
  param_1[5] = (int)puVar18;
  puVar10 = (undefined4 *)fn_82BC0088(param_1[0xf],*(undefined4 *)(param_1[0xf] + 4));
  *puVar10 = puVar18;
  param_1[5] = (int)puVar11;
  fn_82B7BEB0(*(undefined4 *)(*param_1 + 0x5b0),puVar12);
LAB_82ba8940:
  while( true ) {
    puVar9 = (uint *)param_1[5];
    puVar15 = puVar9 + 1;
    if ((short)*puVar9 != 0xf) {
      puVar15 = (uint *)0x0;
    }
    if (puVar15 == (uint *)0x0) break;
    param_1[5] = (int)(puVar9 + 2);
    puVar9 = puVar9 + 2 + (*puVar15 & 0xffff);
LAB_82ba8974:
    param_1[5] = (int)puVar9;
  }
  if (bVar4) {
LAB_82ba8984:
    uVar16 = *puVar9 & 0xffff;
    if (((-(uint)(uVar16 < 100) & uVar16) != 0x28) && ((-(uint)(uVar16 < 100) & uVar16) != 0x2b)) {
      return 1;
    }
    while (*(int *)(param_1[0x10] + 4) != 0) {
      uVar6 = fn_82BC7368(param_1[0x10]);
      fn_82B7BEB0(*(undefined4 *)(*param_1 + 0x5b0),uVar6);
    }
    return 0;
  }
  goto LAB_82ba7be8;
}


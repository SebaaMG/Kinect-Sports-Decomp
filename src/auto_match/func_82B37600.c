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
extern int fn_82936610();
extern int fn_82936B10();
extern int fn_82AA65B0();
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ABE650();
extern int fn_82AD1270();
extern int fn_82AD18C0();
extern int fn_82AF49A8();
extern int fn_82B1A198();
extern int fn_82B1A378();
extern int fn_82B1AE88();
extern int fn_82B1B560();
extern int fn_82B1B7D0();
extern int fn_82B25248();
extern int fn_82B2B908();
extern int fn_82B330F8();
extern int fn_82B44B88();
extern int fn_82B455A8();
extern int fn_82B80EF8();
extern int fn_82B81860();
extern int fn_82B82D28();
extern int fn_82B8A3E8();
extern int fn_82B8CB58();
extern int fn_82B8EB40();
extern int fn_82F6DFB0();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int lbl_82005710;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82B37600(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int iVar11;
  undefined8 uVar6;
  undefined4 uVar12;
  ulonglong uVar7;
  uint *puVar13;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char cStack_c0;
  char cStack_bf;
  char acStack_be [2];
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  
  uVar1 = *(uint *)(param_1 + 4);
  cStack_c0 = '\0';
  dVar22 = lbl_82005710;
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      if (*(int *)(param_1 + 0x28c) != 0) {
        uVar1 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar1 | 0x1000;
        while( true ) {
          puVar4 = *(uint **)(param_1 + 0x28c);
          uVar2 = puVar4[1];
          if (((uVar2 & 1) != 0) || (uVar2 == 0)) break;
          if ((uVar2 & 1) == 0) {
            puVar13 = (uint *)((*puVar4 & 0xfffffffe) - 4);
          }
          else {
            puVar13 = (uint *)0x0;
          }
          uVar15 = puVar13[2] - 1;
          uVar2 = puVar13[puVar13[2] + 3];
          puVar13[2] = uVar15;
          if (uVar15 == 0) {
            *(uint *)(puVar13[1] & 0xfffffffe) = *puVar13;
            *(uint *)(*puVar13 & 0xfffffffe) = puVar13[1];
            fn_82AA6648(puVar4,puVar13,((ulonglong)puVar13[3] + 4 & 0x3fffffff) << 2);
          }
          uVar15 = *(uint *)(uVar2 + 8);
          *(uint *)(uVar2 + 8) = uVar15 & 0xfbffffff;
          if ((uVar15 & 0x3f80) != 0x3980) {
            fn_82B2B908(param_1,uVar2,&cStack_c0);
          }
        }
        fn_82ABE650(param_1,uVar1 >> 0xc & 1);
        if (cStack_c0 != '\0') {
          fn_82B44B88(param_1);
          cStack_c0 = '\0';
        }
        *(undefined4 *)(param_1 + 0x28c) = 0;
        fn_82B330F8(param_1,0);
      }
      return;
    }
    uVar2 = *(uint *)(uVar1 + 0x1c);
    while (piVar16 = (int *)(-(uint)((uVar2 & 1) == 0) & uVar2), piVar16 != (int *)0x0) {
      uVar2 = piVar16[2];
      uVar15 = uVar2 >> 7 & 0x7f;
      if (uVar15 < 0x62) {
        if (uVar15 == 0x61) {
LAB_82b37bf0:
          iVar11 = fn_82ABDD90(param_1,uVar15,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
          iVar11 = (int)piVar16 + iVar11 + -0x18;
          if (*(int **)(iVar11 + 0x14) != (int *)0x0) {
            if (**(int **)(iVar11 + 0x14) == 0) {
              uVar6 = fn_82B1A378(param_1,piVar16,iVar11);
              if ((int)uVar6 != 0) goto LAB_82b37778;
            }
            else {
              uVar6 = fn_82B1A198();
              if ((int)uVar6 != 0) goto LAB_82b37778;
              iVar3 = **(int **)(iVar11 + 0x14);
              uVar12 = fn_82B455A8(param_1,*(undefined4 *)(iVar3 + 0x70));
              *(undefined4 *)(iVar3 + 0x70) = uStack_8c;
              acStack_be[0] = '\0';
              fn_82936B10(iVar3,iVar11,acStack_be,0xffffffff82aa66e0,param_1);
              if (acStack_be[0] != '\0') {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              *(undefined4 *)(iVar3 + 0x70) = uVar12;
              if ((*(uint *)(iVar11 + 4) & 0x20000000) != 0) {
                for (puVar4 = (uint *)*piVar16; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
                  uVar2 = *puVar4;
                  if (((uVar2 & 0x40000000) == 0) || (bVar5 = true, (uVar2 & 0xe000000) != 0)) {
                    bVar5 = false;
                  }
                  if ((bVar5) && ((uVar2 & 0x1ffe000) == 0x2000)) goto LAB_82b37cf4;
                }
                *(uint *)(iVar11 + 4) = *(uint *)(iVar11 + 4) & 0xdfffffff;
              }
            }
LAB_82b37cf4:
            *(undefined4 *)(iVar11 + 0x14) = 0;
          }
          uVar6 = fn_82B81860(param_1,piVar16,iVar11,0);
          if ((int)uVar6 != 0) goto LAB_82b37778;
        }
        else if (0x2e < uVar15) {
          if (uVar15 < 0x31) {
            uVar2 = *(uint *)piVar16[0xb];
            uVar7 = fn_82AF49A8(*(ushort *)(((uint *)piVar16[0xb])[3] + 0xe) >> (uVar2 >> 3 & 0xc)
                                 & 0xf,uVar2 & 0x1f);
            if ((uVar7 & 3) == 1) {
LAB_82b37854:
              uVar6 = 0xfa2;
              goto LAB_82b37778;
            }
          }
          else if (0x33 < uVar15) {
            if (uVar15 < 0x37) {
              uVar2 = *(uint *)piVar16[0xb];
              uVar7 = fn_82AF49A8(*(ushort *)(((uint *)piVar16[0xb])[3] + 0xe) >>
                                   (uVar2 >> 3 & 0xc) & 0xf,uVar2 & 0x1f);
              uVar7 = uVar7 & 3;
              if (uVar7 != 3) goto LAB_82b377d4;
              fn_82AA65B0(param_1,0xfa1);
            }
            else if (uVar15 == 0x48) {
              uVar2 = *(uint *)piVar16[0xb];
              uVar7 = fn_82AF49A8(*(ushort *)(((uint *)piVar16[0xb])[3] + 0xe) >>
                                   (uVar2 >> 3 & 0xc) & 0xf,uVar2 & 0x1f);
              uVar7 = uVar7 & 3;
LAB_82b377d4:
              if (uVar7 == 1) {
                uVar6 = 0xfa3;
LAB_82b37778:
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,uVar6,piVar16,*(undefined8 *)(param_1 + 0x270),
                                  *(undefined8 *)(param_1 + 0x278),*(undefined8 *)(param_1 + 0x280))
                ;
              }
            }
            else if (uVar15 == 0x60) {
              iVar11 = fn_82ABDD90(param_1,0x60,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
              iVar11 = (int)piVar16 + iVar11 + -0x14;
              if (*(int *)(iVar11 + 0x10) != 0) {
                uVar6 = fn_82B1A198(param_1,piVar16,*(int *)(iVar11 + 0x10),&uStack_b0);
                if ((int)uVar6 != 0) goto LAB_82b37778;
                iVar3 = **(int **)(iVar11 + 0x10);
                uVar12 = fn_82B455A8(param_1,*(undefined4 *)(iVar3 + 0x70));
                *(undefined4 *)(iVar3 + 0x70) = uStack_b0;
                cStack_bf = '\0';
                fn_82936610(iVar3,iVar11,&uStack_ac,&uStack_a8,&cStack_bf,0xffffffff82aa66e0,
                                  param_1);
                *(char *)(iVar11 + 0xf) = (char)uStack_ac;
                *(uint *)(iVar11 + 0xc) =
                     (uStack_a8 & 1) << 0x10 | *(uint *)(iVar11 + 0xc) & 0xfffeffff;
                if (cStack_bf != '\0') {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                *(undefined4 *)(iVar3 + 0x70) = uVar12;
                *(undefined4 *)(iVar11 + 0x10) = 0;
              }
              if ((*(char *)(iVar11 + 0xf) != -1) &&
                 ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000)) {
                uVar6 = 0xe37;
                goto LAB_82b37778;
              }
            }
          }
        }
      }
      else if (0x62 < uVar15) {
        if (uVar15 < 0x65) goto LAB_82b37bf0;
        if (uVar15 < 0x67) {
          if (((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) && ((uVar2 >> 0x1b & 1) != 0)
             ) {
            uVar6 = 0xde0;
            goto LAB_82b37778;
          }
        }
        else if (uVar15 == 0x6b) {
          puVar4 = (uint *)piVar16[0xb];
          uVar7 = fn_82AF49A8(*(ushort *)(puVar4[3] + 0xe) >> (*puVar4 >> 3 & 0xc) & 0xf,
                               *puVar4 & 0x1f);
          uVar18 = (ulonglong)(uint)piVar16[0xc];
          fn_82B8EB40(param_1,uVar18,&iStack_b4,&uStack_94,&uStack_90);
          uVar6 = 0;
          if (((*(uint *)(iStack_b4 + 8) & 0x3f80) == 16000) &&
             (dVar20 = (double)fn_82B80EF8(iStack_b4,uStack_94 & 3,uStack_90),
             dVar22 <= dVar20)) {
            uVar19 = (ulonglong)dVar20;
            uStack_78 = uVar19 & 0xffffffff;
            uStack_80 = uVar19;
            if (dVar20 == (double)uStack_78) {
              fn_82AD1270(puVar4,2);
              if (((uVar19 & 1) != 0) && ((uVar7 & 3) == 1)) {
                uVar6 = 4;
              }
              uVar7 = fn_82AF49A8(*(ushort *)(puVar4[3] + 0xe) >> (*puVar4 >> 3 & 0xc) & 0xf,
                                   *puVar4 & 0x1f);
              iStack_b4 = fn_82B8A3E8(dVar20,param_1);
              uVar18 = fn_82AD18C0(param_1,iStack_b4,0);
            }
          }
          if ((uVar7 & 3) == 1) goto LAB_82b37854;
          if (*(int *)(param_1 + 0x28c) == 0) {
            puVar13 = (uint *)fn_82ABE250(param_1,8,0x26);
            *(uint **)(param_1 + 0x28c) = puVar13;
            puVar13[1] = (uint)puVar13 | 1;
            *puVar13 = (uint)(puVar13 + 1) | 1;
          }
          uVar8 = fn_82B1AE88(param_1,0,piVar16,puVar4);
          uVar9 = fn_82B1B560(param_1,0,piVar16,uVar8,uVar18);
          uVar10 = fn_82B1B7D0(param_1,0,piVar16,uVar9);
          fn_82B25248(param_1,uVar8,*(undefined4 *)(param_1 + 0x28c));
          fn_82B25248(param_1,uVar9,*(undefined4 *)(param_1 + 0x28c));
          fn_82B25248(param_1,uVar10,*(undefined4 *)(param_1 + 0x28c));
          fn_82B8CB58(param_1,piVar16,uVar10,0xe4,uVar6,*(undefined4 *)(param_1 + 0x28c),
                            &cStack_c0);
        }
        else if (uVar15 == 0x76) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
          piVar14 = (int *)piVar16[4];
          uVar12 = *(undefined4 *)(*(int *)(piVar16[0xc] + 0xc) + 0x2c);
          if (piVar14 != (int *)0x0) {
            do {
              if (*piVar14 == 0) break;
              piVar14 = (int *)piVar14[1];
            } while (piVar14 != (int *)0x0);
            if (piVar14 != (int *)0x0) {
              lVar17 = (longlong)(int)((uint)piVar14[2] >> 0xe & 0x3fff) *
                       (longlong)(int)(piVar14[2] & 0x3fff);
              fn_82B82D28(uVar12,0,&iStack_b8,&uStack_a0,&uStack_a4,0,0,0);
              fn_82B82D28(uVar12,1,&iStack_bc,&uStack_98,&uStack_9c,0,0,0);
              iVar11 = iStack_b8;
              uVar2 = *(uint *)(iStack_b8 + 8) >> 7 & 0x7f;
              if (uVar2 != 0x7d) {
                if ((*(uint *)(iStack_bc + 8) & 0x3f80) != 16000) goto LAB_82b37d14;
                if (uVar2 != 0x7d) {
                  iStack_b8 = iStack_bc;
                  iStack_bc = iVar11;
                }
              }
              dVar20 = (double)fn_82B80EF8(iStack_b8,uStack_a0,uStack_a4);
              if ((*(uint *)(iStack_bc + 8) & 0x3f80) == 16000) {
                dVar21 = (double)fn_82B80EF8(iStack_bc,uStack_98,uStack_9c);
                iVar11 = fn_82F6DFB0();
                if ((iVar11 != 0) && (dVar20 <= dVar21)) {
                  dVar20 = dVar21;
                }
              }
              iVar11 = fn_82F6DFB0(dVar20);
              if (((iVar11 == 0) || (dVar20 < dVar22)) ||
                 (lStack_88 = lVar17, (double)lVar17 <= dVar20)) {
                uVar6 = 0xdb0;
                goto LAB_82b37778;
              }
            }
          }
        }
      }
LAB_82b37d14:
      uVar2 = *(uint *)(((uint)piVar16 & 0xfffffffe) + 0x28);
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}


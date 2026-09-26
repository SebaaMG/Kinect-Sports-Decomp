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
extern unsigned int *auStack_108;
extern unsigned int *auStack_118;
extern unsigned int *auStack_128;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern int fn_82635A30();
extern int fn_82635A90();
extern int fn_82635CC8();
extern int fn_82635F08();
extern int fn_82635FE8();
extern int fn_826361D8();
extern int fn_82636230();
extern int fn_82636758();
extern int fn_828F0248();
extern int fn_828F9A60();
extern int fn_82935220();
extern int fn_82935240();
extern int fn_829352D0();
extern int fn_829354C0();
extern int fn_82958638();
extern int fn_82A9A238();
extern int fn_82A9C188();
extern int fn_82A9EDA0();
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABDCF8();
extern int fn_82ABDF08();
extern int fn_82ABE1E8();
extern int fn_82ABE9F0();
extern int fn_82ABEA98();
extern int fn_82ABF768();
extern int fn_82ABFAD0();
extern int fn_82B454A0();
extern int fn_82B45580();
extern int fn_82B462A8();
extern int fn_82F65FE0();
extern int fn_82F691F0();
extern int fn_82F6DCE0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack0000001c;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AC23E8(int param_1,ulonglong param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar15;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short sVar14;
  int iVar12;
  int iVar13;
  undefined8 uVar7;
  ulonglong uVar16;
  uint uVar18;
  ulonglong uVar17;
  ulonglong uVar19;
  uint *puVar21;
  longlong lVar20;
  uint *puVar22;
  char *pcVar24;
  ushort uVar26;
  ulonglong uVar23;
  uint uVar25;
  ulonglong uVar27;
  uint uVar28;
  ushort *puVar29;
  longlong lVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  uint uStack0000001c;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  uint uStack_150;
  int *piStack_14c;
  uint uStack_148;
  uint uStack_144;
  ulonglong uStack_140;
  ulonglong uStack_130;
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [24];
  uint *puStack_f0;
  uint *puStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined4 auStack_b8 [46];
  
  uStack0000001c = (uint)param_2;
  uVar32 = 0x80;
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar32 = 0x84;
  }
  uVar27 = 0;
  if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) ||
     (bVar4 = true, (*(uint *)(param_1 + 0x2c) & 0x20) != 0)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar32 = uVar32 | 0x40;
  }
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uVar5 = fn_82636758();
  *(int *)(param_1 + 0x300) = (int)uVar5;
  fn_82635A30(uVar5,uVar32);
  puVar22 = *(uint **)(param_1 + 0x38);
  uStack_144 = 0;
  if ((puVar22 != (uint *)0x0) && ((*puVar22 & 2) != 0)) {
    uStack_144 = puVar22[5];
  }
  uVar28 = uStack_144;
  uVar32 = 0;
  uVar16 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar25 = 0;
    if (*(int *)(param_1 + 0x218) != 0) {
      puVar22 = (uint *)(param_1 + 0x15c);
      do {
        uVar18 = puVar22[1];
        if ((*(uint *)(uVar18 + 8) & 0x3f80) != 0x3980) {
          puVar21 = *(uint **)(uVar18 + 4);
          while ((puVar21 != (uint *)0x0 &&
                 (((puVar21[4] == 0 || ((*puVar21 & 0xe000000) == 0)) ||
                  ((*(uint *)(puVar21[4] + 8) & 0x3f80) == 0x3a80))))) {
            puVar21 = (uint *)puVar21[2];
          }
          uVar1 = *puVar22;
          uVar3 = uVar1 & 0x1f;
          if ((uVar1 & 0x1f) == 0) {
            if ((uVar1 & 0x1e0) == 0) {
              if (puVar21 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xddd);
              }
            }
            else {
LAB_82ac27c0:
              if ((puVar21 == (uint *)0x0) && ((uVar1 & 0x20000) == 0)) {
                fn_82AA65B0(param_1,0xe0c,puVar22[-1]);
                uVar32 = (ulonglong)uStack_150;
                uVar16 = (ulonglong)uStack_148;
              }
            }
          }
          else if (uVar3 == 4) {
            if ((uVar1 & 0x1e0) != 0) goto LAB_82ac27c0;
            if (puVar21 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdde);
            }
          }
          else if (uVar3 == 0x11) {
            if (puVar21 != (uint *)0x0) {
              uVar32 = uVar32 | 0x40000;
              uStack_150 = (uint)uVar32;
              for (puVar21 = *(uint **)(uVar18 + 4);
                  (puVar21 != (uint *)0x0 && ((*puVar21 & 0xe000000) == 0));
                  puVar21 = (uint *)puVar21[2]) {
              }
              uVar16 = (ulonglong)(uVar1 >> 0xf) & 2 | ((ulonglong)(*puVar21 >> 0xc) & 0x1fe0) << 3
                       | uVar16 & 0xffff00fd;
LAB_82ac2780:
              uStack_148 = (uint)uVar16;
            }
          }
          else {
            if (uVar3 != 0x12) goto LAB_82ac27c0;
            if (puVar21 != (uint *)0x0) {
              for (puVar21 = *(uint **)(uVar18 + 4);
                  (puVar21 != (uint *)0x0 && ((*puVar21 & 0xe000000) == 0));
                  puVar21 = (uint *)puVar21[2]) {
              }
              uVar32 = uVar32 | 0xc0000;
              uStack_150 = (uint)uVar32;
              uVar16 = ((((ulonglong)(*puVar21 >> 0xc) & 0x1fe0) >> 5) - 1 & 0xff) << 8 |
                       uVar16 & 0xffffffffffff00ff;
              goto LAB_82ac2780;
            }
          }
        }
        uVar25 = uVar25 + 1;
        puVar22 = puVar22 + 3;
      } while (uVar25 < *(uint *)(param_1 + 0x218));
    }
    goto LAB_82ac2618;
  }
  uVar25 = 0;
  uVar18 = 0;
  if (*(uint *)(param_1 + 0x150) != 0) {
    puVar21 = (uint *)(param_1 + 0x80);
    uVar25 = 0;
    do {
      uVar19 = (ulonglong)(*puVar21 >> 4);
      if ((uVar19 < 0x10) && (uVar32 >> 0x14 < uVar19)) {
        uVar32 = (uVar19 & 0xf) << 0x14;
      }
      uStack_150 = (uint)uVar32;
      if (uVar19 == 0x3e) {
        uVar25 = 1;
      }
      else if (uVar19 == 0x3f) {
        uVar16 = (ulonglong)*puVar21 & 0xf | uVar16;
      }
      uVar18 = uVar18 + 1;
      puVar21 = puVar21 + 3;
    } while (uVar18 < *(uint *)(param_1 + 0x150));
  }
  switch((uint)(uVar16 << 1) | uVar25) {
  case 0:
    uStack_150 = uStack_150 | 0x7000000;
    if (puVar22 != (uint *)0x0) {
      puVar22[7] = 1;
    }
    break;
  case 1:
    break;
  case 2:
  case 4:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xddb);
  case 3:
    uStack_150 = uStack_150 | 0x2000000;
    break;
  case 5:
    iVar10 = 3;
    goto code_r0x82ac25a4;
  case 7:
  case 0xf:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe33);
  case 9:
    uStack_150 = uStack_150 | 0x4000000;
    break;
  case 0xb:
    iVar10 = 5;
code_r0x82ac25a4:
    uStack_150 = iVar10 << 0x18 | uStack_150;
    break;
  case 0xd:
    uStack_150 = uStack_150 | 0x6000000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar25 = 0;
  if (*(uint *)(param_1 + 0x218) != 0) {
    puVar22 = (uint *)(param_1 + 0x15c);
    do {
      if ((*puVar22 & 0x1f) == 0x12) {
        uStack_150 = uStack_150 | 0x80000000;
      }
      uVar25 = uVar25 + 1;
      puVar22 = puVar22 + 3;
    } while (uVar25 < *(uint *)(param_1 + 0x218));
  }
LAB_82ac2618:
  lVar6 = fn_82ABE1E8(0x10,param_1 + 0x3cc);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    fn_82935220(lVar6,0x42415443);
  }
  *(int *)(param_1 + 0x304) = (int)lVar6;
  auStack_b8[0] = 0;
  uStack_c8 = param_2 << 0x20;
  uStack_c0 = (ulonglong)param_3;
  lVar6 = fn_829352D0(lVar6,auStack_d0,0x1c,1,0,3);
  if (lVar6 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x10);
  uVar32 = 0;
  if (uVar16 != 0) {
    uVar17 = (ulonglong)*(uint *)(param_1 + 0xc);
    lVar6 = 0;
    uVar19 = uVar16;
    do {
      cVar15 = fn_82ABDF08(uVar17 + lVar6);
      if (cVar15 != '\0') {
        uVar32 = uVar32 + 1;
      }
      uVar19 = uVar19 - 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar19 != 0);
  }
  uStack_c8 = CONCAT44((((U64)(uStack_c8) >> 0) & 0xFFFFFFFF),(int)uVar32);
  dVar35 = lbl_82005710;
  if ((uVar32 & 0xffffffff) != 0) {
    lVar6 = (uVar32 & 0x3fffffff) << 2;
    piVar8 = (int *)fn_82ABE9F0(param_1,lVar6,0);
    piVar9 = (int *)0x0;
    iVar10 = 0;
    if (uVar16 != 0) {
      iVar11 = 0;
      lVar30 = 0;
      iVar10 = 0;
      do {
        lVar20 = lVar30 + (ulonglong)*(uint *)(param_1 + 0xc);
        cVar15 = fn_82ABDF08(lVar20);
        if (cVar15 != '\0') {
          puVar22 = (uint *)lVar20;
          *(uint **)(iVar11 + (int)piVar8) = puVar22;
          puVar31 = (undefined4 *)(*(int *)(puVar22[3] + 0x14) + 0x18);
          pcVar2 = *(char **)(*(int *)(puVar22[3] + 0x14) + 0x18);
          if (((*puVar22 & 0x80000000) != 0) && (pcVar24 = pcVar2, *pcVar2 != '$')) {
            do {
              cVar15 = *pcVar24;
              pcVar24 = pcVar24 + 1;
            } while (cVar15 != '\0');
            uVar5 = fn_82ABEA98(param_1,pcVar24 + (1 - (int)pcVar2),0);
            uStack_140 = CONCAT44((int)uVar5,(((U64)(uStack_140) >> 32) & 0xFFFFFFFF));
            fn_82F6DCE0(uVar5,pcVar24 + (1 - (int)pcVar2),0xffffffff8202df98,pcVar2);
            *puVar31 = (((U64)(uStack_140) >> 0) & 0xFFFFFFFF);
            if (piVar9 == (int *)0x0) {
              piVar9 = (int *)fn_82ABE9F0(param_1,lVar6,0);
              iVar10 = fn_82ABE9F0(param_1,lVar6,0);
            }
            *(char **)(iVar11 + (int)piVar9) = pcVar2;
            *(undefined4 **)(iVar11 + iVar10) = puVar31;
          }
          iVar11 = iVar11 + 4;
        }
        uVar16 = uVar16 - 1;
        lVar30 = lVar30 + 0x28;
      } while (uVar16 != 0);
    }
    fn_82F65FE0(piVar8,uVar32,4,0xffffffff82abde10);
    iVar11 = fn_82ABE9F0(param_1,uVar32 * 0x14,0);
    lVar6 = fn_829352D0(*(undefined4 *)(param_1 + 0x304),iVar11,uVar32 * 0x14,1,&uStack_c0,2);
    if (lVar6 < 0) {
      *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdc5);
    }
    if ((uVar32 & 0xffffffff) != 0) {
      puVar29 = (ushort *)(iVar11 + 6);
      dVar36 = (double)lbl_821AAD20;
      dVar37 = (double)lbl_82002AE0;
LAB_82ac2a4c:
      puVar22 = (uint *)*piVar8;
      cVar15 = fn_82ABDF08(puVar22);
      if (cVar15 != '\0') {
        if ((puVar22[4] != 0) && (*(int *)(puVar22[4] + 0x34) != 0)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdac,0xffffffff820d7a5c);
        }
        uVar16 = (ulonglong)(*puVar22 >> 3) & 0x3fff;
        uVar5 = fn_82B462A8(param_1,((int)puVar22 - *(int *)(param_1 + 0xc)) / 0x28);
        lVar6 = fn_829352D0(*(undefined4 *)(param_1 + 0x304),uVar5,0xffffffffffffffff,7,
                                  puVar29 + -3,1);
        if (lVar6 < 0) {
          *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdc5);
        }
        *puVar29 = (ushort)(*puVar22 >> 0x14) & 0x1ff;
        puVar29[1] = (ushort)(puVar22[1] >> 7) & 0x1ff;
        puVar29[-1] = (ushort)(puVar22[1] >> 4) & 7;
        uVar28 = puVar22[1] >> 4 & 7;
        if (uVar28 == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            uVar26 = *puVar29 - 0x80;
            goto LAB_82ac2b54;
          }
        }
        else if (uVar28 == 1) {
          if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            uVar26 = *puVar29 - 0x10;
            goto LAB_82ac2b54;
          }
        }
        else if (2 < uVar28) {
          if (uVar28 != 3) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          sVar14 = fn_82ABDCF8();
          uVar26 = *puVar29 - sVar14;
LAB_82ac2b54:
          *puVar29 = uVar26;
        }
        lVar6 = fn_82958638(*(undefined4 *)(param_1 + 0x304),puVar22[5],1,0,puVar29 + 3);
        if (lVar6 < 0) {
          *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdc5);
        }
        if ((((puVar22[1] & 0x70) != 0x30) && (uVar28 = puVar22[4], uVar28 != 0)) &&
           ((*(int *)(uVar28 + 0x4c) != 0 || (*(int *)(uVar28 + 0x38) != 0)))) {
          uVar19 = (ulonglong)puVar29[1] * 4 + 3;
          uVar17 = uVar19 & 0xfffffffc;
          lVar6 = uVar17 << 2;
          iVar12 = fn_82ABE9F0(param_1,lVar6,0);
          iVar11 = 0;
          uVar23 = ((ulonglong)(*(uint *)((int)(uVar16 << 3) + puVar22[7] + -8) >> 4) & 0x3fff) + 1;
          uVar16 = uVar16 / uVar23;
          trapWord(6,uVar23,0);
          uVar23 = 0;
          if (*(int *)(uVar28 + 0x38) != 0) {
            iVar11 = fn_82B454A0(param_1);
            iVar11 = *(int *)(iVar11 + 0x20);
          }
LAB_82ac2c14:
          uVar33 = uVar23;
          if (*(int *)(uVar28 + 0x38) == 0) {
            if ((ulonglong)*(uint *)(uVar28 + 0x4c) <= (uVar33 & 0xffffffff)) goto LAB_82ac2da0;
            puVar21 = *(uint **)((int)((uVar33 & 0xffffffff) << 2) + *(int *)(uVar28 + 0x50));
          }
          else {
            if (iVar11 == 0) goto LAB_82ac2da0;
            iVar13 = fn_82B45580(param_1,*(undefined4 *)(iVar11 + 8));
            iVar11 = *(int *)(iVar11 + 0xc);
            puVar21 = (uint *)(iVar13 + 0x10);
          }
          if (puVar21 != (uint *)0x0) {
            if (uVar17 <= (uVar33 & 0xffffffff)) goto LAB_82ac2da0;
            uVar25 = puVar22[1] >> 4 & 7;
            if (uVar25 == 0) {
              uVar25 = *puVar21;
              if (((uVar25 == 0) || (uVar25 == 1)) || (uVar25 < 3)) {
LAB_82ac2d68:
                uVar25 = (uint)(puVar21[2] != 0);
              }
              else {
                if (uVar25 != 3) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c1);
                }
                uVar25 = 1;
                if (*(double *)(puVar21 + 2) == dVar35) {
                  uVar25 = 0;
                }
              }
LAB_82ac2d74:
              *(uint *)((int)((uVar33 & 0xffffffff) << 2) + iVar12) = uVar25;
            }
            else if (uVar25 == 1) {
              uVar25 = *puVar21;
              if (uVar25 == 0) goto LAB_82ac2d68;
              if ((uVar25 == 1) || (uVar25 < 3)) {
                uVar25 = puVar21[2];
                goto LAB_82ac2d74;
              }
              if (uVar25 != 3) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c1);
              }
              *(int *)((int)((uVar33 & 0xffffffff) << 2) + iVar12) = (int)*(double *)(puVar21 + 2);
            }
            else {
              if (2 < uVar25) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c1);
              }
              uVar25 = *puVar21;
              if (uVar25 == 0) {
                dVar34 = dVar36;
                if (puVar21[2] != 0) {
                  dVar34 = dVar37;
                }
                *(float *)((int)((uVar33 & 0xffffffff) << 2) + iVar12) = (float)dVar34;
              }
              else {
                if (uVar25 == 1) {
                  uVar23 = (ulonglong)(int)puVar21[2];
                  uStack_130 = uVar23;
LAB_82ac2cc4:
                  dVar34 = (double)(longlong)uVar23;
                }
                else {
                  if (uVar25 < 3) {
                    uVar23 = (ulonglong)puVar21[2];
                    uStack_140 = uVar23;
                    goto LAB_82ac2cc4;
                  }
                  if (uVar25 != 3) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c1);
                  }
                  dVar34 = *(double *)(puVar21 + 2);
                }
                *(float *)((int)((uVar33 & 0xffffffff) << 2) + iVar12) = (float)dVar34;
              }
            }
          }
          uVar23 = uVar33 + 1;
          trapWord(6,uVar16,0);
          if (uVar23 == (longlong)(int)((uVar23 & 0xffffffff) / uVar16) * (longlong)(int)uVar16) {
            uVar23 = uVar33 + 4 & 0xfffffffc;
          }
          goto LAB_82ac2c14;
        }
      }
      goto LAB_82ac2df8;
    }
LAB_82ac2e18:
    if ((piVar9 != (int *)0x0) && ((uVar32 & 0xffffffff) != 0)) {
      iVar10 = iVar10 - (int)piVar9;
      do {
        if (*piVar9 != 0) {
          **(int **)(iVar10 + (int)piVar9) = *piVar9;
        }
        piVar9 = piVar9 + 1;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
    }
  }
  uStack_120 = 0;
  lVar6 = fn_828F0248(param_2,0,auStack_128);
  if (lVar6 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  lVar6 = fn_829352D0(*(undefined4 *)(param_1 + 0x304),0,0xffffffffffffffff,5,auStack_b8,1);
  if (lVar6 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  lVar6 = fn_829352D0(*(undefined4 *)(param_1 + 0x304),0xffffffff820d7a50,0xffffffffffffffff,5
                            ,auStack_cc,1);
  if (lVar6 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  uVar32 = fn_82935240(*(undefined4 *)(param_1 + 0x304));
  if (0x8000 < (uVar32 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x11c4);
  }
  lVar6 = fn_82ABE9F0(param_1,(uVar32 & 0x3fffffff) << 2,0);
  lVar30 = fn_829354C0(*(undefined4 *)(param_1 + 0x304),lVar6,uVar32,0);
  if (lVar30 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar30;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  lVar30 = (uVar32 - 2 & 0x3fffffff) << 2;
  fn_82635CC8(*(undefined4 *)(param_1 + 0x300),lVar6 + 8,lVar30);
  if (uVar28 != 0) {
    fn_82A9C188(uVar28,lVar6 + 8,lVar30);
  }
  if ((*(uint *)(param_1 + 0x28) & 0x1000000) == 0) {
LAB_82ac31bc:
    uStack_e8 = *(undefined4 *)(param_1 + 0x2e0);
    puStack_f0 = &uStack_150;
    uStack_e4 = *(undefined4 *)(param_1 + 0x2f8);
    puStack_ec = &uStack_148;
    uStack_e0 = uVar28;
    uVar5 = fn_82ABFAD0(param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                  *(uint *)(param_1 + 4),0,&puStack_f0);
    if (uVar28 != 0) {
      fn_82A9EDA0(uVar28,auStack_118);
      fn_82635A90(*(undefined4 *)(param_1 + 0x300),auStack_118);
    }
    if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) ||
       (bVar4 = true, (*(uint *)(param_1 + 0x2c) & 0x20) != 0)) {
      bVar4 = false;
    }
    if (bVar4) {
      fn_82ABFAD0(param_1,uVar5,1,&puStack_f0);
    }
    if (uVar28 != 0) {
      fn_82635F08(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(*(int *)(param_1 + 0x38) + 4)
                      ,*(undefined4 *)(*(int *)(param_1 + 0x38) + 8));
      fn_82A9EDA0(uVar28,auStack_108);
      fn_82635A90(*(undefined4 *)(param_1 + 0x300),auStack_108);
    }
    fn_826361D8(*(undefined4 *)(param_1 + 0x300));
    if (uVar28 != 0) {
      lVar6 = fn_82635FE8(*(undefined4 *)(param_1 + 0x300));
      fn_82A9A238(uVar28,(lVar6 + 1U & 0xffffffff) >> 1);
    }
    uVar5 = fn_82636230(*(undefined4 *)(param_1 + 0x300));
    lVar6 = fn_828F9A60(uVar5,&piStack_14c);
    if (-1 < lVar6) {
      uVar5 = (**(code **)(*piStack_14c + 0x10))();
      uVar7 = (**(code **)(*piStack_14c + 0xc))(piStack_14c);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar7,0,uVar5);
    }
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
  for (uVar25 = *(uint *)(param_1 + 4); ((uVar25 & 1) == 0 && (uVar25 != 0));
      uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4)) {
    for (uVar18 = *(uint *)(uVar25 + 0x1c); ((uVar18 & 1) == 0 && (uVar18 != 0));
        uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28)) {
      uVar1 = *(uint *)(uVar18 + 8) >> 7 & 0x7f;
      if (((uVar1 < 0x19) || (0x1c < uVar1)) && ((uVar1 < 0x43 || (0x47 < uVar1)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((uVar1 == 0x1a) &&
           (cVar15 = fn_82ABF768(dVar35,*(undefined4 *)(uVar18 + 0x2c)), cVar15 != '\0')) {
          uVar1 = *(uint *)(*(int *)(*(int *)(uVar18 + 0x30) + 0xc) + 8) >> 7 & 0x7f;
          if ((uVar1 == 0x7d) || (bVar4 = false, uVar1 == 0x7c)) {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_82ac310c;
        }
        if ((*(uint *)(uVar18 + 8) & 0x3f80) == 0x2200) {
          uVar1 = *(uint *)(*(int *)(*(int *)(uVar18 + 0x2c) + 0xc) + 8) >> 7 & 0x7f;
          if ((uVar1 == 0x7d) || (bVar4 = false, uVar1 == 0x7c)) {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_82ac310c;
        }
        *(uint *)(uVar25 + 0x44) = *(uint *)(uVar25 + 0x44) | 0x10000000;
      }
LAB_82ac310c:;}
  }
LAB_82ac3144:
  bVar4 = false;
  uVar25 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
LAB_82ac319c:
  do {
    uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
    if (((uVar25 & 1) != 0) || (uVar25 == 0)) goto LAB_82ac31b4;
    if ((*(uint *)(uVar25 + 0x44) & 0x10000000) == 0) {
      for (iVar10 = *(int *)(uVar25 + 8); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
        if ((*(uint *)(*(int *)(iVar10 + 4) + 0x44) & 0x10000000) == 0) goto LAB_82ac319c;
      }
      bVar4 = true;
      *(uint *)(uVar25 + 0x44) = *(uint *)(uVar25 + 0x44) | 0x10000000;
    }
  } while( true );
LAB_82ac2da0:
  if ((puVar22[1] & 0x70) == 0x10) {
    uVar19 = uVar19 >> 2;
    uVar16 = 0;
    if (uVar19 != 0) {
      puVar31 = (undefined4 *)(iVar12 + -8);
      do {
        uVar16 = uVar16 + 1;
        puVar31 = puVar31 + 4;
        *puVar31 = 1;
      } while ((uVar16 & 0xffffffff) < uVar19);
    }
  }
  lVar6 = fn_829352D0(*(undefined4 *)(param_1 + 0x304),iVar12,lVar6,3,puVar29 + 5,0);
  if (lVar6 < 0) {
    *(int *)(param_1 + 0x9b0) = (int)lVar6;
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdc5);
  }
LAB_82ac2df8:
  uVar27 = uVar27 + 1;
  piVar8 = piVar8 + 1;
  puVar29 = puVar29 + 10;
  if ((uVar32 & 0xffffffff) <= (uVar27 & 0xffffffff)) goto code_r0x82ac2e0c;
  goto LAB_82ac2a4c;
code_r0x82ac2e0c:
  param_2 = (ulonglong)uStack0000001c;
  uVar28 = uStack_144;
  goto LAB_82ac2e18;
LAB_82ac31b4:
  if (!bVar4) goto LAB_82ac31bc;
  goto LAB_82ac3144;
}


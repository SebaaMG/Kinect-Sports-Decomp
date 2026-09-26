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
extern unsigned int *auStack_60;
extern int fn_8225F160();
extern int fn_82292AE8();
extern int fn_822A1CA8();
extern int fn_82460540();
extern int fn_82466358();
extern int fn_82466A20();
extern int fn_82467D80();
extern int fn_824695C0();
extern int fn_824696D0();
extern int fn_8246B698();
extern int fn_8246DC40();
extern int fn_8246FA68();
extern int fn_82472D48();
extern int fn_82512B08();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821BC740;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D12D4;
extern unsigned int lbl_831D1318;
extern unsigned int uStack_50;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


/* WARNING: Removing unreachable block (ram,0x82460aec) */

void fn_82460610(int param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined **ppuStack_80;
  code *pcStack_7c;
  undefined ***pppuStack_70;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  
  fVar5 = lbl_821CC160;
  iVar9 = *(int *)(param_1 + 0x54);
  if ((int)param_2 != iVar9) {
    uVar19 = 0x10;
    dVar18 = (double)lbl_821CC160;
    if (iVar9 == 5) {
      lbl_831D12D4 = 1;
      if (*(int *)(param_1 + 0xc4) == 0) {
        uVar8 = fn_82512B08(0,1);
        *(undefined4 *)(param_1 + 0xc4) = uVar8;
      }
    }
    else if (iVar9 == 6) {
      iVar9 = 0;
      iVar15 = 0x10;
      do {
        if (*(int *)(iVar15 + *(int *)(param_1 + 0x28)) == 0) goto LAB_824606d4;
        iVar15 = iVar15 + 4;
        iVar9 = iVar9 + 1;
      } while (iVar15 < 0x18);
      iVar9 = -1;
LAB_824606d4:
      iVar15 = 0;
      iVar16 = 0x10;
      do {
        if (*(int *)(iVar16 + *(int *)(param_1 + 0x28)) == 1) goto LAB_824606fc;
        iVar16 = iVar16 + 4;
        iVar15 = iVar15 + 1;
      } while (iVar16 < 0x18);
      iVar15 = -1;
LAB_824606fc:
      *(float *)(iVar9 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) = lbl_821CC160;
      *(float *)(iVar15 * 0x11c + *(int *)(param_1 + 0x3c) + 0x114) = fVar5;
      fn_824696D0((double)*(float *)(*(int *)(param_1 + 0x3c) + 0x114),
                        (double)*(float *)(*(int *)(param_1 + 0x3c) + 0x230),
                        *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x3fc));
      lVar17 = 2;
      piVar11 = (int *)(*(int *)(param_1 + 0x50) + 0x38);
      do {
        if (piVar11[-1] != 0) {
          *(undefined4 *)(piVar11[-1] + 0x88) = 1;
        }
        if (*piVar11 != 0) {
          *(undefined4 *)(*piVar11 + 0x88) = 1;
        }
        piVar11 = piVar11 + 0x10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    else if (iVar9 == 9) {
      lVar17 = 2;
      piVar11 = (int *)(*(int *)(param_1 + 0x50) + 0x38);
      do {
        if (piVar11[-1] != 0) {
          *(undefined4 *)(piVar11[-1] + 0x88) = 1;
        }
        if (*piVar11 != 0) {
          *(undefined4 *)(*piVar11 + 0x88) = 1;
        }
        piVar11 = piVar11 + 0x10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    *(int *)(param_1 + 0x54) = (int)param_2;
    if ((param_2 - 1U & 0xffffffff) < 9) {
      if ((int)(param_2 - 1U) == 0) {
        iVar9 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(iVar9 + 0x70) = 0;
        *(undefined4 *)(iVar9 + 4) = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x74) = 2;
        *(undefined4 *)(iVar9 + 0x7c) = 0x12;
        *(undefined4 *)(iVar9 + 500) = 0;
        fn_82467D80(iVar9 + 0x50);
        fn_82467D80(iVar9 + 0x60);
        fn_82466A20(dVar18,dVar18,iVar9);
        iVar9 = *(int *)(param_1 + 0x38);
        *(float *)(iVar9 + 0x38) = (float)dVar18;
        *(float *)(iVar9 + 0x60) = (float)dVar18;
        fn_824695C0(*(undefined4 *)(iVar9 + 0x3fc),0,0);
        iVar9 = *(int *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(iVar9 + 0x464) = *(undefined4 *)(param_1 + 100);
        fn_8246DC40(iVar9,3);
        *(undefined4 *)(param_1 + 100) = 0;
      }
      else {
        if (param_2 == 2) {
          iVar9 = *(int *)(param_1 + 0x38);
          uVar10 = 1;
          *(float *)(iVar9 + 0x38) = (float)dVar18;
          *(float *)(iVar9 + 0x60) = (float)dVar18;
        }
        else {
          if (param_2 == 3) {
            uVar10 = 0;
          }
          else {
            if (param_2 == 4) {
              iVar9 = *(int *)(param_1 + 0x38);
              iVar15 = **(int **)(param_1 + 0x34);
              iVar16 = (*(int **)(param_1 + 0x34))[1];
              *(uint *)(iVar9 + 0x6c) = (uint)(iVar16 == 0);
              *(uint *)(iVar9 + 0x70) = (uint)LZCOUNT((iVar15 + -1) - iVar16) >> 5;
              fn_8246DC40(iVar9,4);
              iVar9 = *(int *)(param_1 + 0x4c);
              uVar19 = (*(undefined4 **)(param_1 + 0x34))[1];
              *(undefined4 *)(iVar9 + 0xf78) = **(undefined4 **)(param_1 + 0x34);
              *(undefined4 *)(iVar9 + 0xf74) = uVar19;
              uVar19 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x20);
              iVar9 = *(int *)(param_1 + 0x4c);
              *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c);
              *(undefined4 *)(iVar9 + 8) = uVar19;
              fn_82472D48(iVar9,0);
              lVar17 = 2;
              piVar11 = (int *)(*(int *)(param_1 + 0x50) + 0x34);
              do {
                iVar9 = *piVar11;
                if (iVar9 != 0) {
                  puVar13 = (undefined4 *)((uint)(piVar11 + -9) & 0xfffffff0);
                  uVar19 = *puVar13;
                  uVar8 = puVar13[1];
                  uVar20 = puVar13[2];
                  uVar21 = puVar13[3];
                  *(undefined4 *)(iVar9 + 0x30) = 0;
                  *(float *)(iVar9 + 0x20) = (float)dVar18;
                  puVar13 = (undefined4 *)(iVar9 + 0x10U & 0xfffffff0);
                  *puVar13 = uVar19;
                  puVar13[1] = uVar8;
                  puVar13[2] = uVar20;
                  puVar13[3] = uVar21;
                }
                piVar11 = piVar11 + 0x10;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              *(float *)(param_1 + 0x58) = (float)dVar18;
              *(undefined4 *)(param_1 + 0x90) = 0;
              *(float *)(param_1 + 0x5c) = (float)dVar18;
              return;
            }
            if (param_2 == 5) {
              iVar9 = fn_82292AE8();
              lbl_831D1318 = ((((U64)(lbl_831D1318)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(-(uint)(*(int *)(iVar9 + 0x24) != 0) & 2)) & ((U64)0xFFFFFFFF)) << 0));
              *(undefined4 *)(param_1 + 0x60) = 0;
              if (*(int *)(*(int *)(param_1 + 0x38) + 0xc) != 5) {
                fn_8246DC40(*(int *)(param_1 + 0x38),5);
              }
              if (*(int *)(param_1 + 0x28) != 0) {
                uStack_50 = 0;
                pcStack_7c = fn_8246FA68;
                pppuStack_70 = &ppuStack_80;
                ppuStack_80 = &lbl_821BC740;
                fn_822A1CA8(&ppuStack_80,auStack_60);
                fn_82466358(*(undefined4 *)(param_1 + 0x28));
              }
              *(undefined4 *)(param_1 + 0xa8) = 0;
              puVar13 = (undefined4 *)(param_1 + 0x60);
              lVar17 = 2;
              do {
                puVar13 = puVar13 + 4;
                *puVar13 = 0;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              return;
            }
            if (param_2 == 6) {
              uVar10 = fn_8266EC60();
              fn_8266C6D8(uVar10,0x40,0);
              uVar10 = fn_8266EC60();
              fn_8266C708(uVar10,0x40,0);
              iVar9 = *(int *)(param_1 + 0x3c);
              iVar15 = *(int *)(param_1 + 0x38);
              iVar16 = **(int **)(param_1 + 0x34);
              uVar19 = *(undefined4 *)(iVar9 + 0x120);
              uVar8 = *(undefined4 *)(iVar9 + 4);
              uVar20 = *(undefined4 *)(iVar9 + 0x234);
              uVar21 = *(undefined4 *)(iVar9 + 0x118);
              uVar2 = *(undefined4 *)(iVar9 + 0x22c);
              uVar3 = *(undefined4 *)(iVar9 + 0x110);
              uVar4 = *(undefined4 *)(iVar9 + 0x230);
              iVar7 = (*(int **)(param_1 + 0x34))[1];
              *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(iVar9 + 0x114);
              *(undefined4 *)(iVar15 + 0x20) = uVar3;
              *(undefined4 *)(iVar15 + 0x24) = uVar21;
              *(undefined4 *)(iVar15 + 0x2c) = uVar8;
              *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(iVar15 + 0x38);
              *(undefined4 *)(iVar15 + 0x44) = uVar4;
              *(undefined4 *)(iVar15 + 0x48) = uVar2;
              *(undefined4 *)(iVar15 + 0x4c) = uVar20;
              *(undefined4 *)(iVar15 + 0x54) = uVar19;
              *(uint *)(iVar15 + 0x70) = (uint)LZCOUNT((iVar16 + -1) - iVar7) >> 5;
              *(undefined4 *)(iVar15 + 0x50) = *(undefined4 *)(iVar15 + 0x60);
              fn_8246DC40(iVar15,6);
              lVar17 = 2;
              piVar11 = (int *)(*(int *)(param_1 + 0x50) + 0x38);
              do {
                if (piVar11[-1] != 0) {
                  *(undefined4 *)(piVar11[-1] + 0x88) = 0;
                }
                if (*piVar11 != 0) {
                  *(undefined4 *)(*piVar11 + 0x88) = 0;
                }
                piVar11 = piVar11 + 0x10;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              fn_8246B698((double)lbl_82193CC0,*(undefined4 *)(param_1 + 0x50));
              if ((*(uint **)(param_1 + 0x34))[1] + 1 < **(uint **)(param_1 + 0x34)) {
                fn_82466A20((double)*(float *)(*(int *)(param_1 + 0x3c) + 4),
                                  (double)*(float *)(*(int *)(param_1 + 0x3c) + 0x120));
                uVar12 = 0;
                uVar1 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x11c;
                if (uVar1 != 0) {
                  do {
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar1);
                }
                *(int *)(*(int *)(param_1 + 200) + 0x548) =
                     *(int *)(*(int *)(param_1 + 200) + 0x548) + 1;
                fn_82460540(param_1);
              }
              else {
                *(undefined4 *)(param_1 + 0x2c) = 1;
              }
              *(undefined4 *)(param_1 + 0xa4) = 1;
              return;
            }
            if (param_2 == 7) {
              uVar10 = 7;
            }
            else {
              if (param_2 != 8) {
                lVar17 = 2;
                piVar11 = (int *)(*(int *)(param_1 + 0x50) + 0x38);
                do {
                  if (piVar11[-1] != 0) {
                    *(undefined4 *)(piVar11[-1] + 0x88) = 0;
                  }
                  if (*piVar11 != 0) {
                    *(undefined4 *)(*piVar11 + 0x88) = 0;
                  }
                  piVar11 = piVar11 + 0x10;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                fVar5 = *(float *)(*(int *)(param_1 + 0x3c) + 0x120);
                fVar6 = *(float *)(*(int *)(param_1 + 0x3c) + 4);
                if ((fVar6 < fVar5 - lbl_821917D4) || (fVar5 + lbl_821917D4 < fVar6)) {
                  iVar9 = *(int *)(param_1 + 0x38);
                  *(float *)(iVar9 + 0x78) = (float)dVar18;
                  *(uint *)(iVar9 + 0x88) = (uint)(fVar6 <= fVar5);
                  fn_8246DC40(iVar9,8);
                  iVar9 = *(int *)(param_1 + 0x3c);
                  uStack_84 = (undefined4)(longlong)*(float *)(iVar9 + 4);
                  uStack_8c = uStack_84;
                  if (fVar6 <= fVar5 == 0) {
                    uVar19 = 0xe;
                    uStack_8c = (undefined4)(longlong)*(float *)(iVar9 + 0x120);
                  }
                  else {
                    uVar19 = 0xf;
                    uStack_84 = (undefined4)(longlong)*(float *)(iVar9 + 0x120);
                  }
                }
                else {
                  iVar9 = *(int *)(param_1 + 0x38);
                  *(float *)(iVar9 + 0x78) = (float)dVar18;
                  *(undefined4 *)(iVar9 + 0x88) = 2;
                  fn_8246DC40(iVar9,8);
                  uStack_8c = (undefined4)(longlong)*(float *)(*(int *)(param_1 + 0x3c) + 4);
                  uStack_84 = uStack_8c;
                }
                iVar9 = fn_8225F160();
                *(undefined4 *)(iVar9 + 0x1c) = uVar19;
                *(undefined4 *)(iVar9 + 0x18) = 6;
                pfVar14 = (float *)(param_1 + 0x68);
                lVar17 = 2;
                *(undefined4 *)(iVar9 + 0x28) = 4;
                *(undefined4 *)(iVar9 + 0x20) = uStack_84;
                *(undefined4 *)(iVar9 + 0x24) = uStack_8c;
                do {
                  pfVar14[3] = (float)dVar18;
                  pfVar14 = pfVar14 + 4;
                  *pfVar14 = (float)dVar18;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                return;
              }
              uVar10 = 0xc;
            }
          }
          iVar9 = *(int *)(param_1 + 0x38);
        }
        fn_8246DC40(iVar9,uVar10);
      }
    }
  }
  return;
}


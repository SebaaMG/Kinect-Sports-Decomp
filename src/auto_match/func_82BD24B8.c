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
extern int fn_82B7BD28();
extern int fn_82B7C438();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern int fn_82BC4210();
extern int fn_82BC4268();
extern int fn_82BC42C0();
extern int fn_82BC4318();
extern int fn_82BC55C8();
extern int fn_82BC5628();
extern int fn_82BD1EE0();
extern int fn_82BD2050();
extern int fn_82BD2228();


void fn_82BD24B8(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  bool bVar18;
  int *piVar17;
  undefined4 *puVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  
  uVar3 = fn_82BD1EE0(param_2,param_3,param_4);
  uVar1 = *(undefined4 *)(param_4 + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar19 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar19 == (undefined4 *)0x0) {
    puVar19 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar19,*(undefined4 *)(param_4 + 0x5b0));
  }
  *(undefined4 **)(param_1 + 0x60) = puVar19;
  fn_82BD2228(uVar3,param_1,param_2,param_3,param_4);
  fn_82BD2050(param_1);
  iVar5 = fn_82B7C438(param_4,(param_2 & 0x1fffffff) << 3);
  iVar10 = 0;
  if (0 < (int)param_2) {
    puVar4 = (undefined4 *)(iVar5 + -4);
    do {
      puVar4[1] = iVar10;
      iVar10 = iVar10 + 1;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  lVar15 = -1;
  uVar14 = 0;
  if (*(int *)(*(int *)(param_1 + 0x60) + 4) != 0) {
    iVar10 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x60);
      if ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4)) {
        piVar6 = (int *)(*(int *)(iVar2 + 8) + iVar10);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar2,uVar14);
      }
      piVar6 = (int *)*piVar6;
      bVar18 = true;
      uVar21 = 0;
      iVar9 = piVar6[1];
      iVar2 = *piVar6;
      uVar11 = 0;
      if (*(int *)(iVar9 + 4) != 0) {
        iVar20 = 0;
        do {
          if ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
            piVar7 = (int *)(*(int *)(iVar9 + 8) + iVar20);
          }
          else {
            piVar7 = (int *)fn_82BC0088(iVar9,uVar21);
          }
          iVar9 = 0;
          if (0 < iVar2) {
            puVar4 = (undefined4 *)(*piVar7 * 8 + iVar5 + -4);
            do {
              if (puVar4[2] != 0) {
                bVar18 = false;
                break;
              }
              iVar9 = iVar9 + 1;
              puVar4 = puVar4 + 2;
              *puVar4 = 1;
            } while (iVar9 < iVar2);
          }
          iVar9 = piVar6[1];
          uVar21 = uVar21 + 1;
          iVar20 = iVar20 + 4;
          uVar11 = *(uint *)(iVar9 + 4);
        } while ((uVar21 & 0xffffffff) < (ulonglong)uVar11);
      }
      if (bVar18) {
        lVar15 = lVar15 + 1;
        uVar21 = 0;
        if (uVar11 != 0) {
          iVar20 = 0;
          do {
            if ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
              piVar7 = (int *)(*(int *)(iVar9 + 8) + iVar20);
            }
            else {
              piVar7 = (int *)fn_82BC0088(iVar9,uVar21);
            }
            iVar9 = *piVar7;
            iVar16 = 0;
            if (0 < iVar2) {
              do {
                if (iVar16 == 0) {
                  piVar12 = (int *)(iVar9 * 8 + *(int *)(param_1 + 0x34));
                  piVar7 = (int *)*piVar12;
                  piVar12 = (int *)piVar12[1];
                  piVar22 = piVar12;
                  if (((piVar7 != (int *)0x0) && (piVar22 = piVar7, piVar12 != (int *)0x0)) &&
                     (piVar22 = piVar12, piVar12 != piVar7)) {
                    piVar17 = (int *)piVar7[2];
                    do {
                      piVar22 = piVar7;
                      if (piVar17 == piVar12) break;
                      piVar17 = (int *)piVar17[2];
                      cVar8 = (**(code **)(*piVar17 + 0x28))(piVar17);
                      piVar22 = piVar12;
                    } while (cVar8 == '\0');
                  }
                  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
                  if ((uVar21 & 0xffffffff) == (ulonglong)(*(int *)(piVar6[1] + 4) - 1)) {
                    puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
                    *puVar4 = uVar1;
                    if (puVar4 + 1 == (undefined4 *)0x0) {
LAB_82bd27fc:
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = fn_82BC4268(puVar4 + 1,lVar15,iVar2,param_4);
                    }
                  }
                  else {
                    puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
                    *puVar4 = uVar1;
                    if (puVar4 + 1 == (undefined4 *)0x0) goto LAB_82bd27fc;
                    uVar3 = fn_82BC4210(puVar4 + 1,lVar15,iVar2,param_4);
                  }
                  fn_82BC5628(piVar22[0xed],piVar22,uVar3);
                }
                if (iVar16 == iVar2 + -1) {
                  piVar12 = (int *)((iVar16 + iVar9) * 8 + *(int *)(param_1 + 0x34));
                  piVar7 = (int *)*piVar12;
                  piVar12 = (int *)piVar12[1];
                  piVar22 = piVar12;
                  if (((piVar7 != (int *)0x0) && (piVar22 = piVar7, piVar12 != (int *)0x0)) &&
                     (piVar22 = piVar12, piVar12 != piVar7)) {
                    piVar17 = (int *)piVar12[1];
                    do {
                      piVar22 = piVar12;
                      if (piVar17 == piVar7) break;
                      piVar17 = (int *)piVar17[1];
                      cVar8 = (**(code **)(*piVar17 + 0x24))(piVar17);
                      piVar22 = piVar7;
                    } while (cVar8 == '\0');
                  }
                  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
                  if ((uVar21 & 0xffffffff) == (ulonglong)(*(int *)(piVar6[1] + 4) - 1)) {
                    puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
                    *puVar4 = uVar1;
                    if (puVar4 + 1 == (undefined4 *)0x0) {
LAB_82bd28dc:
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = fn_82BC4318(puVar4 + 1,param_4);
                    }
                  }
                  else {
                    puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x3c4);
                    *puVar4 = uVar1;
                    if (puVar4 + 1 == (undefined4 *)0x0) goto LAB_82bd28dc;
                    uVar3 = fn_82BC42C0(puVar4 + 1,param_4);
                  }
                  fn_82BC55C8(piVar22[0xed],piVar22,uVar3);
                }
                iVar13 = iVar16 + iVar9;
                iVar16 = iVar16 + 1;
                *(uint *)(iVar13 * 8 + iVar5 + 4) =
                     ((uint)LZCOUNT((*(int *)(piVar6[1] + 4) + -1) - (int)uVar21) >> 5 ^ 1) + 2;
              } while (iVar16 < iVar2);
            }
            iVar9 = piVar6[1];
            uVar21 = uVar21 + 1;
            iVar20 = iVar20 + 4;
          } while ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4));
        }
      }
      else {
        uVar21 = 0;
        if (uVar11 != 0) {
          iVar20 = 0;
          do {
            if ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
              piVar7 = (int *)(*(int *)(iVar9 + 8) + iVar20);
            }
            else {
              piVar7 = (int *)fn_82BC0088(iVar9,uVar21);
            }
            iVar9 = 0;
            if (0 < iVar2) {
              puVar4 = (undefined4 *)(*piVar7 * 8 + iVar5 + -4);
              do {
                if (puVar4[2] != 1) break;
                iVar9 = iVar9 + 1;
                puVar4 = puVar4 + 2;
                *puVar4 = 0;
              } while (iVar9 < iVar2);
            }
            iVar9 = piVar6[1];
            uVar21 = uVar21 + 1;
            iVar20 = iVar20 + 4;
          } while ((uVar21 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4));
        }
      }
      uVar14 = uVar14 + 1;
      iVar10 = iVar10 + 4;
    } while ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 4));
  }
  *(int *)(param_4 + 0x5fc) = (int)lVar15 + 1;
  fn_82BA02A8(param_4,0xffffffff820e832c);
  (**(code **)(param_4 + 0x59c))(*(undefined4 *)(param_4 + 0x5a4),iVar5);
  return;
}


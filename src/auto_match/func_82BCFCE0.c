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
extern int fn_82BA0450();
extern int fn_82BA0FD8();
extern int fn_82BA3FB0();
extern int fn_82BA4058();
extern int fn_82BBFE28();
extern int fn_82BC2FA8();
extern int fn_82BCF9F0();
extern unsigned int lbl_820E7F9C;


void fn_82BCFCE0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  byte bVar19;
  longlong lVar20;
  int *piVar21;
  
  uVar4 = fn_82BA0FD8(0x400,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  piVar5 = (int *)fn_82BA3FB0(param_1);
  iVar16 = param_1 + 0x80;
  iVar17 = 1;
  iVar6 = fn_82BBFE28(iVar16);
  if (0 < iVar6) {
    do {
      piVar5 = piVar5 + 1;
      iVar6 = *piVar5;
      uVar4 = fn_82BA0FD8(param_2,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      *(undefined4 *)(iVar6 + 0x68) = uVar4;
      uVar4 = fn_82BA0FD8(param_2,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      *(undefined4 *)(iVar6 + 100) = uVar4;
      iVar7 = fn_82BA0FD8(param_2,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      piVar1 = *(int **)(iVar6 + 0x1c);
      iVar2 = *(int *)(iVar6 + 100);
      uVar14 = 1;
      *(int *)(iVar6 + 0x6c) = iVar7;
      for (; piVar1[2] != 0; piVar1 = (int *)piVar1[2]) {
        if ((uVar14 != 0) && (iVar6 = (**(code **)(*piVar1 + 0x2c))(piVar1), iVar6 == 0)) {
          uVar14 = 0;
          piVar21 = piVar1;
          do {
            if (uVar14 != 0) break;
            if ((piVar21[0x39] & 1U) != 0) {
              lVar20 = 1;
              if (0 < piVar21[5]) {
                piVar18 = piVar21 + 0x3b;
                do {
                  iVar6 = *piVar18;
                  if (((*(int *)(iVar6 + 0x10) == 0) || ((*(uint *)(iVar6 + 0xe4) >> 1 & 1) != 0))
                     || (bVar11 = true, (&lbl_820E7F9C)[*(int *)(iVar6 + 0x50) * 0xc] == '\0')) {
                    bVar11 = false;
                  }
                  if ((bVar11) && (cVar9 = fn_82BC2FA8(piVar21,lVar20,piVar1), cVar9 == '\0'))
                  {
                    uVar15 = *(uint *)(iVar6 + 0x38) & 0x1f;
                    iVar6 = ((*(uint *)(iVar6 + 0x38) >> 5) + 2) * 4;
                    if ((*(uint *)(iVar6 + iVar7) >> uVar15 & 1) == 0) {
                      *(uint *)(iVar6 + iVar2) = 1 << uVar15 | *(uint *)(iVar6 + iVar2);
                    }
                  }
                  lVar20 = lVar20 + 1;
                  piVar18 = piVar18 + 1;
                } while ((int)lVar20 <= piVar21[5]);
              }
              if (((uint)piVar21[0x39] >> 9 & 1) != 0) {
                iVar8 = fn_82BA0450(piVar21);
                iVar6 = *(int *)(param_1 + 0xb4);
                uVar15 = *(uint *)(iVar8 + 0x38) & 0x1f;
                iVar8 = ((*(uint *)(iVar8 + 0x38) >> 5) + 2) * 4;
                if ((*(uint *)(iVar6 + iVar8) >> uVar15 & 1) == 0) {
                  *(uint *)(iVar8 + iVar6) = 1 << uVar15 | *(uint *)(iVar8 + iVar6);
                }
              }
            }
            puVar3 = (uint *)(piVar21 + 0x39);
            piVar21 = (int *)piVar21[2];
            uVar14 = (~(ulonglong)*puVar3 & 0xffffffff) >> 2 & 1;
          } while (piVar21 != (int *)0x0);
          uVar14 = 0;
          piVar21 = piVar1;
          do {
            if (uVar14 != 0) break;
            if ((piVar21[0x39] & 1U) != 0) {
              if (((piVar21[4] == 0) || (((uint)piVar21[0x39] >> 1 & 1) != 0)) ||
                 (bVar11 = true, (&lbl_820E7F9C)[piVar21[0x14] * 0xc] == '\0')) {
                bVar11 = false;
              }
              if (bVar11) {
                iVar6 = (((uint)piVar21[0xe] >> 5) + 2) * 4;
                *(uint *)(iVar6 + iVar7) = 1 << (piVar21[0xe] & 0x1fU) | *(uint *)(iVar6 + iVar7);
              }
            }
            puVar3 = (uint *)(piVar21 + 0x39);
            piVar21 = (int *)piVar21[2];
            uVar14 = (~(ulonglong)*puVar3 & 0xffffffff) >> 2 & 1;
          } while (piVar21 != (int *)0x0);
        }
        uVar14 = (~(ulonglong)(uint)piVar1[0x39] & 0xffffffff) >> 2 & 1;
      }
      iVar17 = iVar17 + 1;
      iVar6 = fn_82BBFE28(iVar16);
    } while (iVar17 <= iVar6);
  }
  piVar5 = (int *)fn_82BA4058(param_1);
  do {
    bVar19 = 0;
    iVar17 = 1;
    iVar6 = fn_82BBFE28(iVar16);
    piVar1 = piVar5;
    if (0 < iVar6) {
      do {
        piVar21 = (int *)piVar1[1];
        cVar9 = (**(code **)(*piVar21 + 8))(piVar21);
        if (cVar9 == '\0') {
          puVar3 = (uint *)piVar21[0x1a];
          uVar15 = 0;
          if (*puVar3 != 0) {
            puVar13 = puVar3 + 1;
            do {
              uVar15 = uVar15 + 1;
              puVar13 = puVar13 + 1;
              *puVar13 = 0;
            } while (uVar15 < *puVar3);
          }
          bVar11 = true;
          iVar6 = 0;
          for (uVar15 = 1; uVar15 <= *(uint *)(piVar21[0xe] + 4); uVar15 = uVar15 + 1) {
            iVar2 = *(int *)(*(int *)(*(int *)(piVar21[0xe] + 8) + iVar6) + 100);
            uVar12 = 0;
            if (bVar11) {
              puVar3 = (uint *)piVar21[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar12 = uVar12 + 1;
                  *puVar13 = *(uint *)((iVar2 - (int)puVar3) + (int)puVar13);
                  puVar13 = puVar13 + 1;
                } while (uVar12 < *puVar3);
              }
              bVar11 = false;
            }
            else {
              puVar3 = (uint *)piVar21[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar12 = uVar12 + 1;
                  *puVar13 = *(uint *)((iVar2 - (int)puVar3) + (int)puVar13) | *puVar13;
                  puVar13 = puVar13 + 1;
                } while (uVar12 < *puVar3);
              }
            }
            iVar6 = iVar6 + 4;
          }
          bVar10 = fn_82BCF9F0(piVar21[0x1a],piVar21[0x19],piVar21[0x1b]);
          bVar19 = bVar10 | bVar19;
        }
        iVar17 = iVar17 + 1;
        iVar6 = fn_82BBFE28(iVar16);
        piVar1 = piVar1 + 1;
      } while (iVar17 <= iVar6);
    }
  } while (bVar19 != 0);
  return;
}


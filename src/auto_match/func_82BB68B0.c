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
extern int fn_82BA0FD8();
extern int fn_82BA4058();
extern int fn_82BBFE28();


void fn_82BB68B0(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  
  iVar10 = *(int *)(param_1[1] + 0x88);
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1[1] + 0xc) + 0x550) + 4);
  iVar18 = *(int *)(iVar10 + 8);
  while (iVar18 != 0) {
    uVar7 = fn_82BA0FD8(uVar2,*(undefined4 *)(*param_1 + 0x5b0));
    *(undefined4 *)(iVar10 + 0x68) = uVar7;
    uVar7 = fn_82BA0FD8(uVar2,*(undefined4 *)(*param_1 + 0x5b0));
    piVar9 = *(int **)(iVar10 + 0x1c);
    *(undefined4 *)(iVar10 + 100) = uVar7;
    for (; piVar9[2] != 0; piVar9 = (int *)piVar9[2]) {
      if (((piVar9[0x39] & 1U) != 0) && (iVar18 = 1, 0 < piVar9[5])) {
        iVar19 = 0;
        piVar17 = piVar9 + 0x3b;
        do {
          iVar4 = *piVar17;
          if ((*(uint *)(iVar4 + 0xe4) >> 6 & 1) != 0) {
            iVar8 = (**(code **)(*piVar9 + 0x2c))(piVar9);
            if (iVar8 == 0) {
              iVar8 = *(int *)(iVar10 + 100);
              iVar15 = ((*(uint *)(iVar4 + 0x38) >> 5) + 2) * 4;
              uVar12 = 1 << (*(uint *)(iVar4 + 0x38) & 0x1f) | *(uint *)(iVar15 + iVar8);
            }
            else {
              if (iVar18 - 1U < *(uint *)(*(int *)(iVar10 + 0x3c) + 4)) {
                piVar16 = (int *)(*(int *)(*(int *)(iVar10 + 0x3c) + 8) + iVar19);
              }
              else {
                piVar16 = (int *)0x0;
              }
              iVar8 = *(int *)(*piVar16 + 100);
              iVar15 = ((*(uint *)(iVar4 + 0x38) >> 5) + 2) * 4;
              uVar12 = 1 << (*(uint *)(iVar4 + 0x38) & 0x1f) | *(uint *)(iVar15 + iVar8);
            }
            *(uint *)(iVar15 + iVar8) = uVar12;
          }
          iVar18 = iVar18 + 1;
          piVar17 = piVar17 + 1;
          iVar19 = iVar19 + 4;
        } while (iVar18 <= piVar9[5]);
      }
    }
    iVar10 = *(int *)(iVar10 + 8);
    iVar18 = *(int *)(iVar10 + 8);
  }
  piVar9 = (int *)fn_82BA4058(param_1[1]);
  do {
    bVar6 = false;
    iVar18 = 1;
    iVar10 = fn_82BBFE28((ulonglong)(uint)param_1[1] + 0x80);
    piVar17 = piVar9;
    if (0 < iVar10) {
      do {
        piVar16 = (int *)piVar17[1];
        cVar11 = (**(code **)(*piVar16 + 8))(piVar16);
        if (cVar11 == '\0') {
          puVar3 = (uint *)piVar16[0x1a];
          uVar12 = 0;
          if (*puVar3 != 0) {
            puVar13 = puVar3 + 1;
            do {
              uVar12 = uVar12 + 1;
              puVar13 = puVar13 + 1;
              *puVar13 = 0;
            } while (uVar12 < *puVar3);
          }
          bVar5 = true;
          iVar10 = 0;
          iVar19 = 0;
          uVar12 = 1;
          while( true ) {
            bVar1 = uVar12 <= *(uint *)(piVar16[0xe] + 4);
            if (bVar1) {
              iVar10 = *(int *)(*(int *)(piVar16[0xe] + 8) + iVar19);
            }
            uVar14 = 0;
            if (!bVar1) break;
            iVar4 = *(int *)(iVar10 + 100);
            if (bVar5) {
              puVar3 = (uint *)piVar16[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar14 = uVar14 + 1;
                  *puVar13 = *(uint *)((iVar4 - (int)puVar3) + (int)puVar13);
                  puVar13 = puVar13 + 1;
                } while (uVar14 < *puVar3);
              }
              bVar5 = false;
            }
            else {
              puVar3 = (uint *)piVar16[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar14 = uVar14 + 1;
                  *puVar13 = *(uint *)((iVar4 - (int)puVar3) + (int)puVar13) | *puVar13;
                  puVar13 = puVar13 + 1;
                } while (uVar14 < *puVar3);
              }
            }
            uVar12 = uVar12 + 1;
            iVar19 = iVar19 + 4;
          }
          puVar3 = (uint *)piVar16[0x19];
          if (*puVar3 != 0) {
            iVar10 = 8;
            do {
              if ((*(uint *)(piVar16[0x1a] + iVar10) | *(uint *)((int)puVar3 + iVar10)) !=
                  *(uint *)((int)puVar3 + iVar10)) {
                bVar5 = false;
                goto LAB_82bb6ba0;
              }
              uVar14 = uVar14 + 1;
              iVar10 = iVar10 + 4;
            } while (uVar14 < *puVar3);
          }
          bVar5 = true;
LAB_82bb6ba0:
          if (!bVar5) {
            bVar6 = true;
            iVar10 = piVar16[0x1a];
            uVar12 = 0;
            if (*puVar3 != 0) {
              puVar13 = puVar3 + 2;
              do {
                uVar12 = uVar12 + 1;
                *puVar13 = *(uint *)((iVar10 - (int)puVar3) + (int)puVar13) | *puVar13;
                puVar13 = puVar13 + 1;
              } while (uVar12 < *puVar3);
            }
          }
        }
        iVar18 = iVar18 + 1;
        iVar10 = fn_82BBFE28((ulonglong)(uint)param_1[1] + 0x80);
        piVar17 = piVar17 + 1;
      } while (iVar18 <= iVar10);
    }
    if (!bVar6) {
      return;
    }
  } while( true );
}


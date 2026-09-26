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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82B16C28();


byte fn_82B19998(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  byte bVar12;
  int *piVar13;
  
  piVar1 = *(int **)(param_2 + 4);
  bVar12 = 1;
  while( true ) {
    if ((((uint)piVar1 & 1) != 0) || (piVar1 == (int *)0x0)) {
      if (bVar12 != 0) {
        uVar11 = *(uint *)(param_3 + 4);
        if ((uVar11 & 1) == 0) {
          bVar12 = -((*(uint *)(param_2 + 4) & 1) == 0) & bVar12;
        }
        if (((uVar11 & 1) == 0) && (uVar11 != 0)) {
          while ((*(uint *)(uVar11 + 8) & 0x20000000) != 0) {
            uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 0x28);
            if ((uVar11 & 1) != 0) {
              return bVar12;
            }
            if (uVar11 == 0) {
              return bVar12;
            }
          }
          bVar12 = 0;
        }
      }
      return bVar12;
    }
    piVar2 = *(int **)(param_3 + 4);
    bVar12 = -(((uint)piVar2 & 1) == 0) & bVar12;
    if ((((uint)piVar2 & 1) == 0) && (piVar2 != (int *)0x0)) break;
LAB_82b19bf4:
    piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28);
  }
  do {
    uVar11 = piVar2[2];
    if ((uVar11 & 0x20000000) == 0) {
      uVar3 = piVar1[2];
      uVar8 = uVar3 >> 7 & 0x7f;
      if ((((uVar8 == (uVar11 >> 7 & 0x7f)) && (((uVar3 ^ uVar11) >> 0x19 & 1) == 0)) &&
          (uVar7 = uVar3 >> 5 & 1, uVar7 == (uVar11 >> 5 & 1))) &&
         ((((uVar3 ^ uVar11) & 0x380000) == 0 && (((piVar2[5] ^ piVar1[5]) & 1U) == 0)))) {
        if ((uVar8 == 0x75) &&
           ((iVar9 = fn_82ABDD90(param_1,0x75,0,0),
            (*(uint *)((int)piVar1 + iVar9 + -0x10) & 7) != 0 ||
            ((*(uint *)((int)piVar2 + iVar9 + -0x10) & 7) != 0)))) {
          bVar12 = 0;
        }
        else {
          if (uVar7 != 0) {
            for (puVar4 = (uint *)piVar1[1];
                (puVar4 != (uint *)0x0 && ((puVar4[4] == 0 || ((*puVar4 & 0xe000000) == 0))));
                puVar4 = (uint *)puVar4[2]) {
            }
            for (puVar5 = (uint *)piVar2[1];
                (puVar5 != (uint *)0x0 && ((puVar5[4] == 0 || ((*puVar5 & 0xe000000) == 0))));
                puVar5 = (uint *)puVar5[2]) {
            }
            if ((puVar4 == (uint *)0x0) || (puVar5 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            if (((*puVar5 ^ *puVar4) & 0x1ffe000) != 0) goto LAB_82b19bac;
          }
          piVar13 = piVar2 + 0xb;
          for (uVar11 = 0; uVar11 < ((uint)piVar1[2] >> 0x13 & 7); uVar11 = uVar11 + 1) {
            iVar9 = *(int *)(((int)piVar1 - (int)piVar2) + (int)piVar13);
            cVar10 = fn_82B16C28(param_1,iVar9,*piVar13);
            if (cVar10 == '\0') {
              bVar12 = 0;
              if (iVar9 != 0) goto LAB_82b19bac;
              break;
            }
            piVar13 = piVar13 + 1;
          }
          for (iVar9 = *piVar1; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
            iVar6 = *piVar2;
            while( true ) {
              if (iVar6 == 0) {
                bVar12 = 0;
                goto LAB_82b19bac;
              }
              cVar10 = fn_82B16C28(param_1,iVar9,iVar6);
              if (cVar10 != '\0') break;
              iVar6 = *(int *)(iVar6 + 4);
            }
          }
          piVar1[8] = (int)piVar2;
          piVar1[2] = piVar1[2] | 0x20000000;
          piVar2[8] = (int)piVar1;
          piVar2[2] = piVar2[2] | 0x20000000;
        }
        goto LAB_82b19bf4;
      }
    }
LAB_82b19bac:
    piVar2 = *(int **)(((uint)piVar2 & 0xfffffffe) + 0x28);
    if ((((uint)piVar2 & 1) != 0) || (piVar2 == (int *)0x0)) goto LAB_82b19bf4;
  } while( true );
}


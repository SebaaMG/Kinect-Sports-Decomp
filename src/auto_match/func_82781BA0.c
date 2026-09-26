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
extern unsigned int *auStack_4c;
extern int fn_8277E998();
extern int fn_827808F8();
extern int fn_82780C88();
extern int fn_82781180();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_82781BA0(int param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  uint *puVar14;
  uint *puVar15;
  double dVar16;
  uint uStack_50;
  uint auStack_4c [19];
  
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  iVar4 = *(int *)(*(int *)(((uint)((param_2 & 0xffffffff) >> 4) & 0xffffffc) +
                           *(int *)(param_1 + 0x160)) + ((uint)param_2 & 0x3f) * 0x18);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) && (*(int *)(*(int *)(iVar4 + 4) + 4) != 0)) {
    *(undefined4 *)(param_1 + 0x174) = 0;
    puVar15 = (uint *)(param_1 + 0x174);
    fn_8277E998(puVar15,iVar4);
    iVar4 = *(int *)(iVar4 + 4);
    fn_8277E998(puVar15,iVar4);
    puVar14 = *(uint **)(iVar4 + 4);
    if (puVar14[1] != 0) {
      dVar16 = (double)lbl_821AAD20;
      do {
        uVar11 = *puVar15;
        uVar3 = *puVar14;
        uVar10 = uVar3 >> 0x1e & 1;
        auStack_4c[0] =
             *(uint *)(*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
        uStack_50 = uVar3;
        if (uVar10 == (auStack_4c[0] >> 0x1e & 1)) {
          if (1 < *puVar15) {
            do {
              iVar4 = *(int *)(param_1 + 0x110);
              uVar11 = *puVar15 - 1;
              uVar10 = *puVar15 - 2;
              pfVar12 = (float *)(*(int *)(((uVar3 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4) +
                                 (uVar3 & 0x3ff) * 8);
              uVar11 = *(uint *)(*(int *)((uVar11 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar11 * 4 & 0x3fc));
              uVar10 = *(uint *)(*(int *)((uVar10 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar10 * 4 & 0x3fc));
              iVar6 = (uVar10 & 0x3ff) * 8;
              iVar5 = *(int *)(((uVar10 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4);
              pfVar13 = (float *)(*(int *)(((uVar11 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4) +
                                 (uVar11 & 0x3ff) * 8);
              fVar1 = pfVar13[1];
              fVar2 = *pfVar13;
              if ((uint)((double)((fVar1 - pfVar12[1]) * (*(float *)(iVar5 + iVar6) - fVar2) -
                                 (*(float *)(iVar5 + iVar6 + 4) - fVar1) * (fVar2 - *pfVar12)) <
                        dVar16) != (uVar11 >> 0x1e & 1)) break;
              uVar8 = uVar10;
              if ((uVar11 >> 0x1e & 1) != 0) {
                uVar8 = uVar11;
                uVar11 = uVar10;
              }
              fn_82781180(param_1,uVar3,uVar8,uVar11);
              if (*puVar15 != 0) {
                *puVar15 = *puVar15 - 1;
              }
            } while (1 < *puVar15);
          }
        }
        else {
          while (1 < uVar11) {
            uVar7 = *(undefined4 *)
                     (*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                     ((uVar11 - 1) * 4 & 0x3fc));
            if (*puVar15 != 0) {
              *puVar15 = *puVar15 - 1;
            }
            iVar4 = *(int *)(((uint)(((ulonglong)*puVar15 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                            *(int *)(param_1 + 0x180));
            iVar5 = (int)(((ulonglong)*puVar15 - 1 & 0xff) << 2);
            if (uVar10 == 0) {
              uVar9 = *(undefined4 *)(iVar4 + iVar5);
            }
            else {
              uVar9 = uVar7;
              uVar7 = *(undefined4 *)(iVar4 + iVar5);
            }
            fn_82781180(param_1,uVar3,uVar7,uVar9);
            uVar11 = *puVar15;
          }
          if (*puVar15 != 0) {
            *puVar15 = *puVar15 - 1;
          }
          fn_8277E998(puVar15,auStack_4c);
        }
        fn_8277E998(puVar15,&uStack_50);
        puVar14 = (uint *)puVar14[1];
      } while (puVar14[1] != 0);
    }
    uVar3 = *puVar14;
    while (1 < *puVar15) {
      uVar11 = *(uint *)(*(int *)((*puVar15 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                        ((*puVar15 - 1) * 4 & 0x3fc));
      if (*puVar15 != 0) {
        *puVar15 = *puVar15 - 1;
      }
      iVar4 = *(int *)(((uint)(((ulonglong)*puVar15 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                      *(int *)(param_1 + 0x180));
      iVar5 = (int)(((ulonglong)*puVar15 - 1 & 0xff) << 2);
      if ((uVar11 >> 0x1e & 1) == 0) {
        uVar10 = *(uint *)(iVar4 + iVar5);
        uVar8 = uVar11;
      }
      else {
        uVar8 = *(uint *)(iVar4 + iVar5);
        uVar10 = uVar11;
      }
      fn_82781180(param_1,uVar3,uVar10,uVar8);
    }
    if (((3 < *(uint *)(param_1 + 0x194)) && (3 < *(uint *)(param_1 + 0x1a4))) &&
       (1 < *(int *)(param_1 + 0x1c8))) {
      if (*(uint *)(param_1 + 0x1c4) < *(uint *)(param_1 + 0x184)) {
        *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x1c4);
      }
      iVar4 = *(int *)(param_1 + 0x1c8);
      if ((iVar4 == 3) || (iVar4 == 4)) {
        fn_827808F8(param_1);
      }
      else if (iVar4 == 2) {
        fn_82780C88(param_1);
      }
    }
  }
  return;
}


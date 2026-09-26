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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_70;
extern unsigned int fStack_80;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82779C60();
extern int fn_82779CD8();
extern int fn_8277A9E0();
extern unsigned int lbl_8201545C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_8277AFA8(int param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  double dVar16;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar15 = (uint *)(param_1 + 0x18);
  uVar12 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    dVar16 = (double)lbl_821AAD20;
    do {
      piVar14 = (int *)(*(int *)((uVar12 >> 4 & 0xffffffc) + *(int *)(param_2 + 0x24)) +
                       (uVar12 & 0x3f) * 0x18);
      if (((param_3 < 0) || (piVar14[5] == param_3)) && (piVar14[1] != 0)) {
        uVar13 = *puVar15;
        bVar7 = false;
        if (uVar13 != 0) {
          uVar6 = *(undefined8 *)
                   (*(int *)(((uint)piVar14[2] >> 6 & 0x3fffffc) + *(int *)(*piVar14 + 0x14)) +
                   (piVar14[2] & 0xffU) * 8);
          pfVar10 = (float *)(*(int *)((uVar13 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                             (uVar13 - 1 & 0x3f) * 0xc);
          fStack_8c = (float)uVar6;
          fStack_90 = (float)((ulonglong)uVar6 >> 0x20);
          fStack_90 = fStack_90 - *pfVar10;
          fStack_8c = fStack_8c - pfVar10[1];
          if (SQRT(fStack_8c * fStack_8c + fStack_90 * fStack_90) <= lbl_8201545C) {
            bVar7 = true;
          }
        }
        if (bVar7) {
          uVar13 = 1;
          if (1 < (uint)piVar14[1]) {
            fStack_80 = (float)dVar16;
            do {
              fVar5 = lbl_8201545C;
              uVar1 = *puVar15;
              puVar9 = (undefined4 *)
                       (*(int *)((piVar14[2] + uVar13 >> 6 & 0x3fffffc) + *(int *)(*piVar14 + 0x14))
                       + ((piVar14[2] + uVar13) * 8 & 0x7f8));
              uStack_88 = *puVar9;
              uStack_84 = puVar9[1];
              if (1 < uVar1) {
                iVar2 = *(int *)((uVar1 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24));
                pfVar10 = (float *)(*(int *)((uVar1 - 2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)
                                            ) + (uVar1 - 2 & 0x3f) * 0xc);
                iVar8 = (uVar1 - 1 & 0x3f) * 0xc;
                fVar3 = *(float *)(iVar2 + iVar8) - *pfVar10;
                fVar4 = *(float *)(iVar2 + iVar8 + 4) - pfVar10[1];
                fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
                pfVar10[2] = fVar3;
                if ((fVar3 <= fVar5) && (*puVar15 != 0)) {
                  *puVar15 = *puVar15 - 1;
                }
              }
              fn_82779C60(puVar15,&uStack_88);
              uVar13 = uVar13 + 1;
            } while (uVar13 < (uint)piVar14[1]);
          }
        }
        else {
          if (uVar13 != 0) {
            fn_82779CD8(puVar15,(param_5 & 0xff) == 0);
            fn_8277A9E0(param_1,param_4,param_5);
            *puVar15 = 0;
            *(undefined1 *)(param_1 + 0x28) = 0;
          }
          uVar13 = 0;
          if (piVar14[1] != 0) {
            fStack_70 = (float)dVar16;
            do {
              fVar5 = lbl_8201545C;
              uVar1 = *puVar15;
              puVar9 = (undefined4 *)
                       (*(int *)((piVar14[2] + uVar13 >> 6 & 0x3fffffc) + *(int *)(*piVar14 + 0x14))
                       + ((piVar14[2] + uVar13) * 8 & 0x7f8));
              uStack_78 = *puVar9;
              uStack_74 = puVar9[1];
              if (1 < uVar1) {
                pfVar11 = (float *)(*(int *)((uVar1 - 2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)
                                            ) + (uVar1 - 2 & 0x3f) * 0xc);
                pfVar10 = (float *)(*(int *)((uVar1 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)
                                            ) + (uVar1 - 1 & 0x3f) * 0xc);
                fVar3 = *pfVar10 - *pfVar11;
                fVar4 = pfVar10[1] - pfVar11[1];
                fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
                pfVar11[2] = fVar3;
                if ((fVar3 <= fVar5) && (*puVar15 != 0)) {
                  *puVar15 = *puVar15 - 1;
                }
              }
              fn_82779C60(puVar15,&uStack_78);
              uVar13 = uVar13 + 1;
            } while (uVar13 < (uint)piVar14[1]);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_2 + 0x18));
  }
  if (1 < *puVar15) {
    fn_82779CD8(puVar15,(param_5 & 0xff) == 0);
    fn_8277A9E0(param_1,param_4,param_5);
  }
  return;
}


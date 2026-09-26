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
extern unsigned int lbl_82005758;
extern unsigned int lbl_82017E38;
extern unsigned int lbl_82017EB0;
extern unsigned int lbl_82017EB8;
extern unsigned int lbl_82017EF8;


void fn_827CE2E8(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  double *pdVar5;
  float *pfVar6;
  double *pdVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  
  iVar2 = param_1[0x56];
  iVar13 = 0;
  if (0 < param_1[0xf]) {
    piVar14 = (int *)(param_1[0x11] + 0x10);
    dVar16 = lbl_82005758;
    dVar17 = lbl_82017EF8;
    do {
      iVar11 = *piVar14;
      if (((iVar11 < 0) || (3 < iVar11)) || (param_1[iVar11 + 0x12] == 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x34;
        *(int *)(*param_1 + 0x18) = iVar11;
        (**(code **)*param_1)(param_1);
      }
      uVar3 = param_1[0x2e];
      iVar9 = param_1[iVar11 + 0x12];
      if (uVar3 == 0) {
        iVar11 = (iVar11 + 3) * 4;
        if (*(int *)(iVar11 + iVar2) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar11 + iVar2) = uVar4;
        }
        puVar8 = (ushort *)(iVar9 + -2);
        piVar10 = (int *)(*(int *)(iVar11 + iVar2) + -4);
        lVar15 = 0x40;
        do {
          puVar8 = puVar8 + 1;
          piVar10 = piVar10 + 1;
          *piVar10 = (uint)*puVar8 << 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else if (uVar3 == 1) {
        iVar11 = (iVar11 + 3) * 4;
        if (*(int *)(iVar11 + iVar2) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar11 + iVar2) = uVar4;
        }
        piVar10 = (int *)(*(int *)(iVar11 + iVar2) + -4);
        lVar15 = 0x40;
        psVar12 = (short *)&lbl_82017E38;
        do {
          sVar1 = *psVar12;
          puVar8 = (ushort *)(iVar9 + 0x7dfe81c8 + (int)psVar12);
          psVar12 = psVar12 + 1;
          piVar10 = piVar10 + 1;
          *piVar10 = (int)((uint)*puVar8 * (int)sVar1 + 0x400) >> 0xb;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else if (uVar3 < 3) {
        iVar11 = (iVar11 + 8) * 4;
        if (*(int *)(iVar11 + iVar2) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar11 + iVar2) = uVar4;
        }
        iVar11 = *(int *)(iVar11 + iVar2);
        pdVar5 = (double *)&lbl_82017EB8;
        do {
          pfVar6 = (float *)(iVar11 + -4);
          puVar8 = (ushort *)(iVar9 + -2);
          pdVar7 = (double *)&lbl_82017EB0;
          iVar11 = iVar11 + 0x20;
          lVar15 = 8;
          iVar9 = iVar9 + 0x10;
          do {
            puVar8 = puVar8 + 1;
            pdVar7 = pdVar7 + 1;
            pfVar6 = pfVar6 + 1;
            *pfVar6 = (float)(dVar16 / ((double)*puVar8 * *pdVar5 * *pdVar7 * dVar17));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          pdVar5 = pdVar5 + 1;
        } while ((int)pdVar5 < -0x7dfe8108);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x30;
        (**(code **)*param_1)(param_1);
      }
      iVar13 = iVar13 + 1;
      piVar14 = piVar14 + 0x15;
    } while (iVar13 < param_1[0xf]);
  }
  return;
}


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
extern int fn_827D0358();
extern int fn_827D0658();
extern int fn_827D0888();
extern int fn_827D0CE8();
extern int fn_827D10A0();
extern unsigned int lbl_82017E38;
extern unsigned int lbl_82017EB0;
extern unsigned int lbl_82017EB8;
extern unsigned int lbl_827D0850;


void fn_827C9958(int *param_1)

{
  short sVar1;
  uint uVar2;
  double *pdVar3;
  float *pfVar4;
  double *pdVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  uint *puVar13;
  code *pcVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  
  uVar15 = 0;
  pcVar14 = (code *)0x0;
  iVar12 = 0;
  if (0 < param_1[9]) {
    piVar16 = (int *)(param_1[0x31] + 0x24);
    puVar13 = (uint *)(param_1[0x67] + 0x2c);
    do {
      iVar8 = *piVar16;
      if (iVar8 == 1) {
        pcVar14 = (code *)&lbl_827D0850;
LAB_827c9a68:
        uVar15 = 0;
      }
      else {
        if (iVar8 == 2) {
          pcVar14 = fn_827D0658;
          goto LAB_827c9a68;
        }
        if (iVar8 == 4) {
          pcVar14 = fn_827D0358;
          goto LAB_827c9a68;
        }
        if (iVar8 == 8) {
          uVar2 = param_1[0x11];
          if (uVar2 == 0) {
            pcVar14 = fn_827D0888;
            goto LAB_827c9a68;
          }
          if (uVar2 == 1) {
            uVar15 = 1;
            pcVar14 = fn_827D0CE8;
          }
          else {
            if (2 < uVar2) {
              *(undefined4 *)(*param_1 + 0x14) = 0x30;
              goto LAB_827c99e0;
            }
            uVar15 = 2;
            pcVar14 = fn_827D10A0;
          }
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 7;
          *(int *)(*param_1 + 0x18) = *piVar16;
LAB_827c99e0:
          (**(code **)*param_1)(param_1);
        }
      }
      puVar13[-10] = (uint)pcVar14;
      if (((*(char *)(piVar16 + 3) != '\0') && (*puVar13 != uVar15)) &&
         (iVar8 = piVar16[10], iVar8 != 0)) {
        *puVar13 = uVar15;
        if (uVar15 == 0) {
          puVar9 = (ushort *)(iVar8 + -2);
          puVar7 = (uint *)(piVar16[0xb] + -4);
          lVar17 = 0x40;
          do {
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            *puVar7 = (uint)*puVar9;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else if (uVar15 == 1) {
          piVar6 = (int *)(piVar16[0xb] + -4);
          lVar17 = 0x40;
          psVar11 = (short *)&lbl_82017E38;
          do {
            sVar1 = *psVar11;
            puVar9 = (ushort *)(iVar8 + 0x7dfe81c8 + (int)psVar11);
            psVar11 = psVar11 + 1;
            piVar6 = piVar6 + 1;
            *piVar6 = (int)((uint)*puVar9 * (int)sVar1 + 0x800) >> 0xc;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else if (uVar15 < 3) {
          iVar10 = piVar16[0xb];
          pdVar3 = (double *)&lbl_82017EB8;
          do {
            pfVar4 = (float *)(iVar10 + -4);
            puVar9 = (ushort *)(iVar8 + -2);
            pdVar5 = (double *)&lbl_82017EB0;
            iVar10 = iVar10 + 0x20;
            lVar17 = 8;
            iVar8 = iVar8 + 0x10;
            do {
              puVar9 = puVar9 + 1;
              pdVar5 = pdVar5 + 1;
              pfVar4 = pfVar4 + 1;
              *pfVar4 = (float)((double)*puVar9 * *pdVar3 * *pdVar5);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            pdVar3 = pdVar3 + 1;
          } while ((int)pdVar3 < -0x7dfe8108);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      piVar16 = piVar16 + 0x15;
    } while (iVar12 < param_1[9]);
  }
  return;
}


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
extern int fn_829C2C00();
extern int fn_829C3050();
extern int fn_829C34E0();
extern int fn_829C3988();
extern int fn_829C3CC0();
extern unsigned int lbl_82017E30;
extern unsigned int lbl_82017E38;
extern unsigned int lbl_82017E3A;
extern unsigned int lbl_82017E3C;
extern unsigned int lbl_82017EB0;
extern unsigned int lbl_82017EC0;
extern unsigned int lbl_82017EC8;
extern unsigned int lbl_82017ED0;
extern unsigned int lbl_82017EE0;
extern unsigned int lbl_82017EE8;
extern unsigned int lbl_82017EF0;
extern unsigned int lbl_829C4298;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829BE330(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  float *pfVar11;
  short *psVar12;
  double *pdVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  int iVar16;
  uint *puVar17;
  code *pcVar18;
  uint uVar19;
  int *piVar20;
  code *pcVar22;
  longlong lVar21;
  
  uVar19 = 0;
  pcVar18 = (code *)0x0;
  iVar16 = 0;
  if (0 < param_1[9]) {
    piVar20 = (int *)(param_1[0x37] + 0x24);
    puVar17 = (uint *)(param_1[0x71] + 0x2c);
    do {
      iVar1 = *piVar20;
      if (iVar1 - 1U < 8) {
        if (iVar1 == 2) {
          uVar19 = 0;
          pcVar18 = fn_829C3CC0;
          goto LAB_829be480;
        }
        if (iVar1 == 3) goto LAB_829be458;
        if (iVar1 == 4) {
          uVar19 = 0;
          pcVar18 = fn_829C3988;
          goto LAB_829be480;
        }
        if (((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 7)) goto LAB_829be458;
        if (iVar1 == 1) {
          uVar19 = 0;
          pcVar18 = (code *)&lbl_829C4298;
        }
        else {
          uVar2 = param_1[0x12];
          if (6 < uVar2) {
            *(undefined4 *)(*param_1 + 0x14) = 0x30;
            pcVar22 = *(code **)*param_1;
            goto LAB_829be478;
          }
          if (uVar2 == 1) {
LAB_829be420:
            uVar19 = 1;
            pcVar18 = fn_829C3050;
          }
          else if (uVar2 == 2) {
            uVar19 = 2;
            pcVar18 = fn_829C2C00;
          }
          else {
            if ((uVar2 != 3) && ((uVar2 == 4 || ((uVar2 != 5 && (uVar2 != 0)))))) goto LAB_829be420;
            uVar19 = 0;
            pcVar18 = fn_829C34E0;
          }
        }
      }
      else {
LAB_829be458:
        *(undefined4 *)(*param_1 + 0x14) = 7;
        *(int *)(*param_1 + 0x18) = *piVar20;
        pcVar22 = *(code **)*param_1;
LAB_829be478:
        (*pcVar22)(param_1);
      }
LAB_829be480:
      puVar17[-10] = (uint)pcVar18;
      if (((piVar20[3] != 0) && (*puVar17 != uVar19)) && (iVar1 = piVar20[10], iVar1 != 0)) {
        *puVar17 = uVar19;
        if (uVar19 == 0) {
          puVar15 = (undefined2 *)piVar20[0xb];
          iVar1 = iVar1 - (int)puVar15;
          lVar21 = 0x40;
          do {
            *puVar15 = *(undefined2 *)(iVar1 + (int)puVar15);
            puVar15 = puVar15 + 1;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        else if (uVar19 == 1) {
          iVar3 = piVar20[0xb];
          iVar10 = -iVar3;
          puVar14 = (ushort *)(iVar1 + -2);
          lVar21 = 0x10;
          psVar12 = (short *)&lbl_82017E30;
          puVar15 = (undefined2 *)(iVar3 + 2);
          do {
            psVar12 = psVar12 + 4;
            puVar15[-1] = (short)((int)((uint)puVar14[1] * (int)*psVar12 + 0x800) >> 0xc);
            *puVar15 = (short)((int)((int)*(short *)((int)&lbl_82017E38 + iVar10 + (int)puVar15) *
                                     (uint)*(ushort *)((iVar1 - iVar3) + (int)puVar15) + 0x800) >>
                              0xc);
            puVar15[1] = (short)((int)((int)*(short *)((int)&lbl_82017E3A + iVar10 + (int)puVar15) *
                                       (uint)puVar14[3] + 0x800) >> 0xc);
            puVar14 = puVar14 + 4;
            puVar15[2] = (short)((int)((int)*(short *)((int)&lbl_82017E3C + iVar10 + (int)puVar15) *
                                       (uint)*puVar14 + 0x800) >> 0xc);
            puVar15 = puVar15 + 4;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        else if (uVar19 < 3) {
          pdVar13 = (double *)&lbl_82017EB0;
          pfVar11 = (float *)(piVar20[0xb] + -4);
          puVar14 = (ushort *)(iVar1 + -2);
          lVar21 = 8;
          do {
            dVar9 = lbl_82017EF0;
            dVar8 = lbl_82017EE8;
            dVar7 = lbl_82017EE0;
            dVar6 = lbl_82017ED0;
            dVar5 = lbl_82017EC8;
            dVar4 = lbl_82017EC0;
            pfVar11[1] = (float)((double)puVar14[1] * pdVar13[1]);
            pfVar11[2] = (float)((double)puVar14[2] * pdVar13[1] * dVar4);
            pfVar11[3] = (float)((double)puVar14[3] * pdVar13[1] * dVar5);
            pfVar11[4] = (float)((double)puVar14[4] * pdVar13[1] * dVar6);
            pfVar11[5] = (float)((double)puVar14[5] * pdVar13[1]);
            pfVar11[6] = (float)((double)puVar14[6] * pdVar13[1] * dVar7);
            pfVar11[7] = (float)((double)puVar14[7] * pdVar13[1] * dVar8);
            pdVar13 = pdVar13 + 1;
            puVar14 = puVar14 + 8;
            pfVar11 = pfVar11 + 8;
            *pfVar11 = (float)((double)*puVar14 * *pdVar13 * dVar9);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 1;
      piVar20 = piVar20 + 0x15;
    } while (iVar16 < param_1[9]);
  }
  return;
}


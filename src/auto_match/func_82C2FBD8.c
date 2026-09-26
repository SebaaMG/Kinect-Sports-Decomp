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
extern int fn_82F68CC0();
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int uStack_e0;
extern unsigned int uStack_f8;


void fn_82C2FBD8(undefined8 param_1,uint *param_2,int param_3,ulonglong param_4)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  short *psVar15;
  int *piVar16;
  int iVar17;
  int *piStack00000024;
  uint uStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e0;
  
  uVar2 = *param_2;
  psVar3 = (short *)param_2[0xc];
  uStack_e0 = (uint)param_4;
  uVar4 = param_2[10];
  uVar5 = param_2[9];
  uVar6 = param_2[1];
  uStack_f8 = param_2[8];
  uVar7 = param_2[6];
  uVar8 = param_2[5];
  sVar1 = *(short *)((int)param_2 + 0x1e);
  uVar9 = param_2[2];
  if (0 < (int)uStack_e0) {
    piVar16 = (int *)(param_3 + -4);
    do {
      piVar14 = (int *)(uStack_f8 * 4 + uVar5);
      iStack_f0 = 0;
      iVar12 = 0;
      iStack_f4 = 0;
      iStack_ec = 0;
      iVar17 = 0;
      iVar10 = 0;
      psVar15 = psVar3;
      if (1 < (int)uVar6) {
        do {
          iStack_f4 = (int)psVar15[0xf] * piVar14[0xf] + (int)psVar15[0xe] * piVar14[0xe] +
                      (int)psVar15[0xd] * piVar14[0xd] + (int)psVar15[0xc] * piVar14[0xc] +
                      (int)psVar15[0xb] * piVar14[0xb] + (int)psVar15[10] * piVar14[10] +
                      (int)psVar15[9] * piVar14[9] + (int)psVar15[8] * piVar14[8] + iStack_f4;
          iStack_f0 = (int)psVar15[7] * piVar14[7] + (int)psVar15[6] * piVar14[6] +
                      (int)psVar15[5] * piVar14[5] + (int)psVar15[4] * piVar14[4] +
                      (int)psVar15[3] * piVar14[3] + (int)psVar15[2] * piVar14[2] +
                      (int)psVar15[1] * piVar14[1] + (int)*psVar15 * *piVar14 + iStack_f0;
          iVar12 = iStack_ec + 2;
          piVar14 = piVar14 + 0x10;
          psVar15 = psVar15 + 0x10;
          iStack_ec = iVar12;
        } while (iVar12 < (int)(uVar6 - 1));
        param_4 = (ulonglong)uStack_e0;
        iVar17 = iStack_f0;
        iVar10 = iStack_f4;
      }
      uVar11 = uVar7;
      if (iVar12 < (int)uVar6) {
        uVar11 = (int)psVar15[7] * piVar14[7] + (int)psVar15[6] * piVar14[6] +
                 (int)psVar15[5] * piVar14[5] + (int)psVar15[4] * piVar14[4] +
                 (int)psVar15[3] * piVar14[3] + (int)psVar15[2] * piVar14[2] +
                 (int)psVar15[1] * piVar14[1] + (int)*psVar15 * *piVar14 + uVar7;
      }
      iVar13 = uStack_f8 * 2 + uVar4;
      iVar12 = piVar16[1];
      iVar17 = ((int)(iVar10 + iVar17 + uVar11) >> (uVar8 & 0x3f)) + iVar12;
      if (iVar12 < 1) {
        if ((iVar12 < 0) && (0 < (int)uVar2)) {
          psVar15 = psVar3;
          uVar11 = uVar2;
          do {
            *psVar15 = *psVar15 - *(short *)((int)psVar15 + (iVar13 - (int)psVar3));
            psVar15 = psVar15 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        psVar15 = psVar3;
        uVar11 = uVar2;
        do {
          *psVar15 = *(short *)((iVar13 - (int)psVar3) + (int)psVar15) + *psVar15;
          psVar15 = psVar15 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uStack_f8 == 0) {
        piStack00000024 = piVar16;
        fn_82F68CC0(uVar2 * 4 + uVar5,uVar5,uVar2 & 0x3fffffff);
        fn_82F68CC0(uVar2 * 2 + uVar4,uVar4);
        uStack_f8 = uVar2;
      }
      uStack_f8 = uStack_f8 - 1;
      iVar10 = uStack_f8 * 4;
      psVar15 = (short *)(uStack_f8 * 2 + uVar4);
      *(int *)(iVar10 + uVar5) = iVar17;
      if (iVar17 < 1) {
        if (iVar17 < 0) {
          *psVar15 = -sVar1;
          if (iVar17 < -0x800000) {
            *(undefined4 *)(iVar10 + uVar5) = 0xff800000;
          }
        }
        else {
          *psVar15 = 0;
        }
      }
      else {
        *psVar15 = sVar1;
        if (0x7fffff < iVar17) {
          *(undefined4 *)(iVar10 + uVar5) = 0x7fffff;
        }
      }
      psVar15[uVar9] = psVar15[uVar9] >> 2;
      param_4 = param_4 - 1;
      psVar15[uVar6] = psVar15[uVar6] >> 1;
      piVar16 = piVar16 + 1;
      *piVar16 = iVar17;
      uStack_e0 = (uint)param_4;
    } while (param_4 != 0);
  }
  param_2[8] = uStack_f8;
  return;
}


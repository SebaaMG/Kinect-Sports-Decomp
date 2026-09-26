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
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int uStack_c4;


void fn_82C2F6E0(undefined8 param_1,int *param_2,int param_3,ulonglong param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  int *piVar17;
  int *piStack00000024;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_c4;
  
  iVar2 = *param_2;
  psVar3 = (short *)param_2[0xc];
  uStack_c4 = (uint)param_4;
  iVar4 = param_2[10];
  iVar5 = param_2[9];
  iVar6 = param_2[1];
  iStack_dc = param_2[8];
  iVar7 = param_2[6];
  uVar8 = param_2[5];
  sVar1 = *(short *)((int)param_2 + 0x1e);
  iVar9 = param_2[2];
  if (0 < (int)uStack_c4) {
    piVar17 = (int *)(param_3 + -4);
    do {
      psVar15 = (short *)(iStack_dc * 2 + iVar5);
      iStack_d8 = 0;
      iVar13 = 0;
      iStack_d0 = 0;
      iStack_d4 = 0;
      iVar11 = 0;
      iVar10 = 0;
      psVar16 = psVar3;
      if (1 < iVar6) {
        do {
          iStack_d8 = (int)psVar15[7] * (int)psVar16[7] + (int)psVar15[6] * (int)psVar16[6] +
                      (int)psVar15[5] * (int)psVar16[5] + (int)psVar15[4] * (int)psVar16[4] +
                      (int)psVar15[3] * (int)psVar16[3] + (int)psVar15[2] * (int)psVar16[2] +
                      (int)psVar15[1] * (int)psVar16[1] + (int)*psVar15 * (int)*psVar16 + iStack_d8;
          iVar13 = iStack_d4 + 2;
          iStack_d0 = (int)psVar15[0xf] * (int)psVar16[0xf] + (int)psVar15[0xe] * (int)psVar16[0xe]
                      + (int)psVar15[0xd] * (int)psVar16[0xd] +
                      (int)psVar15[0xc] * (int)psVar16[0xc] + (int)psVar15[0xb] * (int)psVar16[0xb]
                      + (int)psVar15[10] * (int)psVar16[10] + (int)psVar15[9] * (int)psVar16[9] +
                      (int)psVar15[8] * (int)psVar16[8] + iStack_d0;
          psVar15 = psVar15 + 0x10;
          psVar16 = psVar16 + 0x10;
          iStack_d4 = iVar13;
        } while (iVar13 < iVar6 + -1);
        param_4 = (ulonglong)uStack_c4;
        iVar11 = iStack_d8;
        iVar10 = iStack_d0;
      }
      iVar12 = iVar7;
      if (iVar13 < iVar6) {
        iVar12 = (int)psVar15[7] * (int)psVar16[7] + (int)psVar15[6] * (int)psVar16[6] +
                 (int)psVar15[5] * (int)psVar16[5] + (int)psVar15[4] * (int)psVar16[4] +
                 (int)psVar15[3] * (int)psVar16[3] + (int)psVar15[2] * (int)psVar16[2] +
                 (int)psVar15[1] * (int)psVar16[1] + (int)*psVar15 * (int)*psVar16 + iVar7;
      }
      iVar14 = iStack_dc * 2 + iVar4;
      iVar13 = piVar17[1];
      iVar11 = (iVar10 + iVar11 + iVar12 >> (uVar8 & 0x3f)) + iVar13;
      if (iVar13 < 1) {
        if ((iVar13 < 0) && (0 < iVar2)) {
          psVar16 = psVar3;
          iVar10 = iVar2;
          do {
            *psVar16 = *psVar16 - *(short *)((iVar14 - (int)psVar3) + (int)psVar16);
            psVar16 = psVar16 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (0 < iVar2) {
        psVar16 = psVar3;
        iVar10 = iVar2;
        do {
          *psVar16 = *(short *)((iVar14 - (int)psVar3) + (int)psVar16) + *psVar16;
          psVar16 = psVar16 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (iStack_dc == 0) {
        iVar10 = iVar2 * 2;
        piStack00000024 = piVar17;
        fn_82F68CC0(iVar10 + iVar5,iVar5,iVar10);
        fn_82F68CC0(iVar10 + iVar4,iVar4,iVar10);
        iStack_dc = iVar2;
      }
      iStack_dc = iStack_dc + -1;
      iVar10 = iStack_dc * 2;
      psVar16 = (short *)(iVar10 + iVar4);
      *(short *)(iVar10 + iVar5) = (short)iVar11;
      if (iVar11 < 1) {
        if (iVar11 < 0) {
          *psVar16 = -sVar1;
          if (iVar11 < -0x8000) {
            *(undefined2 *)(iVar10 + iVar5) = 0x8000;
          }
        }
        else {
          *psVar16 = 0;
        }
      }
      else {
        *psVar16 = sVar1;
        if (0x7fff < iVar11) {
          *(undefined2 *)(iVar10 + iVar5) = 0x7fff;
        }
      }
      psVar16[iVar9] = psVar16[iVar9] >> 2;
      param_4 = param_4 - 1;
      psVar16[iVar6] = psVar16[iVar6] >> 1;
      piVar17 = piVar17 + 1;
      *piVar17 = iVar11;
      uStack_c4 = (uint)param_4;
    } while (param_4 != 0);
  }
  param_2[8] = iStack_dc;
  return;
}


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
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7C1B0(byte *param_1,ulonglong param_2,char *param_3,int param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar10 = 0;
  }
  else {
    pcVar11 = param_3;
    if (0xd < (param_2 & 0xffffffff)) {
      do {
        uVar15 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar15 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar15;
        iVar10 = *(int *)(&lbl_820A6CF8 + (uint)*param_1 * 4);
        iVar3 = *(int *)(&lbl_820A6D14 + (uint)*param_1 * 4);
        iVar4 = *(int *)(&lbl_820A6CF8 + (uint)param_1[1] * 4);
        iVar5 = *(int *)(&lbl_820A6D14 + (uint)param_1[1] * 4);
        iVar18 = (uint)param_1[3] * 0x100 + (uint)param_1[2];
        iVar19 = (uint)param_1[5] * 0x100 + (uint)param_1[4];
        iVar13 = (uint)param_1[9] * 0x100 + (uint)param_1[8];
        pbVar1 = param_1 + 0xc;
        iVar16 = (uint)param_1[0xb] * 0x100 + (uint)param_1[10];
        iVar17 = (uint)param_1[7] * 0x100 + (uint)param_1[6];
        pbVar7 = param_1 + 0xd;
        param_1 = param_1 + 0xe;
        iVar14 = (uint)*pbVar7 * 0x100 + (uint)*pbVar1;
        *pcVar11 = (char)((uint)iVar16 >> 8) + -0x80;
        pcVar11[1] = (char)((uint)iVar14 >> 8) + -0x80;
        pcVar11[2] = (char)((uint)iVar17 >> 8) + -0x80;
        pcVar11[3] = (char)((uint)iVar13 >> 8) + -0x80;
        pcVar11 = pcVar11 + 4;
        for (lVar12 = uVar15 - 0xe; iVar9 = iVar13, iVar8 = iVar17, lVar12 != 0;
            lVar12 = lVar12 + -1) {
          bVar2 = *param_1;
          uVar6 = (int)(char)bVar2 >> 4;
          param_1 = param_1 + 1;
          iVar17 = (iVar16 * iVar3 + iVar8 * iVar10 >> 8) +
                   ((int)(char)((char)uVar6 << 4) >> 4) * iVar18;
          if (iVar17 < 0x8000) {
            if (iVar17 < -0x8000) {
              iVar17 = -0x8000;
            }
          }
          else {
            iVar17 = 0x7fff;
          }
          iVar18 = *(int *)(&lbl_820A6D30 + (uVar6 & 0xf) * 4) * iVar18 >> 8;
          if (iVar18 < 0x10) {
            iVar18 = 0x10;
          }
          uVar6 = (int)(char)(bVar2 << 4) >> 4;
          *pcVar11 = (char)((uint)iVar17 >> 8) + -0x80;
          iVar13 = (iVar14 * iVar5 + iVar9 * iVar4 >> 8) +
                   ((int)(char)((char)uVar6 << 4) >> 4) * iVar19;
          if (iVar13 < 0x8000) {
            if (iVar13 < -0x8000) {
              iVar13 = -0x8000;
            }
          }
          else {
            iVar13 = 0x7fff;
          }
          iVar19 = *(int *)(&lbl_820A6D30 + (uVar6 & 0xf) * 4) * iVar19 >> 8;
          if (iVar19 < 0x10) {
            iVar19 = 0x10;
          }
          pcVar11[1] = (char)((uint)iVar13 >> 8) + -0x80;
          pcVar11 = pcVar11 + 2;
          iVar16 = iVar8;
          iVar14 = iVar9;
        }
      } while (0xd < (param_2 & 0xffffffff));
    }
    iVar10 = (int)pcVar11 - (int)param_3;
  }
  return iVar10;
}


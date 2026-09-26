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
extern unsigned int lbl_8201467C;
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7C608(byte *param_1,ulonglong param_2,float *param_3,int param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  fVar12 = lbl_8201467C;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar13 = 0;
  }
  else {
    pfVar14 = param_3;
    if (0xd < (param_2 & 0xffffffff)) {
      do {
        uVar19 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar19 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar19;
        iVar13 = *(int *)(&lbl_820A6CF8 + (uint)*param_1 * 4);
        iVar4 = *(int *)(&lbl_820A6D14 + (uint)*param_1 * 4);
        iVar5 = *(int *)(&lbl_820A6D14 + (uint)param_1[1] * 4);
        iVar21 = (uint)param_1[3] * 0x100 + (uint)param_1[2];
        iVar22 = (uint)param_1[5] * 0x100 + (uint)param_1[4];
        iVar20 = (uint)param_1[7] * 0x100 + (uint)param_1[6];
        pbVar1 = param_1 + 10;
        pbVar8 = param_1 + 0xb;
        iVar16 = (uint)param_1[9] * 0x100 + (uint)param_1[8];
        pbVar2 = param_1 + 0xc;
        iVar6 = *(int *)(&lbl_820A6CF8 + (uint)param_1[1] * 4);
        pbVar9 = param_1 + 0xd;
        param_1 = param_1 + 0xe;
        iVar18 = (uint)*pbVar9 * 0x100 + (uint)*pbVar2;
        iVar17 = (uint)*pbVar8 * 0x100 + (uint)*pbVar1;
        *pfVar14 = (float)(longlong)iVar17 * fVar12;
        pfVar14[1] = (float)(longlong)iVar18 * fVar12;
        pfVar14[2] = (float)(longlong)iVar20 * fVar12;
        pfVar14[3] = (float)(longlong)iVar16 * fVar12;
        pfVar14 = pfVar14 + 4;
        for (lVar15 = uVar19 - 0xe; iVar11 = iVar16, iVar10 = iVar20, lVar15 != 0;
            lVar15 = lVar15 + -1) {
          bVar3 = *param_1;
          uVar7 = (int)(char)bVar3 >> 4;
          param_1 = param_1 + 1;
          iVar20 = (iVar17 * iVar4 + iVar10 * iVar13 >> 8) +
                   ((int)(char)((char)uVar7 << 4) >> 4) * iVar21;
          if (iVar20 < 0x8000) {
            if (iVar20 < -0x8000) {
              iVar20 = -0x8000;
            }
          }
          else {
            iVar20 = 0x7fff;
          }
          iVar21 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar21 >> 8;
          if (iVar21 < 0x10) {
            iVar21 = 0x10;
          }
          uVar7 = (int)(char)(bVar3 << 4) >> 4;
          iVar16 = (iVar18 * iVar5 + iVar11 * iVar6 >> 8) +
                   ((int)(char)((char)uVar7 << 4) >> 4) * iVar22;
          *pfVar14 = (float)(longlong)iVar20 * fVar12;
          if (iVar16 < 0x8000) {
            if (iVar16 < -0x8000) {
              iVar16 = -0x8000;
            }
          }
          else {
            iVar16 = 0x7fff;
          }
          iVar22 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar22 >> 8;
          if (iVar22 < 0x10) {
            iVar22 = 0x10;
          }
          pfVar14[1] = (float)(longlong)iVar16 * fVar12;
          pfVar14 = pfVar14 + 2;
          iVar17 = iVar10;
          iVar18 = iVar11;
        }
      } while (0xd < (param_2 & 0xffffffff));
    }
    iVar13 = (int)pfVar14 - (int)param_3;
  }
  return iVar13;
}


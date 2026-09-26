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


int fn_82A7BF98(byte *param_1,ulonglong param_2,float *param_3,int param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  fVar6 = lbl_8201467C;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar7 = 0;
  }
  else {
    pfVar8 = param_3;
    if (6 < (param_2 & 0xffffffff)) {
      do {
        uVar12 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar12 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar12;
        iVar7 = *(int *)(&lbl_820A6CF8 + (uint)*param_1 * 4);
        iVar3 = *(int *)(&lbl_820A6D14 + (uint)*param_1 * 4);
        iVar9 = (uint)param_1[2] * 0x100 + (uint)param_1[1];
        pbVar1 = param_1 + 5;
        iVar11 = (uint)param_1[4] * 0x100 + (uint)param_1[3];
        pbVar5 = param_1 + 6;
        param_1 = param_1 + 7;
        iVar13 = (uint)*pbVar5 * 0x100 + (uint)*pbVar1;
        *pfVar8 = (float)(longlong)iVar13 * fVar6;
        pfVar8[1] = (float)(longlong)iVar11 * fVar6;
        for (lVar10 = uVar12 - 7; pfVar8 = pfVar8 + 2, lVar10 != 0; lVar10 = lVar10 + -1) {
          bVar2 = *param_1;
          uVar4 = (int)(char)bVar2 >> 4;
          param_1 = param_1 + 1;
          iVar13 = (iVar13 * iVar3 + iVar11 * iVar7 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar9;
          if (iVar13 < 0x8000) {
            if (iVar13 < -0x8000) {
              iVar13 = -0x8000;
            }
          }
          else {
            iVar13 = 0x7fff;
          }
          iVar9 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar9 >> 8;
          if (iVar9 < 0x10) {
            iVar9 = 0x10;
          }
          uVar4 = (int)(char)(bVar2 << 4) >> 4;
          iVar11 = (iVar13 * iVar7 + iVar11 * iVar3 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar9;
          *pfVar8 = (float)(longlong)iVar13 * fVar6;
          if (iVar11 < 0x8000) {
            if (iVar11 < -0x8000) {
              iVar11 = -0x8000;
            }
          }
          else {
            iVar11 = 0x7fff;
          }
          iVar9 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar9 >> 8;
          if (iVar9 < 0x10) {
            iVar9 = 0x10;
          }
          pfVar8[1] = (float)(longlong)iVar11 * fVar6;
        }
      } while (6 < (param_2 & 0xffffffff));
    }
    iVar7 = (int)pfVar8 - (int)param_3;
  }
  return iVar7;
}


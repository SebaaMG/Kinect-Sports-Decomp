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
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8317445C;
extern unsigned int lbl_831745B4;
extern unsigned int lbl_83174FF0;
extern unsigned int lbl_83175010;
extern unsigned int lbl_83175050;
extern unsigned int lbl_83175070;
extern unsigned int lbl_8329EB60;
extern unsigned int lbl_8329EB80;


longlong fn_82BDE2B0(int param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  
  fVar6 = lbl_821AAD20;
  iVar14 = param_1 * 4;
  uVar15 = (ulonglong)*(uint *)(&lbl_83175010 + iVar14);
  iVar20 = (int)(short)*(undefined4 *)(&lbl_83175050 + iVar14);
  fVar1 = *(float *)(&lbl_83175070 + iVar14);
  iVar18 = 0;
  puVar2 = (&lbl_831745B4)[param_1];
  fVar5 = *(float *)(&lbl_8329EB80 + param_2 * 4) * *(float *)(&lbl_8329EB60 + iVar14);
  uVar3 = *(uint *)(&lbl_83174FF0 + iVar14);
  iVar10 = iVar20 + 1;
  puVar4 = (&lbl_8317445C)[param_1];
  lVar19 = 0x20;
  lVar7 = 0;
  if (0 < (int)*(uint *)(&lbl_83175010 + iVar14)) {
    do {
      iVar13 = 0;
      uVar17 = 0;
      iVar14 = 0;
      lVar8 = 0;
      lVar9 = 0;
      if (3 < (int)uVar3) {
        do {
          iVar11 = (int)(ABS(*param_3) * fVar5 + fVar1);
          if (iVar11 != 0) {
            lVar8 = lVar8 + 1;
            iVar14 = iVar14 * 2;
            if (fVar6 < *param_3) {
              iVar14 = iVar14 + 1;
            }
            if ((iVar20 < iVar11) || (iVar11 < 0)) {
              iVar11 = iVar20;
            }
          }
          iVar16 = (int)(ABS(param_3[1]) * fVar5 + fVar1);
          if (iVar16 != 0) {
            lVar8 = lVar8 + 1;
            iVar14 = iVar14 * 2;
            if (fVar6 < param_3[1]) {
              iVar14 = iVar14 + 1;
            }
            if ((iVar20 < iVar16) || (iVar16 < 0)) {
              iVar16 = iVar20;
            }
          }
          iVar12 = (int)(ABS(param_3[2]) * fVar5 + fVar1);
          if (iVar12 != 0) {
            lVar8 = lVar8 + 1;
            iVar14 = iVar14 * 2;
            if (fVar6 < param_3[2]) {
              iVar14 = iVar14 + 1;
            }
            if ((iVar20 < iVar12) || (iVar12 < 0)) {
              iVar12 = iVar20;
            }
          }
          iVar12 = ((iVar13 * iVar10 + iVar11) * iVar10 + iVar16) * iVar10 + iVar12;
          iVar11 = (int)(ABS(param_3[3]) * fVar5 + fVar1);
          if (iVar11 != 0) {
            lVar8 = lVar8 + 1;
            iVar14 = iVar14 * 2;
            if (fVar6 < param_3[3]) {
              iVar14 = iVar14 + 1;
            }
            if ((iVar20 < iVar11) || (iVar11 < 0)) {
              iVar11 = iVar20;
            }
          }
          lVar9 = lVar9 + 4;
          iVar13 = iVar12 * iVar10 + iVar11;
          uVar17 = iVar12 * iVar10 + iVar11;
          param_3 = param_3 + 4;
        } while ((int)lVar9 < (int)(uVar3 - 3));
      }
      if ((int)lVar9 < (int)uVar3) {
        lVar9 = (ulonglong)uVar3 - lVar9;
        do {
          iVar13 = (int)(ABS(*param_3) * fVar5 + fVar1);
          if (iVar13 != 0) {
            lVar8 = lVar8 + 1;
            iVar14 = iVar14 * 2;
            if (fVar6 < *param_3) {
              iVar14 = iVar14 + 1;
            }
            if ((iVar20 < iVar13) || (iVar13 < 0)) {
              iVar13 = iVar20;
            }
          }
          uVar17 = uVar17 * iVar10 + iVar13;
          param_3 = param_3 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar9 = ((ulonglong)(uint)(*(int *)(puVar4 + ((int)uVar17 >> 3) * 4) >> ((uVar17 & 7) << 2)) &
              0xf) + lVar8 + 1;
      lVar19 = lVar19 - lVar9;
      lVar7 = lVar9 + lVar7;
      iVar14 = ((*(int *)(puVar2 + ((int)uVar17 >> 1) * 4) >> ((uVar17 & 1) << 4) & 0xffffU) <<
               ((uint)lVar8 & 0x3f)) + iVar14;
      uVar17 = (uint)lVar19;
      if (lVar19 < 0) {
        lVar19 = lVar19 + 0x20;
        *param_4 = (iVar14 >> (-uVar17 & 0x3f)) + iVar18;
        param_4 = param_4 + 1;
        iVar18 = iVar14 << ((uint)lVar19 & 0x3f);
      }
      else {
        iVar18 = (iVar14 << (uVar17 & 0x3f)) + iVar18;
      }
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  *param_4 = iVar18;
  return lVar7;
}


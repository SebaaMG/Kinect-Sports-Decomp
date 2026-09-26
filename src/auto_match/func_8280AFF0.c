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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_82002AE0;


void fn_8280AFF0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar22;
  undefined4 uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  
  iVar24 = (int)param_4;
  uVar23 = (undefined4)((ulonglong)param_4 >> 0x20);
  pfVar22 = (float *)fn_82F6A534();
  fVar21 = lbl_82002AE0;
  fVar1 = *pfVar22;
  fVar2 = pfVar22[4];
  fVar3 = pfVar22[8];
  fVar4 = pfVar22[0xc];
  fVar5 = pfVar22[1];
  fVar6 = pfVar22[5];
  fVar7 = pfVar22[9];
  fVar8 = pfVar22[0xd];
  fVar9 = pfVar22[2];
  fVar10 = pfVar22[6];
  fVar11 = pfVar22[10];
  fVar12 = pfVar22[0xe];
  fVar13 = pfVar22[3];
  fVar14 = pfVar22[7];
  fVar15 = pfVar22[0xb];
  fVar16 = pfVar22[0xf];
  if (iVar24 != 0) {
    lVar27 = CONCAT44(uVar23,iVar24);
    lVar25 = param_3 + -4;
    lVar26 = param_2 + 4;
    do {
      pfVar22 = (float *)lVar26;
      fVar17 = pfVar22[1];
      fVar18 = pfVar22[-1];
      fVar19 = *pfVar22;
      fVar20 = fVar21 / (fVar19 * fVar14 + fVar18 * fVar13 + fVar17 * fVar15 + fVar16);
      *(float *)((int)lVar25 + 4) =
           (fVar19 * fVar2 + fVar18 * fVar1 + fVar17 * fVar3 + fVar4) * fVar20;
      *(float *)(((int)param_3 - (int)param_2) + (int)pfVar22) =
           fVar20 * (fVar19 * fVar6 + fVar18 * fVar5 + fVar17 * fVar7 + fVar8);
      lVar25 = lVar25 + 0xc;
      *(float *)lVar25 = fVar20 * (fVar19 * fVar10 + fVar18 * fVar9 + fVar17 * fVar11 + fVar12);
      lVar26 = lVar26 + 0xc;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  fn_82F6A580();
  return;
}


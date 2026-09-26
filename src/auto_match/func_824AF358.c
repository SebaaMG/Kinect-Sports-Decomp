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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_58;
extern int fn_8255AE78();
extern unsigned int lbl_82191418;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954EC;
extern unsigned int lbl_821956D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_824AF358(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined8 in_r0;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00010474;
  float in_register_00010478;
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
  float fVar22;
  float afStack_60 [2];
  float fStack_58;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x14) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar2 + 0x14) + -1;
    if ((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc)) / 0xf0 <= iVar5) {
      iVar5 = iVar5 - (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0xf0;
    }
    iVar5 = iVar5 * 0xf0 + *(int *)(iVar2 + 0xc);
  }
  if (iVar5 != 0) {
    bVar6 = *(int *)(iVar2 + 0x38) != 0;
    fVar1 = lbl_821956D8;
    if (!bVar6) {
      fVar1 = lbl_82191418;
    }
    pfVar3 = (float *)(iVar5 + 0x80U & 0xfffffff0);
    fVar19 = *pfVar3;
    fVar20 = pfVar3[1];
    fVar21 = pfVar3[2];
    fVar22 = pfVar3[3];
    pfVar3 = (float *)(iVar5 + 0x90U & 0xfffffff0);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = pfVar3[3];
    pfVar3 = (float *)((uint)bVar6 * 0x10 + iVar5 & 0xfffffff0);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar13 = pfVar3[2];
    fVar14 = pfVar3[3];
    fVar15 = fVar7 - fVar19;
    fVar16 = fVar8 - fVar20;
    fVar17 = fVar9 - fVar21;
    fVar18 = fVar10 - fVar22;
    fn_8255AE78((double)(fVar1 * lbl_821954EC - lbl_831E4E38));
    fVar4 = lbl_821CC160;
    loadVectorLeftIndexed128(in_r0,0xffffffff8218e8e8);
    fVar11 = fVar11 - (fVar15 * fVar7 + fVar19);
    fVar12 = fVar12 - (fVar16 * fVar8 + fVar20);
    fVar13 = fVar13 - (fVar17 * fVar9 + fVar21);
    fVar14 = fVar14 - (fVar18 * fVar10 + fVar22);
    iVar2 = (int)in_r0;
    pfVar3 = (float *)((int)afStack_60 + iVar2 & 0xfffffff0);
    *pfVar3 = fVar11;
    pfVar3[1] = fVar12;
    pfVar3[2] = fVar13;
    pfVar3[3] = fVar14;
    fVar1 = lbl_821917C0;
    if (fVar4 <= fStack_58) {
      fVar15 = fVar11 * 0.0 + in_register_00010474 * fVar12 + in_register_00010478 * fVar13;
      pfVar3 = (float *)((int)afStack_60 + iVar2 & 0xfffffff0);
      *pfVar3 = fVar11;
      pfVar3[1] = fVar12;
      pfVar3[2] = fVar13;
      pfVar3[3] = fVar14;
      pfVar3 = (float *)((int)afStack_60 + iVar2 & 0xfffffff0);
      *pfVar3 = fVar15;
      pfVar3[1] = fVar15;
      pfVar3[2] = fVar15;
      pfVar3[3] = fVar15;
      if ((fVar1 <= SQRT(fStack_58 * fStack_58 + afStack_60[0] * afStack_60[0])) &&
         (((!bVar6 && (fVar4 < afStack_60[0])) || ((bVar6 && (afStack_60[0] < fVar4)))))) {
        return 1;
      }
    }
  }
  return 0;
}


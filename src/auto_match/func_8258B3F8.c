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
#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C08DC;
extern unsigned int lbl_831C08E0;
extern unsigned int lbl_831C08E4;


void fn_8258B3F8(uint *param_1,float *param_2,float *param_3,uint *param_4,uint *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  fVar12 = lbl_821CC160;
  fVar11 = lbl_821CA460;
  uVar13 = *param_1;
  uVar15 = (ulonglong)uVar13;
  uVar16 = param_1[3];
  fVar1 = *param_2 - (float)(longlong)(int)param_1[9];
  fVar2 = *param_3 - (float)(longlong)(int)param_1[9];
  fVar7 = (lbl_821CA460 / (float)(longlong)lbl_831C08DC) * fVar1;
  fVar6 = (lbl_821CA460 / (float)(longlong)lbl_831C08DC) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar7 = fVar7 - lbl_821CA460;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar6 = fVar6 - lbl_821CA460;
  }
  uVar17 = (ulonglong)(uint)(int)fVar7;
  if ((int)fVar7 < (int)uVar13) {
    uVar17 = uVar15;
  }
  if ((int)uVar16 <= (int)uVar17) {
    uVar17 = (ulonglong)uVar16;
  }
  uVar3 = *param_4;
  uVar8 = (uint)((uVar17 - uVar15 & 0x7ff) << 0x15);
  *param_4 = uVar8 | uVar3 & 0x1fffff;
  uVar17 = (ulonglong)(uint)(int)fVar6;
  if ((int)fVar6 < (int)uVar13) {
    uVar17 = uVar15;
  }
  uVar14 = (ulonglong)uVar16;
  if ((int)uVar17 < (int)uVar16) {
    uVar14 = uVar17;
  }
  uVar13 = param_1[10];
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  lVar18 = (longlong)lbl_831C08E0;
  uVar16 = *param_5;
  uVar4 = param_1[1];
  uVar9 = (uint)((uVar14 - uVar15 & 0x7ff) << 0x15);
  uVar5 = param_1[4];
  *param_5 = uVar9 | uVar16 & 0x1fffff;
  fVar1 = fVar1 - (float)(longlong)(int)uVar13;
  fVar2 = fVar2 - (float)(longlong)(int)uVar13;
  fVar7 = (fVar11 / (float)lVar18) * fVar1;
  fVar6 = (fVar11 / (float)lVar18) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar12) << 2) | (uint)(NAN(fVar1) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar7 = fVar7 - fVar11;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < fVar12) << 2) | (uint)(NAN(fVar2) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar6 = fVar6 - fVar11;
  }
  uVar15 = (ulonglong)(uint)(int)fVar7;
  if ((int)fVar7 < (int)uVar4) {
    uVar15 = (ulonglong)uVar4;
  }
  if ((int)uVar5 <= (int)uVar15) {
    uVar15 = (ulonglong)uVar5;
  }
  uVar13 = param_1[1];
  uVar10 = (uint)((uVar15 - uVar13 & 0xffffffff) << 0xb) & 0x1ff800;
  *param_4 = uVar10 | uVar8 | uVar3 & 0x7ff;
  uVar15 = (ulonglong)uVar13;
  if ((int)uVar13 <= (int)fVar6) {
    uVar15 = (ulonglong)(uint)(int)fVar6;
  }
  uVar17 = (ulonglong)uVar5;
  if ((int)uVar15 < (int)uVar5) {
    uVar17 = uVar15;
  }
  lVar18 = (longlong)lbl_831C08E4;
  fVar1 = param_2[2];
  uVar13 = param_1[0xb];
  fVar2 = param_3[2];
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = (uint)((uVar17 - uVar4 & 0xffffffff) << 0xb) & 0x1ff800;
  *param_5 = uVar4 | uVar9 | uVar16 & 0x7ff;
  fVar1 = fVar1 - (float)(longlong)(int)uVar13;
  fVar2 = fVar2 - (float)(longlong)(int)uVar13;
  fVar7 = (fVar11 / (float)lVar18) * fVar1;
  fVar6 = (fVar11 / (float)lVar18) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar12) << 2) | (uint)(NAN(fVar1) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar7 = fVar7 - fVar11;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < fVar12) << 2) | (uint)(NAN(fVar2) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar6 = fVar6 - fVar11;
  }
  uVar13 = (int)fVar7;
  if ((int)fVar7 < (int)uVar3) {
    uVar13 = uVar3;
  }
  if ((int)uVar5 <= (int)uVar13) {
    uVar13 = uVar5;
  }
  uVar16 = param_1[2];
  *param_4 = uVar10 | uVar8 | uVar13 - uVar16 & 0x7ff;
  if ((int)uVar16 <= (int)fVar6) {
    uVar16 = (int)fVar6;
  }
  if ((int)uVar5 <= (int)uVar16) {
    uVar16 = uVar5;
  }
  *param_5 = uVar4 | uVar9 | uVar16 - uVar3 & 0x7ff;
  return;
}


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
extern unsigned int *auStack_104;
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern float lbl_82017F04;
extern unsigned int lbl_82017F08;
extern unsigned int lbl_82017F0C;
extern float lbl_82175460;
extern unsigned int uStack_180;


void fn_829C2C00(undefined8 param_1,int param_2,longlong param_3,longlong param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 uStack_180;
  longlong lStack_178;
  longlong lStack_170;
  float afStack_160 [16];
  float afStack_120 [7];
  undefined1 auStack_104 [4];
  float afStack_100 [8];
  float afStack_e0 [8];
  float afStack_c0 [8];
  float afStack_a0 [8];
  float afStack_80 [32];
  
  iVar22 = fn_82F6A540();
  fVar21 = lbl_82175460;
  fVar20 = lbl_82017F0C;
  fVar19 = lbl_82017F08;
  fVar18 = lbl_82017F04;
  param_3 = param_3 + 0x6e;
  lVar26 = 8;
  iVar23 = *(int *)(iVar22 + 0x148) + 0x80;
  iVar22 = *(int *)(param_2 + 0x50) + 0xdc;
  puVar24 = auStack_104;
  do {
    iVar4 = (int)param_3;
    if ((((*(short *)(iVar4 + -0x5e) == 0) && (*(short *)(iVar4 + -0x4e) == 0)) &&
        (*(short *)(iVar4 + -0x3e) == 0)) &&
       (((*(short *)(iVar4 + -0x2e) == 0 && (*(short *)(iVar4 + -0x1e) == 0)) &&
        ((*(short *)(iVar4 + -0xe) == 0 && (*(short *)(iVar4 + 2) == 0)))))) {
      lStack_170 = (longlong)*(short *)(iVar4 + -0x6e);
      fVar1 = (float)lStack_170 * *(float *)(iVar22 + -0xdc);
      *(float *)(puVar24 + -0x5c) = fVar1;
      *(float *)(puVar24 + -0x3c) = fVar1;
      *(float *)(puVar24 + -0x1c) = fVar1;
      *(float *)(puVar24 + 4) = fVar1;
      *(float *)(puVar24 + 0x24) = fVar1;
      *(float *)(puVar24 + 0x44) = fVar1;
      *(float *)(puVar24 + 100) = fVar1;
      *(float *)(puVar24 + 0x84) = fVar1;
    }
    else {
      uStack_180 = (longlong)*(short *)(iVar4 + -0x3e);
      lStack_178 = (longlong)*(short *)(iVar4 + -0x6e);
      fVar2 = (float)(longlong)*(short *)(iVar4 + -0xe) * *(float *)(iVar22 + -0x1c);
      fVar1 = (float)(longlong)*(short *)(iVar4 + -0x4e) * *(float *)(iVar22 + -0x9c);
      fVar5 = (float)lStack_178 * *(float *)(iVar22 + -0xdc);
      fVar6 = (float)(longlong)*(short *)(iVar4 + -0x2e) * *(float *)(iVar22 + -0x5c);
      fVar7 = (float)(longlong)(int)*(short *)(iVar4 + -0x5e) * *(float *)(iVar22 + -0xbc);
      fVar8 = (float)uStack_180 * *(float *)(iVar22 + -0x7c);
      fVar9 = (float)(longlong)*(short *)(iVar4 + -0x1e) * *(float *)(iVar22 + -0x3c);
      fVar10 = (float)(longlong)*(short *)(iVar4 + 2) * *(float *)(iVar22 + 4);
      fVar11 = fVar2 + fVar1;
      fVar3 = fVar6 + fVar5;
      fVar5 = fVar5 - fVar6;
      fVar12 = fVar9 + fVar8;
      fVar9 = fVar9 - fVar8;
      fVar1 = (fVar1 - fVar2) * lbl_82175460 - fVar11;
      fVar2 = fVar11 + fVar3;
      fVar3 = fVar3 - fVar11;
      fVar6 = fVar7 - fVar10;
      fVar8 = fVar1 + fVar5;
      fVar5 = fVar5 - fVar1;
      fVar10 = fVar10 + fVar7;
      fVar7 = fVar10 + fVar12;
      fVar11 = (fVar6 + fVar9) * lbl_82017F04;
      *(float *)(puVar24 + -0x5c) = fVar7 + fVar2;
      *(float *)(puVar24 + 0x84) = fVar2 - fVar7;
      fVar7 = -(fVar9 * lbl_82017F08 - fVar11) - fVar7;
      fVar1 = (fVar10 - fVar12) * lbl_82175460 - fVar7;
      *(float *)(puVar24 + -0x3c) = fVar7 + fVar8;
      *(float *)(puVar24 + 100) = fVar8 - fVar7;
      fVar2 = (fVar6 * lbl_82017F0C - fVar11) + fVar1;
      *(float *)(puVar24 + -0x1c) = fVar1 + fVar5;
      *(float *)(puVar24 + 0x44) = fVar5 - fVar1;
      *(float *)(puVar24 + 0x24) = fVar2 + fVar3;
      *(float *)(puVar24 + 4) = fVar3 - fVar2;
    }
    puVar24 = puVar24 + 4;
    iVar22 = iVar22 + 4;
    param_3 = param_3 + 2;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  pfVar25 = (float *)((int)&uStack_180 + 4);
  param_4 = param_4 + -4;
  lVar26 = 8;
  do {
    param_4 = param_4 + 4;
    fVar5 = pfVar25[7] - pfVar25[0xb];
    pfVar13 = pfVar25 + 0xd;
    fVar3 = pfVar25[7] + pfVar25[0xb];
    pfVar14 = pfVar25 + 9;
    pfVar15 = pfVar25 + 0xc;
    fVar6 = *pfVar13 + *pfVar14;
    pfVar16 = pfVar25 + 10;
    pfVar17 = pfVar25 + 0xe;
    fVar7 = *pfVar16 + *pfVar15;
    pfVar25 = pfVar25 + 8;
    fVar8 = *pfVar15 - *pfVar16;
    fVar9 = *pfVar17 + *pfVar25;
    iVar22 = *(int *)param_4 + param_5;
    fVar10 = *pfVar25 - *pfVar17;
    fVar2 = fVar6 + fVar3;
    fVar1 = (*pfVar14 - *pfVar13) * fVar21 - fVar6;
    fVar3 = fVar3 - fVar6;
    fVar11 = fVar9 + fVar7;
    fVar6 = fVar1 + fVar5;
    fVar5 = fVar5 - fVar1;
    fVar12 = (fVar10 + fVar8) * fVar18;
    fVar8 = -(fVar8 * fVar19 - fVar12) - fVar11;
    *(undefined1 *)(*(int *)param_4 + param_5) =
         *(undefined1 *)(((int)(fVar11 + fVar2) + 4 >> 3 & 0x3ffU) + iVar23);
    fVar1 = (fVar9 - fVar7) * fVar21 - fVar8;
    *(undefined1 *)(iVar22 + 7) =
         *(undefined1 *)(((int)(fVar2 - fVar11) + 4 >> 3 & 0x3ffU) + iVar23);
    fVar2 = (fVar10 * fVar20 - fVar12) + fVar1;
    *(undefined1 *)(iVar22 + 1) = *(undefined1 *)(((int)(fVar8 + fVar6) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    *(undefined1 *)(iVar22 + 6) = *(undefined1 *)(((int)(fVar6 - fVar8) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    *(undefined1 *)(iVar22 + 2) = *(undefined1 *)(((int)(fVar1 + fVar5) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    *(undefined1 *)(iVar22 + 5) = *(undefined1 *)(((int)(fVar5 - fVar1) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    *(undefined1 *)(iVar22 + 4) = *(undefined1 *)(((int)(fVar2 + fVar3) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    *(undefined1 *)(iVar22 + 3) = *(undefined1 *)(((int)(fVar3 - fVar2) + 4 >> 3 & 0x3ffU) + iVar23)
    ;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  fn_82F6A58C();
  return;
}


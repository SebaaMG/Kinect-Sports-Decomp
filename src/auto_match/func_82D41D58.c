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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82D41B18();
extern int fn_82D41C68();
extern unsigned int lbl_8209AB20;
extern unsigned int lbl_82132D70;
extern unsigned int lbl_82134508;


void fn_82D41D58(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  undefined8 in_r0;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [112];
  
  iVar13 = (int)in_r0;
  fVar16 = *(float *)((int)auStack_80 + iVar13 & 0xfffffff0);
  iVar14 = 0;
  auStack_80[0] = lbl_82134508;
  fVar19 = *(float *)((int)auStack_80 + iVar13 & 0xfffffff0);
  puVar9 = (uint *)((uint)(&lbl_8209AB20 + iVar13) & 0xfffffff0);
  fVar24 = (float)((uint)fVar19 ^ puVar9[3]);
  fVar23 = (float)((uint)fVar19 ^ puVar9[2]);
  fVar22 = (float)((uint)fVar19 ^ puVar9[1]);
  fVar21 = (float)((uint)fVar19 ^ *puVar9);
  fVar27 = fVar19;
  fVar26 = fVar19;
  fVar25 = fVar19;
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar15 = 0;
    fVar17 = fVar16;
    fVar18 = fVar16;
    fVar20 = fVar16;
    do {
      fn_82D41B18((ulonglong)*(uint *)(param_1 + 0xb4) + lVar15,param_1 + 0x80,auStack_80);
      iVar13 = *(int *)(param_1 + 0xb8);
      iVar14 = iVar14 + 1;
      iVar11 = (int)in_r0;
      pfVar10 = (float *)((int)auStack_80 + iVar11 & 0xfffffff0);
      lVar15 = lVar15 + 0x60;
      pfVar12 = (float *)((uint)(auStack_70 + iVar11) & 0xfffffff0);
      fVar5 = *pfVar10 - fVar20;
      fVar6 = pfVar10[1] - fVar18;
      fVar7 = pfVar10[2] - fVar17;
      fVar8 = pfVar10[3] - fVar16;
      fVar1 = *pfVar12 + fVar20;
      fVar2 = pfVar12[1] + fVar18;
      fVar3 = pfVar12[2] + fVar17;
      fVar4 = pfVar12[3] + fVar16;
      pfVar10 = (float *)((int)auStack_80 + iVar11 & 0xfffffff0);
      *pfVar10 = fVar5;
      pfVar10[1] = fVar6;
      pfVar10[2] = fVar7;
      pfVar10[3] = fVar8;
      if (fVar5 < fVar25) {
        fVar25 = fVar5;
      }
      if (fVar6 < fVar26) {
        fVar26 = fVar6;
      }
      if (fVar7 < fVar27) {
        fVar27 = fVar7;
      }
      if (fVar8 < fVar19) {
        fVar19 = fVar8;
      }
      pfVar10 = (float *)((uint)(auStack_70 + iVar11) & 0xfffffff0);
      *pfVar10 = fVar1;
      pfVar10[1] = fVar2;
      pfVar10[2] = fVar3;
      pfVar10[3] = fVar4;
      if (fVar21 < fVar1) {
        fVar21 = fVar1;
      }
      if (fVar22 < fVar2) {
        fVar22 = fVar2;
      }
      if (fVar23 < fVar3) {
        fVar23 = fVar3;
      }
      if (fVar24 < fVar4) {
        fVar24 = fVar4;
      }
    } while (iVar14 < iVar13);
  }
  iVar13 = (int)in_r0;
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar15 = 0;
    do {
      fn_82D41C68(lVar15 + (ulonglong)*(uint *)(param_1 + 0xc0),auStack_80);
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 0x40;
      iVar13 = (int)in_r0;
      pfVar10 = (float *)((int)auStack_80 + iVar13 & 0xfffffff0);
      pfVar12 = (float *)((uint)(auStack_70 + iVar13) & 0xfffffff0);
      if (*pfVar10 < fVar25) {
        fVar25 = *pfVar10;
      }
      if (pfVar10[1] < fVar26) {
        fVar26 = pfVar10[1];
      }
      if (pfVar10[2] < fVar27) {
        fVar27 = pfVar10[2];
      }
      if (pfVar10[3] < fVar19) {
        fVar19 = pfVar10[3];
      }
      if (fVar21 < *pfVar12) {
        fVar21 = *pfVar12;
      }
      if (fVar22 < pfVar12[1]) {
        fVar22 = pfVar12[1];
      }
      if (fVar23 < pfVar12[2]) {
        fVar23 = pfVar12[2];
      }
      if (fVar24 < pfVar12[3]) {
        fVar24 = pfVar12[3];
      }
    } while (iVar14 < *(int *)(param_1 + 0xc4));
  }
  pfVar10 = (float *)((uint)(&lbl_82132D70 + iVar13) & 0xfffffff0);
  fVar16 = pfVar10[1];
  fVar17 = pfVar10[2];
  fVar18 = pfVar10[3];
  pfVar12 = (float *)(param_1 + 0xa0U & 0xfffffff0);
  *pfVar12 = *pfVar10 * (fVar25 + fVar21);
  pfVar12[1] = fVar16 * (fVar26 + fVar22);
  pfVar12[2] = fVar17 * (fVar27 + fVar23);
  pfVar12[3] = fVar18 * (fVar19 + fVar24);
  pfVar10 = (float *)((uint)(&lbl_82132D70 + iVar13) & 0xfffffff0);
  fVar16 = pfVar10[1];
  fVar17 = pfVar10[2];
  fVar18 = pfVar10[3];
  pfVar12 = (float *)(param_1 + 0x90U & 0xfffffff0);
  *pfVar12 = *pfVar10 * (fVar21 - fVar25);
  pfVar12[1] = fVar16 * (fVar22 - fVar26);
  pfVar12[2] = fVar17 * (fVar23 - fVar27);
  pfVar12[3] = fVar18 * (fVar24 - fVar19);
  return;
}


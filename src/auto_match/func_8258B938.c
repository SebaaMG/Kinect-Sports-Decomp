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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C08DC;
extern unsigned int lbl_831C08E0;
extern unsigned int lbl_831C08E4;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8258B938(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_r0;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 in_vr8 [16];
  undefined1 in_vr9 [16];
  undefined1 in_vr10 [16];
  undefined1 auVar18 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar19 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar20 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;

  cVar5 = *(char *)(param_1 + 0xd1);
  memcpy((void *)(auVar17), (const void *)(param_1 + 0x180U & 0xfffffff0), 16);
  memcpy((void *)(auVar20), (const void *)(param_1 + 400U & 0xfffffff0), 16);
  iVar16 = (int)in_r0;
  memcpy((void *)((const void *)((int)&fStack_30 + iVar16 & 0xfffffff0)), auVar17, 16);
  memcpy((void *)((const void *)((int)&fStack_20 + iVar16 & 0xfffffff0)), auVar20, 16);
  if (cVar5 == '\0') {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(in_r0,0xffffffff82005748);
    loadVectorLeftIndexed128(0xffffffff821954b0,0x18c);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,auVar20,4,3); memcpy(auVar19, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr12,4,3); memcpy(auVar18, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr9,auVar17,4,3); memcpy(auVar20, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr8,auVar17,4,3); memcpy(auVar17, &_vt3, 16); }{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(auVar18,auVar20,3,2); memcpy(auVar20, &_vt4, 16); }{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(auVar19,auVar17,3,2); memcpy(auVar17, &_vt5, 16); }
    memcpy((void *)((const void *)((int)&fStack_30 + iVar16 & 0xfffffff0)), auVar20, 16);
    memcpy((void *)((const void *)((int)&fStack_20 + iVar16 & 0xfffffff0)), auVar17, 16);
  }
  uVar15 = lbl_831C08E4;
  uVar14 = lbl_831C08E0;
  uVar13 = lbl_831C08DC;
  fVar12 = lbl_821CC160;
  bVar1 = (int)lbl_831C08E0 < 0;
  uVar3 = lbl_831C08E0 & 1;
  iVar16 = (int)lbl_831C08E0 >> 1;
  bVar2 = (int)lbl_831C08E4 < 0;
  uVar4 = lbl_831C08E4 & 1;
  iVar6 = (int)lbl_831C08E4 >> 1;
  *param_5 = -(((int)lbl_831C08DC >> 1) + (uint)((int)lbl_831C08DC < 0 && (lbl_831C08DC & 1) != 0));
  param_5[1] = -(iVar16 + (uint)(bVar1 && uVar3 != 0));
  param_5[2] = -(iVar6 + (uint)(bVar2 && uVar4 != 0));
  fVar11 = lbl_821CA460;
  fVar8 = fStack_30 - (float)(longlong)*param_5;
  if (fVar8 < fVar12) {
    fVar10 = lbl_821CA460 / (float)(longlong)(int)uVar13;
    fVar8 = fVar10 * fVar8 - lbl_821CA460;
  }
  else {
    fVar10 = lbl_821CA460 / (float)(longlong)(int)uVar13;
    fVar8 = fVar10 * fVar8;
  }
  *param_2 = (int)fVar8;
  fVar8 = fStack_2c - (float)(longlong)param_5[1];
  if (fVar8 < fVar12) {
    fVar9 = fVar11 / (float)(longlong)(int)uVar14;
    fVar8 = fVar9 * fVar8 - fVar11;
  }
  else {
    fVar9 = fVar11 / (float)(longlong)(int)uVar14;
    fVar8 = fVar9 * fVar8;
  }
  param_2[1] = (int)fVar8;
  fVar8 = fStack_28 - (float)(longlong)param_5[2];
  if (fVar8 < fVar12) {
    fVar7 = fVar11 / (float)(longlong)(int)uVar15;
    fVar8 = fVar7 * fVar8 - fVar11;
  }
  else {
    fVar7 = fVar11 / (float)(longlong)(int)uVar15;
    fVar8 = fVar7 * fVar8;
  }
  param_2[2] = (int)fVar8;
  fVar8 = fStack_20 - (float)(longlong)*param_5;
  if (fVar8 < fVar12) {
    fVar10 = fVar10 * fVar8 - fVar11;
  }
  else {
    fVar10 = fVar10 * fVar8;
  }
  *param_3 = (int)fVar10;
  fVar8 = fStack_1c - (float)(longlong)param_5[1];
  if (fVar8 < fVar12) {
    fVar9 = fVar9 * fVar8 - fVar11;
  }
  else {
    fVar9 = fVar9 * fVar8;
  }
  param_3[1] = (int)fVar9;
  fVar8 = fStack_18 - (float)(longlong)param_5[2];
  if (fVar8 < fVar12) {
    fVar7 = fVar7 * fVar8 - fVar11;
  }
  else {
    fVar7 = fVar7 * fVar8;
  }
  param_3[2] = (int)fVar7;
  iVar16 = ((int)fVar10 - *param_2) + 1;
  *param_4 = iVar16;
  iVar16 = ((param_3[1] - param_2[1]) + 1) * iVar16;
  param_4[1] = iVar16;
  param_4[2] = ((param_3[2] - param_2[2]) + 1) * iVar16;
  return;
}

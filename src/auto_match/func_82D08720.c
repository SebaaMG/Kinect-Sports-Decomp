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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_b0;
extern int fn_82D085B0();
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D08720(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,longlong param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined8 in_r0;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float in_register_000100c0;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  uVar7 = ZEXT48(&stack0x00000000);
  iVar2 = (int)in_r0;
  puVar1 = (undefined4 *)(iVar2 + param_5 & 0xfffffff0);
  uVar18 = puVar1[1];
  uVar20 = puVar1[2];
  uVar22 = puVar1[3];
  puVar3 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
  uVar26 = *puVar3;
  uVar27 = puVar3[1];
  uVar28 = puVar3[2];
  uVar29 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_a0 + iVar2) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar18;
  puVar3[2] = uVar20;
  puVar3[3] = uVar22;
  puVar1 = (undefined4 *)((uint)(auStack_90 + iVar2) & 0xfffffff0);
  *puVar1 = uVar26;
  puVar1[1] = uVar27;
  puVar1[2] = uVar28;
  puVar1[3] = uVar29;
  dVar13 = (double)fn_82D085B0();
  iVar2 = (int)param_7;
  dVar15 = (double)lbl_82002AE0;
  loadVectorLeftIndexed128(in_r0,0xffffffff8200133c);
  dVar16 = (double)(float)(dVar15 / param_1);
  lVar9 = (uVar7 - 0xa0) - param_7;
  lVar8 = 2;
  fVar30 = in_register_000100c0;
  fVar31 = in_register_000100c0;
  fVar32 = in_register_000100c0;
  do {
    lVar11 = lVar9 + param_7;
    lVar10 = 3;
    do {
      pfVar12 = (float *)lVar11;
      *pfVar12 = (float)(param_1 + (double)*pfVar12);
      dVar14 = (double)fn_82D085B0(param_2,param_3,param_4,uVar7 - 0xa0);
      lVar10 = lVar10 + -1;
      *(float *)((int)pfVar12 + (iVar2 - param_5) + (param_5 - (int)auStack_a0)) =
           (float)((double)(float)(dVar14 - dVar13) * dVar16);
      *pfVar12 = *(float *)((param_5 - (int)auStack_a0) + (int)pfVar12);
      lVar11 = lVar11 + 4;
    } while (lVar10 != 0);
    iVar4 = (int)in_r0;
    pfVar12 = (float *)(iVar4 + (int)param_7 & 0xfffffff0);
    fVar19 = pfVar12[1];
    fVar21 = pfVar12[2];
    fVar23 = pfVar12[3];
    lVar8 = lVar8 + -1;
    pfVar5 = (float *)(iVar4 + (int)param_7 & 0xfffffff0);
    *pfVar5 = *pfVar12 * in_register_000100c0;
    pfVar5[1] = fVar19 * fVar30;
    pfVar5[2] = fVar21 * fVar31;
    pfVar5[3] = fVar23 * fVar32;
    param_7 = param_7 + 0x10;
  } while (lVar8 != 0);
  iVar6 = iVar2 + 0x10;
  pfVar12 = (float *)(iVar4 + iVar2 & 0xfffffff0);
  fVar30 = *pfVar12;
  fVar31 = pfVar12[1];
  fVar32 = pfVar12[2];
  fVar19 = pfVar12[3];
  pfVar12 = (float *)(iVar4 + iVar6 & 0xfffffff0);
  fVar21 = *pfVar12;
  fVar23 = pfVar12[1];
  fVar24 = pfVar12[2];
  fVar25 = pfVar12[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs43); memcpy(auVar17, &_vt0, 16); }
  uVar18 = storeVectorElementWordIndexed(auVar17,0,uVar7 - 0xb0);
  *(undefined4 *)(uVar7 - 0xb0) = uVar18;
  if (dVar15 < (double)fStack_b0) {
    loadVectorLeftIndexed128(in_r0,uVar7 - 0xb0);
    pfVar12 = (float *)(iVar4 + iVar2 & 0xfffffff0);
    *pfVar12 = fVar30 * fVar21;
    pfVar12[1] = fVar31 * fVar23;
    pfVar12[2] = fVar32 * fVar24;
    pfVar12[3] = fVar19 * fVar25;
    pfVar12 = (float *)(iVar4 + iVar6 & 0xfffffff0);
    fVar30 = pfVar12[1];
    fVar31 = pfVar12[2];
    fVar32 = pfVar12[3];
    pfVar5 = (float *)(iVar4 + iVar6 & 0xfffffff0);
    *pfVar5 = *pfVar12 * fVar21;
    pfVar5[1] = fVar30 * fVar23;
    pfVar5[2] = fVar31 * fVar24;
    pfVar5[3] = fVar32 * fVar25;
  }
  return;
}


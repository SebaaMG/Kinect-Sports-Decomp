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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82D067F8(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  float *pfVar7;
  double extraout_f1;
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
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [176];
  
  pfVar7 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  fVar8 = *pfVar7;
  fVar9 = pfVar7[1];
  fVar10 = pfVar7[2];
  fVar11 = pfVar7[3];
  pfVar7 = (float *)((int)in_r0 + param_1 & 0xfffffff0);
  *pfVar7 = fVar8;
  pfVar7[1] = fVar9;
  pfVar7[2] = fVar10;
  pfVar7[3] = fVar11;
  puVar5 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar18 = puVar5[1];
  uVar20 = puVar5[2];
  uVar22 = puVar5[3];
  puVar6 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar18;
  puVar6[2] = uVar20;
  puVar6[3] = uVar22;
  puVar5 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar18 = puVar5[1];
  uVar20 = puVar5[2];
  uVar22 = puVar5[3];
  puVar6 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar18;
  puVar6[2] = uVar20;
  puVar6[3] = uVar22;
  puVar5 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar18 = puVar5[1];
  uVar20 = puVar5[2];
  uVar22 = puVar5[3];
  puVar6 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar18;
  puVar6[2] = uVar20;
  puVar6[3] = uVar22;
  pfVar7 = (float *)fn_82F6A510();
  fVar12 = pfVar7[1];
  fVar13 = pfVar7[7];
  fVar14 = pfVar7[0xe];
  fVar15 = pfVar7[8];
  fVar16 = pfVar7[4];
  fVar17 = *pfVar7;
  fVar19 = pfVar7[9];
  fVar21 = pfVar7[6];
  fVar23 = pfVar7[0xb];
  fVar24 = pfVar7[0xf];
  fVar25 = pfVar7[5];
  fVar26 = pfVar7[3];
  fVar27 = pfVar7[10];
  fVar28 = pfVar7[0xc];
  fVar29 = pfVar7[2];
  fVar1 = pfVar7[0xd];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x128);
  if (ABS((double)((fVar29 * fVar13 - fVar26 * fVar21) * (fVar1 * fVar15 - fVar28 * fVar19) +
                  -((fVar23 * fVar29 - fVar27 * fVar26) * (fVar1 * fVar16 - fVar28 * fVar25) -
                   ((fVar23 * fVar21 - fVar27 * fVar13) * (fVar1 * fVar17 - fVar28 * fVar12) +
                   (fVar24 * fVar29 - fVar14 * fVar26) * (fVar19 * fVar16 - fVar15 * fVar25) +
                   ((fVar24 * fVar27 - fVar14 * fVar23) * (fVar17 * fVar25 - fVar12 * fVar16) -
                   (fVar24 * fVar21 - fVar14 * fVar13) * (fVar19 * fVar17 - fVar15 * fVar12)))))) <=
      extraout_f1) {
    fn_82F6A55C(1);
    return;
  }
  iVar3 = (int)in_r0;
  pfVar2 = (float *)((uint)(auStack_b0 + iVar3) & 0xfffffff0);
  fVar23 = *pfVar2;
  fVar24 = pfVar2[1];
  fVar25 = pfVar2[2];
  fVar26 = pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_e0 + iVar3) & 0xfffffff0);
  fVar16 = *pfVar2;
  fVar17 = pfVar2[1];
  fVar19 = pfVar2[2];
  fVar21 = pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_d0 + iVar3) & 0xfffffff0);
  fVar12 = *pfVar2;
  fVar13 = pfVar2[1];
  fVar14 = pfVar2[2];
  fVar15 = pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_c0 + iVar3) & 0xfffffff0);
  fVar27 = pfVar2[1];
  fVar28 = pfVar2[2];
  fVar29 = pfVar2[3];
  pfVar4 = (float *)((int)pfVar7 + iVar3 + 0x20 & 0xfffffff0);
  *pfVar4 = *pfVar2 * fVar8;
  pfVar4[1] = fVar27 * fVar9;
  pfVar4[2] = fVar28 * fVar10;
  pfVar4[3] = fVar29 * fVar11;
  pfVar2 = (float *)((int)pfVar7 + iVar3 + 0x10 & 0xfffffff0);
  *pfVar2 = fVar12 * fVar8;
  pfVar2[1] = fVar13 * fVar9;
  pfVar2[2] = fVar14 * fVar10;
  pfVar2[3] = fVar15 * fVar11;
  pfVar2 = (float *)(iVar3 + (int)pfVar7 & 0xfffffff0);
  *pfVar2 = fVar16 * fVar8;
  pfVar2[1] = fVar17 * fVar9;
  pfVar2[2] = fVar19 * fVar10;
  pfVar2[3] = fVar21 * fVar11;
  pfVar7 = (float *)((int)pfVar7 + iVar3 + 0x30 & 0xfffffff0);
  *pfVar7 = fVar23 * fVar8;
  pfVar7[1] = fVar24 * fVar9;
  pfVar7[2] = fVar25 * fVar10;
  pfVar7[3] = fVar26 * fVar11;
  fn_82F6A55C(0);
  return;
}


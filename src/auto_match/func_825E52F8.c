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
extern int fn_825E55D8();
extern int fn_82621930();
extern unsigned int lbl_8218DF78;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825E52F8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 in_r0;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 in_vs32 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar23 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  iVar16 = (int)param_4;
  iVar14 = (int)param_3;
  iVar12 = (int)param_2;
  iVar18 = (int)in_r0;
  uVar13 = 0x10;
  iVar15 = 0x10;
  iVar17 = 0;
  if (0 < *(int *)(param_1 + 0x5cc0)) {
    iVar19 = param_1 + 0x4c0;
    do {
      lVar11 = fn_825E55D8(param_1 + 0x280);
      iVar16 = (int)param_4;
      iVar14 = (int)param_3;
      iVar15 = (int)uVar13;
      iVar12 = (int)param_2;
      iVar18 = (int)in_r0;
      iVar17 = iVar17 + 1;
      *(uint *)(iVar19 + 0xa0) = (uint)(lVar11 != 0);
      iVar19 = iVar19 + 0xb0;
    } while (iVar17 < *(int *)(param_1 + 0x5cc0));
  }
  *(undefined4 *)(param_1 + 0x5cc4) = 0;
  if (0 < *(int *)(param_1 + 0x5cc0)) {
    iVar17 = *(int *)(param_1 + 0x5cc8);
    puVar4 = (undefined4 *)(iVar18 + iVar12 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar18 + iVar17 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar12 + iVar15 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + iVar15 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar12 + 0x20U & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0x20U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar12 + 0x30U & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0x30U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar18 + iVar14 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar18 + iVar17 + 0x40 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar14 + iVar15 & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0x40 + iVar15 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar14 + 0x20U & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0x60U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    puVar4 = (undefined4 *)(iVar14 + 0x30U & 0xfffffff0);
    uVar26 = puVar4[1];
    uVar27 = puVar4[2];
    uVar28 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0x70U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar26;
    puVar5[2] = uVar27;
    puVar5[3] = uVar28;
    uVar26 = lbl_8218DF78;
    pfVar6 = (float *)(iVar14 + iVar15 & 0xfffffff0);
    pfVar7 = (float *)(iVar18 + iVar12 & 0xfffffff0);
    pfVar8 = (float *)(iVar12 + iVar15 & 0xfffffff0);
    pfVar9 = (float *)(iVar12 + 0x30U & 0xfffffff0);
    pfVar10 = (float *)(iVar14 + 0x20U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar20, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs40,in_vs39); memcpy(auVar22, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs40,in_vs39); memcpy(auVar24, &_vt3, 16); }
    iVar12 = 0;
    vectorMergeHighWord(auVar21,auVar22);{ V16 _vt4 = vectorMergeLowWord(auVar21,auVar22); memcpy(auVar23, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar20,auVar24); memcpy(auVar22, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar20,auVar24); memcpy(auVar20, &_vt6, 16); }
    fVar1 = *pfVar7 * *pfVar6 + pfVar7[1] * pfVar6[1] + pfVar7[2] * pfVar6[2] +
            pfVar7[3] * pfVar6[3];
    fVar2 = *pfVar9 * *pfVar10 + pfVar9[1] * pfVar10[1] + pfVar9[2] * pfVar10[2] +
            pfVar9[3] * pfVar10[3];
    fVar3 = *pfVar8 * *pfVar6 + pfVar8[1] * pfVar6[1] + pfVar8[2] * pfVar6[2] +
            pfVar8[3] * pfVar6[3];{ V16 _vt7 = vectorMergeHighWord(auVar24,in_vs36); memcpy(auVar25, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(auVar21,in_vs43); memcpy(auVar24, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar21, &_vt9, 16); }
    vectorMergeHighWord(auVar25,auVar24);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar24, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar23,auVar20); memcpy(auVar20, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs44,in_vs33); memcpy(auVar25, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs42,in_vs61); memcpy(auVar23, &_vt13, 16); }
    pfVar6 = (float *)(iVar18 + iVar17 + 0x80 & 0xfffffff0);
    *pfVar6 = fVar1;
    pfVar6[1] = fVar1;
    pfVar6[2] = fVar1;
    pfVar6[3] = fVar1;{ V16 _vt14 = vectorMergeHighWord(in_vs41,auVar22); memcpy(auVar22, &_vt14, 16); }
    vectorMergeHighWord(auVar25,auVar21);
    vectorMergeHighWord(auVar23,auVar24);
    vectorMergeHighWord(auVar22,auVar20);
    pfVar6 = (float *)(iVar17 + 0x80 + iVar15 & 0xfffffff0);
    *pfVar6 = fVar3;
    pfVar6[1] = fVar3;
    pfVar6[2] = fVar3;
    pfVar6[3] = fVar3;
    iVar14 = 2;
    pfVar6 = (float *)(iVar17 + 0xa0U & 0xfffffff0);
    *pfVar6 = fVar1;
    pfVar6[1] = fVar1;
    pfVar6[2] = fVar1;
    pfVar6[3] = fVar1;
    pfVar6 = (float *)(iVar17 + 0xb0U & 0xfffffff0);
    *pfVar6 = fVar2;
    pfVar6[1] = fVar2;
    pfVar6[2] = fVar2;
    pfVar6[3] = fVar2;
    puVar4 = (undefined4 *)(iVar18 + iVar16 & 0xfffffff0);
    uVar27 = puVar4[1];
    uVar28 = puVar4[2];
    uVar29 = puVar4[3];
    puVar5 = (undefined4 *)(iVar17 + 0xc0U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar27;
    puVar5[2] = uVar28;
    puVar5[3] = uVar29;
    iVar18 = *(int *)(param_1 + 0x5cc8);
    do {
      iVar16 = 0;
      *(undefined4 *)(iVar12 + *(int *)(iVar18 + 0xd0)) = uVar26;
      lVar11 = 0x40;
      *(undefined4 *)(iVar12 + *(int *)(iVar18 + 0xd0) + 4) = uVar26;
      do {
        iVar15 = iVar14 + iVar16;
        iVar16 = iVar16 + 1;
        *(undefined4 *)(iVar15 * 4 + *(int *)(iVar18 + 0xd0)) = uVar26;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      iVar14 = iVar14 + 0x42;
      iVar12 = iVar12 + 0x108;
    } while (iVar14 < 0x4a42);
    iVar18 = 0;
    if (0 < *(int *)(param_1 + 0x5cc0)) {
      iVar12 = param_1 + 0x4e0;
      do {
        if (*(int *)(iVar12 + 0x80) != 0) {
          fn_82621930(*(undefined4 *)(param_1 + 0x5cc8),iVar12);
          *(int *)(param_1 + 0x5cc4) = *(int *)(param_1 + 0x5cc4) + 1;
        }
        iVar18 = iVar18 + 1;
        iVar12 = iVar12 + 0xb0;
      } while (iVar18 < *(int *)(param_1 + 0x5cc0));
    }
  }
  return;
}


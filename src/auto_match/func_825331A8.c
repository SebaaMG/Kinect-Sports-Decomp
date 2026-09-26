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
extern int fn_825330A8();
extern int fn_82630B08();
extern unsigned int lbl_8320A898;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825331A8(int *param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int in_r0;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar12;
  ulonglong uVar11;
  ulonglong uVar13;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fn_825330A8();
  pfVar5 = (float *)(param_2 + 0x20U & 0xfffffff0);
  fVar20 = *pfVar5;
  fVar21 = pfVar5[1];
  fVar22 = pfVar5[2];
  fVar23 = pfVar5[3];
  pfVar5 = (float *)(param_2 + 0x10U & 0xfffffff0);
  fVar24 = *pfVar5;
  fVar25 = pfVar5[1];
  fVar26 = pfVar5[2];
  fVar27 = pfVar5[3];{ V16 _vt0 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar15, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar19, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar18, &_vt3, 16); }
  vectorMergeHighWord(auVar15,auVar19);
  vectorMergeHighWord(auVar14,auVar18);
  vectorMergeLowWord(auVar15,auVar19);
  vectorMergeLowWord(auVar14,auVar18);
  uVar13 = (ulonglong)*(ushort *)(param_1 + 2);
  if (*(ushort *)(param_1 + 2) != 0) {
    iVar12 = 0;
    uVar9 = uVar13;
    do {
      iVar8 = param_1[1];
      if (iVar8 != 0) {
        pfVar5 = (float *)(iVar8 + iVar12 & 0xfffffff0);
        iVar10 = param_1[0x14] + iVar12;
        pfVar6 = (float *)(iVar8 + iVar12 + 0x20U & 0xfffffff0);
        pfVar7 = (float *)(iVar8 + iVar12 + 0x10U & 0xfffffff0);{ V16 _vt4 = vectorMergeHighWord(auVar15,auVar14); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar15,auVar14); memcpy(auVar16, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar19, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(in_vs39,in_vs40); memcpy(auVar14, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(auVar18,auVar19); memcpy(in_vs39, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar16,auVar14); memcpy(auVar15, &_vt9, 16); }{ V16 _vt10 = vectorMergeLowWord(auVar16,auVar14); memcpy(auVar17, &_vt10, 16); }{ V16 _vt11 = vectorMergeLowWord(auVar18,auVar19); memcpy(auVar16, &_vt11, 16); }
        fVar2 = fVar20 * *pfVar7 + fVar21 * pfVar7[1] + fVar22 * pfVar7[2] + fVar23 * pfVar7[3];
        fVar3 = fVar20 * *pfVar6 + fVar21 * pfVar6[1] + fVar22 * pfVar6[2] + fVar23 * pfVar6[3];
        fVar4 = fVar24 * *pfVar5 + fVar25 * pfVar5[1] + fVar26 * pfVar5[2] + fVar27 * pfVar5[3];{ V16 _vt12 = vectorMergeHighWord(auVar14,auVar18); memcpy(auVar19, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs36,in_vs35); memcpy(auVar18, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs33,in_vs34); memcpy(auVar14, &_vt14, 16); }
        vectorMergeHighWord(auVar19,auVar18);{ V16 _vt15 = vectorMergeHighWord(in_vs60,in_vs61); memcpy(auVar18, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(in_vs35, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(in_vs58,in_vs59); memcpy(in_vs34, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar16,auVar17); memcpy(auVar19, &_vt18, 16); }
        pfVar5 = (float *)(in_r0 + iVar10 & 0xfffffff0);
        *pfVar5 = fVar2;
        pfVar5[1] = fVar2;
        pfVar5[2] = fVar2;
        pfVar5[3] = fVar2;{ V16 _vt19 = vectorMergeHighWord(in_vs35,auVar14); memcpy(in_vs36, &_vt19, 16); }{ V16 _vt20 = vectorMergeHighWord(in_vs39,auVar15); memcpy(auVar14, &_vt20, 16); }{ V16 _vt21 = vectorMergeHighWord(in_vs34,auVar18); memcpy(in_vs40, &_vt21, 16); }{ V16 _vt22 = vectorMergeHighWord(auVar14,auVar19); memcpy(auVar15, &_vt22, 16); }
        pfVar5 = (float *)(iVar10 + 0x10U & 0xfffffff0);
        *pfVar5 = fVar3;
        pfVar5[1] = fVar3;
        pfVar5[2] = fVar3;
        pfVar5[3] = fVar3;
        pfVar5 = (float *)(iVar10 + 0x20U & 0xfffffff0);
        *pfVar5 = fVar2;
        pfVar5[1] = fVar2;
        pfVar5[2] = fVar2;
        pfVar5[3] = fVar2;
        pfVar5 = (float *)(iVar10 + 0x30U & 0xfffffff0);
        *pfVar5 = fVar4;
        pfVar5[1] = fVar4;
        pfVar5[2] = fVar4;
        pfVar5[3] = fVar4;
      }
      uVar9 = uVar9 - 1;
      iVar8 = *param_1 + iVar12;
      iVar10 = iVar12 + param_1[0x13];
      iVar12 = iVar12 + 0x40;
      pfVar5 = (float *)(in_r0 + iVar8 & 0xfffffff0);
      pfVar6 = (float *)(iVar8 + 0x20U & 0xfffffff0);
      pfVar7 = (float *)(iVar8 + 0x10U & 0xfffffff0);{ V16 _vt23 = vectorMergeHighWord(auVar14,auVar15); memcpy(auVar18, &_vt23, 16); }{ V16 _vt24 = vectorMergeLowWord(auVar14,auVar15); memcpy(auVar16, &_vt24, 16); }{ V16 _vt25 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar19, &_vt25, 16); }{ V16 _vt26 = vectorMergeLowWord(in_vs39,in_vs40); memcpy(auVar14, &_vt26, 16); }{ V16 _vt27 = vectorMergeHighWord(auVar18,auVar19); memcpy(in_vs39, &_vt27, 16); }{ V16 _vt28 = vectorMergeHighWord(auVar16,auVar14); memcpy(auVar15, &_vt28, 16); }{ V16 _vt29 = vectorMergeLowWord(auVar16,auVar14); memcpy(auVar17, &_vt29, 16); }{ V16 _vt30 = vectorMergeLowWord(auVar18,auVar19); memcpy(auVar16, &_vt30, 16); }
      fVar2 = fVar20 * *pfVar7 + fVar21 * pfVar7[1] + fVar22 * pfVar7[2] + fVar23 * pfVar7[3];
      fVar3 = fVar20 * *pfVar5 + fVar21 * pfVar5[1] + fVar22 * pfVar5[2] + fVar23 * pfVar5[3];
      fVar4 = fVar24 * *pfVar6 + fVar25 * pfVar6[1] + fVar26 * pfVar6[2] + fVar27 * pfVar6[3];{ V16 _vt31 = vectorMergeHighWord(auVar14,auVar18); memcpy(auVar19, &_vt31, 16); }{ V16 _vt32 = vectorMergeHighWord(in_vs36,in_vs35); memcpy(auVar18, &_vt32, 16); }{ V16 _vt33 = vectorMergeHighWord(in_vs33,in_vs34); memcpy(auVar14, &_vt33, 16); }
      vectorMergeHighWord(auVar19,auVar18);{ V16 _vt34 = vectorMergeHighWord(in_vs60,in_vs61); memcpy(auVar18, &_vt34, 16); }{ V16 _vt35 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(in_vs35, &_vt35, 16); }{ V16 _vt36 = vectorMergeHighWord(in_vs58,in_vs59); memcpy(in_vs34, &_vt36, 16); }{ V16 _vt37 = vectorMergeHighWord(auVar16,auVar17); memcpy(auVar19, &_vt37, 16); }
      pfVar5 = (float *)(in_r0 + iVar10 & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;{ V16 _vt38 = vectorMergeHighWord(in_vs35,auVar14); memcpy(in_vs36, &_vt38, 16); }{ V16 _vt39 = vectorMergeHighWord(in_vs39,auVar15); memcpy(auVar14, &_vt39, 16); }{ V16 _vt40 = vectorMergeHighWord(in_vs34,auVar18); memcpy(in_vs40, &_vt40, 16); }{ V16 _vt41 = vectorMergeHighWord(auVar14,auVar19); memcpy(auVar15, &_vt41, 16); }
      pfVar5 = (float *)(iVar10 + 0x10U & 0xfffffff0);
      *pfVar5 = fVar3;
      pfVar5[1] = fVar3;
      pfVar5[2] = fVar3;
      pfVar5[3] = fVar3;
      pfVar5 = (float *)(iVar10 + 0x20U & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;
      pfVar5 = (float *)(iVar10 + 0x30U & 0xfffffff0);
      *pfVar5 = fVar4;
      pfVar5[1] = fVar4;
      pfVar5[2] = fVar4;
      pfVar5[3] = fVar4;
    } while (uVar9 != 0);
  }
  uVar9 = (ulonglong)(uint)param_1[0x14];
  if (uVar9 != 0) {
    for (uVar11 = (ulonglong)(uint)param_1[0x14] & 0xffffff80;
        (uVar11 & 0xffffffff) < (uVar13 * 0x40 + uVar9 & 0xffffffff); uVar11 = uVar11 + 0x80) {
      dataCacheBlockFlush(uVar11);
    }
    fn_82630B08(lbl_8320A898,uVar9,(ulonglong)*(ushort *)(param_1 + 2) << 6,0);
  }
  uVar1 = param_1[0x13];
  for (uVar9 = (ulonglong)uVar1 & 0xffffff80;
      (uVar9 & 0xffffffff) < (uVar13 * 0x40 + (ulonglong)uVar1 & 0xffffffff); uVar9 = uVar9 + 0x80)
  {
    dataCacheBlockFlush(uVar9);
  }
  fn_82630B08(lbl_8320A898,(ulonglong)uVar1,(ulonglong)*(ushort *)(param_1 + 2) << 6,0);
  return;
}


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
extern unsigned int *auStack_120;
extern int fn_8255E428();
extern int fn_827F4038();
extern int fn_827F4068();
extern int fn_82F6D9EC();
extern int fn_82F6DC84();
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825FFD58(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 in_r0;
  int iVar13;
  longlong lVar12;
  int iVar14;
  undefined1 in_vs32 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint in_register_00010430;
  uint in_register_00010434;
  uint in_register_00010438;
  uint in_vr67;
  float in_register_000104c0;
  float in_register_000104c4;
  float in_register_000104c8;
  uint in_register_000104d0;
  uint in_register_000104d4;
  uint in_register_000104d8;
  uint in_vr77;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_120 [288];
  
  iVar13 = fn_82F6D9EC();
  iVar1 = **(int **)(iVar13 + 0xbc);
  iVar2 = (*(int **)(iVar13 + 0xbc))[1];
  iVar14 = *(int *)(*(int *)(iVar1 + 8) + 0x118) * 0x90 + iVar2;
  pfVar4 = (float *)(iVar14 + 0x70U & 0xfffffff0);
  pfVar5 = (float *)((int)in_r0 + iVar14 + 0x50 & 0xfffffff0);
  iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + 0x118) * 0x90 + iVar2 + 8);
  pfVar6 = (float *)(iVar14 + 0x60U & 0xfffffff0);
  fVar32 = *pfVar6;
  fVar29 = pfVar6[1];
  fVar30 = pfVar6[2];
  fVar31 = pfVar6[3];{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar17, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar15, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar20, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar19, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar17,auVar20); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar15,auVar19); memcpy(auVar16, &_vt5, 16); }
  pfVar6 = (float *)(iVar3 + 0xe0U & 0xfffffff0);{ V16 _vt6 = vectorMergeLowWord(auVar17,auVar20); memcpy(auVar20, &_vt6, 16); }
  pfVar7 = (float *)((int)in_r0 + iVar3 + 0xc0 & 0xfffffff0);{ V16 _vt7 = vectorMergeLowWord(auVar15,auVar19); memcpy(auVar15, &_vt7, 16); }
  pfVar8 = (float *)(iVar3 + 0xd0U & 0xfffffff0);
  fVar37 = *pfVar7 * fVar32 + pfVar7[1] * fVar29 + pfVar7[2] * fVar30 + pfVar7[3] * fVar31;
  pfVar9 = (float *)(iVar3 + 0xf0U & 0xfffffff0);
  fVar40 = *pfVar9;
  fVar42 = pfVar9[1];
  fVar33 = *pfVar7 * *pfVar4 + pfVar7[1] * pfVar4[1] + pfVar7[2] * pfVar4[2] + pfVar7[3] * pfVar4[3]
  ;
  fVar28 = fVar40 * *pfVar5 + fVar42 * pfVar5[1] + pfVar9[2] * pfVar5[2] + pfVar9[3] * pfVar5[3];
  fVar36 = *pfVar8 * fVar32 + pfVar8[1] * fVar29 + pfVar8[2] * fVar30 + pfVar8[3] * fVar31;
  fVar32 = *pfVar6 * fVar32 + pfVar6[1] * fVar29 + pfVar6[2] * fVar30 + pfVar6[3] * fVar31;
  fVar29 = fVar40 * *pfVar4 + fVar42 * pfVar4[1] + pfVar9[2] * pfVar4[2] + pfVar9[3] * pfVar4[3];
  vectorMergeHighWord(in_vs38,in_vs37);
  vectorMergeHighWord(in_vs36,auVar17);
  vectorMergeHighWord(in_vs34,in_vs35);
  vectorMergeHighWord(in_vs62,in_vs63);{ V16 _vt8 = vectorMergeHighWord(auVar19,in_vs33); memcpy(auVar17, &_vt8, 16); }
  vectorMergeHighWord(in_vs40,in_vs61);
  vectorMergeHighWord(auVar20,auVar15);
  vectorMergeHighWord(auVar18,auVar16);
  fVar30 = fVar28;
  fVar31 = fVar29;
  fVar34 = fVar32;
  fVar35 = fVar33;
  fVar38 = fVar36;
  fVar39 = fVar37;
  fVar41 = fVar33;
  fVar43 = fVar33;
  fn_8255E428(auStack_120,*(undefined4 *)(iVar13 + 0xb4),
                    *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(iVar1 + 8) + 0x118) * 0x90 + iVar2 + 8) + 0x100));
  pfVar4 = (float *)(iVar13 + 0xd0U & 0xfffffff0);
  fVar24 = *pfVar4;
  fVar25 = pfVar4[1];
  fVar26 = pfVar4[2];
  fVar27 = pfVar4[3];
  lVar12 = fn_827F4038(iVar13);{ V16 _vt9 = loadVectorLeftIndexed128(in_r0,lVar12 + 0x10); memcpy(auVar15, &_vt9, 16); }
  loadVectorRightIndexed128(0xc,lVar12 + 0x10);
  fn_827F4068(iVar13);
  puVar10 = (undefined4 *)((int)in_r0 + iVar13 + 0xe0 & 0xfffffff0);
  uVar21 = puVar10[1];
  uVar22 = puVar10[2];
  uVar23 = puVar10[3];
  vectorAddFloatingPoint(auVar17,auVar15);
  puVar11 = (undefined4 *)((int)in_r0 + iVar13 + 0xe0 & 0xfffffff0);
  *puVar11 = *puVar10;
  puVar11[1] = uVar21;
  puVar11[2] = uVar22;
  puVar11[3] = uVar23;
  pfVar4 = (float *)(iVar13 + 0xc0U & 0xfffffff0);
  *pfVar4 = (float)((uint)(in_register_000104c0 * fVar40 +
                          in_register_000104c4 * fVar36 + fVar32 * in_register_000104c8 + fVar28) &
                    ~in_register_00010430 | in_register_000104d0 & in_register_00010430) - fVar24;
  pfVar4[1] = (float)((uint)(in_register_000104c0 * fVar41 +
                            in_register_000104c4 * fVar37 + fVar33 * in_register_000104c8 + fVar29)
                      & ~in_register_00010434 | in_register_000104d4 & in_register_00010434) -
              fVar25;
  pfVar4[2] = (float)((uint)(in_register_000104c0 * fVar42 +
                            in_register_000104c4 * fVar38 + fVar34 * in_register_000104c8 + fVar30)
                      & ~in_register_00010438 | in_register_000104d8 & in_register_00010438) -
              fVar26;
  pfVar4[3] = (float)((uint)(in_register_000104c0 * fVar43 +
                            in_register_000104c4 * fVar39 + fVar35 * in_register_000104c8 + fVar31)
                      & ~in_vr67 | in_vr77 & in_vr67) - fVar27;
  fn_82F6DC84();
  return;
}


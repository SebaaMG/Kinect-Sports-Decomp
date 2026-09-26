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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8253B818();
extern int fn_82556908();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82555FF8(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int in_r0;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined1 in_vs32 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010070;
  float in_register_00010074;
  float in_register_00010078;
  float in_vr7;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  iVar12 = param_1[4];
  iVar10 = 0;
  if (0 < iVar12) {
    iVar11 = 0;
    do {
      pfVar5 = (float *)(in_r0 + param_2 & 0xfffffff0);
      iVar13 = iVar11 + param_1[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar18, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar15, &_vt1, 16); }
      iVar10 = iVar10 + 1;{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar20, &_vt2, 16); }
      pfVar6 = (float *)(iVar11 + param_1[3] & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar19, &_vt3, 16); }
      iVar12 = param_1[2] + iVar11;
      pfVar7 = (float *)(iVar13 + 0x10U & 0xfffffff0);
      iVar11 = iVar11 + 0x40;{ V16 _vt4 = vectorMergeHighWord(auVar18,auVar20); memcpy(auVar17, &_vt4, 16); }
      pfVar8 = (float *)(iVar13 + 0x30U & 0xfffffff0);{ V16 _vt5 = vectorMergeHighWord(auVar15,auVar19); memcpy(auVar16, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar18,auVar20); memcpy(auVar20, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(auVar15,auVar19); memcpy(auVar15, &_vt7, 16); }
      fVar2 = *pfVar6 * in_register_00010070 + pfVar6[1] * in_register_00010074 +
              pfVar6[2] * in_register_00010078 + pfVar6[3] * in_vr7;
      fVar3 = *pfVar7 * in_register_00010070 + pfVar7[1] * in_register_00010074 +
              pfVar7[2] * in_register_00010078 + pfVar7[3] * in_vr7;
      fVar4 = *pfVar8 * *pfVar5 + pfVar8[1] * pfVar5[1] + pfVar8[2] * pfVar5[2] +
              pfVar8[3] * pfVar5[3];
      in_register_00010070 =
           *pfVar8 * in_register_00010070 + pfVar8[1] * in_register_00010074 +
           pfVar8[2] * in_register_00010078 + pfVar8[3] * in_vr7;{ V16 _vt8 = vectorMergeHighWord(auVar19,auVar18); memcpy(auVar19, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs36,in_vs41); memcpy(auVar18, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(in_vs41, &_vt10, 16); }
      vectorMergeHighWord(auVar19,auVar18);{ V16 _vt11 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar18, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs43,in_vs33); memcpy(auVar19, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs40,in_vs61); memcpy(in_vs40, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar20,auVar15); memcpy(auVar15, &_vt14, 16); }
      pfVar5 = (float *)(in_r0 + iVar12 & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;{ V16 _vt15 = vectorMergeHighWord(auVar19,in_vs41); memcpy(in_vs43, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar17,auVar16); memcpy(in_vs45, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(in_vs40,auVar18); memcpy(in_vs44, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(in_vs45,auVar15); memcpy(in_vs32, &_vt18, 16); }
      pfVar5 = (float *)(iVar12 + 0x10U & 0xfffffff0);
      *pfVar5 = fVar3;
      pfVar5[1] = fVar3;
      pfVar5[2] = fVar3;
      pfVar5[3] = fVar3;
      pfVar5 = (float *)(iVar12 + 0x20U & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;
      pfVar5 = (float *)(iVar12 + 0x30U & 0xfffffff0);
      *pfVar5 = fVar4;
      pfVar5[1] = fVar4;
      pfVar5[2] = fVar4;
      pfVar5[3] = fVar4;
      iVar12 = param_1[4];
      in_register_00010074 = in_register_00010070;
      in_register_00010078 = in_register_00010070;
      in_vr7 = in_register_00010070;
    } while (iVar10 < iVar12);
  }
  if (param_3 != 0) {
    iVar10 = 0;
    if (0 < iVar12) {
      iVar12 = 0;
      iVar11 = 0;
      do {
        piVar14 = (int *)(iVar11 + *param_1);
        piVar1 = *(int **)(*(int *)(iVar11 + *param_1) + 0x1b0);
        (**(code **)(*piVar1 + 0x18))(piVar1,auStack_80);
        piVar1 = *(int **)(*piVar14 + 0x1b0);
        (**(code **)(*piVar1 + 0x1c))(piVar1,auStack_90);
        iVar13 = param_1[2] + iVar12;
        fn_8253B818(*(undefined8 *)(param_1[2] + iVar12),*(undefined8 *)(iVar13 + 8),
                     *(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),
                     *(undefined8 *)(iVar13 + 0x20),*(undefined8 *)(iVar13 + 0x28),
                     *(undefined8 *)(iVar13 + 0x30),*(undefined8 *)(iVar13 + 0x38));
        fn_82556908(piVar14,param_4);
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x1a0;
        iVar12 = iVar12 + 0x40;
      } while (iVar10 < param_1[4]);
    }
  }
  iVar12 = 0;
  if (0 < param_1[1]) {
    iVar10 = 0;
    do {
      lVar9 = (ulonglong)*(uint *)(iVar10 + *param_1) + 0x98;
      if (lVar9 != 0) {
        fn_82555FF8(lVar9,((uint *)(iVar10 + *param_1))[2],0,0);
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x1a0;
    } while (iVar12 < param_1[1]);
  }
  return;
}


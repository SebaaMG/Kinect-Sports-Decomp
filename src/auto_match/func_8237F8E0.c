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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82562A28();
extern int fn_82562FD8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 * fn_8237F8E0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a4;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [48];
  
  uVar5 = lbl_821CC160;
  *(undefined4 *)param_1 = lbl_821CC160;
  *(undefined4 *)((int)param_1 + 4) = uVar5;
  fn_82562A28(auStack_60,param_2 + 0x20);
  fn_82562FD8(auStack_a0);
  fVar4 = lbl_8218E8E8;
  pfVar2 = (float *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs42,in_vs41); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs42,in_vs41); memcpy(auVar10, &_vt1, 16); }
  pfVar3 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs40,in_vs39); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs40,in_vs39); memcpy(auVar7, &_vt3, 16); }
  vectorMergeHighWord(auVar6,auVar8);{ V16 _vt4 = vectorMergeLowWord(auVar6,auVar8); memcpy(auVar9, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar10,auVar7); memcpy(auVar8, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar10,auVar7); memcpy(auVar11, &_vt6, 16); }
  fVar1 = *pfVar3 * *pfVar2 + pfVar3[1] * pfVar2[1] + pfVar3[2] * pfVar2[2] + pfVar3[3] * pfVar2[3];{ V16 _vt7 = vectorMergeHighWord(auVar7,in_vs33); memcpy(auVar10, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar7, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs32); memcpy(auVar6, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs45,in_vs61); memcpy(auVar12, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar10,auVar6); memcpy(auVar6, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar12,auVar7); memcpy(auVar13, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs59,in_vs60); memcpy(auVar7, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs44,in_vs58); memcpy(auVar12, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(auVar9,auVar11); memcpy(auVar10, &_vt15, 16); }{ V16 _vt16 = vectorMultiplyAddFloatingPoint(auVar6,in_vs38,auVar13); memcpy(auVar6, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(in_vs43,auVar8); memcpy(auVar8, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar12,auVar7); memcpy(auVar7, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(auVar8,auVar10); memcpy(auVar8, &_vt19, 16); }{ V16 _vt20 = vectorMultiplyAddFloatingPoint(in_vs37,auVar7,auVar6); memcpy(auVar6, &_vt20, 16); }
  vectorMultiplyAddFloatingPoint(in_vs36,auVar8,auVar6);
  pfVar2 = (float *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  if (fStack_a4 + fVar4 != 0.0) {
    fVar1 = lbl_821CA460 / (fStack_a4 + fVar4);
    *param_1 = CONCAT44(fVar1 * fStack_b0,fVar1 * fStack_ac);
  }
  return param_1;
}


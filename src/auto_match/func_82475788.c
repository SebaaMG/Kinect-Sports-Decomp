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
#define NAN(x) ((x) != (x))
extern float fRam832968ac;
extern float fRam832968bc;
extern int fn_82475290();
extern int fn_8252CAF8();
extern int fn_82530258();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968A0;
extern unsigned int lbl_832968A4;
extern unsigned int lbl_832968A8;
extern unsigned int lbl_832968B0;
extern unsigned int lbl_832968B4;
extern unsigned int lbl_832968B8;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82475788(double param_1,int param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 in_r0;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar22 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar11 = 0;
  piVar12 = (int *)(param_2 + 0x54);
  do {
    if (*piVar12 != 0) {
      uVar7 = (uint)LZCOUNT(param_3 - (int)lVar11) >> 5;
      lVar9 = fn_82475290(lVar11);
      fn_8252CAF8(*(undefined4 *)*piVar12,2,lVar9 != 0);
      if (((int)lVar9 == 0) || (uVar10 = 0, uVar7 == 0)) {
        uVar10 = 1;
      }
      fn_8252CAF8(*(undefined4 *)*piVar12,3,uVar10);
      fn_8252CAF8(*(undefined4 *)*piVar12,1,0);
      *(uint *)(*(int *)(*(int *)*piVar12 + 0x8c0) + 0x1bc) = uVar7;
    }
    iVar8 = lbl_8327F844;
    lVar11 = lVar11 + 1;
    piVar12 = piVar12 + 6;
  } while ((int)lVar11 < 2);
  if (*(int *)(param_3 * 0x18 + param_2 + 0x54) != 0) {{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar20, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar18, &_vt1, 16); }
    iVar6 = (int)in_r0;
    pfVar5 = (float *)((int)&lbl_83296890 + iVar6 & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar17, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar16, &_vt3, 16); }
    vectorMergeHighWord(auVar20,auVar17);{ V16 _vt4 = vectorMergeLowWord(auVar20,auVar17); memcpy(auVar21, &_vt4, 16); }
    bVar1 = lbl_8327F844 != 0;{ V16 _vt5 = vectorMergeHighWord(auVar18,auVar16); memcpy(auVar20, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar18,auVar16); memcpy(auVar19, &_vt6, 16); }
    fVar2 = *pfVar5 * in_register_00010090 + pfVar5[1] * in_register_00010094 +
            pfVar5[2] * in_register_00010098 + pfVar5[3] * in_vr9;
    fVar3 = lbl_832968B0 * in_register_00010060 + lbl_832968B4 * in_register_00010064 +
            lbl_832968B8 * in_register_00010068 + fRam832968bc * in_vr6;
    fVar4 = lbl_832968A0 * in_register_00010060 + lbl_832968A4 * in_register_00010064 +
            lbl_832968A8 * in_register_00010068 + fRam832968ac * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar16,in_vs36); memcpy(auVar18, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs32); memcpy(auVar16, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar17, &_vt9, 16); }
    vectorMergeHighWord(auVar18,auVar16);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar16, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs44,in_vs61); memcpy(auVar22, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar21,auVar19); memcpy(auVar18, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar19, &_vt13, 16); }
    pfVar5 = (float *)((int)&uStack_80 + iVar6 & 0xfffffff0);
    *pfVar5 = fVar2;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar2;
    pfVar5[3] = fVar2;{ V16 _vt14 = vectorMergeHighWord(in_vs43,auVar20); memcpy(auVar20, &_vt14, 16); }
    vectorMergeHighWord(auVar22,auVar16);
    vectorMergeHighWord(auVar19,auVar17);
    vectorMergeHighWord(auVar20,auVar18);
    pfVar5 = (float *)((int)&uStack_60 + iVar6 & 0xfffffff0);
    *pfVar5 = fVar2;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar2;
    pfVar5[3] = fVar2;
    pfVar5 = (float *)((int)&uStack_70 + iVar6 & 0xfffffff0);
    *pfVar5 = fVar4;
    pfVar5[1] = fVar4;
    pfVar5[2] = fVar4;
    pfVar5[3] = fVar4;
    pfVar5 = (float *)((int)&uStack_50 + iVar6 & 0xfffffff0);
    *pfVar5 = fVar3;
    pfVar5[1] = fVar3;
    pfVar5[2] = fVar3;
    pfVar5[3] = fVar3;
    if (bVar1) {
      fn_82530258(uStack_80,uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
    }
  }
  dVar13 = (double)lbl_821CC160;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((param_1 < dVar13) << 2) | (uint)(NAN(param_1) || NAN(dVar13)) << 2))
      < 0.0) {
    param_1 = dVar13;
  }
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0xf4) = 0;
    dVar15 = (double)lbl_821CA460;
    dVar14 = dVar15;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(param_1 - dVar15) < dVar13) << 2) |
                  (uint)(NAN((double)(float)(param_1 - dVar15)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar14 = param_1;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar14 < dVar13) << 2) | (uint)(NAN(dVar14) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar14 = dVar13;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar14 - dVar15) < dVar13) << 2) |
                  (uint)(NAN((double)(float)(dVar14 - dVar15)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar15 = dVar14;
    }
    *(float *)(iVar8 + 0x100) = (float)dVar15;
  }
  return;
}


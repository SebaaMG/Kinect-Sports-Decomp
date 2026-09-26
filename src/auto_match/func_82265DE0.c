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
extern float fRam832968ac;
extern float fRam832968bc;
extern int fn_82266628();
extern int fn_82530258();
extern unsigned int lbl_8327F844;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968A0;
extern unsigned int lbl_832968A4;
extern unsigned int lbl_832968A8;
extern unsigned int lbl_832968B0;
extern unsigned int lbl_832968B4;
extern unsigned int lbl_832968B8;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82265DE0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int in_r0;
  longlong lVar8;
  uint uVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar16 [16];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar8 = (ulonglong)(param_2 != '\0') - (ulonglong)*(uint *)(param_1 + 0x518);
  uVar9 = (uint)(param_2 != '\0');
  *(uint *)(param_1 + 0x518) = uVar9;
  iVar6 = (int)lVar8;
  if (*(int *)(param_1 + 0x50c) == 3) {
    bVar5 = (*(uint *)(param_1 + 0xa0) & 4) != 0;
    if (uVar9 == 0) {
      if ((bVar5) && (*(int *)(param_1 + 0x52c) != 10)) {
        fn_82266628(param_1,10,9);
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x8c0) + 0x1bc) = 0;
    }
    else {
      if ((bVar5) && (*(int *)(param_1 + 0x52c) != 9)) {
        fn_82266628(param_1,9,8);
      }
      iVar7 = lbl_8327F844;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x8c0) + 0x1bc) = 1;
      if ((iVar6 != iVar6 + -1 + (uint)(lVar8 == 0)) && (iVar7 != 0)) {
        *(undefined4 *)(iVar7 + 0xf0) = 0;
        *(undefined4 *)(iVar7 + 0xf4) = 0;
      }{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar12, &_vt1, 16); }
      pfVar4 = (float *)((int)&lbl_83296890 + in_r0 & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar11, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar10, &_vt3, 16); }
      vectorMergeHighWord(auVar14,auVar11);{ V16 _vt4 = vectorMergeLowWord(auVar14,auVar11); memcpy(auVar15, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar12,auVar10); memcpy(auVar14, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar12,auVar10); memcpy(auVar13, &_vt6, 16); }
      fVar1 = *pfVar4 * in_register_00010090 + pfVar4[1] * in_register_00010094 +
              pfVar4[2] * in_register_00010098 + pfVar4[3] * in_vr9;
      fVar2 = lbl_832968B0 * in_register_00010060 + lbl_832968B4 * in_register_00010064 +
              lbl_832968B8 * in_register_00010068 + fRam832968bc * in_vr6;
      fVar3 = lbl_832968A0 * in_register_00010060 + lbl_832968A4 * in_register_00010064 +
              lbl_832968A8 * in_register_00010068 + fRam832968ac * in_vr6;{ V16 _vt7 = vectorMergeHighWord(auVar10,in_vs36); memcpy(auVar12, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs37,in_vs32); memcpy(auVar10, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar11, &_vt9, 16); }
      vectorMergeHighWord(auVar12,auVar10);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar10, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs44,in_vs61); memcpy(auVar16, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar15,auVar13); memcpy(auVar12, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs45,in_vs33); memcpy(auVar13, &_vt13, 16); }
      pfVar4 = (float *)((int)&uStack_60 + in_r0 & 0xfffffff0);
      *pfVar4 = fVar1;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar1;
      pfVar4[3] = fVar1;{ V16 _vt14 = vectorMergeHighWord(in_vs43,auVar14); memcpy(auVar14, &_vt14, 16); }
      vectorMergeHighWord(auVar16,auVar10);
      vectorMergeHighWord(auVar13,auVar11);
      vectorMergeHighWord(auVar14,auVar12);
      pfVar4 = (float *)((int)&uStack_40 + in_r0 & 0xfffffff0);
      *pfVar4 = fVar1;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar1;
      pfVar4[3] = fVar1;
      pfVar4 = (float *)((int)&uStack_50 + in_r0 & 0xfffffff0);
      *pfVar4 = fVar3;
      pfVar4[1] = fVar3;
      pfVar4[2] = fVar3;
      pfVar4[3] = fVar3;
      pfVar4 = (float *)((int)&uStack_30 + in_r0 & 0xfffffff0);
      *pfVar4 = fVar2;
      pfVar4[1] = fVar2;
      pfVar4[2] = fVar2;
      pfVar4[3] = fVar2;
      if (iVar7 != 0) {
        fn_82530258(uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38,uStack_30,uStack_28
                    );
      }
    }
  }
  return;
}


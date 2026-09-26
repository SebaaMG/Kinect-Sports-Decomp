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
extern unsigned int *auStack_310;
extern unsigned int *auStack_360;
extern unsigned int *auStack_370;
extern unsigned int *auStack_380;
extern unsigned int fStack_394;
extern unsigned int fStack_3ac;
extern unsigned int fStack_3b4;
extern unsigned int fStack_3bc;
extern unsigned int fStack_3c4;
extern int fn_822ABA88();
extern int fn_822B4148();
extern int fn_822C6F10();
extern int fn_823D29A8();
extern int fn_823D98B8();
extern int fn_823E7870();
extern int fn_823E8BD8();
extern int fn_824FECB8();
extern int fn_824FEDF8();
extern unsigned int iStack_390;
extern unsigned int iStack_3a8;
extern unsigned int iStack_3b0;
extern unsigned int iStack_3b8;
extern unsigned int iStack_3c0;
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_398;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;


void fn_823E7368(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  int in_r0;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  double dVar16;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fStack_3c4;
  int iStack_3c0;
  float fStack_3bc;
  int iStack_3b8;
  float fStack_3b4;
  int iStack_3b0;
  float fStack_3ac;
  int iStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  float fStack_394;
  int iStack_390;
  float afStack_38c [3];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [80];
  undefined1 auStack_310 [784];
  
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_824FECB8(*(undefined4 *)(param_1 + 0xe10),auStack_380);
    puVar4 = (undefined4 *)((uint)(auStack_360 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (undefined4 *)((uint)(auStack_380 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_00010010;
    puVar4[1] = in_register_00010014;
    puVar4[2] = in_register_00010018;
    puVar4[3] = in_vr1;
    puVar4 = (undefined4 *)((uint)(auStack_370 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_00010020;
    puVar4[1] = in_register_00010024;
    puVar4[2] = in_register_00010028;
    puVar4[3] = in_vr2;
    fn_824FEDF8(auStack_380,auStack_310);
    fVar9 = lbl_82195530;
    pfVar12 = &fStack_3c4;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pfVar12 = &fStack_394;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pfVar12 = &fStack_3b4;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar8 = 0;
    iVar13 = 0;
    do {
      piVar3 = *(int **)(**(int **)(param_1 + 8) + iVar8);
      fn_823E8BD8(piVar3,auStack_310,&uStack_3a0);
      iVar10 = piVar3[4];
      iVar1 = *piVar3;
      *(float *)((int)afStack_38c + iVar13) = fStack_394;
      *(undefined4 *)((int)&fStack_3bc + iVar13) = uStack_39c;
      *(undefined4 *)((int)&iStack_3c0 + iVar13) = uStack_3a0;
      *(undefined4 *)((int)&iStack_390 + iVar13) = uStack_398;
      lVar15 = fn_822ABA88(*(undefined4 *)(iVar10 * 4 + iVar1),0);
      dVar16 = (double)fn_822C6F10(lVar15 + 0x80,lVar15 + 0xc0);
      iVar8 = iVar8 + 4;
      *(float *)((int)&fStack_3ac + iVar13) = (float)dVar16;
      *(int *)((int)&iStack_3b0 + iVar13) = (int)lVar15;
      fVar7 = lbl_821CA460;
      fVar9 = lbl_8218E2B0;
      iVar13 = iVar13 + 8;
    } while (iVar8 < 8);
    iVar13 = 0;
    iVar8 = 0;
    iVar10 = 0;
    piVar3 = (int *)**(int **)(param_1 + 0x20);
    lVar15 = 2;
    piVar2 = (int *)(*(int **)(param_1 + 0x20))[1];
    bVar14 = (piVar3[1] - *piVar3 >> 2 == 0) != (piVar2[1] - *piVar2 >> 2 == 0);
    do {
      bVar5 = iVar13 == 0;
      if (*(int *)(*(int *)((int)&iStack_3c0 + iVar10) + 0x1ec) == 0) {
        fVar6 = fVar7;
        if ((bVar14) &&
           (piVar3 = *(int **)((uint)bVar5 * 4 + *(int *)(param_1 + 0x20)),
           (piVar3[1] - *piVar3 & 0xfffffffcU) == 0)) {
          fVar6 = fVar9;
        }
        if ((&fStack_3ac)[(uint)bVar5 * 2] * fVar6 < *(float *)((int)&fStack_3bc + iVar10)) {
          *(undefined4 *)((int)&iStack_3c0 + iVar10) = 0;
        }
      }
      else {
        fVar6 = fVar7;
        if ((bVar14) &&
           (piVar3 = *(int **)(iVar8 + *(int *)(param_1 + 0x20)),
           (piVar3[1] - *piVar3 & 0xfffffffcU) == 0)) {
          fVar6 = fVar9;
        }
        if ((&fStack_3bc)[(uint)bVar5 * 2] < *(float *)((int)&fStack_3bc + iVar10) * fVar6) {
          *(undefined4 *)((int)&iStack_3c0 + iVar10) = 0;
          iVar1 = *(int *)((int)&iStack_390 + iVar10);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1ec) == 0)) {
            *(int *)((int)&iStack_3c0 + iVar10) = iVar1;
          }
        }
      }
      iVar13 = iVar13 + 1;
      iVar8 = iVar8 + 4;
      iVar10 = iVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar8 = fn_823D98B8(param_1,0);
    if (iVar8 == 0) {
      iVar8 = fn_823D98B8(param_1,1);
      iStack_3b0 = iStack_3c0;
      if (iVar8 != 0) {
        iStack_3b0 = 0;
        iStack_3b8 = iStack_3a8;
      }
    }
    else {
      iStack_3b8 = 0;
    }
    if (iStack_3b0 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(undefined4 *)(iStack_3b0 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x40) = uVar11;
    if (iStack_3b8 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(undefined4 *)(iStack_3b8 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x44) = uVar11;
    *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
    if (((iStack_3b0 != 0) && (iStack_3b8 != 0)) &&
       (*(undefined4 *)(param_2 + 0x48) = 1, fStack_3bc < fStack_3b4)) {
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
    iStack_3c0 = 0;
    lVar15 = 0;
    fStack_3bc = 0.0;
    pfVar12 = &fStack_3c4;
    do {
      fn_822B4148(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),lVar15);
      fVar9 = (float)fn_823D29A8();
      lVar15 = lVar15 + 1;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = fVar9;
    } while ((int)lVar15 < 2);
    fn_823E7870(iStack_3c0,*(undefined4 *)**(undefined4 **)(param_1 + 8),0,0,param_2);
    fn_823E7870(fStack_3bc,*(undefined4 *)(**(int **)(param_1 + 8) + 4),0,0,param_2 + 0x20);
  }
  return;
}


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
extern unsigned int *auStack_80;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_60;
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_88;


void fn_830A17D8(ulonglong param_1,float *param_2,int *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort *puVar3;
  short *psVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float *pfVar12;
  longlong lVar11;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  float fStack_60;
  float fStack_40;
  float fStack_3c;
  
  puVar10 = &uStack_88;
  *param_3 = *param_3 + -0x10;
  iVar5 = (int)param_1;
  fStack_3c = *(float *)(iVar5 + 0x20);
  lVar14 = 0xc;
  pfVar12 = param_2 + -2;
  do {
    pfVar12 = pfVar12 + 2;
    puVar10 = puVar10 + 1;
    *puVar10 = *(undefined8 *)pfVar12;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar1 = *(undefined2 *)(iVar5 + 0x12);
  fStack_60 = param_2[8] * fStack_3c;
  fStack_40 = param_2[0x10] * fStack_3c;
  fStack_3c = param_2[0x11] * fStack_3c;
  do {
    puVar3 = *(ushort **)((int)param_1 + 0x14);
    param_1 = ZEXT48(puVar3);
  } while (0x16 < *puVar3);
  uVar2 = puVar3[2];
  uVar13 = 0;
  uVar8 = (ulonglong)*(byte *)(puVar3 + 5);
  lVar14 = (ulonglong)puVar3[3] * 0x20 + param_1 + 0x30;
  if (3 < uVar2) {
    lVar9 = (((ulonglong)uVar2 - 4 & 0xffffffff) >> 2) + 1;
    lVar11 = param_1 + 0x6c;
    uVar13 = lVar9 * 4 & 0xfffffffc;
    do {
      pfVar12 = (float *)lVar11;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[-8];
      if (fVar6 < *(float *)((int)lVar14 + 0x10)) {
        *(float *)((int)lVar14 + 0x10) = fVar6;
      }
      iVar7 = (int)(uVar8 + lVar14);
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              *pfVar12;
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + uVar8 + lVar14;
      iVar7 = (int)lVar14;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[8];
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + lVar14;
      iVar7 = (int)lVar14;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[0x10];
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + lVar14;
      lVar11 = lVar11 + 0x80;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((int)uVar13 < (int)(uint)uVar2) {
    lVar9 = uVar2 - uVar13;
    lVar14 = lVar14 + 0x10;
    lVar11 = (uVar13 & 0x7ffffff) * 0x20 + param_1 + 0x4c;
    do {
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              *(float *)lVar11;
      if (fVar6 < *(float *)lVar14) {
        *(float *)lVar14 = fVar6;
      }
      lVar14 = lVar14 + uVar8;
      lVar11 = lVar11 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  psVar4 = *(short **)(iVar5 + 0x14);
  if (*psVar4 == 0x16) {
    fn_830A4688(psVar4,auStack_80,1);
  }
  else {
    fn_830A2398(psVar4,uVar1,auStack_80,param_3);
  }
  return;
}


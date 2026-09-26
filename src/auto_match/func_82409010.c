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
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82458458();
extern int fn_82458910();
extern int fn_82508078();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821BA6C4;
extern unsigned int lbl_821BA6D8;
extern unsigned int lbl_821BA6DC;
extern unsigned int lbl_821BA6E0;
extern unsigned int lbl_821BA6E4;
extern unsigned int lbl_821BA6F8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82409010(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  double dVar16;
  uint uStack_60;
  uint uStack_5c;
  uint auStack_58 [2];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  fn_82458910(&iStack_48,*(undefined4 *)(param_2 + 0x40),0);
  fn_82458910(&iStack_50,*(undefined4 *)(param_2 + 0x40),1);
  iVar5 = (**(code **)(**(int **)(param_2 + 0x14) + 8))();
  if ((*(int *)(iVar5 + 0x7a0) != 0) ||
     (iVar5 = (**(code **)(**(int **)(param_2 + 0x14) + 8))(), *(int *)(iVar5 + 0x7a0) != 0)) {
    *(float *)(param_2 + 0x44) = lbl_8218E1AC;
  }
  fVar4 = lbl_821CC160;
  if (*(int *)(param_2 + 0x44) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x44) - param_1);
    fVar2 = -fVar1;
    fVar3 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x44) = fVar3;
    if (fVar3 == fVar4) {
      dVar16 = (double)lbl_8218E1AC;
      *(float *)(param_2 + 0x44) = lbl_8218E1AC;
      fn_82458458(dVar16,&uStack_5c,iStack_48);
      iVar5 = 0x14;
      uStack_5c = (int)(*(int *)(iStack_48 + 0x1c) - uStack_5c) / 0x14;
      uVar7 = (ulonglong)(int)uStack_5c;
      fn_82458458(&uStack_60,iStack_50);
      puVar15 = &uStack_60;
      uStack_60 = (int)(*(int *)(iStack_50 + 0x1c) - uStack_60) / iVar5;
      if ((ulonglong)uStack_60 <= (uVar7 & 0xffffffff)) {
        puVar15 = &uStack_5c;
      }
      puVar9 = &uStack_60;
      if ((uVar7 & 0xffffffff) <= (ulonglong)uStack_60) {
        puVar9 = &uStack_5c;
      }
      if (((((uVar7 & 0xffffffff) < 0x19) ||
           (puVar6 = lbl_821BA6DC, uStack_60 < 0x19)) &&
          ((9 < (uVar7 & 0xffffffff) || (puVar6 = lbl_821BA6E4, 9 < uStack_60))))
         && (puVar6 = lbl_821BA6D8, 9 < *puVar15 - *puVar9)) {
        puVar6 = lbl_821BA6E0;
      }
      fn_82508078(**(undefined4 **)(param_2 + 0xc),puVar6,0);
    }
  }
  fn_82458458((double)lbl_821916FC,&uStack_5c,iStack_48);
  uVar7 = 0;
  for (uVar10 = uStack_5c; uVar10 != *(uint *)(iStack_48 + 0x1c); uVar10 = uVar10 + 0x14) {
    if (*(int *)(uVar10 + 8) != 8) {
      uVar7 = uVar7 + 1;
    }
  }
  uStack_60 = (uint)uVar7;
  dVar16 = (double)fn_82458458(&uStack_5c,iStack_50);
  uVar8 = 0;
  for (; uStack_5c != *(uint *)(iStack_50 + 0x1c); uStack_5c = uStack_5c + 0x14) {
    if (*(int *)(uStack_5c + 8) != 8) {
      uVar8 = uVar8 + 1;
    }
  }
  uStack_5c = (uint)uVar8;
  puVar15 = &uStack_5c;
  if ((uVar8 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    puVar15 = &uStack_60;
  }
  if (2 < *puVar15) {
    fn_82508078(**(undefined4 **)(param_2 + 0xc),lbl_821BA6C4,0);
    dVar16 = (double)lbl_821916FC;
  }
  fn_82458458(dVar16,&uStack_5c,iStack_48);
  uVar8 = (ulonglong)*(uint *)(iStack_48 + 0x1c);
  uVar7 = 0;
  for (uVar12 = (ulonglong)uStack_5c; (uVar12 & 0xffffffff) != uVar8; uVar12 = uVar12 + 0x14) {
    if (*(int *)((int)uVar12 + 8) == 8) {
      uVar7 = uVar7 + 1;
    }
  }
  auStack_58[0] = (uint)uVar7;
  fn_82458458(&uStack_5c,iStack_48);
  iVar5 = 0;
  if ((ulonglong)uStack_5c != (uVar8 & 0xffffffff)) {
    lVar14 = (ulonglong)uStack_5c + 0x10;
    do {
      if ((((int *)lVar14)[-2] == 8) && (*(int *)lVar14 == 3)) {
        iVar5 = iVar5 + 1;
      }
      uVar12 = lVar14 + 4;
      lVar14 = lVar14 + 0x14;
    } while ((uVar12 & 0xffffffff) != (uVar8 & 0xffffffff));
  }
  fn_82458458(&uStack_5c,iStack_50);
  uVar12 = (ulonglong)*(uint *)(iStack_50 + 0x1c);
  uVar8 = 0;
  for (uVar13 = (ulonglong)uStack_5c; (uVar13 & 0xffffffff) != uVar12; uVar13 = uVar13 + 0x14) {
    if (*(int *)((int)uVar13 + 8) == 8) {
      uVar8 = uVar8 + 1;
    }
  }
  uStack_60 = (uint)uVar8;
  fn_82458458(&uStack_5c,iStack_50);
  iVar11 = 0;
  if ((ulonglong)uStack_5c != (uVar12 & 0xffffffff)) {
    lVar14 = (ulonglong)uStack_5c + 0x10;
    do {
      if ((((int *)lVar14)[-2] == 8) && (*(int *)lVar14 == 3)) {
        iVar11 = iVar11 + 1;
      }
      uVar13 = lVar14 + 4;
      lVar14 = lVar14 + 0x14;
    } while ((uVar13 & 0xffffffff) != (uVar12 & 0xffffffff));
  }
  puVar15 = &uStack_60;
  if ((uVar8 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    puVar15 = auStack_58;
  }
  if (((2 < *puVar15) || (iVar5 != 0)) || (iVar11 != 0)) {
    fn_82508078(**(undefined4 **)(param_2 + 0xc),lbl_821BA6F8,0);
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}


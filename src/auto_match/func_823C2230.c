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
#define NAN(x) ((x) != (x))
extern int fn_82250A18();
extern int fn_822B33B0();
extern int fn_82308E08();
extern int fn_8230C220();
extern int fn_823C1038();
extern int fn_823C1450();
extern int fn_823C1770();
extern int fn_823C1DA8();
extern int fn_823C25C0();
extern int fn_823C2950();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_823C2230(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 in_r0;
  int iVar8;
  ulonglong uVar9;
  char cVar11;
  int iVar10;
  uint uVar13;
  longlong lVar12;
  double dVar14;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar9 = ZEXT48(&stack0x00000000);
  if ((*(int *)(param_1 + 0x58) != 0x11) && (*(int *)(param_1 + 0x54) != 0x11)) {
    cVar11 = fn_82308E08(param_1 + 0xab8);
    if (cVar11 != '\0') {
      return;
    }
    iVar10 = 0;
    do {
      uVar13 = 0;
      piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar10);
      if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
        do {
          cVar11 = fn_8230C220(param_1 + 0xa18,uVar9 - 0xa0);
          if (cVar11 != '\0') {
            return;
          }
          cVar11 = fn_8230C220(param_1 + 0xa08,uVar9 - 0x98);
          if (cVar11 != '\0') {
            return;
          }
          cVar11 = fn_8230C220(param_1 + 0x9f8,uVar9 - 0x90);
          if (cVar11 != '\0') {
            return;
          }
          cVar11 = fn_8230C220(param_1 + 0xa68,uVar9 - 0x88);
          if (cVar11 != '\0') {
            return;
          }
          cVar11 = fn_8230C220(param_1 + 0xa58,uVar9 - 0x80);
          if (cVar11 != '\0') {
            return;
          }
          cVar11 = fn_8230C220(param_1 + 0xa48,uVar9 - 0x78);
          if (cVar11 != '\0') {
            return;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < 8);
  }
  if ((param_2 == *(int *)(param_1 + 0xe10)) && (*(char *)(param_1 + 0xd51) != '\0')) {
    fn_823C1038(param_1);
  }
  fVar3 = *(float *)(param_2 + 0xa8) * *(float *)(param_2 + 0x8bc);
  fVar4 = *(float *)(param_2 + 0xa0) * *(float *)(param_2 + 0x8bc);
  fVar7 = fVar4 - fVar3;
  vectorMinimumFloatingPoint(in_vs45,in_vs32);
  vectorMaximumFloatingPoint(in_vs45,in_vs32);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar7 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar7) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = fVar3;
  }
  dVar14 = (double)(fVar4 * *(float *)(param_2 + 0x280));
  loadVectorLeftIndexed128(in_r0,uVar9 - 0xa0);
  iVar10 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar10 = fn_82250A18();
  }
  iVar8 = (int)in_r0;
  bVar1 = *(int *)(param_1 + 0x42c) != 3;
  if (*(char *)(iVar10 + 4) == '\0') {
    if ((bVar1) || (param_2 != *(int *)(param_1 + 0xe10))) {
      lVar12 = 0;
      do {
        fn_823C1450(param_1,param_2,lVar12);
        iVar8 = (int)in_r0;
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < 2);
    }
  }
  else if ((bVar1) || (param_2 != *(int *)(param_1 + 0xe10))) {
    fn_823C1450(param_1,param_2,*(undefined4 *)(param_1 + 0xcc));
  }
  fn_823C1770(param_1,param_2);
  fn_823C1DA8(param_1,param_2);
  if ((*(char *)(param_1 + 0xd50) != '\0') && (*(int *)(param_1 + 0x9a0) == 0)) {
    puVar5 = (undefined4 *)(iVar8 + param_2 + 0x50 & 0xfffffff0);
    uVar15 = *puVar5;
    uVar16 = puVar5[1];
    uVar17 = puVar5[2];
    uVar18 = puVar5[3];
    cVar11 = fn_822B33B0(dVar14,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
    if (cVar11 != '\0') {
      puVar5 = (undefined4 *)(param_1 + 0xd60U & 0xfffffff0);
      *puVar5 = uVar15;
      puVar5[1] = uVar16;
      puVar5[2] = uVar17;
      puVar5[3] = uVar18;
      *(undefined1 *)(param_1 + 0xd50) = 0;
    }
  }
  if ((*(char *)(param_1 + 0xd50) == '\0') && (*(char *)(param_1 + 0xd51) != '\0')) {
    if (*(int *)(param_1 + 0x4c0) == 0) {
      iVar10 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar10 = fn_82250A18();
      }
      if (*(char *)(iVar10 + 4) == '\0') {
        fn_823C2950(param_1);
      }
      else {
        fn_823C25C0();
      }
    }
    if (*(char *)(param_1 + 0xd51) != '\0') {
      puVar5 = (undefined4 *)(iVar8 + param_2 + 0x50 & 0xfffffff0);
      uVar15 = puVar5[1];
      uVar16 = puVar5[2];
      uVar17 = puVar5[3];
      puVar6 = (undefined4 *)(param_1 + 0xd60U & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar15;
      puVar6[2] = uVar16;
      puVar6[3] = uVar17;
    }
  }
  return;
}


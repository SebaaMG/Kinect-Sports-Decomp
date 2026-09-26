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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_dc;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern int fn_82291E90();
extern int fn_822ABA88();
extern int fn_82338740();
extern int fn_8242C1B8();
extern int fn_8242C410();
extern int fn_824334C0();
extern int fn_8249ABC0();
extern int fn_8249D070();
extern int fn_8249D128();
extern int fn_82F68CC0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192754;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195600;
extern unsigned int lbl_821956C8;
extern unsigned int lbl_82195E74;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_f0;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82451278(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  undefined1 auStack_d0 [84];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  fn_8242C1B8(*(undefined4 *)param_1[0x10]);
  dVar13 = (double)lbl_821CC160;
  (**(code **)(*param_1 + 0x1c))(dVar13,&uStack_f0,param_1);
  (**(code **)(*param_1 + 0x20))(dVar13,auStack_e0,param_1);
  fStack_dc = fStack_dc + lbl_82193E50;
  loadVectorLeftIndexed128(0xffffffff821917a8,0xffffffffffffd140);
  (**(code **)(*(int *)param_1[0x11] + 4))
            ((int *)param_1[0x11],*(undefined4 *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c),
             lbl_821CA1A0,(ulonglong)lbl_821CA1A8 << 0x20);
  iVar7 = param_1[0x11];
  iVar9 = **(int **)(iVar7 + 4);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x1d0) == 0)) {
    *(undefined4 *)(iVar9 + 0x1d0) = 1;
  }
  uVar4 = lbl_82192754;
  uVar10 = lbl_821922D4;
  *(undefined4 *)(*(int *)(iVar7 + 4) + 0x2c) = 0;
  iVar7 = param_1[0x11];
  *(float *)(*(int *)(iVar7 + 0x14) + 0x104) = (float)dVar13;
  *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x108) = uVar10;
  *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x11c) = uVar10;
  *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x120) = uVar4;
  *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x134) = uVar4;
  *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x138) = lbl_82195600;
  iVar7 = *(int *)(**(int **)(param_1[0x11] + 4) + 0x7c0);
  if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x10), iVar7 != 0)) {
    *(undefined4 *)(iVar7 + 0x10) = lbl_82193CC0;
  }
  uVar12 = ZEXT48((uint *)param_1[0x10]);
  iVar9 = 0;
  uVar11 = (ulonglong)*(uint *)param_1[0x10];
  iVar7 = fn_8242C410(uVar11);
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      piVar2 = *(int **)(**(int **)((int)uVar11 + 8) + iVar7);
      fn_822ABA88((double)*(float *)((int)uVar12 + 0x16c),*(undefined4 *)(piVar2[4] * 4 + *piVar2),
                   0);
      fn_82338740();
      uVar12 = ZEXT48((uint *)param_1[0x10]);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
      uVar11 = (ulonglong)*(uint *)param_1[0x10];
      iVar8 = fn_8242C410(uVar11);
    } while (iVar9 < iVar8);
  }
  fn_824334C0(param_1);
  iVar7 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x24) + 0xfc) + 0x20);
  if (iVar7 != 0) {
    *(undefined4 *)(*(int *)(iVar7 + 0x3c) + 0x3c) = 0;
  }
  fn_82291E90(*(undefined4 *)(*(int *)param_1[0x10] + 0xd4),0,0);
  fVar6 = lbl_82195E74;
  fVar5 = lbl_821956C8;
  fVar3 = lbl_82005748;
  *(undefined1 *)(param_1[0x11] + 0x30) = 0;
  *(undefined1 *)(param_1[0x11] + 0x38) = 0;
  *(float *)(param_1[0x11] + 0x40) = (float)dVar13;
  *(int *)(param_1[0x11] + 0x24) =
       (int)((float)(longlong)*(int *)(param_1[0x10] + 0x118) * fVar6 * fVar3);
  uStack_f0 = (longlong)*(int *)(param_1[0x10] + 0x118);
  *(int *)(param_1[0x11] + 0x28) = (int)((float)uStack_f0 * fVar5 * fVar3);
  dVar13 = (double)*(float *)(param_1[0x11] + 0x50);
  if (*(int *)(param_1[0x10] + 0x1ac) != -1) {
    iVar7 = param_1[0x10];
    iVar9 = fn_8249ABC0();
    fn_8249D128(*(undefined4 *)(iVar9 + 0xec),*(undefined4 *)(iVar7 + 0x1ac));
  }
  iVar7 = fn_8249ABC0();
  pfVar1 = *(float **)(iVar7 + 0xec);
  fStack_e4 = pfVar1[3];
  fStack_e8 = (float)((double)pfVar1[2] - dVar13);
  uStack_f0 = CONCAT44((float)((double)*pfVar1 + dVar13),pfVar1[1]);
  iVar9 = fn_8249ABC0();
  iVar7 = param_1[0x10];
  uVar10 = fn_8249D070(*(undefined4 *)(iVar9 + 0xec),uStack_f0,CONCAT44(fStack_e8,fStack_e4));
  *(undefined4 *)(iVar7 + 0x1ac) = uVar10;
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c) + 0x8c8);
  if ((iVar7 != 0) &&
     (fn_82F68CC0(auStack_d0,
                   (ulonglong)*(uint *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x238,0x6c
                  ), *(int *)(iVar7 + 4) != 0)) {
    *(undefined4 *)(iVar7 + 0x1d8) = lbl_821917B0;
    *(undefined4 *)(iVar7 + 0x1d4) = 1;
    *(undefined4 *)(iVar7 + 0x1d0) = uStack_78;
    *(undefined4 *)(iVar7 + 0x1cc) = uStack_7c;
    uVar10 = lbl_821CA460;
    *(undefined4 *)(iVar7 + 0x1dc) = lbl_821CA460;
    *(undefined4 *)(iVar7 + 0x1e0) = uVar10;
  }
  return;
}


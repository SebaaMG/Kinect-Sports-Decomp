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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82605EC0();
extern int fn_82D93128();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297070;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_82608638(int *param_1,longlong param_2)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 in_vs32 [16];
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  uVar7 = ZEXT48(&stack0x00000000);
  pfVar2 = (float *)((int)param_2 + 0x1b0U & 0xfffffff0);
  fVar15 = *pfVar2;
  fVar16 = pfVar2[1];
  fVar17 = pfVar2[2];
  fVar18 = pfVar2[3];
  uVar10 = storeVectorElementWordIndexed(in_vs32,0,uVar7 - 0x60);
  *(undefined4 *)(uVar7 - 0x60) = uVar10;
  fn_82D93128(param_2 + 0xe0);
  pfVar2 = (float *)((uint)(&lbl_83297070 + (int)in_r0) & 0xfffffff0);
  fVar9 = pfVar2[1];
  fVar11 = pfVar2[2];
  fVar13 = pfVar2[3];
  pcVar1 = *(code **)(*param_1 + 0x1c);
  loadVectorLeftIndexed128(in_r0,uVar7 - 0x5c);
  pfVar3 = (float *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
  *pfVar3 = *pfVar2 * fVar15;
  pfVar3[1] = fVar9 * fVar16;
  pfVar3[2] = fVar11 * fVar17;
  pfVar3[3] = fVar13 * fVar18;
  uVar8 = (*pcVar1)(param_1,3);
  iVar6 = (int)in_r0;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_82605EC0(uVar8,uVar7 - 0x40);
  }
  if (lbl_821CC160 < (float)param_1[0x45]) {
    param_1[0x44] = 1;
    puVar4 = (undefined4 *)((uint)(auStack_50 + iVar6) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar12 = puVar4[2];
    uVar14 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_50 + iVar6) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar12;
    puVar5[3] = uVar14;
    puVar4 = (undefined4 *)((uint)(auStack_40 + iVar6) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar12 = puVar4[2];
    uVar14 = puVar4[3];
    puVar5 = (undefined4 *)((int)param_1 + iVar6 + 0x100 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar12;
    puVar5[3] = uVar14;
  }
  return;
}


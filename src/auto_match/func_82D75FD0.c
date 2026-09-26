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
extern unsigned int *auStack_100;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1e0;
extern unsigned int fStack_178;
extern unsigned int fStack_184;
extern unsigned int fStack_1ac;
extern unsigned int fStack_1c4;
extern unsigned int fStack_230;
extern int fn_82D6B540();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82139008;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


/* WARNING: Removing unreachable block (ram,0x82d76240) */
/* WARNING: Removing unreachable block (ram,0x82d76280) */
/* WARNING: Removing unreachable block (ram,0x82d76294) */
/* WARNING: Removing unreachable block (ram,0x82d762a4) */
/* WARNING: Removing unreachable block (ram,0x82d762bc) */

void fn_82D75FD0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 in_vs45 [16];
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_230;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [12];
  float fStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  undefined **ppuStack_1b0;
  float fStack_1ac;
  char cStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [12];
  float fStack_184;
  float fStack_178;
  undefined1 auStack_100 [256];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar9 = 10;
  fStack_184 = lbl_82134508;
  fStack_1ac = lbl_82134508;
  ppuStack_1b0 = &lbl_82139008;
  cStack_1a8 = '\0';
  lVar7 = uVar6 - 0x188;
  piVar8 = param_3 + -2;
  do {
    piVar8 = piVar8 + 2;
    lVar7 = lVar7 + 8;
    *(undefined8 *)lVar7 = *(undefined8 *)piVar8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fStack_178 = (float)param_3[0x19] + fStack_178;
  pcVar10 = *(code **)((uint)*(byte *)((*(int *)(*param_1 + 0xc) + 0xd) * 0x20 +
                                       *(int *)(*param_2 + 0xc) + *param_3) * 0x14 + *param_3 +
                      0x9a8);
  (*pcVar10)(param_1,param_2,uVar6 - 0x180,uVar6 - 0x1b0);
  if (cStack_1a8 != '\0') {
    fVar11 = (float)param_3[2];
    iVar2 = (int)in_r0;
    puVar1 = (undefined4 *)((uint)(auStack_190 + iVar2) & 0xfffffff0);
    uVar12 = puVar1[1];
    uVar14 = puVar1[2];
    uVar16 = puVar1[3];
    puVar3 = (undefined4 *)((uint)(auStack_1d0 + iVar2) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar3[2] = uVar14;
    puVar3[3] = uVar16;
    puVar1 = (undefined4 *)((uint)(auStack_1a0 + iVar2) & 0xfffffff0);
    uVar12 = puVar1[1];
    uVar14 = puVar1[2];
    uVar16 = puVar1[3];
    puVar3 = (undefined4 *)((uint)(auStack_1e0 + iVar2) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar3[2] = uVar14;
    puVar3[3] = uVar16;
    piStack_1c0 = param_1;
    piStack_1bc = param_2;
    if ((fStack_184 < fVar11) && (param_5 != (int *)0x0)) {
      (**(code **)(*param_5 + 4))(param_5,uVar6 - 0x1e0);
    }
    pfVar4 = (float *)((uint)(auStack_190 + (int)in_r0) & 0xfffffff0);
    fVar11 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar17 = pfVar4[3];
    pfVar4 = (float *)((int)param_3 + (int)in_r0 + 0x50 & 0xfffffff0);
    fVar21 = *pfVar4;
    fVar22 = pfVar4[1];
    fVar23 = pfVar4[2];
    fVar24 = pfVar4[3];
    uVar12 = storeVectorElementWordIndexed(in_vs45,0,uVar6 - 0x230);
    *(undefined4 *)(uVar6 - 0x230) = uVar12;
    if ((fStack_184 + fStack_230 <= lbl_821AAD20) &&
       ((float)param_3[0x18] + fStack_230 < lbl_821AAD20)) {
      pfVar4 = (float *)param_3[0x1a];
      if (*pfVar4 < fStack_184) {
        fn_82D6B540(uVar6 - 0x130,param_1[2]);
        if (-1 < (longlong)((ulonglong)(uint)pfVar4[1] - 1)) {
          loadVectorLeftIndexed128(in_r0,uVar6 - 0x230);
          pfVar4 = (float *)(param_1[2] + 0x30U & 0xfffffff0);
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar5 = (float *)((uint)(auStack_100 + (int)in_r0) & 0xfffffff0);
          *pfVar5 = fVar21 * fVar11 + *pfVar4;
          pfVar5[1] = fVar22 * fVar13 + fVar18;
          pfVar5[2] = fVar23 * fVar15 + fVar19;
          pfVar5[3] = fVar24 * fVar17 + fVar20;
          (*pcVar10)(uVar6 - 0x220,param_2,uVar6 - 0x180,uVar6 - 0x210);
          return;
        }
        pcVar10 = *(code **)(*param_4 + 4);
      }
      else {
        if ((lbl_821AAD20 < fStack_184) &&
           ((fStack_184 - (fStack_184 + fStack_230)) * (float)param_4[1] < fStack_184)) {
          return;
        }
        fStack_1c4 = lbl_821AAD20;
        pcVar10 = *(code **)(*param_4 + 4);
      }
      (*pcVar10)(param_4,uVar6 - 0x1e0);
    }
  }
  return;
}


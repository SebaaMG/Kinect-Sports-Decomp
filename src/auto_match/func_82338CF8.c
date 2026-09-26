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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8242E560();
extern int fn_8249ABC0();
extern int fn_8249CF88();
extern int fn_824CCFC8();
extern int fn_8288B760();
extern int fn_82F4EF20();
extern int fn_82F50D98();
extern int fn_82F50E10();
extern int fn_82F52520();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82338CF8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar5;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_register_000104d0;
  float fVar17;
  float in_register_000104d4;
  float fVar18;
  float in_register_000104d8;
  float fVar19;
  float in_vr77;
  float fVar20;
  float afStack_a0 [4];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar4 = ZEXT48(&stack0x00000000);
  if ((*(int *)(*(int *)(param_2 + 0x1a0) + 0x188) != 0) &&
     (fVar20 = in_vr77, fVar19 = in_register_000104d8, fVar18 = in_register_000104d4,
     fVar17 = in_register_000104d0,
     iVar6 = fn_8242E560(*(undefined4 *)(*(int *)(param_2 + 0x1a0) + 0xc)), iVar6 == 0)) {
    if (*(int *)(param_2 + 0x168) == 0) {
      uVar7 = *(uint *)(param_2 + 0x16c);
    }
    else {
      uVar7 = fn_8288B760();
      uVar7 = uVar7 & 0xff;
    }
    if ((((uVar7 != 0) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x1a0) + 0xc) + 0xd4) + 0x18) + 0xc
                  ) == 0)) && (iVar6 = *(int *)(param_2 + 0x24), iVar6 != 0)) &&
       (iVar8 = fn_824CCFC8(iVar6), iVar8 != 0)) {
      uVar5 = fn_82F50D98(*(undefined4 *)(iVar6 + 0x20));
      fn_82F4EF20(uVar4 - 0x70,uVar5,1,0);
      fn_82F50E10(uVar4 - 0x90,*(undefined4 *)(iVar6 + 0x20));
      uVar1 = *(undefined4 *)(iVar6 + 0x30);
      iVar8 = fn_8249ABC0();
      fn_8249CF88(uVar4 - 0x80,*(undefined4 *)(iVar8 + 0xec),uVar1);
      iVar8 = (int)in_r0;
      pfVar2 = (float *)((uint)(auStack_90 + iVar8) & 0xfffffff0);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      pfVar2 = (float *)((uint)(auStack_80 + iVar8) & 0xfffffff0);
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar2 = (float *)((int)afStack_a0 + iVar8 & 0xfffffff0);
      *pfVar2 = fVar17;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      fVar13 = fVar13 * fVar9;
      fVar14 = fVar14 * fVar10;
      fVar15 = fVar15 * fVar11;
      fVar16 = fVar16 * fVar12;
      iVar6 = fn_824CCFC8(iVar6);
      if (iVar6 != 0) {
        iVar6 = (int)in_r0;
        pfVar2 = (float *)((uint)(auStack_70 + iVar6) & 0xfffffff0);
        pfVar3 = (float *)((uint)(auStack_90 + iVar6) & 0xfffffff0);
        fVar9 = (*pfVar2 - fVar13) * *pfVar3;
        fVar10 = (pfVar2[1] - fVar14) * pfVar3[1];
        fVar11 = (pfVar2[2] - fVar15) * pfVar3[2];
        fVar12 = (pfVar2[3] - fVar16) * pfVar3[3];
        pfVar2 = (float *)((int)afStack_a0 + iVar6 & 0xfffffff0);
        *pfVar2 = fVar9;
        pfVar2[1] = fVar10;
        pfVar2[2] = fVar11;
        pfVar2[3] = fVar12;
      }
      iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x1a0) + 0xc) + 0x174);
      if ((*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) != -1) &&
         (iVar6 = *(int *)(iVar6 + 0x5c),
         iVar6 = *(int *)(*(int *)(iVar6 + 0x1d4) * 4 + *(int *)(iVar6 + 0x1c4)), iVar6 != 0)) {
        fVar20 = *(float *)(*(int *)(param_2 + 0x1a0) + 0x4c);
        if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x1a0) + 0xc) + 0x174) + 0x5c) +
                    0x2b4) == 0) {
          fVar20 = *(float *)(*(int *)(iVar6 + 0x40) + 0x11c);
        }
        fVar18 = afStack_a0[0] - -fVar20;
        fVar19 = afStack_a0[0];
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar18 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar18) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          fVar19 = -fVar20;
        }
        afStack_a0[0] = fVar20;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar19 - fVar20 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar19 - fVar20) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          afStack_a0[0] = fVar19;
        }
      }
      fn_82F52520(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x20),uVar4 - 0x60);
      loadVectorLeftIndexed128(in_r0,uVar4 - 0xb0);
      pfVar2 = (float *)((int)afStack_a0 + (int)in_r0 & 0xfffffff0);
      in_register_000104d0 = *pfVar2 * fVar9;
      in_register_000104d4 = pfVar2[1] * fVar10;
      in_register_000104d8 = pfVar2[2] * fVar11;
      in_vr77 = pfVar2[3] * fVar12;
    }
  }
  pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = in_register_000104d0;
  pfVar2[1] = in_register_000104d4;
  pfVar2[2] = in_register_000104d8;
  pfVar2[3] = in_vr77;
  return param_1;
}


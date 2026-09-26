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
extern int fn_82627340();
extern int fn_82627DB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


/* WARNING: Removing unreachable block (ram,0x8260259c) */
/* WARNING: Removing unreachable block (ram,0x826025a8) */
/* WARNING: Removing unreachable block (ram,0x826025e4) */
/* WARNING: Removing unreachable block (ram,0x826025e8) */

void fn_82602390(undefined8 param_1,longlong param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int in_r0;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 extraout_f1;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar10 = fn_82F6A548();
  iVar3 = (int)param_2;
  sVar2 = *(short *)(iVar3 + 6);
  pfVar5 = (float *)(iVar3 + 0x40);
  puVar4 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
  uVar18 = *puVar4;
  uVar19 = puVar4[1];
  uVar20 = puVar4[2];
  uVar21 = puVar4[3];
  pfVar6 = (float *)(iVar3 + 0x50);
  puVar4 = (undefined4 *)(in_r0 + (int)pfVar5 & 0xfffffff0);
  *puVar4 = uVar18;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar21;
  puVar4 = (undefined4 *)(in_r0 + (int)pfVar6 & 0xfffffff0);
  *puVar4 = uVar18;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar21;
  if (0 < sVar2) {
    uVar13 = 0;
    dVar17 = (double)lbl_821CC160;
    uVar16 = extraout_f1;
    do {
      lVar12 = uVar13 * 0x1d0 + param_2;
      lVar14 = lVar12 + 0x2a0;
      iVar7 = (int)lVar12;
      if (*(short *)(iVar7 + 0x342) == -2) {
        iVar11 = fn_82627340(uVar16,uVar10,lVar14);
        if (iVar11 == 0) {
          fn_82627DB0(param_2,lVar14);
        }
        else {
          fVar1 = *(float *)(iVar7 + 0x31c);
          fVar8 = *(float *)lVar14 - fVar1;
          dVar15 = (double)(*pfVar5 - fVar8);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar8 = *pfVar5;
          }
          *pfVar5 = fVar8;
          fVar8 = *(float *)(iVar7 + 0x2a4) - fVar1;
          dVar15 = (double)(*(float *)(iVar3 + 0x44) - fVar8);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar8 = *(float *)(iVar3 + 0x44);
          }
          *(float *)(iVar3 + 0x44) = fVar8;
          fVar8 = *(float *)(iVar7 + 0x2a8) - fVar1;
          dVar15 = (double)(*(float *)(iVar3 + 0x48) - fVar8);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar8 = *(float *)(iVar3 + 0x48);
          }
          *(float *)(iVar3 + 0x48) = fVar8;
          fVar8 = *(float *)lVar14 + fVar1;
          dVar15 = (double)(*pfVar6 - fVar8);
          fVar9 = *pfVar6;
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar9 = fVar8;
          }
          *pfVar6 = fVar9;
          fVar8 = fVar1 + *(float *)(iVar7 + 0x2a4);
          dVar15 = (double)(*(float *)(iVar3 + 0x54) - fVar8);
          fVar9 = *(float *)(iVar3 + 0x54);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar9 = fVar8;
          }
          *(float *)(iVar3 + 0x54) = fVar9;
          fVar1 = *(float *)(iVar7 + 0x2a8) + fVar1;
          dVar15 = (double)(*(float *)(iVar3 + 0x58) - fVar1);
          fVar8 = *(float *)(iVar3 + 0x58);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar15 < dVar17) << 2) |
                        (uint)(NAN(dVar15) || NAN(dVar17)) << 2)) < 0.0) {
            fVar8 = fVar1;
          }
          *(float *)(iVar3 + 0x58) = fVar8;
        }
      }
      uVar13 = uVar13 + 1 & 0xffff;
    } while ((int)uVar13 < (int)*(short *)(iVar3 + 6));
  }
  fn_82F6A594();
  return;
}


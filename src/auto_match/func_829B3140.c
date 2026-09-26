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
extern unsigned int *auStack_110;
extern int fn_829B1720();
extern int fn_829B2858();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_82054184;
extern unsigned int lbl_8315A390;
extern unsigned int register0x0000000c;
extern unsigned int uStack_68;


uint fn_829B3140(uint *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  float *pfVar15;
  longlong lVar16;
  undefined1 auStack_110 [8];
  float afStack_108 [18];
  undefined1 *puStack_c0;
  longlong lStack_70;
  ulonglong uStack_68;
  float afStack_5c [23];
  
  if (lbl_8315A390 != 0) {
    pfVar11 = (float *)(param_2 + 0xc);
    pfVar15 = afStack_108;
    lVar16 = 0x10;
    do {
      fVar2 = *pfVar11;
      fVar3 = pfVar11[-2];
      fVar4 = pfVar11[-1];
      pfVar15[-2] = *(float *)((param_2 - (int)afStack_108) + (int)pfVar15) * fVar2;
      pfVar15[-1] = fVar3 * fVar2;
      pfVar11 = pfVar11 + 4;
      *pfVar15 = fVar2 * fVar4;
      pfVar15[1] = fVar2;
      pfVar15 = pfVar15 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar12 = fn_829B2858(param_1,auStack_110);
    return (int)uVar12 >> 0x1f & uVar12;
  }
  uVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    puVar14 = &uStack_68;
    lVar16 = 8;
    do {
      puVar14 = puVar14 + 1;
      *puVar14 = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  fVar10 = lbl_82054184;
  fVar9 = lbl_820288E0;
  fVar8 = lbl_820288C8;
  fVar7 = lbl_82027070;
  fVar4 = lbl_8202706C;
  fVar3 = lbl_8200D8DC;
  fVar2 = lbl_82002C5C;
  lVar16 = 0x10;
  pfVar15 = afStack_5c;
  pfVar11 = (float *)(param_2 + 0xc);
  do {
    fVar1 = *pfVar11;
    if (param_3 != 0) {
      fVar1 = pfVar15[-1] + fVar1;
    }
    uVar5 = (uint)((uVar13 & 0xffffffff) >> 1) & 0x7ffffffc;
    uVar12 = (uint)(fVar1 * fVar7 + fVar2);
    lStack_70 = (longlong)(int)uVar12;
    *(uint *)(uVar5 + (int)param_1) = *(uint *)(uVar5 + (int)param_1) >> 4 | uVar12 << 0x1c;
    if (param_3 != 0) {
      uStack_68 = (ulonglong)uVar12;
      uVar6 = uVar13 & 3;
      fVar1 = -((float)uStack_68 * fVar4 - fVar1);
      if (uVar6 != 3) {
        *pfVar15 = fVar1 * fVar10 + *pfVar15;
      }
      if ((uVar13 & 0xffffffff) < 0xc) {
        if (uVar6 != 0) {
          pfVar15[2] = fVar1 * fVar8 + pfVar15[2];
        }
        pfVar15[3] = fVar1 * fVar9 + pfVar15[3];
        if (uVar6 != 3) {
          pfVar15[4] = fVar1 * fVar3 + pfVar15[4];
        }
      }
    }
    uVar13 = uVar13 + 1;
    pfVar11 = pfVar11 + 4;
    pfVar15 = pfVar15 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *param_1 = *param_1 << 0x10 | *param_1 >> 0x10;
  param_1[1] = param_1[1] << 0x10 | param_1[1] >> 0x10;
  puStack_c0 = (undefined1 *)register0x0000000c;
  uVar12 = fn_829B1720(param_1 + 2,param_2,0);
  return uVar12;
}


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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_82054184;
extern unsigned int uStack_58;


undefined8 fn_82BBF2C0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uStack_58;
  float afStack_50 [16];
  
  uVar14 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar11 = lbl_82054184;
  fVar10 = lbl_820288E0;
  fVar9 = lbl_820288C8;
  fVar8 = lbl_82027070;
  fVar7 = lbl_8202706C;
  fVar6 = lbl_8200D8DC;
  fVar5 = lbl_82002C5C;
  if (param_3 != 0) {
    puVar15 = &uStack_58;
    lVar16 = 8;
    do {
      puVar15 = puVar15 + 1;
      *puVar15 = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  pfVar12 = (float *)(param_2 + 0xc);
  lVar16 = 0x10;
  pfVar13 = afStack_50;
  do {
    pfVar13 = pfVar13 + 1;
    fVar2 = *pfVar12;
    if (param_3 != 0) {
      fVar2 = pfVar13[-1] + fVar2;
    }
    uVar3 = (uint)((uVar14 & 0xffffffff) >> 1) & 0x7ffffffc;
    uVar1 = (uint)(fVar2 * fVar8 + fVar5);
    *(uint *)(uVar3 + (int)param_1) = *(uint *)(uVar3 + (int)param_1) >> 4 | uVar1 << 0x1c;
    if (param_3 != 0) {
      uVar4 = uVar14 & 3;
      fVar2 = -((float)uVar1 * fVar7 - fVar2);
      if (uVar4 != 3) {
        *pfVar13 = fVar2 * fVar11 + *pfVar13;
      }
      if ((uVar14 & 0xffffffff) < 0xc) {
        if (uVar4 != 0) {
          pfVar13[2] = fVar2 * fVar9 + pfVar13[2];
        }
        pfVar13[3] = fVar2 * fVar10 + pfVar13[3];
        if (uVar4 != 3) {
          pfVar13[4] = fVar2 * fVar6 + pfVar13[4];
        }
      }
    }
    uVar14 = uVar14 + 1;
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *param_1 = *param_1 << 0x10 | *param_1 >> 0x10;
  param_1[1] = param_1[1] << 0x10 | param_1[1] >> 0x10;
  return 0;
}


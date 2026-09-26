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
extern unsigned int lbl_8200133C;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_829FCA30(int param_1,int param_2,uint *param_3,int param_4,ushort *param_5,
                  undefined4 *param_6)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  float *pfVar6;
  short *psVar7;
  short *psVar8;
  ushort *puVar9;
  longlong lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  longlong lVar15;
  short asStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  float afStack_60 [24];
  
  puVar9 = (ushort *)(param_1 + 0x2eff0);
  lVar10 = 0x3c;
  puVar14 = puVar9;
  puVar11 = (ushort *)(param_1 + 0x1c3ec);
  puVar13 = param_5;
  do {
    puVar12 = puVar11 + 0x280;
    lVar15 = 0x50;
    do {
      uVar1 = puVar11[8];
      if (((uVar1 == 0) || (6 < uVar1)) || (uVar2 = puVar11[9], (uVar2 & 2) == 0)) {
        puVar13[1] = 0;
        *puVar13 = 0;
      }
      else {
        uVar5 = (uint)*puVar14;
        if ((((uVar2 & 0x40) != 0) && ((puVar11[1] & 2) != 0)) && (*puVar11 == uVar1)) {
          uVar5 = uVar5 - ((int)(uVar5 - puVar14[-1]) >> 0x1f & uVar5 - puVar14[-1]) & 0xffff;
        }
        if ((((uVar2 & 0x80) != 0) && ((puVar11[0x11] & 2) != 0)) && (puVar11[0x10] == uVar1)) {
          uVar5 = uVar5 - ((int)(uVar5 - puVar14[1]) >> 0x1f & uVar5 - puVar14[1]) & 0xffff;
        }
        if ((((uVar2 & 0x10) != 0) && ((puVar11[-0x277] & 2) != 0)) && (puVar11[-0x278] == uVar1)) {
          uVar5 = uVar5 - ((int)(uVar5 - puVar14[-0x50]) >> 0x1f & uVar5 - puVar14[-0x50]) & 0xffff;
        }
        if ((((uVar2 & 0x20) != 0) && ((puVar11[0x289] & 2) != 0)) && (puVar11[0x288] == uVar1)) {
          uVar5 = uVar5 - ((int)(uVar5 - puVar14[0x50]) >> 0x1f & uVar5 - puVar14[0x50]) & 0xffff;
        }
        *puVar13 = uVar1 & 0xff;
        puVar13[1] = (short)uVar5 + 0xc9;
      }
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 8;
      puVar14 = puVar14 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar10 = lVar10 + -1;
    puVar11 = puVar12;
  } while (lVar10 != 0);
  asStack_80[0] = 0;
  asStack_80[7] = 0;
  asStack_80[1] = 1;
  asStack_80[3] = 3;
  uStack_70 = 0;
  uStack_68 = 0;
  asStack_80[2] = 2;
  asStack_80[4] = 4;
  asStack_80[5] = 5;
  asStack_80[6] = 6;
  if ((*param_3 != 0) && (*(int *)(*param_3 * 4 + param_2 + -4) != 1)) {
    uStack_70 = (ulonglong)(uint)(float)*param_3 << 0x20;
    asStack_80[*param_3] = 0;
  }
  if ((param_3[1] != 0) && (*(int *)(param_3[1] * 4 + param_2 + -4) != 1)) {
    uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),(float)param_3[1]);
    asStack_80[param_3[1]] = 0;
  }
  if ((param_3[2] != 0) && (*(int *)(param_3[2] * 4 + param_2 + -4) != 1)) {
    uStack_68 = CONCAT44((float)param_3[2],(((U64)(uStack_68) >> 32) & 0xFFFFFFFF));
    asStack_80[param_3[2]] = 0;
  }
  lVar10 = 3;
  pfVar6 = afStack_60;
  afStack_60[0] = 0.0;
  afStack_60[1] = 0.0;
  afStack_60[2] = 0.0;
  afStack_60[3] = 0.0;
  *param_6 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  param_6[1] = (((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
  fVar3 = lbl_8200133C;
  param_6[2] = (((U64)(uStack_68) >> 0) & 0xFFFFFFFF);
  param_6[3] = (((U64)(uStack_68) >> 32) & 0xFFFFFFFF);
  do {
    uVar5 = *(uint *)(((int)param_3 - (int)afStack_60) + (int)pfVar6);
    if (uVar5 == 0) {
      *pfVar6 = fVar3;
    }
    else {
      *pfVar6 = (float)uVar5;
    }
    pfVar6 = pfVar6 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  param_6[4] = afStack_60[0];
  param_6[5] = afStack_60[1];
  param_6[6] = afStack_60[2];
  param_6[7] = afStack_60[3];
  if (param_4 != 0) {
    psVar7 = (short *)(param_4 + -2);
    lVar10 = 0x3c;
    do {
      lVar15 = 0x10;
      do {
        psVar8 = psVar7;
        if (*param_5 < 8) {
          sVar4 = asStack_80[*param_5];
        }
        else {
          sVar4 = 0;
        }
        psVar8[1] = (-(ushort)(*puVar9 < 4000) & *puVar9) * 8 + sVar4;
        if (param_5[2] < 8) {
          sVar4 = asStack_80[param_5[2]];
        }
        else {
          sVar4 = 0;
        }
        psVar8[2] = (-(ushort)(puVar9[1] < 4000) & puVar9[1]) * 8 + sVar4;
        if (param_5[4] < 8) {
          sVar4 = asStack_80[param_5[4]];
        }
        else {
          sVar4 = 0;
        }
        psVar8[3] = (-(ushort)(puVar9[2] < 4000) & puVar9[2]) * 8 + sVar4;
        if (param_5[6] < 8) {
          sVar4 = asStack_80[param_5[6]];
        }
        else {
          sVar4 = 0;
        }
        psVar8[4] = (-(ushort)(puVar9[3] < 4000) & puVar9[3]) * 8 + sVar4;
        puVar14 = puVar9 + 4;
        if (param_5[8] < 8) {
          sVar4 = asStack_80[param_5[8]];
        }
        else {
          sVar4 = 0;
        }
        puVar9 = puVar9 + 5;
        param_5 = param_5 + 10;
        psVar8[5] = (-(ushort)(*puVar14 < 4000) & *puVar14) * 8 + sVar4;
        lVar15 = lVar15 + -1;
        psVar7 = psVar8 + 5;
      } while (lVar15 != 0);
      lVar10 = lVar10 + -1;
      psVar7 = psVar8 + 0x35;
    } while (lVar10 != 0);
  }
  return;
}


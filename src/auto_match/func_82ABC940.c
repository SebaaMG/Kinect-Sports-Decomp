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
extern int fn_82F691F0();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82014E48;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820540D4;
extern unsigned int lbl_820D78C4;
extern unsigned int lbl_820D78C8;
extern unsigned int lbl_821AAD20;


void fn_82ABC940(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  
  fVar7 = lbl_820D78C8;
  fVar1 = lbl_820D78C4;
  fVar6 = lbl_820540D4;
  fVar9 = lbl_82002C5C;
  if (param_1[0x111] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_2,0xffffffffffffffff,0x54);
  }
  *param_2 = (float)param_1[0x10f] * lbl_820D78C8;
  param_2[1] = (float)param_1[0x10e] * fVar7;
  param_2[7] = (float)param_1[0x110] * fVar1;
  fVar1 = (float)param_1[0x10b] * fVar6;
  fVar7 = (float)param_1[0x109] * fVar9;
  if ((float)param_1[0x109] * fVar9 <= fVar1) {
    fVar7 = fVar1;
  }
  param_2[5] = fVar7;
  fVar6 = (float)param_1[0x10a] * fVar6;
  if (fVar6 < (float)param_1[0x108] * fVar9) {
    fVar6 = (float)param_1[0x108] * fVar9;
  }
  param_2[6] = fVar6;
  fVar2 = lbl_8200D8DC;
  param_2[3] = (float)param_1[0x10d] * lbl_8200D8DC;
  param_2[4] = (float)param_1[0x10c] * fVar2;
  fVar1 = lbl_821AAD20;
  if (param_1[0x107] == 0) {
    fVar3 = (float)((*param_1 >> 0x14 & 0xf) + 1);
    fVar1 = lbl_8201546C;
    fVar4 = lbl_82005344;
    if ((param_1[1] & 0xc) == 8) {
      fVar1 = lbl_82002C28;
      fVar4 = lbl_82021540;
    }
    if (fVar4 < fVar3) {
      param_2[2] = fVar3 * fVar2;
      goto LAB_82abcb34;
    }
  }
  param_2[2] = fVar1;
LAB_82abcb34:
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar3 = fVar2;
  if (fVar2 < fVar1) {
    fVar3 = fVar1;
  }
  fVar4 = fVar7;
  if ((fVar7 <= fVar3) && (fVar4 = fVar2, fVar2 < fVar1)) {
    fVar4 = fVar1;
  }
  fVar3 = param_2[7];
  fVar8 = fVar3;
  if (fVar3 <= fVar4) {
    fVar4 = fVar2;
    if (fVar2 < fVar1) {
      fVar4 = fVar1;
    }
    fVar8 = fVar7;
    if ((fVar7 <= fVar4) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
  }
  fVar4 = *param_2;
  if (fVar4 <= fVar8) {
    fVar4 = fVar2;
    if (fVar2 < fVar1) {
      fVar4 = fVar1;
    }
    fVar8 = fVar7;
    if ((fVar7 <= fVar4) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    fVar4 = fVar3;
    if (fVar3 <= fVar8) {
      fVar8 = fVar2;
      if (fVar2 < fVar1) {
        fVar8 = fVar1;
      }
      fVar4 = fVar7;
      if ((fVar7 <= fVar8) && (fVar4 = fVar2, fVar2 < fVar1)) {
        fVar4 = fVar1;
      }
    }
  }
  fVar1 = param_2[4];
  param_2[8] = fVar4;
  fVar7 = fVar2;
  if (fVar2 < fVar1) {
    fVar7 = fVar1;
  }
  fVar4 = fVar6;
  if ((fVar6 <= fVar7) && (fVar4 = fVar2, fVar2 < fVar1)) {
    fVar4 = fVar1;
  }
  fVar7 = fVar3;
  if (fVar3 <= fVar4) {
    fVar4 = fVar2;
    if (fVar2 < fVar1) {
      fVar4 = fVar1;
    }
    fVar7 = fVar6;
    if ((fVar6 <= fVar4) && (fVar7 = fVar2, fVar2 < fVar1)) {
      fVar7 = fVar1;
    }
  }
  fVar4 = param_2[1];
  if (param_2[1] <= fVar7) {
    fVar7 = fVar2;
    if (fVar2 < fVar1) {
      fVar7 = fVar1;
    }
    fVar8 = fVar6;
    if ((fVar6 <= fVar7) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    fVar4 = fVar3;
    if (fVar3 <= fVar8) {
      fVar7 = fVar2;
      if (fVar2 < fVar1) {
        fVar7 = fVar1;
      }
      fVar4 = fVar6;
      if ((fVar6 <= fVar7) && (fVar4 = fVar2, fVar2 < fVar1)) {
        fVar4 = fVar1;
      }
    }
  }
  param_2[9] = fVar4;
  fVar6 = lbl_82014E48;
  for (pfVar10 = param_2; pfVar10 < param_2 + 0x15; pfVar10 = pfVar10 + 1) {
    *pfVar10 = *pfVar10 * fVar6;
  }
  param_2[0xc] = (float)param_1[0x103];
  param_2[10] = (float)param_1[0x101];
  param_2[0xb] = (float)param_1[0x102];
  param_2[0xd] = (float)param_1[0x104];
  param_2[0xe] = (float)param_1[0x105];
  param_2[0xf] = (float)param_1[0x106];
  uVar5 = *param_1;
  if (param_1[0x107] == 0) {
    uVar5 = uVar5 >> 8;
  }
  param_2[0x10] = (float)(uVar5 & 0x3f);
  param_2[0x12] = ((float)param_1[0x116] + (float)param_1[0x115]) * fVar9;
  param_2[0x14] = ((float)param_1[0x11c] + (float)param_1[0x11b]) * fVar9;
  param_2[0x11] = ((float)param_1[0x114] + (float)param_1[0x113]) * fVar9;
  param_2[0x13] = ((float)param_1[0x11a] + (float)param_1[0x119]) * fVar9;
  return;
}


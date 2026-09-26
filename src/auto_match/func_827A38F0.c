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
extern unsigned int *auStack_68;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_8279ADE8();
extern int fn_8279AE60();
extern int fn_8279AED8();
extern int fn_827A1B60();
extern int fn_827A1F10();
extern int fn_827A3440();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;


ulonglong fn_827A38F0(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  char cVar9;
  uint uVar8;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  longlong lStack_70;
  uint auStack_68 [2];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(short *)(*(int *)(param_1 + 0xc) + 0x34) = *(short *)(*(int *)(param_1 + 0xc) + 0x34) + -1;
  iVar5 = *(int *)(param_1 + 0xc);
  uVar11 = *(ushort *)(iVar5 + 0x68);
  if ((uVar11 & 1) == 0) {
    uVar11 = uVar11 | 8;
  }
  else {
    uVar11 = uVar11 & 0xfff7;
  }
  *(ushort *)(iVar5 + 0x68) = uVar11;
  *(undefined8 *)(iVar5 + 0x38) = lbl_82005710;
  iVar5 = *(int *)(param_1 + 0xc);
  bVar2 = *(byte *)(iVar5 + 0x68);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x3c);
  dVar15 = (double)lbl_821AAD20;
  fStack_60 = lbl_821AAD20;
  fStack_5c = lbl_821AAD20;
  fStack_58 = lbl_821AAD20;
  fStack_54 = lbl_821AAD20;
  uVar13 = 0;
  cVar9 = fn_827A3440(iVar5,uVar10,&fStack_60,auStack_68,0,0,&lStack_70);
  if (cVar9 != '\0') {
    iVar4 = *(int *)(iVar5 + 8);
    fVar6 = fStack_58;
    if ((bVar2 & 1) == 0) {
      fVar6 = fStack_60 + lbl_8200571C;
    }
    fVar3 = *(float *)(iVar4 + 0x44);
    if ((((fVar3 < fVar6) || (*(float *)(iVar4 + 0x48) < fStack_54)) ||
        (fStack_60 < *(float *)(iVar4 + 0x3c))) ||
       (bVar7 = true, fStack_5c < *(float *)(iVar4 + 0x40))) {
      bVar7 = false;
    }
    if ((!bVar7) && ((*(byte *)(iVar4 + 0x13c) & 0x30) == 0)) {
      uVar8 = *(uint *)(iVar4 + 0x4c);
      uVar14 = (ulonglong)uVar8;
      uVar12 = -(ulonglong)((((U64)(lStack_70) >> 0) & 0xFFFFFFFF) == 0) & 0x4b0;
      if (fVar6 <= fVar3) {
        if (fStack_60 < *(float *)(iVar4 + 0x3c)) {
          uVar1 = (uint)(*(float *)(iVar4 + 0x3c) - fStack_60);
          lStack_70 = (longlong)(int)uVar1;
          uVar12 = (uVar14 - uVar1) - uVar12;
          uVar14 = ((uVar12 & 0xffffffff) >> 0x1f) - 1 & uVar12;
        }
      }
      else {
        fStack_50 = (float)dVar15;
        fStack_4c = (float)dVar15;
        fStack_48 = (float)dVar15;
        fStack_44 = (float)dVar15;
        uVar1 = (uint)((fStack_60 - fVar3) + (float)(longlong)(int)uVar12);
        lStack_70 = (longlong)(int)uVar1;
        uVar14 = uVar1 + uVar14;
        if (((uVar10 & 0xffffffff) != 0) &&
           (cVar9 = fn_827A1B60(iVar4,&fStack_50,uVar10 - 1), cVar9 != '\0')) {
          uVar1 = (uint)(fStack_50 - lbl_820885C8);
          lStack_70 = (longlong)(int)uVar1;
          if ((int)uVar1 < (int)uVar14) {
            uVar14 = (ulonglong)uVar1;
          }
        }
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
      }
      if (((*(byte *)(*(int *)(iVar5 + 8) + 0x13d) & 8) == 0) || ((int)uVar14 < (int)uVar8)) {
        uVar13 = fn_8279ADE8(*(int *)(iVar5 + 8),uVar14);
      }
      if (auStack_68[0] < *(uint *)(*(int *)(iVar5 + 8) + 0x38)) {
        uVar10 = fn_8279AE60(*(int *)(iVar5 + 8),auStack_68[0]);
      }
      else {
        uVar8 = fn_827A1F10();
        if (auStack_68[0] <= uVar8) {
          return uVar13;
        }
        uVar10 = fn_8279AED8(*(undefined4 *)(iVar5 + 8),auStack_68[0]);
      }
      uVar13 = uVar10 & 0xff | uVar13 & 0xff;
    }
  }
  return uVar13;
}


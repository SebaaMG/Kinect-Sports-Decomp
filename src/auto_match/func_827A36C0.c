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
extern unsigned int lbl_8200571C;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;


ulonglong fn_827A36C0(int param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  char cVar7;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
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
  
  dVar11 = (double)lbl_821AAD20;
  fStack_60 = lbl_821AAD20;
  fStack_5c = lbl_821AAD20;
  fStack_58 = lbl_821AAD20;
  fStack_54 = lbl_821AAD20;
  uVar9 = 0;
  cVar7 = fn_827A3440(param_1,param_2,&fStack_60,auStack_68,0,param_3,&lStack_70);
  if (cVar7 != '\0') {
    iVar3 = *(int *)(param_1 + 8);
    fVar4 = fStack_58;
    if (param_4 == '\0') {
      fVar4 = fStack_60 + lbl_8200571C;
    }
    fVar2 = *(float *)(iVar3 + 0x44);
    if ((((fVar2 < fVar4) || (*(float *)(iVar3 + 0x48) < fStack_54)) ||
        (fStack_60 < *(float *)(iVar3 + 0x3c))) ||
       (bVar5 = true, fStack_5c < *(float *)(iVar3 + 0x40))) {
      bVar5 = false;
    }
    if ((!bVar5) && ((*(byte *)(iVar3 + 0x13c) & 0x30) == 0)) {
      uVar6 = *(uint *)(iVar3 + 0x4c);
      uVar10 = (ulonglong)uVar6;
      uVar8 = -(ulonglong)((((U64)(lStack_70) >> 0) & 0xFFFFFFFF) == 0) & 0x4b0;
      if (fVar4 <= fVar2) {
        if (fStack_60 < *(float *)(iVar3 + 0x3c)) {
          uVar1 = (uint)(*(float *)(iVar3 + 0x3c) - fStack_60);
          lStack_70 = (longlong)(int)uVar1;
          uVar8 = (uVar10 - uVar1) - uVar8;
          uVar10 = ((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8;
        }
      }
      else {
        fStack_50 = (float)dVar11;
        fStack_4c = (float)dVar11;
        fStack_48 = (float)dVar11;
        fStack_44 = (float)dVar11;
        uVar1 = (uint)((fStack_60 - fVar2) + (float)(longlong)(int)uVar8);
        lStack_70 = (longlong)(int)uVar1;
        uVar10 = uVar1 + uVar10;
        if (((param_2 & 0xffffffff) != 0) &&
           (cVar7 = fn_827A1B60(iVar3,&fStack_50,param_2 - 1), cVar7 != '\0')) {
          uVar1 = (uint)(fStack_50 - lbl_820885C8);
          lStack_70 = (longlong)(int)uVar1;
          if ((int)uVar1 < (int)uVar10) {
            uVar10 = (ulonglong)uVar1;
          }
        }
        if ((int)uVar10 < 0) {
          uVar10 = 0;
        }
      }
      if (((*(byte *)(*(int *)(param_1 + 8) + 0x13d) & 8) == 0) || ((int)uVar10 < (int)uVar6)) {
        uVar9 = fn_8279ADE8(*(int *)(param_1 + 8),uVar10);
      }
      if (auStack_68[0] < *(uint *)(*(int *)(param_1 + 8) + 0x38)) {
        uVar10 = fn_8279AE60(*(int *)(param_1 + 8),auStack_68[0]);
      }
      else {
        uVar6 = fn_827A1F10();
        if (auStack_68[0] <= uVar6) {
          return uVar9;
        }
        uVar10 = fn_8279AED8(*(undefined4 *)(param_1 + 8),auStack_68[0]);
      }
      uVar9 = uVar10 & 0xff | uVar9 & 0xff;
    }
  }
  return uVar9;
}


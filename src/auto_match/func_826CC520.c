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
extern unsigned int *auStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_82758DE8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


float * fn_826CC520(float *param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  fStack_90 = lbl_821AAD20;
  uVar10 = (ulonglong)*(uint *)(param_2 + 0xac);
  dVar11 = (double)lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  fStack_8c = fStack_90;
  fStack_88 = fStack_90;
  fStack_84 = fStack_90;
  param_1[1] = fStack_90;
  param_1[2] = fStack_90;
  param_1[3] = fStack_90;
  fn_8268CC00(&uStack_60);
  if (uVar10 != 0) {
    iVar9 = 0;
    do {
      piVar3 = *(int **)(*(int *)(param_2 + 0xa8) + iVar9);
      if (piVar3 != (int *)0x0) {
        uStack_60 = *param_3;
        uStack_5c = param_3[1];
        uStack_58 = param_3[2];
        uStack_54 = param_3[3];
        uStack_50 = param_3[4];
        uStack_4c = param_3[5];
        fn_8268CEC0(&uStack_60,piVar3 + 0x11);
        pfVar8 = (float *)(**(code **)(*piVar3 + 0x28))(auStack_70,piVar3,&uStack_60);
        fStack_88 = pfVar8[2];
        fStack_90 = *pfVar8;
        fStack_84 = pfVar8[3];
        fStack_8c = pfVar8[1];
        if ((fStack_88 <= fStack_90) || (bVar7 = false, fStack_84 <= fStack_8c)) {
          bVar7 = true;
        }
        if (!bVar7) {
          fVar1 = *param_1;
          fVar2 = param_1[2];
          if ((fVar2 <= fVar1) || (bVar7 = false, param_1[3] <= param_1[1])) {
            bVar7 = true;
          }
          fVar4 = fStack_88;
          fVar5 = fStack_90;
          fVar6 = fStack_8c;
          if (bVar7) {
            param_1[3] = fStack_84;
          }
          else {
            if (fVar1 <= fStack_90) {
              fVar5 = fVar1;
            }
            if (fStack_88 < fVar2) {
              fVar4 = fVar2;
            }
            if (param_1[1] <= fStack_8c) {
              fVar6 = param_1[1];
            }
            fVar1 = param_1[3];
            if (param_1[3] <= fStack_84) {
              fVar1 = fStack_84;
            }
            param_1[3] = fVar1;
          }
          param_1[2] = fVar4;
          param_1[1] = fVar6;
          *param_1 = fVar5;
        }
      }
      uVar10 = uVar10 - 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 != 0);
  }
  if (*(int *)(param_2 + 0x1b8) != 0) {
    fn_82758DE8(*(int *)(param_2 + 0x1b8),&fStack_90);
    if ((fStack_88 <= fStack_90) || (bVar7 = false, fStack_84 <= fStack_8c)) {
      bVar7 = true;
    }
    if (!bVar7) {
      fStack_80 = (float)dVar11;
      fStack_7c = (float)dVar11;
      fStack_78 = (float)dVar11;
      fStack_74 = (float)dVar11;
      fn_8268D280(param_3,&fStack_80,&fStack_90);
      fVar1 = *param_1;
      fVar2 = param_1[2];
      if ((fVar2 <= fVar1) || (bVar7 = false, param_1[3] <= param_1[1])) {
        bVar7 = true;
      }
      if (bVar7) {
        param_1[1] = fStack_7c;
        param_1[2] = fStack_78;
        param_1[3] = fStack_74;
      }
      else {
        if (fStack_80 < fVar1) {
          fVar1 = fStack_80;
        }
        if (fStack_78 < fVar2) {
          fStack_78 = fVar2;
        }
        fVar2 = param_1[1];
        if (fStack_7c < fVar2) {
          fVar2 = fStack_7c;
        }
        fVar4 = param_1[3];
        if (param_1[3] <= fStack_74) {
          fVar4 = fStack_74;
        }
        param_1[1] = fVar2;
        param_1[2] = fStack_78;
        param_1[3] = fVar4;
        fStack_80 = fVar1;
      }
      *param_1 = fStack_80;
    }
  }
  return param_1;
}


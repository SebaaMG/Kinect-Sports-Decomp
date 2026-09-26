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
extern unsigned int *auStack_40;
extern int fn_82717FE8();
extern unsigned int lbl_821AAD20;


float * fn_82718548(float *param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float *pfVar9;
  ulonglong uVar10;
  undefined1 auStack_40 [64];
  
  fVar1 = lbl_821AAD20;
  bVar7 = false;
  iVar5 = *(int *)(*(int *)(param_2 + 0x9c) + 0x1c);
  *param_1 = lbl_821AAD20;
  uVar10 = 0;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  param_1[3] = fVar1;
  if (iVar5 != 0) {
    do {
      pfVar9 = (float *)fn_82717FE8(auStack_40,param_2,param_3,uVar10);
      fVar1 = *pfVar9;
      fVar2 = pfVar9[2];
      fVar3 = pfVar9[1];
      fVar4 = pfVar9[3];
      if ((fVar2 != fVar1) || (bVar6 = true, fVar4 != fVar3)) {
        bVar6 = false;
      }
      if (!bVar6) {
        if (bVar7) {
          if (*param_1 <= fVar1) {
            fVar1 = *param_1;
          }
          if (fVar2 < param_1[2]) {
            fVar2 = param_1[2];
          }
          if (param_1[1] <= fVar3) {
            fVar3 = param_1[1];
          }
          fVar8 = param_1[3];
          if (param_1[3] <= fVar4) {
            fVar8 = fVar4;
          }
          param_1[3] = fVar8;
        }
        else {
          param_1[3] = fVar4;
          bVar7 = true;
        }
        param_1[2] = fVar2;
        param_1[1] = fVar3;
        *param_1 = fVar1;
      }
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)(param_2 + 0x9c) + 0x1c));
  }
  return param_1;
}


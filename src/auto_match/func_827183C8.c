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
extern unsigned int *auStack_50;
extern unsigned int lbl_821AAD20;


float * fn_827183C8(float *param_1,int *param_2,undefined8 param_3)

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
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_50 [80];
  
  fVar1 = lbl_821AAD20;
  iVar10 = param_2[0x27];
  bVar7 = false;
  iVar11 = *(int *)(iVar10 + 0x1c);
  *param_1 = lbl_821AAD20;
  uVar12 = 0;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  param_1[3] = fVar1;
  if (iVar11 != 0) {
    iVar11 = 0;
    do {
      iVar5 = param_2[0x2e];
      iVar10 = *(int *)(iVar10 + 0x18) + iVar11;
      if ((((iVar5 == 0) && ((*(byte *)(iVar10 + 0x48) & 8) != 0)) ||
          ((iVar5 == 1 && ((*(byte *)(iVar10 + 0x48) & 2) != 0)))) ||
         ((iVar5 == 2 && ((*(byte *)(iVar10 + 0x48) & 4) != 0)))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        pfVar9 = (float *)(**(code **)(*param_2 + 0x13c))(auStack_50,param_2,param_3,uVar12);
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
      }
      iVar10 = param_2[0x27];
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x4c;
    } while ((uVar12 & 0xffffffff) < (ulonglong)*(uint *)(iVar10 + 0x1c));
  }
  return param_1;
}


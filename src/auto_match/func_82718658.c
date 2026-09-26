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


float * fn_82718658(float *param_1,int *param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_50 [80];
  
  fVar1 = lbl_821AAD20;
  iVar9 = param_2[0x27];
  iVar10 = *(int *)(iVar9 + 0x1c);
  *param_1 = lbl_821AAD20;
  uVar11 = 0;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  param_1[3] = fVar1;
  if (iVar10 != 0) {
    iVar10 = 0;
    do {
      iVar9 = *(int *)(iVar9 + 0x18) + iVar10;
      if (param_4 == 3) {
        if ((*(byte *)(iVar9 + 0x48) & 1) == 0) goto LAB_827186c0;
LAB_827186fc:
        pfVar8 = (float *)(**(code **)(*param_2 + 0x13c))(auStack_50,param_2,param_3,uVar11);
        fVar1 = *pfVar8;
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[3];
        if ((fVar2 != fVar1) || (bVar7 = true, fVar4 != fVar3)) {
          bVar7 = false;
        }
        if (!bVar7) {
          fVar5 = param_1[2];
          fVar6 = *param_1;
          if ((fVar5 != fVar6) || (bVar7 = true, param_1[3] != param_1[1])) {
            bVar7 = false;
          }
          if (bVar7) {
            param_1[2] = fVar2;
            param_1[3] = fVar4;
          }
          else {
            if (fVar6 <= fVar1) {
              fVar1 = fVar6;
            }
            if (fVar5 <= fVar2) {
              fVar5 = fVar2;
            }
            if (param_1[1] <= fVar3) {
              fVar3 = param_1[1];
            }
            fVar2 = param_1[3];
            if (param_1[3] <= fVar4) {
              fVar2 = fVar4;
            }
            param_1[2] = fVar5;
            param_1[3] = fVar2;
          }
          param_1[1] = fVar3;
          *param_1 = fVar1;
        }
      }
      else {
LAB_827186c0:
        if (param_4 == 2) {
          if ((*(byte *)(iVar9 + 0x48) & 2) != 0) goto LAB_827186fc;
        }
        if (param_4 == 1) {
          if ((*(byte *)(iVar9 + 0x48) & 4) != 0) goto LAB_827186fc;
        }
        if ((param_4 == 0) && ((*(byte *)(iVar9 + 0x48) & 8) != 0)) goto LAB_827186fc;
      }
      iVar9 = param_2[0x27];
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 0x4c;
    } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 0x1c));
  }
  return param_1;
}


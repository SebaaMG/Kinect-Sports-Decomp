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
extern unsigned int lbl_821AAD20;


void fn_829E9FF8(int param_1,int param_2,int *param_3,longlong param_4,uint param_5,int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  
  fVar3 = lbl_821AAD20;
  iVar11 = 0;
  if (0 < (int)param_4) {
    iVar9 = *(int *)(param_1 + 0x20);
    pfVar10 = (float *)(param_6 + -4);
    iVar7 = iVar9;
    do {
      piVar8 = (int *)(param_5 * 0xc + param_3[2]);
      iVar6 = iVar7 * iVar11;
      iVar1 = *piVar8;
      iVar5 = 0;
      if (0 < iVar7) {
        do {
          iVar7 = 0;
          fVar2 = fVar3;
          if (0 < piVar8[1]) {
            pfVar12 = (float *)(piVar8[2] + -4);
            pbVar4 = (byte *)((iVar5 + iVar6 + iVar1 + param_2) - iVar9);
            do {
              pbVar4 = pbVar4 + iVar9;
              iVar7 = iVar7 + 1;
              pfVar12 = pfVar12 + 1;
              fVar2 = (float)*pbVar4 * *pfVar12 + fVar2;
            } while (iVar7 < piVar8[1]);
          }
          iVar5 = iVar5 + 1;
          pfVar10 = pfVar10 + 1;
          *pfVar10 = fVar2;
          iVar9 = *(int *)(param_1 + 0x20);
          iVar7 = iVar9;
        } while (iVar5 < iVar9);
      }
      param_5 = param_5 + 1;
      if ((uint)((param_3[3] - param_3[2]) / 0xc) <= param_5) {
        param_5 = 0;
        iVar11 = *param_3 + iVar11;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


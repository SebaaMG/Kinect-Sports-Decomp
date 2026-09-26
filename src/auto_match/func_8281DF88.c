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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8281DF88(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  bool bVar12;
  
  pfVar11 = (float *)fn_82F6A540();
  fVar1 = *pfVar11;
  fVar10 = (pfVar11[1] * pfVar11[5] - pfVar11[2] * pfVar11[4]) * pfVar11[6] +
           ((pfVar11[4] * pfVar11[8] - pfVar11[5] * pfVar11[7]) * fVar1 -
           (pfVar11[1] * pfVar11[8] - pfVar11[2] * pfVar11[7]) * pfVar11[3]);
  bVar12 = fVar10 != lbl_821AAD20;
  if (bVar12) {
    fVar2 = pfVar11[5];
    fVar3 = pfVar11[8];
    fVar4 = pfVar11[3];
    fVar5 = pfVar11[7];
    fVar6 = pfVar11[6];
    fVar7 = pfVar11[4];
    fVar8 = pfVar11[2];
    fVar9 = pfVar11[1];
    fVar10 = lbl_82002AE0 / fVar10;
    param_2[5] = (fVar8 * fVar4 - fVar2 * fVar1) * fVar10;
    param_2[3] = (fVar2 * fVar6 - fVar4 * fVar3) * fVar10;
    param_2[7] = (fVar9 * fVar6 - fVar5 * fVar1) * fVar10;
    param_2[6] = (fVar5 * fVar4 - fVar7 * fVar6) * fVar10;
    param_2[4] = (fVar3 * fVar1 - fVar8 * fVar6) * fVar10;
    param_2[1] = (fVar8 * fVar5 - fVar9 * fVar3) * fVar10;
    param_2[8] = (fVar7 * fVar1 - fVar9 * fVar4) * fVar10;
    *param_2 = (fVar7 * fVar3 - fVar5 * fVar2) * fVar10;
    param_2[2] = (fVar9 * fVar2 - fVar8 * fVar7) * fVar10;
  }
  fn_82F6A58C(bVar12);
  return;
}


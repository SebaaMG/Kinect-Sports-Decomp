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
extern unsigned int lbl_8200133C;
extern float lbl_82005344;


double fn_82E92580(undefined8 param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  
  iVar13 = 0;
  if (param_5 == 1) {
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    piVar12 = param_2 + -1;
    piVar11 = (int *)(param_3 + 4);
    lVar14 = 0x40;
    do {
      piVar5 = piVar12 + 1;
      piVar6 = piVar12 + 3;
      uVar7 = *(int *)(((int)param_2 - param_3) + (int)piVar11) - *piVar11;
      uVar1 = *piVar5 - piVar11[-1] >> 0x1f;
      piVar12 = piVar12 + 4;
      uVar2 = (int)uVar7 >> 0x1f;
      uVar3 = *piVar6 - piVar11[1] >> 0x1f;
      uVar4 = *piVar12 - piVar11[2] >> 0x1f;
      iVar13 = ((*piVar5 - piVar11[-1] ^ uVar1) - uVar1) + iVar13;
      iVar10 = ((uVar7 ^ uVar2) - uVar2) + iVar10;
      iVar9 = ((*piVar6 - piVar11[1] ^ uVar3) - uVar3) + iVar9;
      iVar8 = ((*piVar12 - piVar11[2] ^ uVar4) - uVar4) + iVar8;
      piVar11 = piVar11 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar15 = (double)((float)(longlong)(iVar8 + iVar9 + iVar10 + iVar13) / (float)param_4);
  }
  else if (param_5 == 2) {
    piVar12 = (int *)(param_3 + 4);
    iVar8 = 0;
    param_3 = (int)param_2 - param_3;
    lVar14 = 0x80;
    do {
      iVar9 = piVar12[-1];
      if (*param_2 < piVar12[-1]) {
        iVar9 = *param_2;
      }
      iVar13 = iVar9 + iVar13;
      iVar9 = *(int *)((int)piVar12 + param_3);
      if (*piVar12 <= iVar9) {
        iVar9 = *piVar12;
      }
      iVar8 = iVar8 + iVar9;
      param_2 = param_2 + 2;
      piVar12 = piVar12 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar15 = (double)(((float)(longlong)(int)(param_4 - (iVar8 + iVar13)) * lbl_82005344) /
                     (float)param_4);
  }
  else {
    dVar15 = (double)lbl_8200133C;
  }
  return dVar15;
}


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
extern unsigned int lbl_82192F34;
extern float lbl_82193CC0;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_824E0760(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar6;
  undefined8 uVar5;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = param_2[1];
  if ((iVar11 < 0) || (0xef < *(int *)(param_3 + 4))) {
LAB_824e08f0:
    uVar5 = 0;
  }
  else {
    iVar2 = *param_2;
    param_4 = iVar11 * param_5 * 2 + param_4;
    uVar6 = param_1 + 1;
    uVar1 = *(ushort *)(iVar2 * 2 + param_4);
    fVar4 = lbl_821CC160;
    if ((uVar1 & 7) == uVar6) {
      fVar4 = (float)(uVar1 >> 3) * lbl_82193CC0;
    }
    for (; iVar11 < *(int *)(param_3 + 4); iVar11 = iVar11 + 1) {
      puVar10 = (ushort *)(iVar2 * 2 + param_4);
      if ((((*puVar10 & 7) != uVar6) ||
          (fVar3 = (float)(*puVar10 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34)) ||
         (iVar12 = iVar2, fVar4 + lbl_82192F34 < fVar3)) {
        iVar9 = 0;
        iVar8 = iVar2;
        puVar7 = puVar10;
        while ((((iVar8 < 1 || ((*puVar10 & 7) != uVar6)) ||
                ((fVar3 = (float)(*puVar10 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34 ||
                 (iVar12 = iVar8, fVar4 + lbl_82192F34 < fVar3)))) &&
               (((iVar12 = iVar9 + iVar2, 0x13f < iVar12 || ((*puVar7 & 7) != uVar6)) ||
                ((fVar3 = (float)(*puVar7 >> 3) * lbl_82193CC0, fVar3 < fVar4 - lbl_82192F34 ||
                 (fVar4 + lbl_82192F34 < fVar3))))))) {
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + -1;
          puVar10 = puVar10 + -1;
          puVar7 = puVar7 + 1;
          if (4 < iVar9) goto LAB_824e08f0;
        }
        if (iVar12 == iVar2) goto LAB_824e08f0;
      }
      param_4 = param_5 * 2 + param_4;
      iVar2 = iVar12;
    }
    uVar5 = 1;
  }
  return uVar5;
}


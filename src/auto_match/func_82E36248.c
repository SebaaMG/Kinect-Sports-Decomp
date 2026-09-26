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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82E36248(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  fVar6 = lbl_821AAD20;
  fVar5 = lbl_82002C5C;
  iVar1 = *param_1;
  piVar11 = (int *)param_1[0x1dff];
  iVar9 = *(int *)(iVar1 + 0x158);
  if (((param_1[0x1d78] == 0) || (*(int *)(iVar1 + 0x118) != 1)) || (*(int *)(iVar1 + 0x28) != 0)) {
    iVar9 = 0;
    if (0 < *(int *)(iVar1 + 0xf4)) {
      iVar7 = *(int *)(iVar1 + 0x154) - (int)piVar11;
      do {
        iVar9 = iVar9 + 1;
        *piVar11 = *(int *)((int)piVar11 + iVar7) + -1;
        piVar11 = piVar11 + 1;
      } while (iVar9 < *(int *)(iVar1 + 0xf4));
    }
  }
  else {
    iVar7 = 0;
    if (0 < *(int *)(iVar1 + 0xf4)) {
      iVar4 = *(int *)(iVar1 + 0x154) - (int)piVar11;
      do {
        iVar10 = *(int *)(iVar4 + (int)piVar11);
        fVar3 = (float)(longlong)*(int *)(iVar10 * 4 + iVar9) * (float)param_1[0x1d87];
        if (fVar6 <= fVar3) {
          fVar3 = fVar3 + fVar5;
        }
        else {
          fVar3 = fVar3 - fVar5;
        }
        iVar10 = iVar10 + -1;
        piVar8 = (int *)(iVar10 * 4 + iVar9);
        iVar2 = *(int *)(iVar10 * 4 + iVar9);
        for (; ((int)fVar3 < iVar2 && (0 < iVar10)); iVar10 = iVar10 + -1) {
          piVar8 = piVar8 + -1;
          iVar2 = *piVar8;
        }
        iVar7 = iVar7 + 1;
        *piVar11 = iVar10;
        iVar9 = iVar9 + 0x74;
        piVar11 = piVar11 + 1;
      } while (iVar7 < *(int *)(iVar1 + 0xf4));
      return;
    }
  }
  return;
}


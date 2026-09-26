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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82E05480(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int aiStack_70 [28];
  
  iVar4 = param_2 * 0xc + param_1;
  if (*(int *)(iVar4 + -0xc) != 0) {
    fn_82CE4040();
  }
  iVar1 = *(int *)(iVar4 + -0xc);
  iVar2 = *(int *)(iVar4 + -8);
  iVar4 = *(int *)(iVar4 + -4);
  while (param_2 <= (int)(((int)param_3 >> 1) + (uint)((int)param_3 < 0 && (param_3 & 1) != 0))) {
    iVar8 = param_2 * 2;
    if (iVar8 < (int)param_3) {
      iVar6 = param_2 * 0x18 + param_1;
      if ((*(int *)(iVar6 + -8) < *(int *)(iVar6 + 4)) ||
         ((*(int *)(iVar6 + -8) == *(int *)(iVar6 + 4) &&
          (*(int *)(iVar6 + -4) < *(int *)(iVar6 + 8))))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar6 = iVar8 * 0xc + param_1;
    if ((iVar2 < *(int *)(iVar6 + -8)) ||
       ((iVar2 == *(int *)(iVar6 + -8) && (iVar4 < *(int *)(iVar6 + -4))))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) break;
    iVar7 = param_2 * 0xc + param_1;
    piVar9 = (int *)(iVar7 + -0xc);
    if (piVar9 != (int *)(iVar6 + -0xc)) {
      iVar3 = *(int *)(iVar6 + -0xc);
      if (iVar3 != 0) {
        fn_82CE4040(iVar3);
      }
      if (*piVar9 != 0) {
        fn_82CE4118();
      }
      *piVar9 = iVar3;
    }
    *(undefined4 *)(iVar7 + -8) = *(undefined4 *)(iVar6 + -8);
    *(undefined4 *)(iVar7 + -4) = *(undefined4 *)(iVar6 + -4);
    param_2 = iVar8;
  }
  param_1 = param_2 * 0xc + param_1;
  piVar9 = (int *)(param_1 + -0xc);
  if (piVar9 != aiStack_70) {
    if (iVar1 != 0) {
      fn_82CE4040(iVar1);
    }
    if (*piVar9 != 0) {
      fn_82CE4118();
    }
    *piVar9 = iVar1;
  }
  *(int *)(param_1 + -8) = iVar2;
  *(int *)(param_1 + -4) = iVar4;
  if (iVar1 != 0) {
    fn_82CE4118(iVar1);
  }
  return;
}


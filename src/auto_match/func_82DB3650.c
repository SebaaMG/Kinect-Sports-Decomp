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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82DB3650(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  
  param_2[1] = 0;
  lVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0x58) + 0x24))();
  iVar2 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < (int)lVar1) {
    lVar8 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
    if ((int)lVar8 <= (int)lVar1) {
      lVar8 = lVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_2,lVar8,4);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x2c)) {
    iVar4 = 0;
    do {
      iVar5 = *(int *)(iVar2 + 0x28);
      iVar7 = 0;
      if (0 < *(int *)(*(int *)(iVar4 + iVar5) + 0x4c)) {
        iVar6 = 0;
        do {
          iVar7 = iVar7 + 1;
          piVar9 = (int *)(*(int *)(*(int *)(iVar4 + iVar5) + 0x48) + iVar6);
          iVar6 = iVar6 + 4;
          *(int *)(param_2[1] * 4 + *param_2) = *piVar9 + 0x10;
          param_2[1] = param_2[1] + 1;
          iVar5 = *(int *)(iVar2 + 0x28);
        } while (iVar7 < *(int *)(*(int *)(iVar4 + iVar5) + 0x4c));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(iVar2 + 0x2c));
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x38)) {
    iVar4 = 0;
    do {
      iVar5 = *(int *)(iVar2 + 0x34);
      iVar7 = 0;
      if (0 < *(int *)(*(int *)(iVar4 + iVar5) + 0x4c)) {
        iVar6 = 0;
        do {
          iVar7 = iVar7 + 1;
          piVar9 = (int *)(*(int *)(*(int *)(iVar4 + iVar5) + 0x48) + iVar6);
          iVar6 = iVar6 + 4;
          *(int *)(param_2[1] * 4 + *param_2) = *piVar9 + 0x10;
          param_2[1] = param_2[1] + 1;
          iVar5 = *(int *)(iVar2 + 0x34);
        } while (iVar7 < *(int *)(*(int *)(iVar4 + iVar5) + 0x4c));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(iVar2 + 0x38));
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x118)) {
    iVar4 = 0;
    do {
      piVar9 = (int *)(*(int *)(iVar4 + *(int *)(iVar2 + 0x114)) + 0x10);
      if (*piVar9 != 0) {
        *(int **)(param_2[1] * 4 + *param_2) = piVar9;
        param_2[1] = param_2[1] + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(iVar2 + 0x118));
  }
  iVar4 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
  if (0 < *(int *)(iVar2 + 0x4c)) {
    iVar5 = 0;
    do {
      iVar7 = *(int *)(iVar5 + *(int *)(iVar2 + 0x48));
      if (iVar7 != iVar3) {
        *(int *)(param_2[1] * 4 + *param_2) = iVar7 + 0x10;
        param_2[1] = param_2[1] + 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(iVar2 + 0x4c));
  }
  return;
}


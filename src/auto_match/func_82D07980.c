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
extern int fn_82CFC050();


void fn_82D07980(int param_1,int *param_2,ulonglong param_3,int param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = (int)param_3;
  if (param_1 == 3) {
    iVar3 = fn_82CE5410();
    uVar1 = param_5[1];
    lVar6 = uVar1 + param_3;
    iVar7 = (int)lVar6;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar7) {
      lVar9 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar9) {
        lVar6 = lVar9;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_5,lVar6,4);
    }
    piVar8 = (int *)(uVar1 * 4 + *param_5);
    param_5[1] = param_5[1] + iVar10;
    if (param_4 == 0) {
      fn_82CFC050(piVar8,param_2,(param_3 & 0x3fffffff) << 2);
    }
    else if (0 < iVar10) {
      iVar10 = (int)param_2 - (int)piVar8;
      do {
        *piVar8 = *(int *)(iVar10 + (int)piVar8) + param_4;
        piVar8 = piVar8 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else if (param_1 == 4) {
    lVar9 = (param_3 - 2) + (param_3 - 2 & 0x7fffffff) * 2;
    iVar3 = fn_82CE5410();
    uVar1 = param_5[1];
    lVar6 = (ulonglong)uVar1 + lVar9;
    iVar7 = (int)lVar6;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar7) {
      lVar2 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
      if (iVar7 < (int)lVar2) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_5,lVar6,4);
    }
    bVar4 = false;
    piVar8 = (int *)(uVar1 * 4 + *param_5);
    param_5[1] = param_5[1] + (int)lVar9;
    if (2 < iVar10) {
      lVar6 = param_3 - 2;
      do {
        piVar5 = param_2 + 1;
        *piVar8 = *param_2 + param_4;
        if (bVar4) {
          piVar8[1] = param_2[2] + param_4;
          iVar10 = *piVar5;
        }
        else {
          piVar8[1] = *piVar5 + param_4;
          iVar10 = param_2[2];
        }
        bVar4 = (bool)(bVar4 ^ 1);
        piVar8[2] = iVar10 + param_4;
        piVar8 = piVar8 + 3;
        lVar6 = lVar6 + -1;
        param_2 = piVar5;
      } while (lVar6 != 0);
    }
  }
  return;
}


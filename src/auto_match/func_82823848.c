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
extern int fn_82823728();


undefined8 fn_82823848(int param_1,int *param_2,uint param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar4;
  
  if ((uint)param_2[6] < *param_5 + 5U) {
    return 1;
  }
  iVar2 = (int)param_4;
  if ((*(int *)*param_2 < 1) ||
     (iVar5 = *(int *)*param_2 * 5 + param_1, *(byte *)(iVar5 + -5) != param_3)) {
    if ((param_3 == 1) || (uVar3 = 0, param_3 == 2)) {
      uVar3 = param_4;
    }
    uVar3 = fn_82823728(param_1,param_2,uVar3,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar6 = (undefined1 *)(*(int *)*param_2 * 5 + param_1);
    *puVar6 = (char)param_3;
    *(int *)(puVar6 + 1) = iVar2;
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_5 = *param_5 + 5;
  }
  else {
    *(int *)(iVar5 + -4) = *(int *)(iVar5 + -4) + iVar2;
  }
  if (param_3 == 0) {
    uVar1 = param_2[7];
    uVar4 = (ulonglong)(uint)param_2[8] - (ulonglong)uVar1;
    if (0 < (longlong)uVar4) {
      if ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_2[10]) {
        uVar4 = (ulonglong)(uint)param_2[10];
      }
      param_2[10] = (int)uVar4;
    }
    param_2[8] = param_2[8] + iVar2;
  }
  else {
    if (param_3 == 1) {
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + iVar2;
      param_2[7] = param_2[7] + iVar2;
      param_2[8] = param_2[8] + iVar2;
      return 0;
    }
    if (param_3 < 3) {
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + iVar2;
      param_2[8] = param_2[8] + iVar2;
      return 0;
    }
    if (param_3 != 3) {
      return 0;
    }
    uVar1 = param_2[7];
  }
  param_2[7] = uVar1 + iVar2;
  return 0;
}


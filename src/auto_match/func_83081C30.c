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


void fn_83081C30(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2 * 4;
  iVar5 = *(int *)*param_1;
  iVar1 = *(int *)(iVar6 + iVar5);
  iVar2 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 * 4 + iVar5);
    } while (-1 < iVar2);
    while (-1 < iVar1) {
      iVar2 = param_2 * 4;
      param_2 = *(int *)(iVar2 + iVar5);
      *(int *)(iVar2 + iVar5) = iVar3;
      iVar6 = param_2 * 4;
      iVar5 = *(int *)*param_1;
      iVar1 = *(int *)(iVar6 + iVar5);
    }
  }
  iVar3 = param_3 * 4;
  iVar1 = *(int *)(iVar3 + iVar5);
  iVar2 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 * 4 + iVar5);
    } while (-1 < iVar2);
    while (-1 < iVar1) {
      iVar2 = param_3 * 4;
      param_3 = *(int *)(iVar2 + iVar5);
      *(int *)(iVar2 + iVar5) = iVar4;
      iVar3 = param_3 * 4;
      iVar5 = *(int *)*param_1;
      iVar1 = *(int *)(iVar3 + iVar5);
    }
  }
  if (param_2 != param_3) {
    if (param_2 < param_3) {
      *(int *)(iVar6 + iVar5) = *(int *)(iVar3 + iVar5) + *(int *)(iVar6 + iVar5);
      *(int *)(*(int *)*param_1 + iVar3) = param_2;
      return;
    }
    *(int *)(iVar3 + iVar5) = *(int *)(iVar6 + iVar5) + *(int *)(iVar3 + iVar5);
    *(int *)(*(int *)*param_1 + iVar6) = param_3;
  }
  return;
}


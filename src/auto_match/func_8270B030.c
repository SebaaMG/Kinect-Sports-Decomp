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


int fn_8270B030(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_1;
  iVar2 = 0;
  uVar3 = 0xffffffff;
  if (iVar6 == 0) {
    return iVar2;
  }
  iVar7 = 0;
  uVar4 = (ulonglong)param_2;
  while( true ) {
    uVar5 = param_2 - *(uint *)(iVar6 + 0x10);
    if (((*(uint *)(iVar6 + 0x10) <= param_2) && (uVar5 < uVar3)) &&
       (iVar2 = iVar6, uVar3 = uVar5, uVar5 == 0)) {
      return iVar6;
    }
    iVar1 = *(int *)(iVar6 + 4);
    iVar6 = *(int *)(((int)(uVar4 >> 0x1f) + 1) * 4 + iVar6);
    if ((iVar1 != 0) && (iVar1 != iVar6)) {
      iVar7 = iVar1;
    }
    if (iVar6 == 0) break;
    uVar4 = (uVar4 & 0x7fffffff) << 1;
  }
  if (iVar7 == 0) {
    return iVar2;
  }
  do {
    uVar5 = param_2 - *(uint *)(iVar7 + 0x10);
    if ((*(uint *)(iVar7 + 0x10) <= param_2) && (uVar5 < uVar3)) {
      iVar2 = iVar7;
      uVar3 = uVar5;
    }
    iVar7 = *(int *)((2 - (uint)(*(int *)(iVar7 + 8) == 0)) * 4 + iVar7);
  } while (iVar7 != 0);
  return iVar2;
}


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


undefined8 fn_82CEB1F0(int param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1c);
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    uVar3 = *(uint *)(iVar1 + 0x1c) + uVar3;
  }
  uVar3 = param_2 - uVar3;
  while (uVar3 = *(uint *)(param_1 + 0x1c) + uVar3, (longlong)uVar3 < 0) {
    param_1 = *(int *)(param_1 + 4);
    if (param_1 == 0) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    return 1;
  }
  iVar2 = *(int *)((int)((uVar3 & 0xffffffff) << 2) + iVar1);
  if (iVar2 < 0) {
    return 1;
  }
  *param_3 = iVar1 + iVar2;
  *param_4 = (int)((uVar3 + (uVar3 & 0x7fffffff) * 2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x18);
  return 0;
}


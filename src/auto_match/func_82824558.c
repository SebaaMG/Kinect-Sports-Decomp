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


longlong fn_82824558(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  pbVar4 = (byte *)*param_2;
  iVar1 = **(int **)(*(int *)(param_1 + 0x10) + 0x388) + *(int *)(param_1 + 0x14) * 0x20;
  pbVar5 = *(byte **)(**(int **)(*(int *)(param_1 + 0x10) + 0x3bc) + *(int *)(iVar1 + 0xc) * 4);
  do {
    lVar2 = (ulonglong)*pbVar5 - (ulonglong)*pbVar4;
    iVar3 = (int)lVar2;
    if (*pbVar5 == 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar3 == 0);
  if (iVar3 != 0) {
    return lVar2;
  }
  if (param_2[1] == 0xffffffff) {
    return lVar2;
  }
  return (ulonglong)(uint)param_2[1] - (ulonglong)*(uint *)(iVar1 + 0x10);
}


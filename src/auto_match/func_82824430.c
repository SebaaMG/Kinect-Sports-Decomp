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


longlong fn_82824430(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    return 1;
  }
  iVar3 = **(int **)(*(int *)(param_2 + 0x10) + 0x388) + *(int *)(param_2 + 0x14) * 0x20;
  iVar4 = **(int **)(*(int *)(param_1 + 0x10) + 0x388) + *(int *)(param_1 + 0x14) * 0x20;
  pbVar5 = *(byte **)(**(int **)(*(int *)(param_2 + 0x10) + 0x3bc) + *(int *)(iVar3 + 0xc) * 4);
  pbVar6 = *(byte **)(**(int **)(*(int *)(param_1 + 0x10) + 0x3bc) + *(int *)(iVar4 + 0xc) * 4);
  do {
    lVar1 = (ulonglong)*pbVar6 - (ulonglong)*pbVar5;
    iVar2 = (int)lVar1;
    if (*pbVar6 == 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (iVar2 == 0);
  if (iVar2 != 0) {
    return lVar1;
  }
  return (ulonglong)*(uint *)(iVar3 + 0x10) - (ulonglong)*(uint *)(iVar4 + 0x10);
}


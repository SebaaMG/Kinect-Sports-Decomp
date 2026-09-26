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


void fn_82D029B8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = param_1 + 0xa4;
  iVar2 = *(int *)(param_1 + 0xa8);
  while (iVar2 != iVar4) {
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(**(int **)(param_1 + 0x98) + 0x10))
              (*(int **)(param_1 + 0x98),iVar2,*(undefined4 *)(iVar2 + 0xc));
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0;
  lVar5 = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int *)(param_1 + 0xa8) = iVar4;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(param_1 + 0xa0) = 3;
  *(int *)(param_1 + 0x10) = param_1 + 0x9c;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


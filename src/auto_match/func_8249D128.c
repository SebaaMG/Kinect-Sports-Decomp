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


void fn_8249D128(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + 0x30);
  do {
    iVar4 = iVar5;
    if (iVar4 == *(int *)(param_1 + 0x34)) {
      return;
    }
    iVar5 = iVar4 + 0x14;
  } while (*(int *)(iVar4 + 0x10) != param_2);
  iVar1 = *(int *)(param_1 + 0x34);
  for (; iVar5 != iVar1; iVar5 = iVar5 + 0x14) {
    puVar3 = (undefined4 *)(iVar5 + -4);
    puVar2 = (undefined4 *)(iVar4 + -4);
    lVar6 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar4 = iVar4 + 0x14;
  }
  iVar4 = *(int *)(param_1 + 0x34) + -0x14;
  for (iVar5 = iVar4; iVar5 != *(int *)(param_1 + 0x34); iVar5 = iVar5 + 0x14) {
  }
  *(int *)(param_1 + 0x34) = iVar4;
  return;
}


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


void fn_82D9A420(int param_1,int param_2)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    piVar4 = *(int **)(param_1 + 0x8c);
    do {
      if (*piVar4 == param_2) goto LAB_82d9a454;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x90));
  }
  iVar1 = -1;
LAB_82d9a454:
  iVar3 = *(int *)(param_1 + 0x90) + -1;
  puVar5 = (undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x8c));
  *(int *)(param_1 + 0x90) = iVar3;
  iVar1 = (iVar3 - iVar1) * 4;
  if (iVar1 < 1) {
    return;
  }
  lVar2 = (ulonglong)(iVar1 - 1U >> 2) + 1;
  do {
    *puVar5 = puVar5[1];
    puVar5 = puVar5 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


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


void fn_82685580(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x7c) - 1;
  *(int *)(param_1 + 0x7c) = (int)lVar3;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x34) != param_1 + 0x30) {
      piVar4 = (int *)(param_1 + 0x38);
      do {
        piVar1 = *(int **)(param_1 + 0x34);
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)piVar1[1] = *piVar1;
        *piVar1 = *piVar4;
        piVar1[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar1;
        *piVar4 = (int)piVar1;
      } while (*(int *)(param_1 + 0x34) != param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x18) = 0;
  for (; iVar2 != param_1 + 0x38; iVar2 = *(int *)(iVar2 + 4)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}


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


void fn_822760B0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 4);
  if (*(uint *)(*(int *)(param_1 + 0x10) + 4) < *(uint *)(*(int *)(param_1 + 0x10) + 8)) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(*(int *)(param_1 + 0x10) + 4) + 8;
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4) + 8;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar2;
  *(int *)(*(int *)(param_1 + 0x10) + 8) = iVar2;
  return;
}


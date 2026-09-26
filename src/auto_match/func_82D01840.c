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


void fn_82D01840(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    if (param_2 < (uint)puVar2[1]) {
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      *puVar3 = puVar1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - puVar2[3];
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - puVar2[3];
      (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    }
  }
  return;
}


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


undefined8 fn_82E5A068(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (*(int **)(param_1 + 0x88) == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x88) + 4))();
      uVar2 = *(undefined4 *)(param_1 + 0x88);
    }
    *param_2 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


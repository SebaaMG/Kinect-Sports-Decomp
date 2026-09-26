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
extern int fn_82E3BCC8();
extern int fn_82E3EC48();


undefined8 fn_82E3FD48(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_82E3EC48();
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x10))();
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 8))();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 8))();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  fn_82E3BCC8(param_1 + 0x78,0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  return uVar1;
}


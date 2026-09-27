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
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


byte fn_83023568(int param_1)

{
  undefined1 uVar1;
  struct { int first; uint second; } stack_pair_20;

  
  (**(code **)(**(int **)(param_1 + 0x34) + 100))(*(int **)(param_1 + 0x34),&stack_pair_20.first);
  if ((*(char *)(param_1 + 0x4c) == '\0') && ((stack_pair_20.first != 0 || (stack_pair_20.second != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x4c) = uVar1;
  return -(stack_pair_20.second < 2) & 1;
}


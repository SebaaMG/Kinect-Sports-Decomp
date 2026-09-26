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


undefined8 fn_82C03E78(int param_1,int *param_2,int *param_3,int *param_4)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 8))();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    *(int **)(param_1 + 0x38) = param_2;
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
    *(int **)(param_1 + 0x3c) = param_3;
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_4);
    *(int **)(param_1 + 0x40) = param_4;
  }
  return 0;
}


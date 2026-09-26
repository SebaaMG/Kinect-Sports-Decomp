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
extern int fn_822E6160();


void fn_822E51A8(undefined8 param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x2d8) == 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
    fn_822E6160();
    *(undefined4 *)(param_2 + 0x2d8) = 1;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    if (*(int **)(param_2 + 0x1cc) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0x1cc) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x1d4) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x1dc) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x1e4) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x1ec) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 500) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x1fc) + 4))(param_1);
      (**(code **)(**(int **)(param_2 + 0x204) + 4))(param_1);
    }
  }
  return;
}


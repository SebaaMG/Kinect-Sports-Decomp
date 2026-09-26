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
extern int fn_82FA9208();
extern int fn_82FAA228();
extern int fn_82FAAE50();
extern int fn_82FAB1D8();


void fn_82FAB260(int param_1)

{
  *(int *)(*(int *)(param_1 + 8) + 0x2c) = *(int *)(*(int *)(param_1 + 8) + 0x2c) + 1;
  if ((*(byte *)(*(int *)(param_1 + 8) + 0x34) & 0x80) == 0) {
    fn_82FAB1D8(param_1);
  }
  else if ((*(byte *)(*(int *)(param_1 + 8) + 0x34) & 0x40) == 0) {
    fn_82FAAE50();
    fn_82FAA228(param_1);
    (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),0x400);
  }
  fn_82FA9208(*(undefined4 *)(param_1 + 8));
  return;
}


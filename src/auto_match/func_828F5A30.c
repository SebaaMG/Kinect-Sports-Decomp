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
extern int fn_828F59D0();
extern int fn_828F5AC0();
extern int fn_829206A0();
extern int fn_82BA02A8();


void fn_828F5A30(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_828F59D0(*(int *)(param_1 + 0x38),1);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_828F5AC0(*(int *)(param_1 + 0x5c),1);
  }
  if ((*(int **)(param_1 + 0x48) != (int *)0x0) && (*(int *)(param_1 + 0x54) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x48) + 4))();
  }
  fn_829206A0(param_1 + 0x3c);
  fn_82BA02A8(param_1);
  return;
}


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
extern int fn_82E4FE40();
extern int fn_82E579E0();


undefined8 fn_82F486E8(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    fn_82E579E0(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (*(int **)(param_1 + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x10) + 8))();
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 8))();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      return 0;
    }
  }
  return 0xffffffffc00d36b6;
}


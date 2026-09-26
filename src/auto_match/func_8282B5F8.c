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
extern int fn_8282B528();


void fn_8282B5F8(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((((*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x2c8)) ||
         (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x2d0))) ||
        (*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x2d4))) ||
       (*(int *)(param_2 + 0x1c) != *(int *)(param_1 + 0x2cc))) {
      if (*(int *)(param_1 + 0x2b8) != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        if (*(char *)(param_1 + 1000) == '\0') {
          fn_8282B528(param_1);
        }
        *(undefined4 *)(param_1 + 0x2b8) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x1c);
    }
    iVar1 = *(int *)(param_1 + 700) + 1;
    *(int *)(param_1 + 700) = iVar1;
    *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    if (iVar1 == *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      if (*(char *)(param_1 + 1000) == '\0') {
        fn_8282B528(param_1);
      }
    }
  }
  return;
}


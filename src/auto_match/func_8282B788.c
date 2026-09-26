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
extern int fn_8282D640();


void fn_8282B788(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x3ef) != '\0') {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 1;
    *(undefined4 *)(param_1 + 0x2d0) = 2;
    *(undefined4 *)(param_1 + 0x2d4) = 2;
    *(undefined4 *)(param_1 + 0x2cc) = 1;
    fn_8282D640(param_1,param_1 + 0x318,0xffffffff8282b5f8,0);
    if (*(char *)(param_1 + 1000) == '\0') {
      fn_8282D640(param_1,param_1 + 0x318,0xffffffff8282b710,0);
    }
  }
  return;
}


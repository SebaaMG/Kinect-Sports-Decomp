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
extern int fn_8268C3A8();
extern unsigned int lbl_8200DDC4;


undefined4 * fn_826FDED0(undefined4 *param_1,undefined8 param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DDC4;
  fn_8268C3A8(param_1 + 2);
  fn_8268C3A8(param_1 + 4,param_2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xff000000;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  return param_1;
}


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
extern int fn_82D40568();
extern unsigned int lbl_82192734;


undefined4 *
fn_8253D7A8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = param_4;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x19) = 0x7f;
  fn_82D40568(param_1 + 8);
  param_1[0x13] = lbl_82192734;
  *(undefined1 *)((int)param_1 + 0x19) = 0xec;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return param_1;
}


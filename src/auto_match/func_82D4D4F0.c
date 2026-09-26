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
extern int fn_82DCDF98();
extern unsigned int lbl_82136AB4;
extern unsigned int lbl_82136AC4;
extern unsigned int lbl_82136AD4;


undefined4 *
fn_82D4D4F0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = &lbl_82136AB4;
  *param_1 = &lbl_82136AD4;
  param_1[2] = &lbl_82136AC4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = param_4;
  fn_82DCDF98(param_2,param_3,param_1 + 2);
  param_1[6] = 0;
  return param_1;
}


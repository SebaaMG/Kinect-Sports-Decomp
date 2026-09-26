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
extern int fn_82936290();
extern int fn_829603E0();
extern unsigned int lbl_820344C0;


undefined4 *
fn_82940FD8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  fn_829603E0();
  param_1[0x17f] = 0;
  *param_1 = &lbl_820344C0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1c6] = 0xc;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  fn_82936290(param_1 + 0x7f,0x400,param_4);
  return param_1;
}


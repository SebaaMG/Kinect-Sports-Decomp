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
extern int fn_82AA0750();
extern int fn_82AA0840();


void fn_82B69AF8(undefined8 param_1)

{
  fn_82AA0750(param_1,0,0);
  fn_82AA0750(param_1,1,0);
  fn_82AA0750(param_1,0x58,0);
  fn_82AA0750(param_1,0x59,0);
  fn_82AA0750(param_1,0x5a,0x2000);
  fn_82AA0750(param_1,0x5b,0x2000);
  fn_82AA0750(param_1,0x3eb,0);
  fn_82AA0750(param_1,0x3ec,0xffffff);
  fn_82AA0840(param_1,0x32,0,1);
  fn_82AA0840(param_1,0x33,0,1);
  fn_82AA0840(param_1,0x34,0,1);
  fn_82AA0840(param_1,0x35,0,1);
  fn_82AA0750(param_1,0x23,0);
  fn_82AA0750(param_1,0x46,0);
  fn_82AA0750(param_1,0x25,7);
  fn_82AA0750(param_1,0x24,0);
  fn_82AA0750(param_1,0x4b,0);
  fn_82AA0750(param_1,0x22,0xcc);
  fn_82AA0750(param_1,2,0);
  fn_82AA0750(param_1,3,1);
  fn_82AA0750(param_1,5,0);
  fn_82AA0750(param_1,4,0);
  fn_82AA0750(param_1,6,1);
  fn_82AA0750(param_1,8,0);
  fn_82AA0750(param_1,7,0);
  fn_82AA0750(param_1,0x5f,1);
  fn_82AA0750(param_1,0x1c,7);
  fn_82AA0750(param_1,0xa3,0);
  fn_82AA0750(param_1,0x1b,1);
  fn_82AA0750(param_1,0x29d,1);
  return;
}


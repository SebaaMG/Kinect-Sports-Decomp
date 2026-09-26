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
extern int fn_8277B4A0();
extern int fn_8277B540();
extern int fn_8277E360();
extern int fn_82784308();
extern int fn_82789958();
extern int fn_827B5EA8();


void fn_826EEBC0(int param_1)

{
  fn_82784308(param_1 + 8);
  fn_82784308(param_1 + 0x50);
  fn_827B5EA8(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  fn_827B5EA8(param_1 + 0x2c4);
  *(undefined1 *)(param_1 + 0x2d4) = 0;
  fn_827B5EA8(param_1 + 0x2d8);
  fn_827B5EA8(param_1 + 0x2e8);
  fn_82789958(param_1 + 0x308);
  fn_8277E360(param_1 + 0xc4);
  fn_8277B4A0(param_1 + 0x398,0);
  fn_8277B540(param_1 + 0x398,0,1);
  return;
}


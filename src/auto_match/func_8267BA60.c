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
extern int fn_8267ADA8();
extern int fn_8267B960();
extern int fn_82691080();
extern int fn_82691480();
extern unsigned int lbl_831E7E60;
extern unsigned int *lbl_831F129C;


int fn_8267BA60(int param_1)

{
  fn_8267B960();
  fn_82691480(param_1 + 0xb4,param_1,0x4000,0x1000);
  fn_82691080(param_1 + 0x118,param_1,0x4000);
  fn_8267ADA8(param_1 + 0x2c4,0);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *lbl_831F129C = param_1 + 0xb4;
  lbl_831E7E60 = param_1;
  return param_1;
}


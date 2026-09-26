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
extern int fn_83055F08();
extern unsigned int lbl_8217DDBC;
extern unsigned int lbl_8217DDF0;
extern unsigned int lbl_8217DE98;
extern unsigned int lbl_8217DECC;


undefined4 * fn_83050FC0(undefined4 *param_1)

{
  fn_83055F08();
  param_1[4] = 0;
  *param_1 = &lbl_8217DDF0;
  RtlInitializeCriticalSection(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1d] = param_1[0x1d] & 0xe0ffffff;
  param_1[0x1e] = &lbl_8217DDBC;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *param_1 = &lbl_8217DECC;
  param_1[0x1e] = &lbl_8217DE98;
  param_1[0x1d] = param_1[0x1d] & 0x1fffffff | 0x40000000;
  *(byte *)((int)param_1 + 0xa9) = *(byte *)((int)param_1 + 0xa9) & 0x3f;
  return param_1;
}


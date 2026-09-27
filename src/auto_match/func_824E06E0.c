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
extern int fn_824DCB30();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined4 * fn_824E06E0(undefined4 *param_1)

{
  undefined4 uStack_20;
  struct { undefined4 first; undefined4 second; } stack_pair_1c;

  
  uStack_20 = 0;
  stack_pair_1c.first = 0;
  stack_pair_1c.second = (uint)(((U64)(stack_pair_1c.second) >> 16) & 0xFFFF);
  fn_824DCB30(&uStack_20,&stack_pair_1c.first,&stack_pair_1c.second);
  *param_1 = uStack_20;
  param_1[1] = stack_pair_1c.first;
  param_1[2] = stack_pair_1c.second;
  return param_1;
}


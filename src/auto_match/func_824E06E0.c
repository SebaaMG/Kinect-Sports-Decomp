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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = (uint)(((U64)(uStack_18) >> 16) & 0xFFFF);
  fn_824DCB30(&uStack_20,&uStack_1c,&uStack_18);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return param_1;
}


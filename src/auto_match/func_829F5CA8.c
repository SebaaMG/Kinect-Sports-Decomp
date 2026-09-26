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
extern int fn_829F5388();
extern int fn_82A0B9C8();
extern int fn_82A0D568();


undefined4 * fn_829F5CA8(undefined4 *param_1)

{
  fn_829F5388(param_1 + 4);
  fn_82A0D568(param_1 + 0x2c);
  fn_82A0B9C8(param_1 + 0x34);
  param_1[0x41a5] = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[0x4190] = 0;
  param_1[0x41a7] = 0;
  param_1[0x419e] = 0;
  param_1[0x4191] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x41a8) = 0;
  *(undefined8 *)(param_1 + 0x41aa) = 0;
  *(undefined8 *)(param_1 + 0x41ac) = 0;
  param_1[0x41ae] = 0;
  return param_1;
}


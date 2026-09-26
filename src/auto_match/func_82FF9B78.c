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
extern unsigned int lbl_8217BCF4;


void fn_82FF9B78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  int param_5,int param_6)

{
  param_1[6] = param_3;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &lbl_8217BCF4;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = (int)param_4;
  param_1[0x11] = param_5 + param_6;
  param_1[0x13] = param_6;
  *(byte *)(param_1 + 0x12) = (param_4 != 0) << 7 | *(byte *)(param_1 + 0x12) & 0x1f;
  return;
}


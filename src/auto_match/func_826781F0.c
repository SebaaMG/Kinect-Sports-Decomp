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
extern int fn_82F68CC0();


void fn_826781F0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5,undefined8 param_6)

{
  if (((param_3 == (undefined4 *)0x0) && (param_3 = param_4, param_4 == (undefined4 *)0x0)) &&
     (param_5 == 0)) {
    fn_82F68CC0(param_1 + 3,param_6,0x20);
    param_1[0xb] = 0;
  }
  else {
    *param_1 = 2;
    param_1[0xb] = *param_3;
    param_1[0xc] = param_3[1];
    param_1[0xd] = param_3[2];
    param_1[0xe] = param_3[3];
    param_1[0xf] = param_3[4];
    param_1[0x10] = param_3[5];
    param_1[0x11] = param_3[6];
    param_1[0x12] = param_3[7];
    param_1[0x13] = param_3[8];
    param_1[2] = 0xffffffff;
    fn_82F68CC0(param_1 + 3,param_6,0x20);
    if (param_4 != (undefined4 *)0x0) {
      param_1[0x14] = *param_4;
      param_1[0x15] = param_4[1];
      param_1[0x16] = param_4[2];
      param_1[0x17] = param_4[3];
      param_1[0x18] = param_4[4];
      param_1[0x19] = param_4[5];
      param_1[0x1a] = param_4[6];
      param_1[0x1b] = param_4[7];
      param_1[0x1c] = param_4[8];
    }
  }
  param_1[1] = param_2;
  *param_1 = 3;
  return;
}


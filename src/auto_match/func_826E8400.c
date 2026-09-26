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
extern int fn_8268C3A8();
extern int fn_826E76C8();
extern unsigned int lbl_8200D6D0;


undefined4 *
fn_826E8400(undefined4 *param_1,int param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = &lbl_8200D6D0;
  param_1[4] = 0;
  fn_8268C3A8(param_1 + 6,param_4);
  param_1[0xf] = param_2;
  if (param_2 == 0) {
    param_1[0x10] = 0;
  }
  else {
    param_1[0x10] = param_3;
  }
  fn_826E76C8(param_1,0,param_5,param_6);
  param_1[0xc] = param_1[0x10];
  param_1[0xd] = param_1[0x10];
  return param_1;
}


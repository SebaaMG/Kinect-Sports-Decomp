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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268B8E8();
extern unsigned int lbl_8200C694;


undefined4 *
fn_826D8EE0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,ulonglong param_6)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200C694;
  fn_8268B330(param_1 + 2);
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  fn_8268B8E8(param_1 + 2,param_2);
  *(undefined8 *)(param_1 + 4) = param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  param_1[3] = (int)param_4;
  if ((param_5 & 0xffffffff) != 0) {
    fn_8267C4C8(param_5);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = (int)param_5;
  if ((param_6 & 0xffffffff) != 0) {
    fn_8267C4C8(param_6);
  }
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[7] = (int)param_6;
  return param_1;
}


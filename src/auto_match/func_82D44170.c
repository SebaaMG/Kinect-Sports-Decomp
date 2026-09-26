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
extern int fn_82CE4040();
extern unsigned int lbl_82134CF4;
extern unsigned int lbl_82135804;


undefined4 *
fn_82D44170(double param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  param_2[3] = param_3;
  param_2[4] = (float)param_1;
  *param_2 = &lbl_82135804;
  *(undefined2 *)((int)param_2 + 6) = 1;
  param_2[2] = 0;
  param_2[5] = &lbl_82134CF4;
  param_2[6] = (int)param_5;
  if (param_6 == 1) {
    fn_82CE4040(param_5);
  }
  return param_2;
}


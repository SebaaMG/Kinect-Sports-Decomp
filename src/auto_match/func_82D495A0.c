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
extern int fn_82D48E38();
extern unsigned int lbl_8213577C;
extern unsigned int lbl_8213579C;


undefined4 * fn_82D495A0(double param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  fn_82D48E38(param_2,7,3);
  param_2[8] = (float)param_1;
  param_2[7] = (int)param_3;
  param_2[6] = param_4;
  *param_2 = &lbl_8213579C;
  param_2[4] = &lbl_8213577C;
  fn_82CE4040(param_3);
  fn_82CE4040(param_2[6]);
  return param_2;
}


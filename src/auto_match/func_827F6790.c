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
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827F6538();
extern unsigned int lbl_8201DDE0;


undefined4 *
fn_827F6790(undefined8 param_1,undefined8 param_2,undefined4 *param_3,int param_4,
             undefined8 param_5,undefined8 param_6)

{
  fn_827F4248(param_3,param_3 + 0x51,param_6,0,0);
  param_3[8] = param_4;
  *param_3 = &lbl_8201DDE0;
  fn_827F4100(param_3 + 0x51,param_5);
  param_3[0x76] = 0;
  fn_827F6538(param_1,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8));
  return param_3;
}


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
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE4040();
extern int fn_82CED2F8();
extern unsigned int lbl_8213A6EC;


undefined4 *
fn_82D962A8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  param_1[3] = param_4;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_8213A6EC;
  *(undefined1 *)(param_1 + 7) = param_5;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0x8000;
  fn_82CED2F8(param_1 + 10);
  param_1[5] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xfffffff0;
  param_1[6] = param_3;
  param_1[4] = 0;
  fn_82CE3F80();
  fn_82CE4040(param_1[5]);
  if (param_1[6] != 0) {
    fn_82CE4040();
  }
  fn_82CE4040(param_1[3]);
  fn_82CE3FE8();
  return param_1;
}


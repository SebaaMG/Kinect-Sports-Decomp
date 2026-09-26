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
extern int fn_8223B688();
extern int fn_822C70F0();
extern unsigned int lbl_821AE834;


undefined4 *
fn_822FB670(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined4 param_6)

{
  fn_822C70F0();
  param_1[0x15] = param_4;
  param_1[0x16] = param_4 + 0x24;
  *param_1 = &lbl_821AE834;
  fn_8223B688(param_1 + 0x17,param_5);
  param_1[0x1e] = param_6;
  param_1[0x14] = (uint)LZCOUNT(param_6) >> 5;
  return param_1;
}


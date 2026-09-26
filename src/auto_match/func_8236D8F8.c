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
extern int fn_82517D50();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B96A8;


undefined4 * fn_8236D8F8(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  fn_82517D50(param_1,param_2,9);
  param_1[0x20] = param_3;
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  return param_1;
}


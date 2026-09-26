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
extern int fn_826C0B08();
extern int fn_8271FB18();
extern unsigned int lbl_82010340;
extern unsigned int lbl_82012A64;


undefined4 * fn_8271FC40(undefined4 *param_1,undefined8 param_2)

{
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010340;
  fn_8271FB18(param_1,param_2);
  return param_1;
}


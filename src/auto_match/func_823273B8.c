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
extern int fn_822CA390();
extern int fn_824A7FF8();
extern unsigned int lbl_821B03E8;
extern unsigned int lbl_821B043C;


void fn_823273B8(undefined4 *param_1)

{
  *param_1 = &lbl_821B03E8;
  param_1[0x1a] = &lbl_821B043C;
  fn_824A7FF8(param_1 + 0x34);
  fn_822CA390(param_1);
  return;
}


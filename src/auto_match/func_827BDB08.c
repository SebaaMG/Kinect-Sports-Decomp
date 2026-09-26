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
extern int fn_827BD8D0();
extern int fn_827BD908();
extern int fn_827BD950();
extern int fn_827BD9D0();
extern int fn_827BDAF0();
extern unsigned int lbl_82017538;


void fn_827BDB08(undefined4 *param_1)

{
  *param_1 = fn_827BD8D0;
  param_1[2] = fn_827BD908;
  param_1[1] = fn_827BD950;
  param_1[0x1a] = 0;
  param_1[0x1c] = &lbl_82017538;
  param_1[3] = fn_827BD9D0;
  param_1[4] = fn_827BDAF0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1d] = 0x7b;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


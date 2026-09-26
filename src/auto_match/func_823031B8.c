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
extern int fn_822C71C8();
extern int fn_822D9678();
extern int fn_822DB7F0();
extern int fn_8251FA58();
extern unsigned int lbl_821AEE3C;


void fn_823031B8(undefined4 *param_1)

{
  *param_1 = &lbl_821AEE3C;
  if (param_1[0x2a] != 0) {
    fn_822DB7F0(param_1[0x2a],1);
  }
  if (param_1[0x2b] != 0) {
    fn_822DB7F0(param_1[0x2b],1);
  }
  fn_8251FA58(param_1[0x17]);
  fn_822D9678(param_1 + 0x1b);
  fn_822C71C8(param_1);
  return;
}


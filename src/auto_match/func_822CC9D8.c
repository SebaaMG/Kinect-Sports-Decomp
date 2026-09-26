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
extern int fn_822C18B8();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_82552B50();
extern unsigned int lbl_821AD208;
extern unsigned int lbl_821C7FB8;


void fn_822CC9D8(undefined4 *param_1)

{
  *param_1 = &lbl_821AD208;
  fn_82552B50(param_1 + 4,1);
  if (param_1[7] != 0) {
    fn_8251FA58();
    param_1[7] = 0;
  }
  fn_82359C18(param_1 + 0x10);
  param_1[0xe] = &lbl_821C7FB8;
  fn_822C18B8(param_1 + 8);
  return;
}


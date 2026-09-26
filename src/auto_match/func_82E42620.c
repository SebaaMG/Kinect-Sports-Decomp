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
extern int fn_82E2D9C0();
extern int fn_82E3BCC8();
extern int fn_82E423A0();
extern int fn_82E50EA0();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152FB4;
extern unsigned int lbl_82152FC4;


void fn_82E42620(undefined4 *param_1)

{
  *param_1 = &lbl_82152FC4;
  param_1[1] = &lbl_82152FB4;
  fn_82E423A0();
  thunk_FUN_82e58aac(param_1 + 0x12d);
  fn_82E2D9C0(param_1 + 0x12d);
  param_1[0x9b] = &lbl_82152F14;
  if (param_1[0x9c] == 0) {
    fn_82E3BCC8(param_1 + 0x9b,0);
  }
  fn_82E50EA0(param_1 + 4);
  return;
}


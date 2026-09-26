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
extern int fn_82FA5190();
extern int fn_82FA8F70();
extern int fn_82FAE040();
extern int fn_82FB3470();
extern int fn_82FB36E0();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CCE8;
extern unsigned int lbl_8216CCF0;
extern unsigned int lbl_8216CD08;
extern unsigned int lbl_831BC768;


void fn_82FACDB0(undefined4 *param_1)

{
  *param_1 = &lbl_8216CD08;
  param_1[1] = &lbl_8216CCF0;
  param_1[4] = &lbl_8216CCE8;
  param_1[6] = &lbl_8216CC7C;
  fn_82FB36E0(param_1 + 0xe);
  if (param_1[0x1b] != 0) {
    param_1[0x1c] = param_1[0x1b];
    fn_82FA5190(lbl_831BC768);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  if (param_1[0x18] != 0) {
    fn_82FAE040();
  }
  fn_82FB3470(param_1 + 0xe);
  fn_82FA8F70(param_1);
  return;
}


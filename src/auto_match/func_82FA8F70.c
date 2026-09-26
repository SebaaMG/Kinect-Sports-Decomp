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
extern int fn_82FAC580();
extern int fn_82FF53C0();
extern unsigned int lbl_8216CBE4;
extern unsigned int lbl_8216CBF8;
extern unsigned int lbl_8216CC00;
extern unsigned int lbl_8216CC18;
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_832642F4;


void fn_82FA8F70(undefined4 *param_1)

{
  *param_1 = &lbl_8216CC18;
  param_1[1] = &lbl_8216CC00;
  param_1[4] = &lbl_8216CBF8;
  param_1[6] = &lbl_8216CC7C;
  if (param_1[7] != 0) {
    fn_82FF53C0(lbl_832642F4);
  }
  if (param_1[8] != 0) {
    fn_82FF53C0(lbl_832642F4);
  }
  param_1[10] = 0;
  param_1[4] = &lbl_8216CBE4;
  fn_82FAC580(param_1 + 1);
  *param_1 = &lbl_8217D040;
  return;
}


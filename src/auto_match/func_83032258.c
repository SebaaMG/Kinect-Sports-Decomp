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
extern int fn_83002148();
extern unsigned int lbl_8216CEA0;
extern unsigned int lbl_8216D000;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


void fn_83032258(undefined4 *param_1)

{
  *param_1 = &lbl_8216D000;
  param_1[7] = &lbl_8217C940;
  *param_1 = &lbl_8216CEA0;
  param_1[7] = &lbl_8217C940;
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    fn_82FA5190(lbl_831BC768);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  fn_83002148(param_1);
  return;
}


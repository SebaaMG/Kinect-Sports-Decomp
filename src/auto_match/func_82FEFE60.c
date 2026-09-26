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
extern unsigned int lbl_8216CBE4;
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217BB48;
extern unsigned int lbl_8217BB50;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217D264;
extern unsigned int lbl_831BC768;


void fn_82FEFE60(undefined4 *param_1)

{
  *param_1 = &lbl_8217BB50;
  param_1[1] = &lbl_8217BB48;
  param_1[3] = &lbl_8217D264;
  param_1[0x51] = &lbl_8217BB44;
  if (param_1[0x52] != 0) {
    fn_82FA5190(lbl_831BC768);
    param_1[0x52] = 0;
    *(undefined2 *)(param_1 + 0x53) = 0;
  }
  param_1[1] = &lbl_8216CBE4;
  *param_1 = &lbl_8217D040;
  return;
}


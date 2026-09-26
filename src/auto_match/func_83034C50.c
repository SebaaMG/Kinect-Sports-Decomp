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
extern int fn_82FF8410();
extern int fn_83034B08();
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217D1DC;
extern unsigned int lbl_831BC768;


void fn_83034C50(undefined4 *param_1)

{
  *param_1 = &lbl_8217D1DC;
  fn_83034B08();
  if (param_1[1] != 0) {
    fn_82FF8410();
    fn_82FA5190(lbl_831BC768,param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    fn_82FA5190(lbl_831BC768);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[2] = &lbl_8217BB44;
  if (param_1[3] != 0) {
    fn_82FA5190(lbl_831BC768);
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *param_1 = &lbl_8217D040;
  return;
}


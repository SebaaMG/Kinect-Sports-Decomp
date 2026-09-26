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
extern int fn_8267BC98();
extern int fn_8267C488();
extern int fn_8267C498();
extern unsigned int lbl_82002B68;
extern unsigned int lbl_82005B40;


void fn_82685620(undefined4 *param_1)

{
  *param_1 = &lbl_82005B40;
  fn_8267C498(param_1[5]);
  fn_8267C498(param_1[4]);
  fn_8267BC98(param_1[3]);
  *param_1 = &lbl_82002B68;
  fn_8267C488(param_1);
  return;
}


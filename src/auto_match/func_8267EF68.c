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
extern int fn_8267D248();
extern int fn_8267D2B0();
extern int fn_8267EE90();
extern unsigned int lbl_82002ACC;
extern unsigned int lbl_82005698;
extern unsigned int lbl_820056AC;


void fn_8267EF68(undefined4 *param_1)

{
  *param_1 = &lbl_820056AC;
  param_1[3] = &lbl_82005698;
  fn_8267D2B0(param_1 + 10);
  fn_8267D248(param_1 + 5);
  param_1[3] = &lbl_82002ACC;
  fn_8267EE90(param_1);
  return;
}


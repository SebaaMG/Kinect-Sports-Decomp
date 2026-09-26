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
extern int fn_828A50E0();
extern int fn_828BCB88();
extern int fn_828C37F0();
extern unsigned int lbl_8326C06C;
extern unsigned int lbl_8326C290;
extern unsigned int lbl_8326C294;
extern unsigned int lbl_8326C298;
extern unsigned int lbl_8326C29C;


void fn_82245720(int *param_1)

{
  fn_828A50E0();
  fn_828C37F0(param_1,0xffffffff83295f18,lbl_8326C29C,0xffffffff8329eab0);
  fn_828C37F0(param_1,0xffffffff83295f18,lbl_8326C298,0xffffffff8329ea94);
  fn_828BCB88(param_1,lbl_8326C294,1,0xffffffff8329ea78);
  fn_828BCB88(param_1,lbl_8326C290,1,0xffffffff8329ea5c);
  fn_828BCB88(param_1,lbl_8326C06C,1,0xffffffff8329ea40);
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}


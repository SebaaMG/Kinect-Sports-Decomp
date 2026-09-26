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
extern int fn_826C26B0();
extern int fn_82725A58();
extern unsigned int lbl_82011060;
extern unsigned int lbl_820111E8;
extern unsigned int lbl_820111EC;


void fn_82725E88(undefined4 *param_1)

{
  *param_1 = &lbl_820111EC;
  param_1[4] = &lbl_82011060;
  param_1[0xe] = &lbl_820111E8;
  fn_826C26B0(param_1 + 0xe);
  fn_82725A58(param_1);
  return;
}


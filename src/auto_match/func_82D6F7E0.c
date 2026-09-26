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
extern unsigned int lbl_82134CD4;
extern unsigned int lbl_82139B70;
extern unsigned int lbl_82139B94;


void fn_82D6F7E0(double param_1,undefined4 *param_2)

{
  param_2[4] = (float)param_1;
  *(undefined2 *)((int)param_2 + 6) = 1;
  param_2[2] = 0;
  param_2[3] = 0x15;
  param_2[5] = &lbl_82134CD4;
  *param_2 = &lbl_82139B94;
  param_2[5] = &lbl_82139B70;
  return;
}


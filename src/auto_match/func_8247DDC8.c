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
extern int fn_82230300();
extern int fn_8247DD58();
extern int fn_8247E368();
extern int fn_8265CA20();
extern unsigned int lbl_821BD718;
extern unsigned int lbl_821C2CCC;
extern int (*lbl_8327677C)();


void fn_8247DDC8(undefined4 *param_1)

{
  *param_1 = &lbl_821BD718;
  if (lbl_8327677C != (code *)0x0) {
    (*lbl_8327677C)(0xffffffff821bd6c8,0xffffffff821bd5f0,0x56);
  }
  fn_8247DD58(param_1 + 0x12);
  fn_8247E368(param_1 + 10);
  fn_8265CA20(param_1[10]);
  param_1[10] = 0;
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}


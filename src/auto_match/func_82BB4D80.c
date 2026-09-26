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
extern int fn_82AB15D0();
extern int fn_82BA0318();
extern int fn_82BA1048();
extern int fn_82BB3B08();
extern int fn_82BB4080();
extern int fn_82BC54A8();
extern int fn_82BC5D48();
extern int fn_82BCFB50();


void fn_82BB4D80(undefined8 param_1)

{
  char cVar1;
  
  fn_82BC5D48();
  fn_82BC54A8(param_1);
  fn_82BB3B08(param_1);
  fn_82BB4080(param_1);
  fn_82BA0318(param_1);
  fn_82BCFB50(param_1);
  cVar1 = fn_82BA1048(param_1);
  if (cVar1 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0038,0xffffffff820dfe60,0x594);
  }
  return;
}


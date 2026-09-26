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
extern int fn_822B7998();
extern int fn_8235A080();
extern int fn_82F63EC8();
extern unsigned int lbl_8328CF88;
extern unsigned int lbl_8328CF8C;


void fn_8311A208(void)

{
  undefined8 uVar1;
  
  uVar1 = fn_8235A080();
  lbl_8328CF88 = (undefined4)uVar1;
  lbl_8328CF8C = "AthleticsController";
  fn_822B7998(uVar1,0xffffffff821b8c80,0xffffffff8242e9b8,0x88);
  fn_82F63EC8(0xffffffff8313d9c0);
  return;
}


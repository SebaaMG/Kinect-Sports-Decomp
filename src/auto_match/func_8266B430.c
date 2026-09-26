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
extern int fn_8265CF70();
extern int fn_8265ED50();
extern int fn_8265F570();
extern unsigned int lbl_831E7A98;
extern unsigned int uStack00000014;
extern unsigned int uStack_10;
extern unsigned int uStack_c;


int fn_8266B430(undefined4 param_1)

{
  undefined4 uStack00000014;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  uStack00000014 = param_1;
  if (lbl_831E7A98 == 0x5c) {
    uStack_c = fn_8265ED50(0xffffffff831e7a9c);
    while (uStack_c != 0) {
      uStack_10 = uStack_10 + 1;
      fn_8265F570((ulonglong)uStack_c + 0x3c);
      uStack_c = fn_8265ED50();
    }
  }
  else {
    uStack_10 = fn_8265CF70(0xffffffff831e7af8);
  }
  return uStack_10;
}


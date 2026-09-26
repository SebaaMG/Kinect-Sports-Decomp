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
extern int fn_82BA02A8();
extern unsigned int lbl_82002AF4;
extern unsigned int lbl_821AD03C;


void fn_828A19E8(uint *param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  char *pcStack_1c;
  
  if (*param_1 == 0) {
    pcStack_1c = "call to empty boost::function";
    ppuStack_20 = &lbl_821AD03C;
    fn_82BA02A8(&ppuStack_20);
    ppuStack_20 = &lbl_82002AF4;
  }
  (**(code **)((*param_1 & 0xfffffffe) + 4))(param_1 + 2,param_2);
  return;
}


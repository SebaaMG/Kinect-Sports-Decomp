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
extern int fn_82FA5060();
extern int fn_83014568();
extern int fn_83015E68();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


ulonglong fn_83014B70(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_83014568(uVar1,param_1,param_2);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_83015E68((ulonglong)lbl_832642E0 + 0x1304,uVar1);
    }
  }
  return uVar1;
}


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
extern unsigned int *auStack_20;
extern int fn_82520158();
extern unsigned int lbl_8326597C;
extern unsigned int lbl_83276741;


void fn_824E3410(void)

{
  undefined4 auStack_20 [4];
  
  if (lbl_83276741 == '\0') {
    lbl_83276741 = '\x01';
  }
  fn_82520158(0xffffffff821c2274,auStack_20,0);
  lbl_8326597C = auStack_20[0];
  fn_82520158(0xffffffff821c2534,0xffffffff83265980,0);
  fn_82520158(0xffffffff821c254c,0xffffffff83265984,0);
  return;
}


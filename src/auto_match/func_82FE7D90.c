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
extern int fn_82FA5538();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC7F8;
extern unsigned int lbl_83264318;


undefined8 fn_82FE7D90(void)

{
  uint uVar1;
  
  if (lbl_831BC768 == -1) {
    uVar1 = lbl_83264318;
    if (lbl_83264318 < 0x41) {
      uVar1 = 0x1000000;
    }
    lbl_831BC768 = fn_82FA5538(0,uVar1,0x40,3,0);
    lbl_831BC7F8 = lbl_831BC768;
    if (lbl_831BC768 == -1) {
      return 0x34;
    }
  }
  return 1;
}


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
extern int fn_82A1E968();
extern int fn_82A1F160();
extern unsigned int lbl_831F12A0;
extern unsigned int lbl_831F12A8;
extern unsigned int uStack_20;


longlong fn_82693410(void)

{
  ulonglong uStack_20;
  
  if (lbl_831F12A8 == '\0') {
    fn_82A1F160(0xffffffff831f12a0);
    lbl_831F12A8 = '\x01';
    lbl_831F12A0 = (longlong)lbl_831F12A0 / 0x1e84;
    if (lbl_831F12A0 == 0) {
      lbl_831F12A0 = 1;
    }
  }
  fn_82A1E968(&uStack_20);
  trapDoubleWordImmediate(6,lbl_831F12A0,0);
  trapDoubleWordImmediate
            (5,lbl_831F12A0 & ~((uStack_20 << 8 | (uStack_20 & 0x1ffffffffffffff) >> 0x38) - 1),
             0xffff);
  return (longlong)(uStack_20 << 7) / (longlong)lbl_831F12A0;
}


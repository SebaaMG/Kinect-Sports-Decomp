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
extern float fRam83217b78;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820579A8;
extern unsigned int uRam83217b7c;


ulonglong fn_829DD528(double param_1)

{
  if ((uRam83217b7c & 1) == 0) {
    uRam83217b7c = uRam83217b7c | 1;
    fRam83217b78 = lbl_820162A0;
  }
  if ((double)lbl_820579A8 < param_1) {
    if (param_1 < (double)lbl_82021540) {
      return (longlong)((float)(param_1 - (double)lbl_820579A8) / fRam83217b78) & 0xffffffff;
    }
    return 7;
  }
  return 0;
}


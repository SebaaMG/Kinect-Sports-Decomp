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
extern int fn_82A1F2F8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214DD8;
extern unsigned int lbl_83214DE0;
extern unsigned int lbl_83214DEC;
extern unsigned int lbl_83214E00;
extern unsigned int lbl_83214E04;
extern unsigned int lbl_83214F2C;
extern unsigned int lbl_83214F3C;
extern unsigned int lbl_83214F54;


void fn_829C5D98(void)

{
  lbl_83214E00 = 2;
  lbl_83214DD8 = 0;
  lbl_83214E04 = 0x3c;
  if (((lbl_83214F2C & 0x10) != 0) || ((lbl_83214F3C == lbl_821AAD20 && (lbl_83214DEC == 0)))) {
    lbl_83214F54 = fn_82A1F2F8();
    XamNuiCameraElevationSetAngle(0xffffffffffffffe7);
    lbl_83214DE0 = 1;
  }
  return;
}


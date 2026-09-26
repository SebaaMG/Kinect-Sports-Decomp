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
extern unsigned int lbl_83264268;
extern unsigned int lbl_8326426C;
extern unsigned int lbl_83264270;
extern unsigned int lbl_83264278;
extern unsigned int lbl_8326427C;
extern unsigned int lbl_83264280;
extern unsigned int lbl_83264288;
extern unsigned int lbl_8326428C;
extern unsigned int lbl_83264290;
extern unsigned int lbl_83264294;
extern unsigned int lbl_83264298;


undefined8 fn_82FB6330(void)

{
  lbl_83264268 = 0xffffffff;
  lbl_83264270 = 0;
  lbl_83264278 = 0;
  lbl_83264294 = lbl_83264294 & 0xfff;
  lbl_8326426C = 0xffffffff;
  lbl_83264280 = 0;
  lbl_8326427C = lbl_8326427C & 0x3ffffff | 0x3c000000;
  lbl_83264288 = 0;
  lbl_8326428C = 0;
  lbl_83264290 = 0;
  lbl_83264298 = 0;
  return 0xffffffff83264268;
}


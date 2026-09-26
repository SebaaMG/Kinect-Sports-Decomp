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
extern int fn_82F63EC8();
extern unsigned int lbl_8200C93C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F134C;
extern unsigned int lbl_831F1350;
extern unsigned int lbl_831F1354;
extern unsigned int lbl_831F1358;
extern unsigned int lbl_831F135C;
extern unsigned int lbl_831F1360;
extern unsigned int lbl_831F1364;
extern unsigned int lbl_831F1368;
extern unsigned int lbl_831F1374;


longlong fn_8276A0F0(int param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x1c)) {
    lVar1 = param_2 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x18);
  }
  else {
    lVar1 = -0x7ce0ecb4;
    if ((lbl_831F1374 & 1) == 0) {
      lbl_831F1374 = lbl_831F1374 | 1;
      lbl_831F134C = &lbl_8200C93C;
      lbl_831F135C = lbl_821AAD20;
      lbl_831F1354 = 0;
      lbl_831F1350 = 1;
      lbl_831F1360 = lbl_821AAD20;
      lbl_831F1364 = lbl_821AAD20;
      lbl_831F1358 = 0;
      lbl_831F1368 = lbl_821AAD20;
      fn_82F63EC8(0xffffffff8313ff58);
    }
  }
  return lVar1;
}


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
extern unsigned int lbl_82015470;
extern unsigned int lbl_82015490;
extern unsigned int lbl_820154B0;
extern unsigned int lbl_820154D0;
extern unsigned int lbl_820154F0;
extern unsigned int lbl_831F1380;
extern unsigned int lbl_831F1384;
extern unsigned int lbl_831F1388;
extern unsigned int lbl_831F138C;
extern unsigned int lbl_831F1390;
extern unsigned int lbl_831F1394;


undefined8 fn_8277B808(undefined8 param_1,uint param_2)

{
  if ((lbl_831F1394 & 1) == 0) {
    lbl_831F1394 = lbl_831F1394 | 1;
    lbl_831F1390 = &lbl_82015470;
    fn_82F63EC8(0xffffffff8313ff68);
  }
  if ((lbl_831F1394 & 2) == 0) {
    lbl_831F1394 = lbl_831F1394 | 2;
    lbl_831F138C = &lbl_82015490;
    fn_82F63EC8(0xffffffff8313ffe0);
  }
  if ((lbl_831F1394 & 4) == 0) {
    lbl_831F1394 = lbl_831F1394 | 4;
    lbl_831F1388 = &lbl_820154B0;
    fn_82F63EC8(0xffffffff8313ffc8);
  }
  if ((lbl_831F1394 & 8) == 0) {
    lbl_831F1394 = lbl_831F1394 | 8;
    lbl_831F1384 = &lbl_820154D0;
    fn_82F63EC8(0xffffffff8313ffb0);
  }
  if ((lbl_831F1394 & 0x10) == 0) {
    lbl_831F1394 = lbl_831F1394 | 0x10;
    lbl_831F1380 = &lbl_820154F0;
    fn_82F63EC8(0xffffffff8313ff98);
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      return 0xffffffff83156950;
    }
    if (param_2 < 3) {
      return 0xffffffff8315695c;
    }
    if (param_2 == 3) {
      return 0xffffffff83156968;
    }
    if (param_2 < 5) {
      return 0xffffffff83156974;
    }
  }
  return 0xffffffff83156944;
}


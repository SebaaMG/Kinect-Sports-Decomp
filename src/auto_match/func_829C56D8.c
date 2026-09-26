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
extern unsigned int lbl_82006848;
extern unsigned int lbl_83214E10;
extern unsigned int lbl_83214E1C;
extern unsigned int lbl_83214E20;
extern unsigned int lbl_83214E30;
extern unsigned int lbl_83214F3C;
extern unsigned int lbl_83214F50;


void fn_829C56D8(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0x1a) {
    if (param_1 == 0x19) {
      param_1 = 4;
LAB_829c5748:
      XamNuiCameraElevationStopMovement();
    }
    else if (param_1 == 0) {
      param_1 = 0;
    }
    else if (param_1 == 5) {
      param_1 = 8;
    }
    else {
      if (param_1 != 0x15) goto LAB_829c573c;
      param_1 = 2;
    }
  }
  else if (param_1 == 0x1f) {
    param_1 = 5;
  }
  else if (param_1 == 0x3e3) {
    param_1 = 7;
  }
  else {
LAB_829c573c:
    if (param_1 == 4) goto LAB_829c5748;
  }
  if (3 < lbl_83214F50) {
    return;
  }
  if (lbl_83214F50 == 0) {
    if (param_1 != 3) {
      return;
    }
  }
  else if (lbl_83214F50 == 1) {
    uVar2 = 0xffffffff83214e20;
    uVar1 = 0x2b00c;
    lbl_83214E30 = lbl_83214F3C * lbl_82006848;
    lbl_83214E20 = param_1;
    goto LAB_829c57dc;
  }
  uVar2 = 0xffffffff83214e10;
  uVar1 = 0x2b006;
  lbl_83214E1C = lbl_83214F3C * lbl_82006848;
  lbl_83214E10 = param_1;
LAB_829c57dc:
  XamNuiCameraTiltReportStatus(uVar1,uVar2);
  return;
}


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
extern int fn_82A1E4F0();
extern int fn_82A1E5C0();
extern int fn_82F70520();
extern unsigned int lbl_832636E8;
extern unsigned int lbl_832636EC;
extern unsigned int lbl_832636F4;
extern unsigned int lbl_83263738;
extern unsigned int uStack00000010;


void fn_82F84290(undefined8 param_1)

{
  undefined4 in_LR;
  undefined8 uStack00000010;
  
  uStack00000010 = param_1;
  RtlCaptureContext(0xffffffff83263740);
  lbl_832636E8 = 0xc0000409;
  lbl_832636EC = 1;
  lbl_83263738 = 0;
  lbl_832636F4 = in_LR;
  fn_82F70520(1);
  fn_82A1E4F0(0);
  fn_82A1E5C0(0xffffffff8216aaf8);
  if (lbl_83263738 == 0) {
    fn_82F70520(1);
  }
  KeBugCheck(0xf2);
  return;
}


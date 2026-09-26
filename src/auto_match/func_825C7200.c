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
extern int fn_82545810();
extern int fn_8262FEC8();
extern unsigned int lbl_83282270;
extern unsigned int lbl_83282274;
extern unsigned int lbl_83282278;
extern unsigned int lbl_8328227C;
extern unsigned int lbl_83282280;
extern unsigned int lbl_83282284;
extern unsigned int lbl_83282288;
extern unsigned int lbl_8328228C;
extern unsigned int lbl_83282290;
extern unsigned int lbl_83282294;


void fn_825C7200(int param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  uVar1 = (ulonglong)lbl_83282294;
  lbl_83282294 = (uint)(uVar1 - 1);
  if (uVar1 - 1 == 0) {
    if (lbl_83282270 != 0) {
      fn_8262FEC8();
      lbl_83282270 = 0;
    }
    if (lbl_83282274 != 0) {
      fn_8262FEC8();
      lbl_83282274 = 0;
    }
    if (lbl_83282278 != 0) {
      fn_82545810(0xffffffff83282278);
    }
    if (lbl_8328227C != 0) {
      fn_8262FEC8();
      lbl_8328227C = 0;
    }
    if (lbl_83282280 != 0) {
      fn_8262FEC8();
      lbl_83282280 = 0;
    }
    if (lbl_83282284 != 0) {
      fn_82545810(0xffffffff83282284);
    }
    if (lbl_83282288 != 0) {
      fn_8262FEC8();
      lbl_83282288 = 0;
    }
    if (lbl_8328228C != 0) {
      fn_8262FEC8();
      lbl_8328228C = 0;
    }
    if (lbl_83282290 != 0) {
      fn_8262FEC8();
      lbl_83282290 = 0;
    }
  }
  return;
}


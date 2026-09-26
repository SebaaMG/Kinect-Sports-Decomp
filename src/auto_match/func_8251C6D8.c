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
extern int fn_825996B0();
extern int fn_82624CC8();
extern int (*lbl_832659F4)();
extern int (*lbl_83265A1C)();
extern int (*lbl_8327677C)();
extern int (*lbl_83276798)();
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832960B4;
extern unsigned int lbl_832960B8;
extern int (*lbl_832961A4)();
extern unsigned int lbl_832961C8;


void fn_8251C6D8(void)

{
  int iVar1;
  
  fn_825996B0();
  fn_82624CC8(0xffffffff831d50d0,3);
  fn_82624CC8(0xffffffff831d6f00,2);
  if (lbl_832659F4 != (code *)0x0) {
    (*lbl_832659F4)();
  }
  lbl_832961C8 = 0;
  if (lbl_832961A4 != (code *)0x0) {
    (*lbl_832961A4)(0);
  }
  if (lbl_83276798 == (code *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*lbl_83276798)();
  }
  if ((iVar1 == 0) && (lbl_8327677C != (code *)0x0)) {
    (*lbl_8327677C)(0xffffffff821c2b64,0xffffffff821c2b20,0x359);
  }
  lbl_832960A4 = 0;
  lbl_832960B8 = 0;
  lbl_832960B4 = 0;
  lbl_832961C8 = 0;
  if (lbl_83265A1C != (code *)0x0) {
    (*lbl_83265A1C)();
  }
  return;
}


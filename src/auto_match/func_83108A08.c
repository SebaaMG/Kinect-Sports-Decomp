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
extern int fn_82246278();
extern int fn_8251E768();
extern int fn_8251E7D0();
extern int fn_828B02D0();
extern unsigned int lbl_83282DF0;
extern unsigned int lbl_83282DF4;
extern unsigned int lbl_83282DF8;
extern unsigned int lbl_83282DFC;
extern unsigned int lbl_83282DFD;
extern unsigned int lbl_83282E00;
extern unsigned int lbl_83282E04;
extern unsigned int lbl_83282E08;


void fn_83108A08(void)

{
  undefined8 uVar1;
  
  fn_828B02D0(0xffffffff83282df0);
  lbl_83282DF0 = 0x1b;
  lbl_83282E00 = "Function Call Message";
  lbl_83282DF8 = 9;
  lbl_83282DF4 = fn_82246278;
  lbl_83282DFC = 1;
  lbl_83282DFD = 0;
  lbl_83282E04 = 0;
  lbl_83282E08 = 0;
  uVar1 = fn_8251E768();
  fn_8251E7D0(uVar1,0xffffffff83282df0);
  return;
}


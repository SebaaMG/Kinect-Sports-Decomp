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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_824C0330();
extern int fn_828A1D58();
extern int fn_828C03E8();
extern unsigned int lbl_821C250C;
extern unsigned int lbl_83297998;
extern unsigned int lbl_832979EC;
extern unsigned int uStack_20;


void fn_8313AA48(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  uStack_20 = 0;
  uVar1 = fn_828A1D58();
  fn_828C03E8(uVar1,auStack_30);
  if (lbl_832979EC != 0) {
    fn_822315A0();
  }
  fn_824C0330(0xffffffff832979a4);
  lbl_83297998 = &lbl_821C250C;
  return;
}


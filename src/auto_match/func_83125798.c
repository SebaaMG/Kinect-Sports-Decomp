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
extern int fn_8251E768();
extern int fn_8251E7D0();
extern int fn_825AEDC8();
extern int fn_828B02D0();
extern unsigned int lbl_83297018;
extern unsigned int lbl_8329701C;
extern unsigned int lbl_83297020;
extern unsigned int lbl_83297024;
extern unsigned int lbl_83297025;
extern unsigned int lbl_83297028;
extern unsigned int lbl_8329702C;
extern unsigned int lbl_83297030;


void fn_83125798(void)

{
  undefined8 uVar1;
  
  fn_828B02D0(0xffffffff83297018);
  lbl_83297028 = "ActuatorTeleport";
  lbl_8329701C = fn_825AEDC8;
  lbl_83297018 = 0x1c;
  lbl_83297024 = 0;
  lbl_83297020 = 0;
  lbl_83297025 = 0;
  lbl_8329702C = 0;
  lbl_83297030 = 0;
  uVar1 = fn_8251E768();
  fn_8251E7D0(uVar1,0xffffffff83297018);
  return;
}


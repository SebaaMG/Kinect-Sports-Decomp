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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_828CB7A8();
extern int fn_828CBA80();
extern int fn_828E0268();
extern int fn_828E3A68();
extern int fn_82F63EC8();
extern unsigned int lbl_832143E4;
extern unsigned int lbl_83214460;
extern unsigned int lbl_83214464;
extern unsigned int lbl_83214468;
extern unsigned int lbl_83214470;
extern unsigned int lbl_83214474;


void fn_83129438(void)

{
  ulonglong uVar1;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [8];
  
  fn_828E0268(auStack_20,0xffffffff8315a2ec);
  lbl_83214464 = 0;
  lbl_83214460 = 0;
  lbl_83214468 = 0;
  lbl_83214474 = fn_828E3A68;
  lbl_83214470 = auStack_20[0];
  uVar1 = (ulonglong)lbl_832143E4;
  if (uVar1 == 0) {
    uVar1 = fn_828CBA80();
  }
  fn_828CB7A8(auStack_18,uVar1 + 4,0xffffffff83214460);
  fn_82F63EC8(0xffffffff831415d0);
  return;
}


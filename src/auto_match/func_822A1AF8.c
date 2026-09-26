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
extern int fn_822A22C8();
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D12A0;
extern unsigned int lbl_831D12B4;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12BC;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D12D4;
extern int (*lbl_8327677C)();


void fn_822A1AF8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_822A22C8();
  if (iVar1 == 0) {
    lbl_831D12CC = 0;
    lbl_831D12D0 = 0;
    lbl_831D12D4 = 0;
  }
  else {
    lbl_831D12BC = 0xffffffff;
    lbl_831D12B4 = param_2;
    lbl_831D12B8 = param_3;
  }
  lbl_831D1298 = lbl_831D1298 + 1;
  if (lbl_831D12A0 != 0) {
    if (lbl_8327677C != (code *)0x0) {
      (*lbl_8327677C)(0xffffffff821abf28,0xffffffff821abeb8,0x12a);
    }
    lbl_831D12A0 = 0;
  }
  return;
}


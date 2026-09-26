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
extern int fn_822A2A48();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D12B0;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12BC;
extern unsigned int lbl_831D12C0;
extern unsigned int lbl_831D12C4;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D12D4;
extern unsigned int lbl_831D12D8;
extern unsigned int lbl_831D12DC;
extern unsigned int lbl_831D12E8;
extern unsigned int *lbl_831D12F8;
extern unsigned int lbl_831D1300;
extern unsigned int *lbl_831D1310;
extern unsigned int lbl_831D1318;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1320;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_831D1328;


void fn_822A19D0(void)

{
  int iVar1;
  
  lbl_831D12C0 = lbl_821CC160;
  lbl_831D12C4 = 0;
  lbl_831D12D8 = 0;
  lbl_831D12B8 = 0;
  lbl_831D12BC = 0xffffffff;
  lbl_831D12DC = 0;
  lbl_831D12CC = 0;
  lbl_831D12D0 = 0;
  lbl_831D12D4 = 0;
  lbl_831D12B0 = 0;
  if (lbl_831D12F8 != (int *)0x0) {
    iVar1 = (int)&lbl_831D12E8 + -(int)lbl_831D12F8;
    (**(code **)(*lbl_831D12F8 + 0xc))
              (lbl_831D12F8,iVar1 - (-(int)lbl_831D12F8 + -0x7ce2ed19 + (uint)(iVar1 == 0)));
  }
  lbl_831D12F8 = (int *)0x0;
  if (lbl_831D1310 != (int *)0x0) {
    iVar1 = (int)&lbl_831D1300 + -(int)lbl_831D1310;
    (**(code **)(*lbl_831D1310 + 0xc))
              (lbl_831D1310,iVar1 - (-(int)lbl_831D1310 + -0x7ce2ed01 + (uint)(iVar1 == 0)));
  }
  lbl_831D1318 = 1;
  lbl_831D1310 = (int *)0x0;
  lbl_831D1320 = 0;
  lbl_831D131C = 0;
  lbl_831D1324 = 6;
  iVar1 = fn_8265C9E0(0x2ac);
  if (iVar1 == 0) {
    lbl_831D1328 = 0;
  }
  else {
    lbl_831D1328 = fn_822A2A48();
  }
  return;
}


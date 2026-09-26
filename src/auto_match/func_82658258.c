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
extern unsigned int lbl_8327609C;
extern U64 storeWordConditionalIndexed();


void fn_82658258(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char in_RESERVE;
  byte in_cr0;
  
  (**(code **)(param_3 + 0x350))(*(undefined4 *)(param_3 + 0x354));
  do {
    uVar1 = (ulonglong)lbl_8327609C;
    if (in_RESERVE != '\0') {
      lbl_8327609C = storeWordConditionalIndexed(~param_4 & uVar1,0,0xffffffff8327609c);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar1 == (param_4 & 0xffffffff)) {
    KeSetEvent(0xffffffff831bd848,1,0);
  }
  return;
}


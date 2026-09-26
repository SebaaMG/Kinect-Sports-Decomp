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
extern int fn_82BA02A8();


ulonglong fn_828F1438(void)

{
  ulonglong uVar1;
  uint *in_r6;
  
  fn_82BA02A8(1);
  if (in_r6 == (uint *)0x0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (ulonglong)*in_r6;
    if ((*in_r6 & 0xfffffe3f) == 0xfffffe3f) {
      uVar1 = 0x18280186;
    }
  }
  return uVar1;
}


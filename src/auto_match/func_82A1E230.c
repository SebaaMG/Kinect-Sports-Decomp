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
extern unsigned int *auStack_10;
extern unsigned int *auStack_c;


ulonglong fn_82A1E230(void)

{
  ulonglong uVar1;
  uint uVar2;
  undefined2 auStack_10 [2];
  uint auStack_c [3];
  
  auStack_10[0] = 0;
  uVar1 = ExGetXConfigSetting(3,9,auStack_c,4,auStack_10);
  uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_c[0];
  auStack_c[0] = (uint)uVar1;
  if ((uVar1 == 0) || (0xc < uVar1)) {
    uVar2 = XGetGameRegion();
    if ((uVar2 & 0xff00) == 0x100) {
      if (uVar2 == 0x101) {
        uVar1 = 2;
      }
      else {
        uVar1 = 7;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


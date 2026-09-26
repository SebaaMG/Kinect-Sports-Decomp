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
extern int fn_82CE0298();
extern int iRam8323a8e0;
extern int iRam8323a8e4;


undefined8 fn_82CE04E8(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = XamGetSystemVersion();
  if ((uVar1 & 0xffff00) < 0x8a100) {
    RtlEnterCriticalSection(0xffffffff83177904);
    if (iRam8323a8e0 == 0) {
      uVar2 = 0x65b;
    }
    else {
      uVar2 = 0;
      if (iRam8323a8e4 != 1) {
        uVar2 = 4;
      }
      uVar2 = fn_82CE0298(2,uVar2,0);
      iRam8323a8e4 = 0;
      iRam8323a8e0 = 0;
    }
    RtlLeaveCriticalSection(0xffffffff83177904);
  }
  else {
    uVar2 = fn_82CE0298(2,4,0);
  }
  return uVar2;
}


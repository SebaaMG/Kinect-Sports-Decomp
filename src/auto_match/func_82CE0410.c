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
extern unsigned int *auStack_2c;
extern int fn_82CE0298();
extern int fn_82CE0340();
extern int iRam8323a8e0;
extern unsigned int uRam8323a8e4;
extern unsigned int uStack_30;


longlong fn_82CE0410(void)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uStack_30;
  undefined1 auStack_2c [44];
  
  uVar1 = XamGetSystemVersion();
  if (0x8a0ff < (uVar1 & 0xffff00)) {
    lVar2 = fn_82CE0298(2,0,1);
    return lVar2;
  }
  RtlEnterCriticalSection(0xffffffff83177904);
  if (iRam8323a8e0 == 1) {
    lVar2 = 0x65b;
  }
  else {
    lVar2 = fn_82CE0340(2,&uStack_30,auStack_2c);
    if (lVar2 == 0) {
      uRam8323a8e4 = (uint)LZCOUNT(uStack_30) >> 5;
      lVar2 = fn_82CE0298(2,0,1);
      if (lVar2 == 0) {
        iRam8323a8e0 = 1;
        goto LAB_82ce04bc;
      }
    }
    iRam8323a8e0 = 0;
    uRam8323a8e4 = 0;
  }
LAB_82ce04bc:
  RtlLeaveCriticalSection(0xffffffff83177904);
  return lVar2;
}


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
extern int fn_82A1CD98();
extern int iRam832192e0;
extern int iRam832192e8;
extern unsigned int lbl_832192E4;
extern unsigned int lbl_832192F8;


void fn_82A1D008(void)

{
  if (iRam832192e8 == 0) {
    if (lbl_832192E4 != 0) {
      fn_82A1CD98();
    }
  }
  else {
    KeEnterCriticalRegion();
    if (iRam832192e0 != 0) {
      iRam832192e0 = 0;
      ExRegisterTitleTerminateNotification(0xffffffff8315d26c,0);
    }
    RtlEnterCriticalSection(0xffffffff8315d230);
    lbl_832192F8 = 2;
    KeSetEvent(0xffffffff8315d24c,1,0);
    KeWaitForSingleObject(0xffffffff8315d25c,3,1,0,0);
    KeResetEvent(0xffffffff8315d25c);
    RtlLeaveCriticalSection(0xffffffff8315d230);
    KeLeaveCriticalRegion();
  }
  lbl_832192E4 = 0;
  return;
}


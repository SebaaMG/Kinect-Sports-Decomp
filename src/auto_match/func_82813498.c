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
extern int fn_828122C0();
extern int fn_8281FA58();
extern int fn_82F63EC8();
extern unsigned int lbl_8320A4D4;
extern unsigned int uRam8320a4d0;
extern unsigned int uRam8320a4d8;
extern U64 storeDoubleWordConditionalIndexed();


int fn_82813498(void)

{
  char cVar1;
  
  do {
    cVar1 = fn_828122C0(0xffffffff8320a4d8);
  } while (cVar1 == '\0');
  sync(1);
  if (lbl_8320A4D4 == 0) {
    if ((uRam8320a4d0 & 1) == 0) {
      uRam8320a4d0 = uRam8320a4d0 | 1;
      fn_8281FA58(0xffffffff8320a430);
      fn_82F63EC8(0xffffffff831400b8);
    }
    lbl_8320A4D4 = -0x7cdf5bd0;
    sync(1);
  }
  uRam8320a4d8 = storeDoubleWordConditionalIndexed(0,0,0xffffffff8320a4d8);
  return lbl_8320A4D4;
}


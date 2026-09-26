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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_828D06D0();
extern int fn_82A1BB18();
extern int fn_82F63EC8();
extern int iRam83213fa0;
extern int iRam83213fcc;
extern __int64 lRam83213fd0;
extern unsigned int lbl_83213FC8;
extern unsigned int uRam83213fc4;
extern U64 storeDoubleWordConditionalIndexed();


int fn_828A17A0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar3,1);
  lVar2 = lRam83213fd0;
  if (lRam83213fd0 == 0) {
    lRam83213fd0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213fd0);
  }
  else {
    lRam83213fd0 = storeDoubleWordConditionalIndexed(lRam83213fd0,0,0xffffffff83213fd0);
  }
  while( true ) {
    if (lVar2 == lVar1) {
      return iRam83213fcc;
    }
    if (lVar2 == 0) break;
    lVar2 = lRam83213fd0;
    if (lRam83213fd0 == 0) {
      lRam83213fd0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213fd0);
    }
    else {
      lRam83213fd0 = storeDoubleWordConditionalIndexed(lRam83213fd0,0,0xffffffff83213fd0);
    }
  }
  sync(1);
  if (lbl_83213FC8 == 0) {
    if ((uRam83213fc4 & 1) == 0) {
      uRam83213fc4 = uRam83213fc4 | 1;
      fn_828D06D0(0xffffffff83213fa0);
      fn_82F63EC8(0xffffffff83140a08);
    }
    iRam83213fcc = -0x7cdec060;
    (**(code **)(iRam83213fa0 + 4))();
    lbl_83213FC8 = iRam83213fcc;
    sync(1);
  }
  lRam83213fd0 = 0;
  return lbl_83213FC8;
}


extern unsigned int **ppuRam83297968;
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
extern int fn_82A1BB18();
extern int atexit();
extern int iRam83297804;
extern __int64 lRam83297808;
extern unsigned int lbl_821C097C;
extern unsigned int lbl_83297800;
extern unsigned int uRam8329796c;
extern unsigned int uRam83297970;
extern unsigned int uRam83297971;
extern unsigned int uRam83297972;
extern unsigned int uRam83297d14;
extern U64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined *** fn_825117D8(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297808;
  if (lRam83297808 == 0) {
    lRam83297808 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297808);
  }
  else {
    lRam83297808 = storeDoubleWordConditionalIndexed(lRam83297808,0,0xffffffff83297808);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return iRam83297804;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297808;
    if (lRam83297808 == 0) {
      lRam83297808 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297808);
    }
    else {
      lRam83297808 = storeDoubleWordConditionalIndexed(lRam83297808,0,0xffffffff83297808);
    }
  }
  sync(1);
  if (lbl_83297800 == 0) {
    if ((uRam83297d14 & 1) == 0) {
      uRam8329796c = 0;
      uRam83297d14 = uRam83297d14 | 1;
      uRam83297970 = 0;
      uRam83297972 = 0;
      ppuRam83297968 = &lbl_821C097C;
      uRam83297971 = 1;
      atexit(0xffffffff8313f020);
    }
    iRam83297804 = &ppuRam83297968;
    (*(code *)ppuRam83297968[1])();
    lbl_83297800 = (int)iRam83297804;
    sync(1);
  }
  lRam83297808 = 0;
  return (undefined ***)lbl_83297800;
}

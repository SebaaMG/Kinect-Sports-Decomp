extern unsigned int **ppuRam83297954;
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
extern int iRam83297824;
extern __int64 lRam83297828;
extern unsigned int lbl_821C2504;
extern unsigned int lbl_83297820;
extern unsigned int uRam83297958;
extern unsigned int uRam8329795c;
extern unsigned int uRam83297960;
extern unsigned int uRam83297964;
extern unsigned int uRam83297d10;
extern U64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined *** fn_825145D0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297828;
  if (lRam83297828 == 0) {
    lRam83297828 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297828);
  }
  else {
    lRam83297828 = storeDoubleWordConditionalIndexed(lRam83297828,0,0xffffffff83297828);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return iRam83297824;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297828;
    if (lRam83297828 == 0) {
      lRam83297828 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297828);
    }
    else {
      lRam83297828 = storeDoubleWordConditionalIndexed(lRam83297828,0,0xffffffff83297828);
    }
  }
  sync(1);
  if (lbl_83297820 == 0) {
    if ((uRam83297d10 & 1) == 0) {
      uRam83297958 = 0;
      uRam83297d10 = uRam83297d10 | 1;
      uRam83297964 = 0;
      ppuRam83297954 = &lbl_821C2504;
      uRam8329795c = &uRam83297958;
      uRam83297960 = &uRam83297958;
      atexit(0xffffffff8313f0b0);
    }
    iRam83297824 = &ppuRam83297954;
    (*(code *)ppuRam83297954[1])();
    lbl_83297820 = (int)iRam83297824;
    sync(1);
  }
  lRam83297828 = 0;
  return (undefined ***)lbl_83297820;
}

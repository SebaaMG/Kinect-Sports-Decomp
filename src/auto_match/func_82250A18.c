extern unsigned int *puRam832975b4;
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
extern int fn_824BFFB0();
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam832975b8;
extern unsigned int lbl_821963EC;
extern unsigned int lbl_832975B0;
extern unsigned int *lbl_83297998;
extern unsigned int uRam8329799c;
extern unsigned int uRam832979a0;
extern unsigned int uRam832979f0;
extern unsigned int uRam832979f4;
extern unsigned int uRam832979f8;
extern unsigned int uRam83299070;
extern U64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined *** fn_82250A18(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam832975b8;
  if (lRam832975b8 == 0) {
    lRam832975b8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975b8);
  }
  else {
    lRam832975b8 = storeDoubleWordConditionalIndexed(lRam832975b8,0,0xffffffff832975b8);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam832975b4;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam832975b8;
    if (lRam832975b8 == 0) {
      lRam832975b8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975b8);
    }
    else {
      lRam832975b8 = storeDoubleWordConditionalIndexed(lRam832975b8,0,0xffffffff832975b8);
    }
  }
  sync(1);
  if (lbl_832975B0 == (undefined4 *)0x0) {
    if ((uRam83299070 & 1) == 0) {
      uRam8329799c = 0;
      uRam83299070 = uRam83299070 | 1;
      uRam832979a0 = 0;
      lbl_83297998 = &lbl_821963EC;
      fn_824BFFB0(0xffffffff832979a4);
      uRam832979f0 = 0;
      uRam832979f4 = 0;
      uRam832979f8 = 0;
      atexit(0xffffffff8313aa48);
    }
    puRam832975b4 = &lbl_83297998;
    (*(code *)lbl_83297998[1])();
    lbl_832975B0 = puRam832975b4;
    sync(1);
  }
  lRam832975b8 = 0;
  return (undefined ***)lbl_832975B0;
}

extern unsigned int *puRam832975a0;
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
extern __int64 lRam832975a8;
extern unsigned int lbl_8219748C;
extern unsigned int lbl_8329759C;
extern unsigned int lbl_832979FC;
extern unsigned int lbl_83297A04;
extern unsigned int lbl_83297A0C;
extern unsigned int uRam83297a00;
extern unsigned int uRam83297a08;
extern unsigned int uRam83297a14;
extern unsigned int uRam83297a15;
extern unsigned int uRam83297a18;
extern unsigned int uRam83297a1c;
extern unsigned int uRam83298f74;
extern U64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined ** fn_822442F0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam832975a8;
  if (lRam832975a8 == 0) {
    lRam832975a8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975a8);
  }
  else {
    lRam832975a8 = storeDoubleWordConditionalIndexed(lRam832975a8,0,0xffffffff832975a8);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam832975a0;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam832975a8;
    if (lRam832975a8 == 0) {
      lRam832975a8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975a8);
    }
    else {
      lRam832975a8 = storeDoubleWordConditionalIndexed(lRam832975a8,0,0xffffffff832975a8);
    }
  }
  sync(1);
  if (lbl_8329759C == (undefined4 *)0x0) {
    if ((uRam83298f74 & 1) == 0) {
      uRam83297a00 = 0;
      uRam83298f74 = uRam83298f74 | 1;
      lbl_83297A04 = 0;
      uRam83297a08 = 0;
      lbl_832979FC = &lbl_8219748C;
      lbl_83297A0C = 0;
      uRam83297a14 = 0;
      uRam83297a15 = 0;
      uRam83297a18 = 0;
      uRam83297a1c = 0;
      atexit(0xffffffff8313a768);
    }
    puRam832975a0 = &lbl_832979FC;
    (**(code **)(lbl_832979FC + 4))();
    lbl_8329759C = puRam832975a0;
    sync(1);
  }
  lRam832975a8 = 0;
  return (undefined **)lbl_8329759C;
}

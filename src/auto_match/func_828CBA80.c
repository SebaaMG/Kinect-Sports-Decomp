extern unsigned int *puRam832143e8;
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
extern __int64 lRam832143f0;
extern unsigned int lbl_820264A0;
extern unsigned int lbl_832143CC;
extern unsigned int lbl_832143D0;
extern unsigned int lbl_832143D4;
extern unsigned int lbl_832143D8;
extern unsigned int lbl_832143DC;
extern unsigned int lbl_832143E4;
extern unsigned int uRam832143e0;
extern U64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined ** fn_828CBA80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;

  uVar3 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar3,1);
  lVar2 = lRam832143f0;
  if (lRam832143f0 == 0) {
    lRam832143f0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832143f0);
  }
  else {
    lRam832143f0 = storeDoubleWordConditionalIndexed(lRam832143f0,0,0xffffffff832143f0);
  }
  while( true ) {
    if (lVar2 == lVar1) {
      return puRam832143e8;
    }
    if (lVar2 == 0) break;
    lVar2 = lRam832143f0;
    if (lRam832143f0 == 0) {
      lRam832143f0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832143f0);
    }
    else {
      lRam832143f0 = storeDoubleWordConditionalIndexed(lRam832143f0,0,0xffffffff832143f0);
    }
  }
  sync(1);
  if (lbl_832143E4 == (undefined4 *)0x0) {
    if ((uRam832143e0 & 1) == 0) {
      lbl_832143D0 = 0;
      uRam832143e0 = uRam832143e0 | 1;
      lbl_832143DC = 0;
      lbl_832143CC = &lbl_820264A0;
      lbl_832143D4 = &lbl_832143D0;
      lbl_832143D8 = &lbl_832143D0;
      atexit(0xffffffff831413d8);
    }
    puRam832143e8 = &lbl_832143CC;
    (**(code **)(lbl_832143CC + 4))();
    lbl_832143E4 = puRam832143e8;
    sync(1);
  }
  lRam832143f0 = 0;
  return (undefined **)lbl_832143E4;
}

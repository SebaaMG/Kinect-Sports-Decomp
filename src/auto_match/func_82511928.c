extern unsigned int *puRam83297814;
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
extern int fn_82511A50();
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam83297818;
extern unsigned int lbl_832977D0;
extern unsigned int lbl_83297810;
extern unsigned int uRam832977cc;
extern U64 storeDoubleWordConditionalIndexed();


undefined4 * fn_82511928(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297818;
  if (lRam83297818 == 0) {
    lRam83297818 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297818);
  }
  else {
    lRam83297818 = storeDoubleWordConditionalIndexed(lRam83297818,0,0xffffffff83297818);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam83297814;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297818;
    if (lRam83297818 == 0) {
      lRam83297818 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297818);
    }
    else {
      lRam83297818 = storeDoubleWordConditionalIndexed(lRam83297818,0,0xffffffff83297818);
    }
  }
  sync(1);
  if (lbl_83297810 == (undefined4 *)0x0) {
    if ((uRam832977cc & 1) == 0) {
      uRam832977cc = uRam832977cc | 1;
      fn_82511A50();
      atexit(0xffffffff8313f038);
    }
    puRam83297814 = &lbl_832977D0;
    (**(code **)(lbl_832977D0 + 4))();
    lbl_83297810 = puRam83297814;
    sync(1);
  }
  lRam83297818 = 0;
  return lbl_83297810;
}

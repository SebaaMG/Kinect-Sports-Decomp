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
#define ZEXT48(x) ((U64)((U32)(x)))
extern U64 storeDoubleWordConditionalIndexed();


undefined8 fn_82813428(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)((int)param_1 + 0xc);
  lVar3 = CONCAT44(*(undefined4 *)(param_1 + 1),(int)*param_1 + 1);
  lVar4 = *plVar1;
  if (lVar4 == *param_1) {
    lVar2 = storeDoubleWordConditionalIndexed(lVar3,0,ZEXT48(plVar1));
    *plVar1 = lVar2;
  }
  else {
    lVar2 = storeDoubleWordConditionalIndexed(lVar4,0,ZEXT48(plVar1));
    *plVar1 = lVar2;
  }
  if (lVar4 == *param_1) {
    *param_1 = lVar3;
    return 1;
  }
  return 0;
}


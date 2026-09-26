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
extern int fn_82A1BB18();
extern U64 storeDoubleWordConditionalIndexed();


bool fn_828122C0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = fn_82A1BB18();
  plVar3 = (longlong *)param_1;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    lVar1 = storeDoubleWordConditionalIndexed(uVar2 & 0xffffffff | 0xffffffff00000000,0,param_1);
    *plVar3 = lVar1;
  }
  else {
    lVar1 = storeDoubleWordConditionalIndexed(lVar4,0,param_1);
    *plVar3 = lVar1;
  }
  return lVar4 == 0;
}


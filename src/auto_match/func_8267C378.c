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
extern unsigned int *auStack_50;
extern int fn_8267C0B8();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_38;


undefined4 fn_8267C378(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  
  if ((ulonglong)lbl_831E7E60 != 0) {
    lVar1 = (ulonglong)lbl_831E7E60 + 0x2c4;
    RtlEnterCriticalSection(lVar1);
    if (lbl_831E7E64 == 0) {
      fn_82F68CC0(auStack_50,param_1,0x20);
      uStack_38 = 1;
      lbl_831E7E64 = fn_8267C0B8(lbl_831E7E60,0xffffffff821c2764,0,auStack_50);
      RtlLeaveCriticalSection(lVar1);
      return lbl_831E7E64;
    }
    RtlLeaveCriticalSection(lVar1);
  }
  return 0;
}


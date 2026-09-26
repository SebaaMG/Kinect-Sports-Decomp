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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_827D96A0();
extern int fn_827D9718();
extern int fn_827D9720();
extern int fn_827DDDD8();
extern int fn_827DDFB8();


void fn_8260CAD8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 auStack_40 [2];
  undefined8 auStack_38 [7];
  
  RtlEnterCriticalSection(param_1 + 0x1a0);
  auStack_40[0] = fn_827D96A0(param_2);
  lVar1 = fn_827DDDD8(param_1 + 200,auStack_40);
  if (lVar1 == 0) {
    fn_827DDFB8(param_1 + 200,param_2);
  }
  else {
    auStack_38[0] = fn_827D9718(param_2);
    fn_827D9720(lVar1,auStack_38);
  }
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return;
}


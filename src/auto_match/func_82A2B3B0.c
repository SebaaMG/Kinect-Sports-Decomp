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
#define _uStack_10 ((*(U64*)&uStack_10))
extern unsigned int uStack_10;
extern unsigned int uStack_18;
extern unsigned int uStack_c;


void fn_82A2B3B0(uint param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lStack_20 = (ulonglong)param_1 << 0x20;
  _uStack_10 = CONCAT44(param_3,param_4);
  uStack_18 = param_2;
  XMsgStartIORequest(0xfe,0x2a004,param_5,&lStack_20,0x18);
  return;
}


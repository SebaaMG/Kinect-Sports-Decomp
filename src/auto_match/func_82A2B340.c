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
#define _uStack_20 ((*(U64*)&uStack_20))
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A2B340(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
                  )

{
  longlong lStack_30;
  longlong lStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lStack_28 = (longlong)param_2;
  lStack_30 = (ulonglong)param_1 << 0x20;
  _uStack_20 = CONCAT44(param_3,param_4);
  XMsgStartIORequest(0xfe,0x2a005,param_5,&lStack_30,0x18);
  return;
}


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
extern unsigned int uStack_10;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82A2B1C8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_20 = param_1;
  XMsgStartIORequest(0xfe,0x2a009,param_2,&uStack_20,0x18);
  return;
}


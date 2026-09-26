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
extern int fn_82AA3148();
extern unsigned int uStack00000044;


longlong fn_82AA3B58(int param_1,uint param_2,int param_3,undefined8 param_4,int param_5,
                      undefined8 param_6,undefined8 param_7,code *param_8)

{
  longlong lVar1;
  undefined4 uStack00000044;
  code *pcStack0000004c;
  
  uStack00000044 = (undefined4)param_7;
  if ((((param_1 == 0) || (param_2 < 4)) || (param_3 == 0)) || (param_5 == 0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    pcStack0000004c = param_8;
    lVar1 = fn_82AA3148();
    if ((lVar1 < 0) && ((int)lVar1 == -0x7789f497)) {
      (*param_8)(param_7,1,0x30,0xffffffff820d3478);
    }
  }
  return lVar1;
}


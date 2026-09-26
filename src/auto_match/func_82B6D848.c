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
extern int fn_82AB15D0();


longlong fn_82B6D848(undefined4 *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  
  lVar1 = (*(code *)param_1[3])(*param_1,(param_2 + 8U & 0x3fffffff) << 2,1,param_3);
  if (lVar1 == 0) {
    if (param_3 == (int *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0d8,0xffffffff820d9f48,0x410);
    }
    if (*param_3 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0c0,0xffffffff820d9f48,0x411);
    }
    param_3[1] = *param_3 + 0x20U & 0xffffffe0;
    param_3[3] = param_3[2] + 0x20U & 0xffffffe0;
  }
  return lVar1;
}


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
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int fStack0000001c;
extern unsigned int fStack_1c;
extern unsigned int uStack_14;
extern unsigned int uStack_20;


void fn_82A2AB78(double param_1,uint param_2)

{
  float fStack0000001c;
  uint uStack_20;
  float fStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_2 | 0x2200000;
  fStack0000001c = (float)param_1;
  uStack_14 = 2;
  puStack_18 = &uStack_20;
  if (*__imp__KeDebugMonitorData != 0) {
    fStack_1c = fStack0000001c;
    (**(code **)(*__imp__KeDebugMonitorData + 0x18))(0x43,&puStack_18);
  }
  return;
}


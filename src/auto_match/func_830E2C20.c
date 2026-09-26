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
extern int fn_830E2530();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorShiftRightHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_830E2C20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 in_vs45 [16];{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(0xfb); memcpy(auVar1, &_vt0, 16); }
  vectorSplatImmediateSignedHalfWord(6);{ V16 _vt1 = vectorShiftRightHalfWord(auVar1,auVar1); memcpy(auVar1, &_vt1, 16); }
  vectorAddSignedHalfWordSaturate(auVar1,in_vs45);
  fn_830E2530(param_1 - param_2,param_2,param_3,param_2,2 << ((uint)param_5 & 0x3f),param_5,0);
  return 0;
}


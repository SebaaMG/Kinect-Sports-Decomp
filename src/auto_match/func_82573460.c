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
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82573460(void)

{
  undefined1 in_vs32 [16];
  undefined1 auVar1 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs34,in_vs45); memcpy(auVar1, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs35,auVar1); memcpy(auVar1, &_vt1, 16); }
  vectorMultiplyAddFloatingPoint(in_vs43,in_vs36,auVar1);
  return;
}


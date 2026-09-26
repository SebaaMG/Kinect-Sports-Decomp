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
extern int fn_8255E530();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255E2B0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar1 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auStack_50 [80];
  
  fn_8255E530(auStack_50,param_1,param_2);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs40,in_vs43); memcpy(auVar1, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs41,auVar1); memcpy(auVar1, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs45,auVar1); memcpy(auVar1, &_vt2, 16); }
  vectorConditionalSelect(auVar1,in_vs32,in_vs44);
  return;
}


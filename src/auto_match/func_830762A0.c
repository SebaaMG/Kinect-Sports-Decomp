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
extern unsigned int *auStack_40;
extern int fn_8306ED78();
extern int fn_8306ED98();
extern V16 vectorConditionalSelect();
extern V16 vectorConvertFromSignedFixedPoint128();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_830762A0(void)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined1 auVar2 [16];
  undefined1 auStack_40 [64];
  
  fn_8306ED78();
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_8306ED98();{ V16 _vt0 = vectorSplatImmediateSignedWord128(1); memcpy(auVar2, &_vt0, 16); }
  vectorSplatImmediateSignedWord128(0);
  vectorConvertFromSignedFixedPoint128(auVar2,1);
  altv207_13(in_vs32,in_vs42);{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(in_vs44,in_vs43,in_vs42); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs32,auVar2,in_vs32); memcpy(auVar2, &_vt2, 16); }
  vectorConditionalSelect(auVar2,in_vs45,in_vs41);
  return;
}


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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_82D95480(void)

{
  undefined4 uVar1;
  undefined1 in_vs32 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs50 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined4 uStack_10;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs57,in_vs58); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs59); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar3,in_vs36); memcpy(auVar3, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar2,in_vs34); memcpy(auVar2, &_vt3, 16); }
  vectorSubtractFloatingPoint(auVar2,auVar3);
  uVar1 = storeVectorElementWordIndexed(in_vs50,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)uStack_10;
}


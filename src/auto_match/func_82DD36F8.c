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
extern unsigned int *uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


double fn_82DD36F8(void)

{
  undefined4 uVar1;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs45 [16];
  undefined4 uStack_10;
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  return (double)(ABS(uStack_10) * uStack_10);
}


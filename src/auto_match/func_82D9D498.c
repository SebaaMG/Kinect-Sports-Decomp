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
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D9D498(void)

{
  undefined4 uVar1;
  undefined4 *in_r6;
  undefined4 *in_r7;
  undefined1 in_vs32 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar2 [16];
  undefined1 in_vs63 [16];
  undefined4 uStack_10;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs42);
  vectorSubtractFloatingPoint(in_vs34,in_vs35);{ V16 _vt0 = vectorAddFloatingPoint(in_vs63,in_vs38); memcpy(auVar2, &_vt0, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar2,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  uVar1 = lbl_821AAD20;
  *in_r6 = uStack_10;
  *in_r7 = uVar1;
  return;
}


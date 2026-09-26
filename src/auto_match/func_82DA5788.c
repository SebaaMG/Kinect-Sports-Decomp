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
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DA5788(int param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uStack_10;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0x10;
  lVar2 = ZEXT48(&stack0x00000000) - 0x10;
  vectorSubtractFloatingPoint(in_vs32,in_vs42);
  vectorSubtractFloatingPoint(in_vs34,in_vs35);{ V16 _vt0 = vectorAddFloatingPoint(in_vs63,in_vs38); memcpy(auVar4, &_vt0, 16); }
  uVar1 = storeVectorElementWordIndexed(auVar4,0,lVar3);
  *(undefined4 *)lVar3 = uVar1;
  *param_4 = uStack_10;
  uVar1 = storeVectorElementWordIndexed(in_vs62,0,lVar2);
  *(undefined4 *)lVar2 = uVar1;
  *param_5 = *(float *)(param_1 + 0xc0) * uStack_10 + *(float *)(param_1 + 0xcc);
  return;
}


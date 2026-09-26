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
extern unsigned int lbl_82002AE0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


double fn_82D2A840(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 in_r0;
  double dVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 uStack_10;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  vectorSubtractFloatingPoint(in_vs40,in_vs43);
  uVar1 = storeVectorElementWordIndexed(in_vs38,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  dVar2 = (double)lbl_82002AE0;
  if (*(float *)(param_1 + 0x20) < uStack_10) {
    return dVar2;
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  return dVar2;
}


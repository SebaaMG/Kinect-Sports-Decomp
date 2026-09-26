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
extern unsigned int lbl_82142CD0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_10;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_82DDDED0(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined4 uStack_10;
  
  uVar2 = 1;
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  uVar1 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x10);
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x10) = uVar1;
  if (uStack_10 <= *param_3) {
    if (*param_3 < uStack_10 + lbl_82142CD0) {
      *param_3 = uStack_10 + lbl_82142CD0;
    }
    uVar2 = 2;
  }
  else if (uStack_10 < *param_4) {
    *param_4 = uStack_10;
  }
  if (*param_3 < *param_4) {
    return uVar2;
  }
  return 4;
}

